import argparse
import os
import json
import itertools
import subprocess
from concurrent.futures import ProcessPoolExecutor
from functools import partial
import hashlib
import time
import re
import uuid

# ---
# PARAMETER DEFINE
# ---
BASE_PARAMS = {
    'EN_SCB',
    'EN_COV',
    'TEST_SEQ',
    'seed',
    'COVERAGE_ENABLED',
    'EXTRA_DEFINES',
    'VERBOSITY'
}

# LOG PATTERN
# ---
PATTERN_PARAMS = {
    'TEST_SEQ': "smoke",
    'log_patterns': {
        'UVM_ERROR': r"UVM_ERROR\s+:\s*(\d+)",
        'UVM_FATAL': r"UVM_FATAL\s+:\s*(\d+)",
    }
}


def transform_config(config_list):
    """Transform config list to individual test cases"""
    transformed = []
    
    for cfg in config_list:
        base_config = {}
        extra_opts = {}
        
        for key, value in cfg.items():
            if key in BASE_PARAMS:
                base_config[key] = value
            else:
                extra_opts[key] = value
        
        transformed_config = {
            **base_config,
            "EXTRA_OPTS": extra_opts
        }
        transformed.append(transformed_config)
    
    return transformed


def run_single_case(base_config, case_config):
    """Execute single test case"""
    # generate unique ID
    print(f"Case Config: {case_config}")
    
    # Generate case ID
    param_hash = uuid.uuid4().hex[:8]
    if "seed" in case_config:
        case_id = f"{case_config['TEST_SEQ']}.test_{case_config['seed']}"
    else:
        case_config["seed"] = param_hash
        case_id = f"{case_config['TEST_SEQ']}.test_{param_hash}"
    
    # Build testcase directory
    case_dir = f"sim_results/{case_id}"
    os.makedirs(case_dir, exist_ok=True)
    
    # Save case config
    with open(f"{case_dir}/config.json", "w") as f:
        json.dump(case_config, f, indent=2)
    
    # Start time
    start_time = time.time()
    result = {
        "case_id": case_id,
        "start_time": time.strftime("%Y-%m-%d %H:%M:%S"),
        "status": "PASS"
    }
    
    # Prepare environment variables
    env_cfg = {**os.environ, **{k: str(v) for k, v in case_config.items()}}
    
    try:
        subprocess.run(
            ["make", "run"],
            env=env_cfg,
            check=True,
            # stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True
        )
    except subprocess.CalledProcessError as e:
        result["status"] = "FAIL"
        result["error"] = str(e)
    
    # Log parser
    error_stats = {}
    current_dir = os.getcwd()
    log_dir = f"{current_dir}/sim_build/simulation/{case_id}"
    log_path = os.path.join(log_dir, "simulation.log")
    
    if not os.path.isfile(log_path):
        print(f"Warning: log file not found: {log_path}")
    else:
        log_content = ""
        with open(log_path, "r") as f:
            log_content = f.read()
        
        # Parse UVM errors
        pattern = r"^(UVM_ERROR|UVM_WARNING|UVM_FATAL)\s+:\s*(\d+)"
        
        for line in log_content.split("\n"):
            match = re.match(pattern, line.strip())
            if match:
                error_type = match.group(1).upper()
                count = int(match.group(2))
                error_stats[error_type] = count
        
        print(f"Error stats: {error_stats}")
        
        # Determine log status
        if error_stats.get("UVM_ERROR", 0) >= 1 or error_stats.get("UVM_FATAL", 0) >= 1:
            result["log_status"] = "FAIL"
        else:
            result["log_status"] = "PASS"
        
        result["error_stats"] = error_stats
    
    # Save result
    result["duration"] = time.time() - start_time
    with open(f"{case_dir}/result.json", "w") as f:
        json.dump(result, f, indent=2)
    
    return result


def find_json_configs(config_path):
    """Find all JSON config files"""
    if os.path.isfile(config_path) and config_path.endswith('.json'):
        return [config_path]
    elif os.path.isdir(config_path):
        json_files = []
        for root, dirs, files in os.walk(config_path):
            for file in files:
                if file.endswith('.json'):
                    json_files.append(os.path.join(root, file))
        return json_files
    else:
        raise ValueError(f"Invalid config path: {config_path}")


def generate_full_combinations(config):
    """Generate all parameter combinations from config"""
    test_sequences = config.get("test_sequences", [])
    parameters = config.get("parameters", {})
    
    all_combinations = []
    
    for seq in test_sequences:
        param_names = []
        param_values = []
        
        # Add TEST_SEQ as first parameter
        param_names.append("TEST_SEQ")
        param_values.append([seq])
        
        # Add other parameters
        for param, values in parameters.items():
            param_names.append(param)
            param_values.append(values)
        
        # Generate all combinations
        combinations = list(itertools.product(*param_values))
        
        for combo in combinations:
            case_cfg = {}
            for i, name in enumerate(param_names):
                case_cfg[name] = combo[i]
            all_combinations.append(case_cfg)
    
    return all_combinations


def generate_html_report(global_summary, output_path="sim_results/global_report.html", log_root=None):
    """Generate HTML report from test results"""
    
    html = """<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>仿真回归测试报告</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            background-color: #f5f5f5;
        }
        .container {
            max-width: 1200px;
            margin: 0 auto;
            background-color: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        h1 {
            color: #333;
            border-bottom: 2px solid #4CAF50;
            padding-bottom: 10px;
        }
        .summary {
            background-color: #f9f9f9;
            padding: 15px;
            border-radius: 5px;
            margin-bottom: 20px;
        }
        .pass {
            color: #4CAF50;
            font-weight: bold;
        }
        .fail {
            color: #f44336;
            font-weight: bold;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
        }
        th, td {
            padding: 12px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #4CAF50;
            color: white;
        }
        tr:hover {
            background-color: #f5f5f5;
        }
        .error-detail {
            margin-top: 30px;
        }
        a {
            color: #2196F3;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
        .timestamp {
            color: #666;
            font-size: 0.9em;
            margin-top: 20px;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>全局仿真汇总报告</h1>
"""
    
    # Summary section
    html += f"""<div class="summary">
<h2>总览</h2>
<p>总用例数: {global_summary['total_cases']}</p>
<p>通过用例: <span class="pass">{global_summary['passed_cases']}</span></p>
<p>失败用例: <span class="fail">{global_summary['total_cases'] - global_summary['passed_cases']}</span></p>
<p>通过率: <span class="pass">{global_summary['passed_cases']/global_summary['total_cases']*100:.1f}%</span></p>
</div>
"""
    
    # Error details section
    if 'error_stats' in global_summary and global_summary['error_stats']:
        html += """<div class="error-detail">
<h2>失败用例详情</h2>
<table>
    <thead>
    <tr>
        <th>用例ID</th>
        <th>状态</th>
        <th>错误类型</th>
        <th>错误数量</th>
        <th>日志链接</th>
    </tr>
    </thead>
    <tbody>
"""
        
        for case in global_summary['error_stats']:
            case_id = case.get('case_id', 'N/A')
            status = case.get('status', 'UNKNOWN')
            log_status = case.get('log_status', 'UNKNOWN')
            error_stats = case.get('error_stats', {})
            error_types = ', '.join(error_stats.keys()) if error_stats else 'N/A'
            error_counts = ', '.join([str(v) for v in error_stats.values()]) if error_stats else '0'
            
            # Get log path
            log_link = f"{log_root}/{case_id}/simulation.log" if log_root else "#"
            
            html += f"""
<tr>
    <td>{case_id}</td>
    <td class="fail">{status} (日志状态: {log_status})</td>
    <td>{error_types}</td>
    <td>{error_counts}</td>
    <td><a href="{log_link}" target="_blank">查看日志</a></td>
</tr>
"""
        
        html += """</tbody>
</table>
</div>
"""
    
    # Timestamp
    html += f"""
<div class="timestamp">
<p>报告生成时间: {time.strftime('%Y-%m-%d %H:%M:%S')}</p>
</div>
"""
    
    html += """</div>
</body>
</html>"""
    
    # Ensure output directory exists
    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    
    # Write HTML file
    with open(output_path, "w", encoding="utf-8") as f:
        f.write(html)
    
    print(f"HTML report generated: {output_path}")


def main(config_path, is_compile, repeat):
    """Main function"""
    config_files = find_json_configs(config_path)
    
    all_results = []
    all_cases = []
    
    for cfg_file in config_files:
        print(f"\n{'='*50}")
        print(f"Processing config file: {cfg_file}")
        print(f"{'='*50}")
        
        with open(cfg_file) as f:
            config = json.load(f)
        
        # Generate all test cases
        all_case_cfg = generate_full_combinations(config)
        target_data = transform_config(all_case_cfg)
        
        print(f"Total test cases: {len(target_data)}")
        
        # Check if seed is specified for multiple cases
        if "seed" in target_data[0] and (len(target_data) > 1):
            raise TypeError("seed is only allowed when cfg has single group")
        
        # Compile step
        if is_compile:
            compile_env = os.environ.copy()
            
            for param in BASE_PARAMS:
                if param in target_data[0]:
                    compile_env[param] = str(target_data[0][param])
                elif param == "EN_SCB":
                    compile_env[param] = "1"
                elif param == "EN_COV":
                    compile_env[param] = "1"
                elif param == "VERBOSITY":
                    compile_env[param] = "UVM_MEDIUM"
                elif param == "EXTRA_DEFINES":
                    compile_env[param] = ""
            
            try:
                print("Starting compilation...")
                subprocess.run(
                    ['make', 'compile'],
                    env=compile_env,
                    check=True,
                    timeout=3600,  # one hour timeout
                    stderr=subprocess.STDOUT
                )
                print("Compilation successful!")
            except subprocess.CalledProcessError as e:
                print(f"Compile failed with error code: {e.returncode}")
                exit(1)
        
        # Build parallel test execution
        for i in range(repeat):
            print(f"\nStarting test run {i+1}/{repeat}")
            
            with ProcessPoolExecutor(max_workers=os.cpu_count()) as executor:
                # Create partial function with base config
                task_func = partial(run_single_case, config)
                
                # Submit all tasks
                futures = [executor.submit(task_func, case) for case in target_data]
                
                # Get results
                results = [f.result() for f in futures]
                all_results.extend(results)
                all_cases.extend(target_data)
    
    # Generate global summary
    global_summary = {
        "total_cases": len(all_results),
        "passed_cases": sum(1 for c in all_results if c.get("status") == "PASS" and c.get("log_status") == "PASS"),
        "error_stats": [c for c in all_results if c.get("status") == "FAIL" or c.get("log_status") == "FAIL"]
    }
    
    # Save global summary
    os.makedirs("sim_results", exist_ok=True)
    with open("sim_results/global_summary.json", "w") as f:
        json.dump(global_summary, f, indent=2, ensure_ascii=False)
    
    # Generate HTML report
    project_root = os.getcwd()
    log_root = f"{project_root}/sim_build/simulation"
    print(f"Log root: {log_root}")
    
    generate_html_report(
        global_summary,
        output_path="sim_results/global_report.html",
        log_root=log_root
    )
    
    # Print final summary
    print(f"\n{'='*50}")
    print("回归测试完成!")
    print(f"总测试用例数: {global_summary['total_cases']}")
    print(f"通过用例数: {global_summary['passed_cases']}")
    print(f"失败用例数: {global_summary['total_cases'] - global_summary['passed_cases']}")
    print(f"报告位置: sim_results/global_report.html")
    print(f"{'='*50}")


# # 基本运行（只运行不编译）
# python run_sim.py --cfg config.json

# # 包含编译步骤
# python run_sim.py --cfg config.json --compile

# # 重复运行3次
# python run_sim.py --cfg config.json --repeat 3

# # 处理目录中的所有JSON文件
# python run_sim.py --cfg /path/to/config/directory


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Regression Test Tool Kit")
    parser.add_argument("--cfg", "--config", required=True,
                       help="JSON config file, can be a JSON file path or a directory containing JSON files")
    parser.add_argument("--compile", action='store_true', default=False,
                       help="Add this option to enable compilation step")
    parser.add_argument("--repeat", type=int, default=1,
                       help="Number of times to repeat running the full combination")
    
    args = parser.parse_args()
    main(args.cfg, args.compile, args.repeat)
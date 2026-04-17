`ifndef SVPWM_MON__SV
`define SVPWM_MON__SV

typedef class svpwm_item;
typedef class svpwm_mon;

class svpwm_mon_callbacks extends uvm_callback;

   // ToDo: Add additional relevant callbacks
   // ToDo: Use a task if callbacks can be blocking


   // Called at start of observed transaction
   virtual function void pre_trans(svpwm_mon xactor,
                                   svpwm_item tr);
   endfunction: pre_trans


   // Called before acknowledging a transaction
   virtual function pre_ack(svpwm_mon xactor,
                            svpwm_item tr);
   endfunction: pre_ack
   

   // Called at end of observed transaction
   virtual function void post_trans(svpwm_mon xactor,
                                    svpwm_item tr);
   endfunction: post_trans

   
   // Callback method post_cb_trans can be used for coverage
   virtual task post_cb_trans(svpwm_mon xactor,
                              svpwm_item tr);
   endtask: post_cb_trans

endclass: svpwm_mon_callbacks

   

class svpwm_mon extends uvm_monitor;

   uvm_analysis_port #(svpwm_item) mon_analysis_port;  //TLM analysis port
   typedef virtual svpwm_if v_if;
   v_if mon_if;
   // ToDo: Add another class property if required
   extern function new(string name = "svpwm_mon",uvm_component parent);
   // factory
   `uvm_component_utils(svpwm_mon)
   // callbacks                  
   `uvm_register_cb(svpwm_mon,svpwm_mon_callbacks);

   extern virtual function void build_phase(uvm_phase phase);
   extern virtual function void end_of_elaboration_phase(uvm_phase phase);
   extern virtual function void start_of_simulation_phase(uvm_phase phase);
   extern virtual function void connect_phase(uvm_phase phase);
   extern virtual task reset_phase(uvm_phase phase);
   extern virtual task configure_phase(uvm_phase phase);
   extern virtual task run_phase(uvm_phase phase);
   extern protected virtual task tx_monitor();

endclass: svpwm_mon


function svpwm_mon::new(string name = "svpwm_mon",uvm_component parent);
   super.new(name, parent);
   mon_analysis_port = new ("mon_analysis_port",this);
endfunction: new

function void svpwm_mon::build_phase(uvm_phase phase);
   super.build_phase(phase);
   //ToDo : Implement this phase here

endfunction: build_phase

function void svpwm_mon::connect_phase(uvm_phase phase);
   super.connect_phase(phase);
   uvm_config_db#(v_if)::get(this, "", "mon_if", mon_if);
endfunction: connect_phase

function void svpwm_mon::end_of_elaboration_phase(uvm_phase phase);
   super.end_of_elaboration_phase(phase); 
   //ToDo: Implement this phase here

endfunction: end_of_elaboration_phase


function void svpwm_mon::start_of_simulation_phase(uvm_phase phase);
   super.start_of_simulation_phase(phase);
   //ToDo: Implement this phase here

endfunction: start_of_simulation_phase


task svpwm_mon::reset_phase(uvm_phase phase);
   super.reset_phase(phase);
   phase.raise_objection(this,"");
   // ToDo: Implement reset here
   phase.drop_objection(this);

endtask: reset_phase


task svpwm_mon::configure_phase(uvm_phase phase);
   super.configure_phase(phase);
   phase.raise_objection(this,"");
   //ToDo: Configure your component here
   phase.drop_objection(this);

endtask:configure_phase


task svpwm_mon::run_phase(uvm_phase phase);
   super.run_phase(phase);
   fork
      tx_monitor();
   join

endtask: run_phase


task svpwm_mon::tx_monitor();
   forever begin
      svpwm_item tr;
      // ToDo: Wait for start of transaction

      `uvm_do_callbacks(svpwm_mon,svpwm_mon_callbacks, pre_trans(this, tr))
      `uvm_info("TX_MONITOR", "Starting transaction...",UVM_LOW)
      // ToDo: Observe first half of transaction

      // ToDo: User need to add monitoring logic and remove #10
      `uvm_info("TX_MONITOR"," User need to add monitoring logic ",UVM_LOW)
	   #10; // For test to avoid zero-delay-loop
      tr = svpwm_item::type_id::create("tr");
      tr.status = svpwm_item::IS_OK; // For test
      `uvm_do_callbacks(svpwm_mon,svpwm_mon_callbacks, pre_ack(this, tr))
      // ToDo: React to observed transaction with ACK/NAK
      `uvm_info("TX_MONITOR", "Completed transaction...",UVM_HIGH)
      `uvm_info("TX_MONITOR", tr.sprint(),UVM_HIGH)
      `uvm_do_callbacks(svpwm_mon,svpwm_mon_callbacks, post_trans(this, tr))
      mon_analysis_port.write(tr);
   end
endtask: tx_monitor

`endif // svpwm_MON__SV

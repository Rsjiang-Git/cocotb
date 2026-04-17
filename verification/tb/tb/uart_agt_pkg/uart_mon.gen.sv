`ifndef UART_MON__SV
`define UART_MON__SV

typedef class uart_item;
typedef class uart_mon;

class uart_mon_callbacks extends uvm_callback;

   // ToDo: Add additional relevant callbacks
   // ToDo: Use a task if callbacks can be blocking


   // Called at start of observed transaction
   virtual function void pre_trans(uart_mon xactor,
                                   uart_item tr);
   endfunction: pre_trans


   // Called before acknowledging a transaction
   virtual function pre_ack(uart_mon xactor,
                            uart_item tr);
   endfunction: pre_ack
   

   // Called at end of observed transaction
   virtual function void post_trans(uart_mon xactor,
                                    uart_item tr);
   endfunction: post_trans

   
   // Callback method post_cb_trans can be used for coverage
   virtual task post_cb_trans(uart_mon xactor,
                              uart_item tr);
   endtask: post_cb_trans

endclass: uart_mon_callbacks

   

class uart_mon extends uvm_monitor;

   uvm_analysis_port #(uart_item) mon_analysis_port;  //TLM analysis port
   typedef virtual uart_if v_if;
   v_if mon_if;
   // ToDo: Add another class property if required
   extern function new(string name = "uart_mon",uvm_component parent);
   // factory
   `uvm_component_utils(uart_mon)
   // callbacks                  
   `uvm_register_cb(uart_mon,uart_mon_callbacks);

   extern virtual function void build_phase(uvm_phase phase);
   extern virtual function void end_of_elaboration_phase(uvm_phase phase);
   extern virtual function void start_of_simulation_phase(uvm_phase phase);
   extern virtual function void connect_phase(uvm_phase phase);
   extern virtual task reset_phase(uvm_phase phase);
   extern virtual task configure_phase(uvm_phase phase);
   extern virtual task run_phase(uvm_phase phase);
   extern protected virtual task tx_monitor();

endclass: uart_mon


function uart_mon::new(string name = "uart_mon",uvm_component parent);
   super.new(name, parent);
   mon_analysis_port = new ("mon_analysis_port",this);
endfunction: new

function void uart_mon::build_phase(uvm_phase phase);
   super.build_phase(phase);
   //ToDo : Implement this phase here

endfunction: build_phase

function void uart_mon::connect_phase(uvm_phase phase);
   super.connect_phase(phase);
   uvm_config_db#(v_if)::get(this, "", "mon_if", mon_if);
endfunction: connect_phase

function void uart_mon::end_of_elaboration_phase(uvm_phase phase);
   super.end_of_elaboration_phase(phase); 
   //ToDo: Implement this phase here

endfunction: end_of_elaboration_phase


function void uart_mon::start_of_simulation_phase(uvm_phase phase);
   super.start_of_simulation_phase(phase);
   //ToDo: Implement this phase here

endfunction: start_of_simulation_phase


task uart_mon::reset_phase(uvm_phase phase);
   super.reset_phase(phase);
   phase.raise_objection(this,"");
   // ToDo: Implement reset here
   phase.drop_objection(this);

endtask: reset_phase


task uart_mon::configure_phase(uvm_phase phase);
   super.configure_phase(phase);
   phase.raise_objection(this,"");
   //ToDo: Configure your component here
   phase.drop_objection(this);

endtask:configure_phase


task uart_mon::run_phase(uvm_phase phase);
   super.run_phase(phase);
   fork
      tx_monitor();
   join

endtask: run_phase


task uart_mon::tx_monitor();
   forever begin
      uart_item tr;
      // ToDo: Wait for start of transaction

      `uvm_do_callbacks(uart_mon,uart_mon_callbacks, pre_trans(this, tr))
      `uvm_info("TX_MONITOR", "Starting transaction...",UVM_LOW)
      // ToDo: Observe first half of transaction

      // ToDo: User need to add monitoring logic and remove #10
      `uvm_info("TX_MONITOR"," User need to add monitoring logic ",UVM_LOW)
	   #10; // For test to avoid zero-delay-loop
      tr = uart_item::type_id::create("tr");
      tr.status = uart_item::IS_OK; // For test
      `uvm_do_callbacks(uart_mon,uart_mon_callbacks, pre_ack(this, tr))
      // ToDo: React to observed transaction with ACK/NAK
      `uvm_info("TX_MONITOR", "Completed transaction...",UVM_HIGH)
      `uvm_info("TX_MONITOR", tr.sprint(),UVM_HIGH)
      `uvm_do_callbacks(uart_mon,uart_mon_callbacks, post_trans(this, tr))
      mon_analysis_port.write(tr);
   end
endtask: tx_monitor

`endif // uart_MON__SV

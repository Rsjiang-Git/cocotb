`ifndef TFU_DRV__SV
`define TFU_DRV__SV

typedef class tfu_item;
typedef class tfu_drv;

class tfu_drv_callbacks extends uvm_callback;

   // ToDo: Add additional relevant callbacks
   // ToDo: Use "task" if callbacks cannot be blocking

   // Called before a transaction is executed
   virtual task pre_tx( tfu_drv xactor,
                        tfu_item tr);
                                   
     // ToDo: Add relevant code

   endtask: pre_tx


   // Called after a transaction has been executed
   virtual task post_tx( tfu_drv xactor,
                         tfu_item tr);
     // ToDo: Add relevant code

   endtask: post_tx

endclass: tfu_drv_callbacks


class tfu_drv extends uvm_driver # (tfu_item);

   uvm_tlm_b_transport_export #(tfu_item) drv_b_export;    //Uni directional blocking
   typedef virtual tfu_if v_if; 
   v_if drv_if;
   // factory
   `uvm_component_utils(tfu_drv)
   // callbacks
   `uvm_register_cb(tfu_drv,tfu_drv_callbacks); 
   
   extern function new(string name = "tfu_drv",
                       uvm_component parent = null); 

   extern virtual function void build_phase(uvm_phase phase);
   extern virtual function void end_of_elaboration_phase(uvm_phase phase);
   extern virtual function void start_of_simulation_phase(uvm_phase phase);
   extern virtual function void connect_phase(uvm_phase phase);
   extern virtual task reset_phase(uvm_phase phase);
   extern virtual task configure_phase(uvm_phase phase);
   extern virtual task run_phase(uvm_phase phase);
   extern protected virtual task send(tfu_item tr); 
   extern protected virtual task tx_driver();

endclass: tfu_drv


function tfu_drv::new(string name = "tfu_drv",
                   uvm_component parent = null);
   super.new(name, parent);

   // drv_b_export = new("Driver blocking export",this);
   // ToDo: Create this port whenever it is needed
   
endfunction: new

function void tfu_drv::build_phase(uvm_phase phase);
   super.build_phase(phase);
   //ToDo : Implement this phase here

endfunction: build_phase

function void tfu_drv::connect_phase(uvm_phase phase);
   super.connect_phase(phase);
   //INCL_IFTR_START
   uvm_config_db#(v_if)::get(this, "", "drv_if", drv_if);
   //INCL_IFTR_END
   //MST_CODE_EN_START
   uvm_config_db#(v_if)::get(this, "", "mst_if", drv_if);
   //MST_CODE_EN_END
   //SLV_CODE_EN_START
   uvm_config_db#(v_if)::get(this, "", "slv_if", drv_if);
   //SLV_CODE_EN_END
endfunction: connect_phase

function void tfu_drv::end_of_elaboration_phase(uvm_phase phase);
   super.end_of_elaboration_phase(phase);
   if (drv_if == null)
       `uvm_fatal("NO_CONN", "Virtual port not connected to the actual interface instance");   
endfunction: end_of_elaboration_phase

function void tfu_drv::start_of_simulation_phase(uvm_phase phase);
   super.start_of_simulation_phase(phase);
   //ToDo: Implement this phase here
endfunction: start_of_simulation_phase

 
task tfu_drv::reset_phase(uvm_phase phase);
   super.reset_phase(phase);
   phase.raise_objection(this,"");
   // ToDo: Reset output signals
   phase.drop_objection(this);
endtask: reset_phase

task tfu_drv::configure_phase(uvm_phase phase);
   super.configure_phase(phase);
   phase.raise_objection(this,"");
   //ToDo: Configure your component here
   phase.drop_objection(this);
endtask:configure_phase


task tfu_drv::run_phase(uvm_phase phase);
   super.run_phase(phase);
   fork 
      tx_driver();
   join
endtask: run_phase


task tfu_drv::tx_driver();
 forever begin
      tfu_item tr;
      // ToDo: Set output signals to their idle state
      this.drv_if.master.async_en      <= 0;
      `uvm_info("TX_DRIVER", "Starting transaction...",UVM_LOW)
      seq_item_port.get_next_item(tr);
      case (tr.kind) 
         tfu_item::READ: begin
            // ToDo: Implement READ transaction

         end
         tfu_item::WRITE: begin
            // ToDo: Implement READ transaction

         end
      endcase
	  `uvm_do_callbacks(tfu_drv,tfu_drv_callbacks,
                    pre_tx(this, tr))
      send(tr); 
      seq_item_port.item_done();
      `uvm_info("TX_DRIVER", "Completed transaction...",UVM_LOW)
      `uvm_info("TX_DRIVER", tr.sprint(),UVM_HIGH)
      `uvm_do_callbacks(tfu_drv,tfu_drv_callbacks,
                    post_tx(this, tr))

   end
endtask : tx_driver

task tfu_drv::send(tfu_item tr);
   // ToDo: Drive signal on interface
  
endtask: send


`endif // TFU_drv__SV

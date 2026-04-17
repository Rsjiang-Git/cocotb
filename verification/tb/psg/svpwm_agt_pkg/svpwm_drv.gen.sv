`ifndef SVPWM_DRV__SV
`define SVPWM_DRV__SV

typedef class svpwm_item;
typedef class svpwm_drv;

class svpwm_drv_callbacks extends uvm_callback;

   // ToDo: Add additional relevant callbacks
   // ToDo: Use "task" if callbacks cannot be blocking

   // Called before a transaction is executed
   virtual task pre_tx( svpwm_drv xactor, svpwm_item tr);
                                   
     // ToDo: Add relevant code

   endtask: pre_tx


   // Called after a transaction has been executed
   virtual task post_tx( svpwm_drv xactor, svpwm_item tr);
     // ToDo: Add relevant code

   endtask: post_tx

endclass: svpwm_drv_callbacks


class svpwm_drv extends uvm_driver # (svpwm_item);

   uvm_tlm_b_transport_export #(svpwm_item) drv_b_export;    //Uni directional blocking
   typedef virtual svpwm_if v_if; 
   v_if drv_if;
   // factory
   `uvm_component_utils(svpwm_drv)
   // callbacks
   `uvm_register_cb(svpwm_drv,svpwm_drv_callbacks); 
   
   extern function new(string name = "svpwm_drv",
                       uvm_component parent = null); 

   extern virtual function void build_phase(uvm_phase phase);
   extern virtual function void end_of_elaboration_phase(uvm_phase phase);
   extern virtual function void start_of_simulation_phase(uvm_phase phase);
   extern virtual function void connect_phase(uvm_phase phase);
   extern virtual task reset_phase(uvm_phase phase);
   extern virtual task configure_phase(uvm_phase phase);
   extern virtual task run_phase(uvm_phase phase);
   extern protected virtual task send(svpwm_item tr); 
   extern protected virtual task tx_driver();

endclass: svpwm_drv


function svpwm_drv::new(string name = "svpwm_drv",
                   uvm_component parent = null);
   super.new(name, parent);

   // drv_b_export = new("Driver blocking export",this);
   // ToDo: Create this port whenever it is needed
   
endfunction: new

function void svpwm_drv::build_phase(uvm_phase phase);
   super.build_phase(phase);
   //ToDo : Implement this phase here

endfunction: build_phase

function void svpwm_drv::connect_phase(uvm_phase phase);
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

function void svpwm_drv::end_of_elaboration_phase(uvm_phase phase);
   super.end_of_elaboration_phase(phase);
   if (drv_if == null)
       `uvm_fatal("NO_CONN", "Virtual port not connected to the actual interface instance");   
endfunction: end_of_elaboration_phase

function void svpwm_drv::start_of_simulation_phase(uvm_phase phase);
   super.start_of_simulation_phase(phase);
   //ToDo: Implement this phase here
endfunction: start_of_simulation_phase

 
task svpwm_drv::reset_phase(uvm_phase phase);
   super.reset_phase(phase);
   phase.raise_objection(this,"");
   // ToDo: Reset output signals
   phase.drop_objection(this);
endtask: reset_phase

task svpwm_drv::configure_phase(uvm_phase phase);
   super.configure_phase(phase);
   phase.raise_objection(this,"");
   //ToDo: Configure your component here
   phase.drop_objection(this);
endtask:configure_phase


task svpwm_drv::run_phase(uvm_phase phase);
   super.run_phase(phase);
   fork 
      tx_driver();
   join
endtask: run_phase


task svpwm_drv::tx_driver();
 forever begin
      svpwm_item tr;
      // ToDo: Set output signals to their idle state
      this.drv_if.master.async_en      <= 0;
      `uvm_info("TX_DRIVER", "Starting transaction...",UVM_LOW)
      seq_item_port.get_next_item(tr);
      case (tr.kind) 
         svpwm_item::READ: begin
            // ToDo: Implement READ transaction

         end
         svpwm_item::WRITE: begin
            // ToDo: Implement WRITE transaction

         end
      endcase
	   `uvm_do_callbacks(svpwm_drv, svpwm_drv_callbacks, pre_tx(this, tr))
      send(tr); 
      seq_item_port.item_done();
      `uvm_info("TX_DRIVER", "Completed transaction...",UVM_LOW)
      `uvm_info("TX_DRIVER", tr.sprint(),UVM_HIGH)
      `uvm_do_callbacks(svpwm_drv, svpwm_drv_callbacks, post_tx(this, tr))

   end
endtask : tx_driver

task svpwm_drv::send(svpwm_item tr);
   // ToDo: Drive signal on interface
  
endtask: send


`endif // SVPWM_drv__SV

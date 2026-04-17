`ifndef SDP_TO_HSL_REG_ADAPTER__SV
`define SDP_TO_HSL_REG_ADAPTER__SV

class sdp_to_hsl_reg_adapter extends uvm_reg_adapter;

`uvm_object_utils(sdp_to_hsl_reg_adapter)

 function new (string name="sdp_to_hsl_reg_adapter");
   super.new(name);
 endfunction: new

 virtual function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
  sdp_to_hsl_item tr;
  tr = sdp_to_hsl_item::type_id::create("tr"); 
  tr.kind = (rw.kind == UVM_READ) ? sdp_to_hsl_item::READ : sdp_to_hsl_item::WRITE; 
  //  tr.addr = rw.addr;
  //  tr.data = rw.data;
  return tr;
 endfunction: reg2bus

 virtual function void bus2reg (uvm_sequence_item bus_item,
                                ref uvm_reg_bus_op rw);
  sdp_to_hsl_item tr;
  if (!$cast(tr, bus_item))
   `uvm_fatal("NOT_HOST_REG_TYPE", "bus_item is not correct type");
  rw.kind = tr.kind ? UVM_READ : UVM_WRITE;
  //  rw.addr = tr.addr;
  //  rw.data = tr.data;
  //  rw.status = UVM_IS_OK;
 endfunction: bus2reg

endclass: sdp_to_hsl_reg_adapter

`endif // SDP_TO_HSL_REG_ADAPTER__SV

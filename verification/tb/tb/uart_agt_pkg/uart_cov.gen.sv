`ifndef UART_COV__SV
`define UART_COV__SV

class uart_cov extends uvm_component;
   event cov_event;
   uart_item tr;
   uvm_analysis_imp #(uart_item, uart_cov) cov_export;
   `uvm_component_utils(uart_cov)
 
   covergroup cg_trans @(cov_event);
      // ToDo: coverpoint tr.kind;
      // ToDo: Add required uart_coverpoints, uart_coverbins
   endgroup: cg_trans


   function new(string name, uvm_component parent);
      super.new(name,parent);
      cg_trans = new;
      cov_export = new("uart_coverage_Analysis",this);
   endfunction: new
   virtual function write(uart_item tr);
      this.tr = tr;
      -> cov_event;
   endfunction: write

endclass: uart_cov

`endif // UART_COV__SV

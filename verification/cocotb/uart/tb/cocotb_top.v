module cocotb_top ( 

);



`include "top.v"

 



initial begin
    if ($test$plusargs("DUMP_FSDB")) begin
        $fsdbDumpfile("tb.fsdb");
        $fsdbDumpvars(0, cocotb_top, "+mda");
        $fsdbDumpvars(0, cocotb_top, "+struct");
        $fsdbDumpvars(0, cocotb_top, "+packed");
    end
end

  

endmodule

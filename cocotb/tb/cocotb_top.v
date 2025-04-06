module cocotb_top (


        input wire clk,
        input wire rst_,
        input wire clk26m  ,
        input wire rst26m_ ,

        input wire s_apb_psel,
        input wire s_apb_penable,
        input wire s_apb_pwrite,
        input wire [31:0] s_apb_paddr,
        input wire [31:0] s_apb_pwdata,
       
        output wire s_apb_pready,
        output wire [31:0] s_apb_prdata,
        output wire s_apb_pslverr,
        input  wire rxd_i     ,
        output wire txd_o      ,
        output wire uart_int_o
       
);

 
  uart_top u_uart_top (
           .clk        (clk           ),
           .clk26m     (clk26m        ),
           .rst_       (rst_          ),
           .rst26m_    (rst26m_       ),
           .paddr_i    (s_apb_paddr[31:2]),
           .pwdata_i   (s_apb_pwdata  ),
           .psel_i     (s_apb_psel    ),
           .penable_i  (s_apb_penable ),
           .pwrite_i   (s_apb_pwrite  ),
           .pready_o   (s_apb_pready  ) ,
           .urxd_i     (rxd_i         ),
           .utxd_o     (txd_o         ),
           .uart_int_o (uart_int_o    ),
           .prdata_o   (s_apb_prdata  )
  );
  
// initial begin
//     $fsdbDumpfile("tb.fsdb");
//     $fsdbDumpvars;
// end

  

endmodule



wire          clk                     ;                               
wire          rst_                    ;                               
wire          clk26m                  ;                               
wire          rst26m_                 ;                               
wire          s_apb_psel              ;                              
wire          s_apb_penable           ;                                 
wire          s_apb_pwrite            ;            
wire   [31:0] s_apb_paddr             ;                  
wire   [31:0] s_apb_pwdata            ;                   
wire          s_apb_pready            ;             
wire   [31:0] s_apb_prdata            ;                    
wire          s_apb_pslverr           ;              
wire          rxd_i                   ;           
wire          txd_o                   ;            
wire          uart_int_o              ;           
 
  uart_top u_uart_top (
           .clk        (clk              ),
           .clk26m     (clk26m           ),
           .rst_       (rst_             ),
           .rst26m_    (rst26m_          ),
           .paddr_i    (s_apb_paddr[31:2]),
           .pwdata_i   (s_apb_pwdata     ),
           .psel_i     (s_apb_psel       ),
           .penable_i  (s_apb_penable    ),
           .pwrite_i   (s_apb_pwrite     ),
           .pready_o   (s_apb_pready     ) ,
           .urxd_i     (rxd_i            ),
           .utxd_o     (txd_o            ),
           .uart_int_o (uart_int_o       ),
           .prdata_o   (s_apb_prdata     )
  );
  


// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_UART_FIFO_H_
#define VERILATED_VTOP_UART_FIFO_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_uart_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_,0,0);
    VL_IN8(fifo_rst,0,0);
    VL_IN8(rinc,0,0);
    VL_IN8(winc,0,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    VL_OUT8(wfull,0,0);
    VL_OUT8(rempty,0,0);
    VL_OUT8(fifo_cnt,4,0);
    CData/*4:0*/ wptr;
    CData/*4:0*/ rptr;
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__rst_;
    CData/*0:0*/ __Vtogcov__fifo_rst;
    CData/*0:0*/ __Vtogcov__rinc;
    CData/*0:0*/ __Vtogcov__winc;
    CData/*7:0*/ __Vtogcov__data_i;
    CData/*7:0*/ __Vtogcov__data_o;
    CData/*0:0*/ __Vtogcov__wfull;
    CData/*0:0*/ __Vtogcov__rempty;
    CData/*4:0*/ __Vtogcov__fifo_cnt;
    CData/*4:0*/ __Vtogcov__wptr;
    CData/*4:0*/ __Vtogcov__rptr;
    VlUnpacked<CData/*7:0*/, 16> ram;
    VlUnpacked<CData/*7:0*/, 16> __Vtogcov__ram;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_uart_fifo(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_uart_fifo();
    VL_UNCOPYABLE(Vtop_uart_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

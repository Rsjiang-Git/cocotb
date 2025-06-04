// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_uart_fifo.h"

VL_ATTR_COLD void Vtop_uart_fifo___ctor_var_reset(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_ = VL_RAND_RESET_I(1);
    vlSelf->fifo_rst = VL_RAND_RESET_I(1);
    vlSelf->rinc = VL_RAND_RESET_I(1);
    vlSelf->winc = VL_RAND_RESET_I(1);
    vlSelf->data_i = VL_RAND_RESET_I(8);
    vlSelf->data_o = VL_RAND_RESET_I(8);
    vlSelf->wfull = VL_RAND_RESET_I(1);
    vlSelf->rempty = VL_RAND_RESET_I(1);
    vlSelf->fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->wptr = VL_RAND_RESET_I(5);
    vlSelf->rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst_ = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__fifo_rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rinc = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__winc = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__data_i = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__data_o = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__wfull = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rempty = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__wptr = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtogcov__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
}

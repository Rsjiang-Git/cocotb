// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rempty;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.wfull;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1eU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1dU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1bU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x17U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt 
            = ((0xfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rempty))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rempty 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_wfull))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_wfull 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1eU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1dU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x1bU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt 
            = ((0x17U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt 
            = ((0xfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_wfull))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_wfull 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_wfull 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.wfull;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rempty;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1eU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1dU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1bU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x17U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt 
            = ((0xfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_wfull))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_wfull 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_rempty))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_rempty 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1eU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1dU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x1bU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt 
            = ((0x17U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt 
            = ((0xfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_data 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rempty))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rempty 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rempty 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst26m_) {
        if ((0U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            ++(vlSymsp->__Vcoverage[523]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start = 1U;
            vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt = 0U;
            vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt = 0U;
        } else if ((1U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            ++(vlSymsp->__Vcoverage[524]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen = 1U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start = 0U;
        } else if ((3U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                ++(vlSymsp->__Vcoverage[525]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[526]);
            }
            ++(vlSymsp->__Vcoverage[527]);
        } else if ((2U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                ++(vlSymsp->__Vcoverage[528]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o 
                    = (1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
                             >> (7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt))));
                vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt)));
            } else {
                ++(vlSymsp->__Vcoverage[529]);
            }
            ++(vlSymsp->__Vcoverage[530]);
        } else if ((6U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2) {
                    ++(vlSymsp->__Vcoverage[531]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o 
                        = (1U & VL_REDXOR_8(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx));
                } else {
                    ++(vlSymsp->__Vcoverage[532]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o 
                        = (1U & (~ VL_REDXOR_8(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
                }
                ++(vlSymsp->__Vcoverage[533]);
            } else {
                ++(vlSymsp->__Vcoverage[534]);
            }
            ++(vlSymsp->__Vcoverage[535]);
        } else if ((7U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                ++(vlSymsp->__Vcoverage[536]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[537]);
            }
            ++(vlSymsp->__Vcoverage[538]);
        } else if ((5U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt)));
                ++(vlSymsp->__Vcoverage[539]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[540]);
            }
            ++(vlSymsp->__Vcoverage[541]);
        }
        ++(vlSymsp->__Vcoverage[543]);
    } else {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o = 1U;
        vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt = 0U;
        vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[544]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[545]);
    }
    ++(vlSymsp->__Vcoverage[546]);
    if (vlSelfRef.rst26m_) {
        if ((0U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            ++(vlSymsp->__Vcoverage[357]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 0U;
            vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt = 0U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error = 0U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error = 0U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start = 0U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right = 0U;
        } else if ((1U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 1U;
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                if (vlSelfRef.rxd_i) {
                    ++(vlSymsp->__Vcoverage[359]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[358]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right = 1U;
                }
                ++(vlSymsp->__Vcoverage[360]);
            } else {
                ++(vlSymsp->__Vcoverage[361]);
            }
            ++(vlSymsp->__Vcoverage[362]);
        } else if ((3U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                ++(vlSymsp->__Vcoverage[363]);
                vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx 
                    = (((~ ((IData)(1U) << (7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)))) 
                        & (IData)(vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)) 
                       | (0xffU & ((IData)(vlSelfRef.rxd_i) 
                                   << (7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)))));
                vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
            } else {
                ++(vlSymsp->__Vcoverage[364]);
            }
            ++(vlSymsp->__Vcoverage[365]);
        } else if ((2U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2) {
                    if (((1U & VL_REDXOR_8(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)) 
                         == (IData)(vlSelfRef.rxd_i))) {
                        ++(vlSymsp->__Vcoverage[366]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error = 1U;
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[367]);
                    }
                    ++(vlSymsp->__Vcoverage[372]);
                } else {
                    if (((1U & VL_REDXOR_8(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)) 
                         == (1U & (~ (IData)(vlSelfRef.rxd_i))))) {
                        ++(vlSymsp->__Vcoverage[368]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error = 1U;
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[369]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.rxd_i)))) {
                        ++(vlSymsp->__Vcoverage[370]);
                    }
                    if (vlSelfRef.rxd_i) {
                        ++(vlSymsp->__Vcoverage[371]);
                    }
                    ++(vlSymsp->__Vcoverage[373]);
                }
                ++(vlSymsp->__Vcoverage[374]);
            } else {
                ++(vlSymsp->__Vcoverage[375]);
            }
            ++(vlSymsp->__Vcoverage[376]);
        } else if ((6U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                if (vlSelfRef.rxd_i) {
                    ++(vlSymsp->__Vcoverage[378]);
                } else {
                    ++(vlSymsp->__Vcoverage[377]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error = 1U;
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 0U;
                }
                ++(vlSymsp->__Vcoverage[379]);
            } else {
                ++(vlSymsp->__Vcoverage[380]);
            }
            ++(vlSymsp->__Vcoverage[381]);
        } else if ((7U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate))) {
            ++(vlSymsp->__Vcoverage[382]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start = 1U;
        }
        ++(vlSymsp->__Vcoverage[384]);
    } else {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = 0U;
        vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx = 0U;
        vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[385]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[386]);
    }
    ++(vlSymsp->__Vcoverage[387]);
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt 
        = vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt 
        = vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt 
        = vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx 
        = vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_bpsen))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__utxd_o))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__utxd_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    }
    vlSelfRef.txd_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    vlSelfRef.cocotb_top__DOT__txd_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__utxd_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt)));
    }
    if ((4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 5U;
                    ++(vlSymsp->__Vcoverage[515]);
                } else {
                    ++(vlSymsp->__Vcoverage[516]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 7U;
                }
                ++(vlSymsp->__Vcoverage[517]);
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                    if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2) {
                        ++(vlSymsp->__Vcoverage[510]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 7U;
                    } else {
                        ++(vlSymsp->__Vcoverage[511]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 5U;
                    }
                    ++(vlSymsp->__Vcoverage[512]);
                } else {
                    ++(vlSymsp->__Vcoverage[513]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 6U;
                }
                ++(vlSymsp->__Vcoverage[514]);
            }
        } else if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
            if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt) 
                 < (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2))) {
                ++(vlSymsp->__Vcoverage[518]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 5U;
            } else {
                ++(vlSymsp->__Vcoverage[519]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 0U;
            }
            ++(vlSymsp->__Vcoverage[520]);
        } else {
            ++(vlSymsp->__Vcoverage[521]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                ++(vlSymsp->__Vcoverage[500]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[501]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 3U;
            }
            ++(vlSymsp->__Vcoverage[502]);
        } else {
            if ((8U > (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt))) {
                ++(vlSymsp->__Vcoverage[507]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 2U;
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
                    if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2) {
                        ++(vlSymsp->__Vcoverage[503]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 6U;
                    } else {
                        ++(vlSymsp->__Vcoverage[504]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 7U;
                    }
                    ++(vlSymsp->__Vcoverage[505]);
                } else {
                    ++(vlSymsp->__Vcoverage[506]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 2U;
                }
                ++(vlSymsp->__Vcoverage[508]);
            }
            ++(vlSymsp->__Vcoverage[509]);
        }
    } else if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state))) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) {
            ++(vlSymsp->__Vcoverage[497]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 3U;
        } else {
            ++(vlSymsp->__Vcoverage[498]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 1U;
        }
        ++(vlSymsp->__Vcoverage[499]);
    } else {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2) {
            ++(vlSymsp->__Vcoverage[494]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[495]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = 0U;
        }
        ++(vlSymsp->__Vcoverage[496]);
    }
    ++(vlSymsp->__Vcoverage[522]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity;
    } else {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[464]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[465]);
    }
    ++(vlSymsp->__Vcoverage[466]);
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_bpsen))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__start_right))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__start_right 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt 
            = ((0x1eU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt 
            = ((0x1dU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt 
            = ((0x1bU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt 
            = ((0x17U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt 
            = ((0xfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt)));
    }
    if ((4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2) {
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 0U;
                    ++(vlSymsp->__Vcoverage[352]);
                } else {
                    ++(vlSymsp->__Vcoverage[353]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 7U;
                }
                ++(vlSymsp->__Vcoverage[354]);
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2) {
                    ++(vlSymsp->__Vcoverage[349]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 0U;
                } else {
                    if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error) {
                            ++(vlSymsp->__Vcoverage[345]);
                            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 6U;
                        } else {
                            ++(vlSymsp->__Vcoverage[346]);
                            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 7U;
                        }
                        ++(vlSymsp->__Vcoverage[347]);
                    } else {
                        ++(vlSymsp->__Vcoverage[348]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 6U;
                    }
                    ++(vlSymsp->__Vcoverage[350]);
                }
                ++(vlSymsp->__Vcoverage[351]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[355]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
            if ((8U > (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt))) {
                ++(vlSymsp->__Vcoverage[333]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 3U;
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                    if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2) {
                        ++(vlSymsp->__Vcoverage[329]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[330]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 6U;
                    }
                    ++(vlSymsp->__Vcoverage[331]);
                } else {
                    ++(vlSymsp->__Vcoverage[332]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 3U;
                }
                ++(vlSymsp->__Vcoverage[334]);
            }
            ++(vlSymsp->__Vcoverage[335]);
        } else {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2) {
                ++(vlSymsp->__Vcoverage[342]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 0U;
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) {
                    if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error) {
                        ++(vlSymsp->__Vcoverage[338]);
                        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 2U;
                    } else {
                        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2) {
                            ++(vlSymsp->__Vcoverage[336]);
                            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 6U;
                        } else {
                            ++(vlSymsp->__Vcoverage[337]);
                            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 7U;
                        }
                        ++(vlSymsp->__Vcoverage[339]);
                    }
                    ++(vlSymsp->__Vcoverage[340]);
                } else {
                    ++(vlSymsp->__Vcoverage[341]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 2U;
                }
                ++(vlSymsp->__Vcoverage[343]);
            }
            ++(vlSymsp->__Vcoverage[344]);
        }
    } else if ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state))) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right) {
            ++(vlSymsp->__Vcoverage[326]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 3U;
        } else {
            ++(vlSymsp->__Vcoverage[327]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 1U;
        }
        ++(vlSymsp->__Vcoverage[328]);
    } else {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i) {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[324]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = 0U;
        }
        ++(vlSymsp->__Vcoverage[325]);
    }
    ++(vlSymsp->__Vcoverage[356]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity;
    } else {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[288]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[289]);
    }
    ++(vlSymsp->__Vcoverage[290]);
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx)));
    }
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsen))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bps_en 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen;
    if (((IData)(vlSelfRef.cocotb_top__DOT__txd_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__txd_o))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__txd_o 
            = vlSelfRef.cocotb_top__DOT__txd_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__utxd_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__utxd_o))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__utxd_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__utxd_o;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsen))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bps_en 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn2))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn1))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn2))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn1))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_rst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_rst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__parity))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__parity 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_o;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx)));
    }
}

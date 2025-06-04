// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0(Vtop_uart_fifo* vlSelf);
void Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0(Vtop_uart_fifo* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo));
        Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__s_apb_paddr = vlSelfRef.s_apb_paddr;
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rst_) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__rst_))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__rst_ 
            = vlSelfRef.rst_;
    }
    if (((IData)(vlSelfRef.clk26m) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__clk26m))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__clk26m 
            = vlSelfRef.clk26m;
    }
    if (((IData)(vlSelfRef.rst26m_) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__rst26m_))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__rst26m_ 
            = vlSelfRef.rst26m_;
    }
    if (((IData)(vlSelfRef.s_apb_psel) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_psel))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_psel 
            = vlSelfRef.s_apb_psel;
    }
    if (((IData)(vlSelfRef.s_apb_penable) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_penable))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_penable 
            = vlSelfRef.s_apb_penable;
    }
    if (((IData)(vlSelfRef.s_apb_pwrite) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwrite))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwrite 
            = vlSelfRef.s_apb_pwrite;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__s_apb_pslverr) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pslverr))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pslverr 
            = vlSelfRef.cocotb_top__DOT__s_apb_pslverr;
    }
    if (((IData)(vlSelfRef.rxd_i) ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__rxd_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__rxd_i 
            = vlSelfRef.rxd_i;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pready_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__pready_o))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__pready_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pready_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_bpsen))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay1))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay2))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay1))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay2))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn1))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn2))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn1))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn2))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn1))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn2))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__start_right))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__start_right 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_bpsen))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__utxd_o))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__utxd_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay1))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay2))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn1))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn2))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn1))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn2))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn1))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn2))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_check))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_ack))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_ack))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rxrst))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rxrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__stop_bit))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__stop_bit 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__txrst))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__txrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__check))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__parity))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__parity 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_state))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_state))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay1))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay2))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay1))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay2))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn1))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn2))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn3))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn1))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn2))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn3))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3;
    }
    vlSelfRef.s_apb_pready = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pready_o;
    vlSelfRef.s_apb_prdata = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    vlSelfRef.s_apb_pslverr = vlSelfRef.cocotb_top__DOT__s_apb_pslverr;
    vlSelfRef.txd_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    vlSelfRef.uart_int_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rst_ 
        = vlSelfRef.rst_;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rst_ 
        = vlSelfRef.rst_;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.clk 
        = vlSelfRef.clk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__paddr_i 
        = (0xfU & (vlSelfRef.s_apb_paddr >> 2U));
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc;
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
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    vlSelfRef.cocotb_top__DOT__s_apb_pready = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pready_o;
    vlSelfRef.cocotb_top__DOT__txd_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__utxd_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o;
    vlSelfRef.cocotb_top__DOT__uart_int_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
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
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__wr_en 
        = ((IData)(vlSelfRef.s_apb_psel) & ((IData)(vlSelfRef.s_apb_penable) 
                                            & (IData)(vlSelfRef.s_apb_pwrite)));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rd_en 
        = ((~ ((IData)(vlSelfRef.s_apb_penable) | (IData)(vlSelfRef.s_apb_pwrite))) 
           & (IData)(vlSelfRef.s_apb_psel));
    vlSelfRef.cocotb_top__DOT__s_apb_psel = vlSelfRef.s_apb_psel;
    vlSelfRef.cocotb_top__DOT__s_apb_penable = vlSelfRef.s_apb_penable;
    vlSelfRef.cocotb_top__DOT__s_apb_pwrite = vlSelfRef.s_apb_pwrite;
    vlSelfRef.cocotb_top__DOT__s_apb_pwdata = vlSelfRef.s_apb_pwdata;
    vlSelfRef.cocotb_top__DOT__rxd_i = vlSelfRef.rxd_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen;
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
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3feU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3fdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3fbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3f7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3efU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3dfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3bfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x37fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x2ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x1ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__parity 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check;
    vlSelfRef.cocotb_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cocotb_top__DOT__rst_ = vlSelfRef.rst_;
    vlSelfRef.cocotb_top__DOT__clk26m = vlSelfRef.clk26m;
    vlSelfRef.cocotb_top__DOT__rst26m_ = vlSelfRef.rst26m_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay;
    if ((1U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (1U & vlSelfRef.s_apb_paddr));
    }
    if ((2U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (2U & vlSelfRef.s_apb_paddr));
    }
    if ((4U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (4U & vlSelfRef.s_apb_paddr));
    }
    if ((8U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (8U & vlSelfRef.s_apb_paddr));
    }
    if ((0x10U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x10U & vlSelfRef.s_apb_paddr));
    }
    if ((0x20U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x20U & vlSelfRef.s_apb_paddr));
    }
    if ((0x40U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x40U & vlSelfRef.s_apb_paddr));
    }
    if ((0x80U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x80U & vlSelfRef.s_apb_paddr));
    }
    if ((0x100U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x100U & vlSelfRef.s_apb_paddr));
    }
    if ((0x200U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x200U & vlSelfRef.s_apb_paddr));
    }
    if ((0x400U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x400U & vlSelfRef.s_apb_paddr));
    }
    if ((0x800U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x800U & vlSelfRef.s_apb_paddr));
    }
    if ((0x1000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x1000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x2000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x2000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x4000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x4000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x8000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x8000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x10000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x10000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x20000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x20000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x40000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x40000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x80000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x80000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x100000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x100000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x200000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x200000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x400000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x400000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x800000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x800000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x1000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x1000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x2000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x2000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x4000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x4000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x8000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x8000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x10000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x10000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x20000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x20000000U & vlSelfRef.s_apb_paddr));
    }
    if ((0x40000000U & (vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x40000000U & vlSelfRef.s_apb_paddr));
    }
    if (((vlSelfRef.s_apb_paddr ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_paddr) 
               | (0x80000000U & vlSelfRef.s_apb_paddr));
    }
    if ((1U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (1U & vlSelfRef.s_apb_pwdata));
    }
    if ((2U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (2U & vlSelfRef.s_apb_pwdata));
    }
    if ((4U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (4U & vlSelfRef.s_apb_pwdata));
    }
    if ((8U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (8U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x10U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x10U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x20U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x20U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x40U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x40U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x80U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x80U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x100U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x100U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x200U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x200U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x400U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x400U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x800U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x800U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x1000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x1000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x2000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x2000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x4000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x4000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x8000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x8000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x10000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x10000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x20000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x20000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x40000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x40000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x80000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x80000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x100000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x100000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x200000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x200000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x400000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x400000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x800000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x800000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x1000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x1000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x2000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x2000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x4000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x4000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x8000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x8000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x10000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x10000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x20000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x20000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((0x40000000U & (vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x40000000U & vlSelfRef.s_apb_pwdata));
    }
    if (((vlSelfRef.s_apb_pwdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pwdata) 
               | (0x80000000U & vlSelfRef.s_apb_pwdata));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk 
        = ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
           == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value), 1U));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk 
        = ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
           == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value), 1U));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_cnt;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_cnt;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data;
    vlSelfRef.cocotb_top__DOT__s_apb_prdata = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__paddr_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__paddr_i;
    if (((IData)(vlSelfRef.cocotb_top__DOT__s_apb_pready) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pready))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_pready 
            = vlSelfRef.cocotb_top__DOT__s_apb_pready;
    }
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
    if (((IData)(vlSelfRef.cocotb_top__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__uart_int_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status3))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status2))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__wr_en) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__wr_en 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__wr_en;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rd_en) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rd_en))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rd_en 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rd_en;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__psel_i 
        = vlSelfRef.cocotb_top__DOT__s_apb_psel;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__penable_i 
        = vlSelfRef.cocotb_top__DOT__s_apb_penable;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pwrite_i 
        = vlSelfRef.cocotb_top__DOT__s_apb_pwrite;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pwdata_i 
        = vlSelfRef.cocotb_top__DOT__s_apb_pwdata;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__urxd_i 
        = vlSelfRef.cocotb_top__DOT__rxd_i;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_check))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error_ack))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error_ack))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack;
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
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__stop_bit))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__stop_bit 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsen))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsen 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bps_en 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen;
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
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__check))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk 
        = vlSelfRef.cocotb_top__DOT__clk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst_ 
        = vlSelfRef.cocotb_top__DOT__rst_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk26m 
        = vlSelfRef.cocotb_top__DOT__clk26m;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst26m_ 
        = vlSelfRef.cocotb_top__DOT__rst26m_;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rxrst))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rxrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rxrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_rst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__txrst))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__txrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__txrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_rst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__neg_urxd_i))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__neg_urxd_i 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__tx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__tx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__rx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__rx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk;
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
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__baud_div 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3feU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3fdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3fbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3f7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3efU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3dfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3bfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x37fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x2ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x1ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
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
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__uart_tx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx;
    if ((1U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (1U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (2U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (4U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (8U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if (((vlSelfRef.cocotb_top__DOT__s_apb_prdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__psel_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__psel_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__penable_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__penable_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwrite_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pwrite_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwdata_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pwdata_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__urxd_i;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__clk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rst_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk26m 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk26m;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk26m 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk26m;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__clk26m 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__clk26m;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst26m_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst26m_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst26m_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst26m_;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rst26m_ 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rst26m_;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk;
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
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsclk 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk;
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
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.wfull;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rempty;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rempty;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.wfull;
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
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rempty))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rempty 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rempty 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_wfull))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_wfull 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_wfull 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk26m) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk26m__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst26m_)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst26m___0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.rst_)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst___0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rst_)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__rst___0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((~ (IData)(vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rst_)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__rst___0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk26m__0 = vlSelfRef.clk26m;
    vlSelfRef.__Vtrigprevexpr___TOP__rst26m___0 = vlSelfRef.rst26m_;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst___0 = vlSelfRef.rst_;
    vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__clk__0 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__rst___0 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rst_;
    vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__clk__0 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__rst___0 
        = vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rst_;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0(Vtop_uart_fifo* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0(Vtop_uart_fifo* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__1(Vtop_uart_fifo* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__1(Vtop_uart_fifo* vlSelf);
void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__2(Vtop_uart_fifo* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo));
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo));
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__1((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo));
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__1((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo));
        Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__2((&vlSymsp->TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo));
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*13:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx = 0;
    SData/*13:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx = 0;
    // Body
    vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt;
    vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt;
    vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt;
    vlSelfRef.__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx;
    if (vlSelfRef.rst26m_) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen) {
            if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                 > (0x3fffU & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                               - (IData)(1U))))) {
                ++(vlSymsp->__Vcoverage[600]);
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx = 0U;
            } else {
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx 
                    = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
                ++(vlSymsp->__Vcoverage[601]);
            }
            ++(vlSymsp->__Vcoverage[602]);
        } else {
            ++(vlSymsp->__Vcoverage[603]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx = 0U;
        }
        ++(vlSymsp->__Vcoverage[605]);
    } else {
        ++(vlSymsp->__Vcoverage[604]);
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[606]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[607]);
    }
    ++(vlSymsp->__Vcoverage[608]);
    if (vlSelfRef.rst26m_) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen) {
            if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                 > (0x3fffU & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                               - (IData)(1U))))) {
                ++(vlSymsp->__Vcoverage[591]);
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx = 0U;
            } else {
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx 
                    = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
                ++(vlSymsp->__Vcoverage[592]);
            }
            ++(vlSymsp->__Vcoverage[593]);
        } else {
            ++(vlSymsp->__Vcoverage[594]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx = 0U;
        }
        ++(vlSymsp->__Vcoverage[596]);
    } else {
        ++(vlSymsp->__Vcoverage[595]);
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[597]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[598]);
    }
    ++(vlSymsp->__Vcoverage[599]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit;
    } else {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1 = 1U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[454]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[455]);
    }
    ++(vlSymsp->__Vcoverage[456]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    } else {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[459]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack;
    } else {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[268]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[269]);
    }
    ++(vlSymsp->__Vcoverage[270]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack;
    } else {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[273]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[274]);
    }
    ++(vlSymsp->__Vcoverage[275]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check;
    } else {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[283]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[284]);
    }
    ++(vlSymsp->__Vcoverage[285]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    } else {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[293]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[294]);
    }
    ++(vlSymsp->__Vcoverage[295]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate;
    } else {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[491]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[492]);
    }
    ++(vlSymsp->__Vcoverage[493]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate;
    } else {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[320]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[321]);
    }
    ++(vlSymsp->__Vcoverage[322]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1 
            = vlSelfRef.rxd_i;
    } else {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[315]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[316]);
    }
    ++(vlSymsp->__Vcoverage[317]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay;
    } else {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1 = 2U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2 = 2U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[469]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[470]);
    }
    ++(vlSymsp->__Vcoverage[471]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack;
    } else {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[444]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[445]);
    }
    ++(vlSymsp->__Vcoverage[446]);
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack;
    } else {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[263]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[264]);
    }
    ++(vlSymsp->__Vcoverage[265]);
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx)));
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value 
            = (0x3fffU & VL_SHIFTL_III(14,14,32, ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)), 4U));
    } else {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value = 0x1530U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst26m_)))) {
        ++(vlSymsp->__Vcoverage[611]);
    }
    if (vlSelfRef.rst26m_) {
        ++(vlSymsp->__Vcoverage[612]);
    }
    ++(vlSymsp->__Vcoverage[613]);
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn1))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn2))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn1))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn2))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn1))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn2))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn1))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn2))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay2))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay1))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2));
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1)));
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay1))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay2))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__neg_urxd_i))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__neg_urxd_i 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ffbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3ff7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3fbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3f7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3effU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3dffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x400U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x3bffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x400U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x800U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x37ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x800U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x2fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x1000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value) 
                    ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value 
            = ((0x1fffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value)) 
               | (0x2000U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk 
        = ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx) 
           == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value), 1U));
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk 
        = ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx) 
           == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value), 1U));
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__tx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__tx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__rx_bpsclk))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__rx_bpsclk 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = 0;
    CData/*1:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = 0;
    CData/*0:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 = 0;
    CData/*0:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 = 0;
    CData/*1:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = 0;
    IData/*31:0*/ __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status = 0;
    // Body
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state;
    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status;
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error;
    } else {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1 = 0U;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1032]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1033]);
    }
    ++(vlSymsp->__Vcoverage[1034]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error;
    } else {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1 = 0U;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1037]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1038]);
    }
    ++(vlSymsp->__Vcoverage[1039]);
    if (vlSelfRef.rst_) {
        if ((0U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en))) {
            if (((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
                  & (IData)(vlSelfRef.s_apb_pwrite)) 
                 & (0U == (0x3cU & vlSelfRef.s_apb_paddr)))) {
                ++(vlSymsp->__Vcoverage[1109]);
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1110]);
            }
            ++(vlSymsp->__Vcoverage[1116]);
        } else if ((1U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en))) {
            ++(vlSymsp->__Vcoverage[1117]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = 2U;
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc = 1U;
        } else if ((2U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en))) {
            ++(vlSymsp->__Vcoverage[1118]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc = 0U;
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = 0U;
        }
        if (((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
              & (IData)(vlSelfRef.s_apb_pwrite)) & 
             (0U == (0x3cU & vlSelfRef.s_apb_paddr)))) {
            ++(vlSymsp->__Vcoverage[1111]);
        }
        if ((0U != (0xfU & (vlSelfRef.s_apb_paddr >> 2U)))) {
            ++(vlSymsp->__Vcoverage[1112]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_pwrite)))) {
            ++(vlSymsp->__Vcoverage[1113]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_penable)))) {
            ++(vlSymsp->__Vcoverage[1114]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1115]);
        }
        ++(vlSymsp->__Vcoverage[1120]);
    } else {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc = 0U;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1121]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1122]);
    }
    ++(vlSymsp->__Vcoverage[1123]);
    if (vlSelfRef.rst_) {
        if ((0U != (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status))) {
            ++(vlSymsp->__Vcoverage[1164]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1165]);
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o = 0U;
        }
        if ((8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status)) {
            ++(vlSymsp->__Vcoverage[1166]);
        }
        if ((4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status)) {
            ++(vlSymsp->__Vcoverage[1167]);
        }
        if ((2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status)) {
            ++(vlSymsp->__Vcoverage[1168]);
        }
        if ((1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status)) {
            ++(vlSymsp->__Vcoverage[1169]);
        }
        if ((IData)((0U == (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status)))) {
            ++(vlSymsp->__Vcoverage[1170]);
        }
        ++(vlSymsp->__Vcoverage[1172]);
    } else {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1173]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1174]);
    }
    ++(vlSymsp->__Vcoverage[1175]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     >> 3U));
    } else {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1022]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1023]);
    }
    ++(vlSymsp->__Vcoverage[1024]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1027]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1028]);
    }
    ++(vlSymsp->__Vcoverage[1029]);
    if (vlSelfRef.rst_) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state) {
                ++(vlSymsp->__Vcoverage[1103]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc = 0U;
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state = 0U;
            }
        } else {
            if (((((IData)(vlSelfRef.s_apb_psel) & 
                   (~ (IData)(vlSelfRef.s_apb_penable))) 
                  & (~ (IData)(vlSelfRef.s_apb_pwrite))) 
                 & (0x1cU == (0x3cU & vlSelfRef.s_apb_paddr)))) {
                if ((1U & ((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                            >> 1U) & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty))))) {
                    ++(vlSymsp->__Vcoverage[1083]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc = 1U;
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1084]);
                }
                if ((1U & ((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                            >> 1U) & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty))))) {
                    ++(vlSymsp->__Vcoverage[1085]);
                }
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty) {
                    ++(vlSymsp->__Vcoverage[1086]);
                }
                if ((1U & (~ (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[1087]);
                }
                ++(vlSymsp->__Vcoverage[1088]);
            } else {
                ++(vlSymsp->__Vcoverage[1089]);
            }
            if (((((IData)(vlSelfRef.s_apb_psel) & 
                   (~ (IData)(vlSelfRef.s_apb_penable))) 
                  & (~ (IData)(vlSelfRef.s_apb_pwrite))) 
                 & (4U == (0x3cU & vlSelfRef.s_apb_paddr)))) {
                ++(vlSymsp->__Vcoverage[1095]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc = 1U;
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1096]);
            }
            ++(vlSymsp->__Vcoverage[1102]);
        }
        if (((((IData)(vlSelfRef.s_apb_psel) & (~ (IData)(vlSelfRef.s_apb_penable))) 
              & (~ (IData)(vlSelfRef.s_apb_pwrite))) 
             & (0x1cU == (0x3cU & vlSelfRef.s_apb_paddr)))) {
            ++(vlSymsp->__Vcoverage[1090]);
        }
        if ((7U != (0xfU & (vlSelfRef.s_apb_paddr >> 2U)))) {
            ++(vlSymsp->__Vcoverage[1091]);
        }
        if (vlSelfRef.s_apb_pwrite) {
            ++(vlSymsp->__Vcoverage[1092]);
        }
        if (vlSelfRef.s_apb_penable) {
            ++(vlSymsp->__Vcoverage[1093]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1094]);
        }
        if (((((IData)(vlSelfRef.s_apb_psel) & (~ (IData)(vlSelfRef.s_apb_penable))) 
              & (~ (IData)(vlSelfRef.s_apb_pwrite))) 
             & (4U == (0x3cU & vlSelfRef.s_apb_paddr)))) {
            ++(vlSymsp->__Vcoverage[1097]);
        }
        if ((1U != (0xfU & (vlSelfRef.s_apb_paddr >> 2U)))) {
            ++(vlSymsp->__Vcoverage[1098]);
        }
        if (vlSelfRef.s_apb_pwrite) {
            ++(vlSymsp->__Vcoverage[1099]);
        }
        if (vlSelfRef.s_apb_penable) {
            ++(vlSymsp->__Vcoverage[1100]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1101]);
        }
        ++(vlSymsp->__Vcoverage[1105]);
    } else {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1106]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1107]);
    }
    ++(vlSymsp->__Vcoverage[1108]);
    if (vlSelfRef.rst_) {
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn) {
            ++(vlSymsp->__Vcoverage[1130]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                = (8U | __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status);
        } else {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3) {
                ++(vlSymsp->__Vcoverage[1128]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack = 1U;
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2) {
                    ++(vlSymsp->__Vcoverage[1125]);
                } else {
                    ++(vlSymsp->__Vcoverage[1124]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2)))) {
                    ++(vlSymsp->__Vcoverage[1126]);
                }
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2) {
                    ++(vlSymsp->__Vcoverage[1127]);
                }
                ++(vlSymsp->__Vcoverage[1129]);
            }
            ++(vlSymsp->__Vcoverage[1131]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn) {
            ++(vlSymsp->__Vcoverage[1138]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                = (4U | __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status);
        } else {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2) {
                ++(vlSymsp->__Vcoverage[1136]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack = 1U;
            } else {
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2) {
                    ++(vlSymsp->__Vcoverage[1133]);
                } else {
                    ++(vlSymsp->__Vcoverage[1132]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2)))) {
                    ++(vlSymsp->__Vcoverage[1134]);
                }
                if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2) {
                    ++(vlSymsp->__Vcoverage[1135]);
                }
                ++(vlSymsp->__Vcoverage[1137]);
            }
            ++(vlSymsp->__Vcoverage[1139]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state) {
                if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
                     == (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig))) {
                    ++(vlSymsp->__Vcoverage[1143]);
                    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        = (2U | __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[1144]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = 1U;
                }
                ++(vlSymsp->__Vcoverage[1145]);
            }
        } else {
            if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt) 
                 == (0x1fU & ((0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig) 
                              - (IData)(1U))))) {
                ++(vlSymsp->__Vcoverage[1140]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1141]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = 0U;
            }
            ++(vlSymsp->__Vcoverage[1142]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state) {
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state) {
                if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
                     == (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig))) {
                    ++(vlSymsp->__Vcoverage[1149]);
                    __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        = (1U | __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[1150]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = 1U;
                }
                ++(vlSymsp->__Vcoverage[1151]);
            }
        } else {
            if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt) 
                 == (0x1fU & ((IData)(1U) + (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig))))) {
                ++(vlSymsp->__Vcoverage[1146]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1147]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = 0U;
            }
            ++(vlSymsp->__Vcoverage[1148]);
        }
        if (((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
              & (IData)(vlSelfRef.s_apb_pwrite)) & 
             (0x1cU == (0x3cU & vlSelfRef.s_apb_paddr)))) {
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                = (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   & (~ vlSelfRef.s_apb_pwdata));
            ++(vlSymsp->__Vcoverage[1152]);
        } else {
            ++(vlSymsp->__Vcoverage[1153]);
        }
        if (((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
              & (IData)(vlSelfRef.s_apb_pwrite)) & 
             (0x1cU == (0x3cU & vlSelfRef.s_apb_paddr)))) {
            ++(vlSymsp->__Vcoverage[1154]);
        }
        if ((7U != (0xfU & (vlSelfRef.s_apb_paddr >> 2U)))) {
            ++(vlSymsp->__Vcoverage[1155]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_pwrite)))) {
            ++(vlSymsp->__Vcoverage[1156]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_penable)))) {
            ++(vlSymsp->__Vcoverage[1157]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1158]);
        }
        ++(vlSymsp->__Vcoverage[1160]);
    } else {
        ++(vlSymsp->__Vcoverage[1159]);
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1161]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1162]);
    }
    ++(vlSymsp->__Vcoverage[1163]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data 
            = (0xffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div 
            = (0x3ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     >> 0xfU));
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     >> 0xeU));
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     >> 3U));
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     >> 2U));
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity 
            = (1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     >> 1U));
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check 
            = (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay 
            = (0xfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay);
    } else {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div = 0x152U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay = 2U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1183]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1184]);
    }
    ++(vlSymsp->__Vcoverage[1185]);
    if (vlSelfRef.rst_) {
        if ((((IData)(vlSelfRef.s_apb_psel) & (~ (IData)(vlSelfRef.s_apb_penable))) 
             & (~ (IData)(vlSelfRef.s_apb_pwrite)))) {
            if (((((((((0U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U))) | (1U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.s_apb_paddr 
                                                       >> 2U)))) 
                      | (2U == (0xfU & (vlSelfRef.s_apb_paddr 
                                        >> 2U)))) | 
                     (3U == (0xfU & (vlSelfRef.s_apb_paddr 
                                     >> 2U)))) | (4U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.s_apb_paddr 
                                                      >> 2U)))) 
                   | (5U == (0xfU & (vlSelfRef.s_apb_paddr 
                                     >> 2U)))) | (6U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.s_apb_paddr 
                                                      >> 2U)))) 
                 | (7U == (0xfU & (vlSelfRef.s_apb_paddr 
                                   >> 2U))))) {
                if ((0U == (0xfU & (vlSelfRef.s_apb_paddr 
                                    >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1057]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx;
                } else if ((1U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1058]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx;
                } else if ((2U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1059]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud;
                } else if ((3U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1060]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf;
                } else if ((4U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1061]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig;
                } else if ((5U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1062]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig;
                } else if ((6U == (0xfU & (vlSelfRef.s_apb_paddr 
                                           >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[1063]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay;
                } else {
                    ++(vlSymsp->__Vcoverage[1064]);
                    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status;
                }
            } else if ((8U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1065]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat;
            } else if ((9U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1066]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat;
            }
            ++(vlSymsp->__Vcoverage[1067]);
        } else {
            ++(vlSymsp->__Vcoverage[1068]);
        }
        if ((((IData)(vlSelfRef.s_apb_psel) & (~ (IData)(vlSelfRef.s_apb_penable))) 
             & (~ (IData)(vlSelfRef.s_apb_pwrite)))) {
            ++(vlSymsp->__Vcoverage[1069]);
        }
        if (vlSelfRef.s_apb_pwrite) {
            ++(vlSymsp->__Vcoverage[1070]);
        }
        if (vlSelfRef.s_apb_penable) {
            ++(vlSymsp->__Vcoverage[1071]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1072]);
        }
        ++(vlSymsp->__Vcoverage[1074]);
    } else {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1075]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1076]);
    }
    ++(vlSymsp->__Vcoverage[1077]);
    if (vlSelfRef.rst_) {
        if ((0U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state))) {
            if (((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty)) 
                 & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2))) {
                ++(vlSymsp->__Vcoverage[472]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack = 1U;
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc = 1U;
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[473]);
            }
            ++(vlSymsp->__Vcoverage[477]);
        } else if ((1U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state))) {
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc = 0U;
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2) {
                ++(vlSymsp->__Vcoverage[479]);
            } else {
                ++(vlSymsp->__Vcoverage[478]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack = 0U;
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = 2U;
            }
            ++(vlSymsp->__Vcoverage[482]);
        } else if ((2U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state))) {
            ++(vlSymsp->__Vcoverage[483]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = 0U;
        }
        if (((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty)) 
             & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2))) {
            ++(vlSymsp->__Vcoverage[474]);
        }
        if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2)))) {
            ++(vlSymsp->__Vcoverage[475]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty) {
            ++(vlSymsp->__Vcoverage[476]);
        }
        if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2)))) {
            ++(vlSymsp->__Vcoverage[480]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2) {
            ++(vlSymsp->__Vcoverage[481]);
        }
        ++(vlSymsp->__Vcoverage[485]);
    } else {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc = 0U;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[486]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[487]);
    }
    ++(vlSymsp->__Vcoverage[488]);
    if (vlSelfRef.rst_) {
        if ((0U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state))) {
            if (((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull)) 
                 & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2))) {
                ++(vlSymsp->__Vcoverage[296]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack = 1U;
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc = 1U;
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[297]);
            }
            ++(vlSymsp->__Vcoverage[301]);
        } else if ((1U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state))) {
            vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc = 0U;
            if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2) {
                ++(vlSymsp->__Vcoverage[303]);
            } else {
                ++(vlSymsp->__Vcoverage[302]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack = 0U;
                __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = 2U;
            }
            ++(vlSymsp->__Vcoverage[306]);
        } else if ((2U == (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state))) {
            ++(vlSymsp->__Vcoverage[307]);
            __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = 0U;
        }
        if (((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull)) 
             & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2))) {
            ++(vlSymsp->__Vcoverage[298]);
        }
        if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2)))) {
            ++(vlSymsp->__Vcoverage[299]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull) {
            ++(vlSymsp->__Vcoverage[300]);
        }
        if ((1U & (~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2)))) {
            ++(vlSymsp->__Vcoverage[304]);
        }
        if (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2) {
            ++(vlSymsp->__Vcoverage[305]);
        }
        ++(vlSymsp->__Vcoverage[309]);
    } else {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc = 0U;
        __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[310]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[311]);
    }
    ++(vlSymsp->__Vcoverage[312]);
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state 
        = __Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn1))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn3))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn1))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn3))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    }
    vlSelfRef.uart_int_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    vlSelfRef.cocotb_top__DOT__uart_int_o = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay2))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay1))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2));
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay2))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay1))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2));
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_state))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_state))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_state 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn2))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2));
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn2))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn 
        = ((~ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3)) 
           & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2));
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_ack))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_ack))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_check))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__stop_bit))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__stop_bit 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__parity))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__parity 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__check))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rxrst))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rxrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__txrst))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__txrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3feU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3fdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3fbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3f7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3efU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3dfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x3bfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x37fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x2ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div 
            = ((0x1ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data;
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status));
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif;
    } else {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1178]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1179]);
    }
    ++(vlSymsp->__Vcoverage[1180]);
    vlSelfRef.s_apb_prdata = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o));
    }
    vlSelfRef.cocotb_top__DOT__s_apb_prdata = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o;
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt;
    } else {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1080]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1081]);
    }
    ++(vlSymsp->__Vcoverage[1082]);
    if (vlSelfRef.rst_) {
        if ((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
             & (IData)(vlSelfRef.s_apb_pwrite))) {
            if ((0U == (0xfU & (vlSelfRef.s_apb_paddr 
                                >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1040]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    = vlSelfRef.s_apb_pwdata;
            } else if ((2U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1041]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    = vlSelfRef.s_apb_pwdata;
            } else if ((3U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1042]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    = vlSelfRef.s_apb_pwdata;
            } else if ((4U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1043]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    = vlSelfRef.s_apb_pwdata;
            } else if ((5U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1044]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    = vlSelfRef.s_apb_pwdata;
            } else if ((6U == (0xfU & (vlSelfRef.s_apb_paddr 
                                       >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1045]);
                vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    = vlSelfRef.s_apb_pwdata;
            }
            ++(vlSymsp->__Vcoverage[1046]);
        } else {
            ++(vlSymsp->__Vcoverage[1047]);
        }
        if ((((IData)(vlSelfRef.s_apb_psel) & (IData)(vlSelfRef.s_apb_penable)) 
             & (IData)(vlSelfRef.s_apb_pwrite))) {
            ++(vlSymsp->__Vcoverage[1048]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_pwrite)))) {
            ++(vlSymsp->__Vcoverage[1049]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_penable)))) {
            ++(vlSymsp->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(vlSelfRef.s_apb_psel)))) {
            ++(vlSymsp->__Vcoverage[1051]);
        }
        ++(vlSymsp->__Vcoverage[1053]);
    } else {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud = 0xf152U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf = 0x34U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig = 1U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay = 2U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1054]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1055]);
    }
    ++(vlSymsp->__Vcoverage[1056]);
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc;
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start;
    } else {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[449]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[450]);
    }
    ++(vlSymsp->__Vcoverage[451]);
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack;
    }
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state 
            = ((2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state 
            = ((1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state)));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc;
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start;
    } else {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1 = 0U;
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[278]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[279]);
    }
    ++(vlSymsp->__Vcoverage[280]);
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_winc))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_winc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_winc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc;
    if (((IData)(vlSelfRef.cocotb_top__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__uart_int_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__uart_int_o))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__uart_int_o 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__uart_int_o;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status3))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status3 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status2))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rinc))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rinc 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rinc 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error_ack))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_error_ack;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error_ack))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error_ack 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__p_error_ack;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_check))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__st_check;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__stop_bit))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__stop_bit 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__stop_bit;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__check))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__check 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__check;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rxrst))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rxrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rxrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__rxrst;
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__txrst))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__txrst 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__txrst 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__txrst;
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((0xbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay 
            = ((7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__baud_div 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3feU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3fdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3fbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3f7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3efU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3dfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x3bfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x37fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x100U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x2ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x100U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    if ((0x200U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div) 
                   ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div 
            = ((0x1ffU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div)) 
               | (0x200U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__baud_div)));
    }
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__uart_tx 
        = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx;
    if ((1U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfeU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (1U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((2U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfdU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (2U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((4U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xfbU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (4U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((8U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
               ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xf7U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (8U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x10U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xefU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x10U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x20U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xdfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x20U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x40U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0xbfU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x40U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((0x80U & ((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx) 
                  ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx 
            = ((0x7fU & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx)) 
               | (0x80U & (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__data_to_tx)));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (1U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (2U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (4U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
               ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (8U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                  ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                   ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                    ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                     ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                      ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                       ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__s_apb_prdata 
                        ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if (((vlSelfRef.cocotb_top__DOT__s_apb_prdata ^ vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT____Vtogcov__s_apb_prdata) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__s_apb_prdata));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__prdata_o));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig));
    }
    if ((1U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffeU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (1U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((2U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffdU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (2U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((4U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffffbU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (4U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((8U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
               ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffff7U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (8U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffefU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffdfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffffbfU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x80U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                  ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffff7fU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x100U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffeffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x100U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x200U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffdffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x200U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x400U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffffbffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x400U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x800U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                   ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffff7ffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x800U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x1000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffefffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x1000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x2000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffdfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x2000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x4000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffffbfffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x4000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x8000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                    ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffff7fffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x8000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffeffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffdffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfffbffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x80000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                     ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfff7ffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x100000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffefffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x100000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x200000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffdfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x200000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x400000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xffbfffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x400000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x800000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                      ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xff7fffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x800000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x1000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfeffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x1000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x2000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfdffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x2000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x4000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xfbffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x4000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x8000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                       ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xf7ffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x8000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x10000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xefffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x10000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x20000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xdfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x20000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if ((0x40000000U & (vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
                        ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0xbfffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x40000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if (((vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay 
          ^ vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay 
            = ((0x7fffffffU & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay) 
               | (0x80000000U & vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay));
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay2))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay1))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay2))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay2 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2;
    }
    if (((IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1) 
         ^ (IData)(vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay1))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay1 
            = vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1;
    }
}

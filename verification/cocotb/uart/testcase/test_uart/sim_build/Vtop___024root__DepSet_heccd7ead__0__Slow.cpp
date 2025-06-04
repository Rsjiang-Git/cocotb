// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cocotb_top__DOT__u_uart_top__DOT__pready_o = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/e/my_share/ic_prj/project/cocotb/tb/cocotb_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk26m)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst26m_)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge rst_)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo.rst_)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo.rst_)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk26m)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst26m_)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge rst_)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo.rst_)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo.rst_)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_ = VL_RAND_RESET_I(1);
    vlSelf->clk26m = VL_RAND_RESET_I(1);
    vlSelf->rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->s_apb_psel = VL_RAND_RESET_I(1);
    vlSelf->s_apb_penable = VL_RAND_RESET_I(1);
    vlSelf->s_apb_pwrite = VL_RAND_RESET_I(1);
    vlSelf->s_apb_paddr = VL_RAND_RESET_I(32);
    vlSelf->s_apb_pwdata = VL_RAND_RESET_I(32);
    vlSelf->s_apb_pready = VL_RAND_RESET_I(1);
    vlSelf->s_apb_prdata = VL_RAND_RESET_I(32);
    vlSelf->s_apb_pslverr = VL_RAND_RESET_I(1);
    vlSelf->rxd_i = VL_RAND_RESET_I(1);
    vlSelf->txd_o = VL_RAND_RESET_I(1);
    vlSelf->uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__s_apb_psel = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__s_apb_penable = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__s_apb_pwrite = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__s_apb_paddr = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__s_apb_pwdata = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__s_apb_pready = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__s_apb_prdata = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__s_apb_pslverr = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__rxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__txd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_psel = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_penable = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_pwrite = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_paddr = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_pwdata = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_pready = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_prdata = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT____Vtogcov__s_apb_pslverr = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__rxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__txd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT____Vtogcov__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__paddr_i = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__pwdata_i = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__psel_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__penable_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__pwrite_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__urxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__prdata_o = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__pready_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__utxd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__st_check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__p_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__st_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rxrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__st_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__p_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__stop_bit = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__data_to_tx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__two_tx_delay = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__txrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__tx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__baud_div = VL_RAND_RESET_I(10);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__prdata_o = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__pready_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__utxd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rxrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__st_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__p_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__rdata_to_regif = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__stop_bit = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__data_to_tx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__two_tx_delay = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__txrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__tx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT____Vtogcov__baud_div = VL_RAND_RESET_I(10);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rxrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_to_regif = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__nextstate = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__wdata_state = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__data_rx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__urxd_i_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__neg_urxd_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_error_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__p_error_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__rx_start_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__st_check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__parity_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT____Vtogcov__start_right = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__uart_tx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__txrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1 = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2 = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_bpsen = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__utxd_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__nextstate = VL_RAND_RESET_I(3);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__rdata_state = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_cnt = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__baud_cnt = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__data_tx = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_ack_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__tx_start_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__stop_bit_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__check_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__parity_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn1 = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT____Vtogcov__two_tx_delay_syn2 = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__clk26m = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rst26m_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bps_en = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bps_en = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__baud_div = VL_RAND_RESET_I(10);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__rx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__tx_bpsclk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_value = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_rx = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT____Vtogcov__cnt_baud_tx = VL_RAND_RESET_I(14);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rst_ = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__paddr_i = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwdata_i = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__psel_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__penable_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwrite_i = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rempty = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_wfull = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_cnt = VL_RAND_RESET_I(5);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div = VL_RAND_RESET_I(10);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_int_o = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__prdata_o = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_ack = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rxrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__stop_bit = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__two_tx_delay = VL_RAND_RESET_I(4);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_data = VL_RAND_RESET_I(8);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__txrst = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__check = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__parity = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_fifo_rinc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_fifo_winc = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__baud_div = VL_RAND_RESET_I(10);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_tx = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rx = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_baud = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_conf = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxtrig = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txtrig = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_delay = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_rxfifo_stat = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_txfifo_stat = VL_RAND_RESET_I(32);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__state_en = VL_RAND_RESET_I(2);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rx_state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__tx_state = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status3_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__uart_status2_delay2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__neg_uart_status2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__st_error_syn = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn1 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn2 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn3 = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__p_error_syn = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__wr_en = VL_RAND_RESET_I(1);
    vlSelf->cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT____Vtogcov__rd_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk26m__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst26m___0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst___0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__rst___0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__rst___0 = VL_RAND_RESET_I(1);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__START;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__RX_DATA;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__CHECK_DATA;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__STOP;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__SEND;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__IRQ;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__START_BIT;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__TX_DATA;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__CHECK_BIT;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__STOP;
constexpr CData/*2:0*/ Vtop___024root::cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__DELAY;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

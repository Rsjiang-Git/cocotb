// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_uart_fifo.h"

void Vtop_uart_fifo___ctor_var_reset(Vtop_uart_fifo* vlSelf);

Vtop_uart_fifo::Vtop_uart_fifo(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_uart_fifo___ctor_var_reset(this);
}

void Vtop_uart_fifo___configure_coverage(Vtop_uart_fifo* vlSelf, bool first);

void Vtop_uart_fifo::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtop_uart_fifo___configure_coverage(this, first);
}

Vtop_uart_fifo::~Vtop_uart_fifo() {
}

// Coverage
void Vtop_uart_fifo::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
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

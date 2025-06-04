// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_uart_fifo.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_uart_fifo                 TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo;
    Vtop_uart_fifo                 TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo;

    // COVERAGE
    uint32_t __Vcoverage[1381];

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_cocotb_top;
    VerilatedScope __Vscope_cocotb_top__u_uart_top;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_baud;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_reg_if;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_rx;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_tx;
    VerilatedScope __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

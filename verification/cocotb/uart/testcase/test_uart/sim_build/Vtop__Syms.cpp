// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_uart_fifo.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_cocotb_top);
    __Vhier.remove(&__Vscope_cocotb_top, &__Vscope_cocotb_top__u_uart_top);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_baud);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_reg_if);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_rx);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_tx);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top__u_uart_rx, &__Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo);
    __Vhier.remove(&__Vscope_cocotb_top__u_uart_top__u_uart_tx, &__Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo{this, Verilated::catName(namep, "cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo")}
    , TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo{this, Verilated::catName(namep, "cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo")}
{
        // Check resources
        Verilated::stackCheck(71);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo = &TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo;
    TOP.__PVT__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo = &TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.__Vconfigure(true);
    TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.__Vconfigure(false);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cocotb_top.configure(this, name(), "cocotb_top", "cocotb_top", "cocotb_top", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top.configure(this, name(), "cocotb_top.u_uart_top", "u_uart_top", "uart_top", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_baud.configure(this, name(), "cocotb_top.u_uart_top.u_uart_baud", "u_uart_baud", "uart_baud", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.configure(this, name(), "cocotb_top.u_uart_top.u_uart_reg_if", "u_uart_reg_if", "uart_reg_if", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_rx.configure(this, name(), "cocotb_top.u_uart_top.u_uart_rx", "u_uart_rx", "uart_rx", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.configure(this, name(), "cocotb_top.u_uart_top.u_uart_rx.u_uart_rxfifo", "u_uart_rxfifo", "uart_fifo", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_tx.configure(this, name(), "cocotb_top.u_uart_top.u_uart_tx", "u_uart_tx", "uart_tx", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.configure(this, name(), "cocotb_top.u_uart_top.u_uart_tx.u_uart_txfifo", "u_uart_txfifo", "uart_fifo", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_cocotb_top);
    __Vhier.add(&__Vscope_cocotb_top, &__Vscope_cocotb_top__u_uart_top);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_baud);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_reg_if);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_rx);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top, &__Vscope_cocotb_top__u_uart_top__u_uart_tx);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top__u_uart_rx, &__Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo);
    __Vhier.add(&__Vscope_cocotb_top__u_uart_top__u_uart_tx, &__Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk26m", &(TOP.clk26m), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst26m_", &(TOP.rst26m_), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_", &(TOP.rst_), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rxd_i", &(TOP.rxd_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_paddr", &(TOP.s_apb_paddr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_penable", &(TOP.s_apb_penable), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_prdata", &(TOP.s_apb_prdata), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_pready", &(TOP.s_apb_pready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_psel", &(TOP.s_apb_psel), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_pslverr", &(TOP.s_apb_pslverr), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_pwdata", &(TOP.s_apb_pwdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_apb_pwrite", &(TOP.s_apb_pwrite), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"txd_o", &(TOP.txd_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"uart_int_o", &(TOP.uart_int_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"clk", &(TOP.cocotb_top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"clk26m", &(TOP.cocotb_top__DOT__clk26m), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"rst26m_", &(TOP.cocotb_top__DOT__rst26m_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"rst_", &(TOP.cocotb_top__DOT__rst_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"rxd_i", &(TOP.cocotb_top__DOT__rxd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_paddr", &(TOP.cocotb_top__DOT__s_apb_paddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_penable", &(TOP.cocotb_top__DOT__s_apb_penable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_prdata", &(TOP.cocotb_top__DOT__s_apb_prdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_pready", &(TOP.cocotb_top__DOT__s_apb_pready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_psel", &(TOP.cocotb_top__DOT__s_apb_psel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_pslverr", &(TOP.cocotb_top__DOT__s_apb_pslverr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_pwdata", &(TOP.cocotb_top__DOT__s_apb_pwdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"s_apb_pwrite", &(TOP.cocotb_top__DOT__s_apb_pwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"txd_o", &(TOP.cocotb_top__DOT__txd_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top.varInsert(__Vfinal,"uart_int_o", &(TOP.cocotb_top__DOT__uart_int_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"baud_div", &(TOP.cocotb_top__DOT__u_uart_top__DOT__baud_div), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"clk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"clk26m", &(TOP.cocotb_top__DOT__u_uart_top__DOT__clk26m), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"data_to_tx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__data_to_tx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"p_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__p_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"p_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__p_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"paddr_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__paddr_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"parity", &(TOP.cocotb_top__DOT__u_uart_top__DOT__parity), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"penable_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__penable_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"prdata_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__prdata_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"pready_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__pready_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"psel_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__psel_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"pwdata_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__pwdata_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"pwrite_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__pwrite_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rdata_to_regif", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rdata_to_regif), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rst26m_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rst26m_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rst_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rst_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rx_bpsen", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rx_bpsen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rx_fifo_rempty", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rempty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rx_fifo_rinc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rx_fifo_rinc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"rxrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__rxrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"st_check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__st_check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"st_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__st_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"st_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__st_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"stop_bit", &(TOP.cocotb_top__DOT__u_uart_top__DOT__stop_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"two_tx_delay", &(TOP.cocotb_top__DOT__u_uart_top__DOT__two_tx_delay), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"tx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__tx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"tx_bpsen", &(TOP.cocotb_top__DOT__u_uart_top__DOT__tx_bpsen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"tx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"tx_fifo_wfull", &(TOP.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_wfull), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"tx_fifo_winc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__tx_fifo_winc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"txrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__txrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"uart_int_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__uart_int_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"urxd_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__urxd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top.varInsert(__Vfinal,"utxd_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__utxd_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"baud_div", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__baud_div), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"clk26m", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__clk26m), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"cnt_baud_rx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_rx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,13,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"cnt_baud_tx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_baud_tx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,13,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"cnt_value", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__cnt_value), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,13,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"rst26m_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rst26m_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"rx_bps_en", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bps_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"rx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__rx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"tx_bps_en", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bps_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_baud.varInsert(__Vfinal,"tx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_baud__DOT__tx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"baud_div", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__baud_div), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"clk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"neg_uart_status2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"neg_uart_status3", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__neg_uart_status3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error_syn", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"p_error_syn3", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__p_error_syn3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"paddr_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__paddr_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"parity", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__parity), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"penable_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__penable_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"prdata_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__prdata_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"psel_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__psel_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"pwdata_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwdata_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"pwrite_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__pwrite_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rd_en", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rst_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rst_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rx_data", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rx_fifo_rempty", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rempty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rx_fifo_rinc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_fifo_rinc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rx_state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rx_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"rxrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__rxrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error_syn", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"st_error_syn3", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__st_error_syn3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"state_en", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__state_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"stop_bit", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__stop_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"two_tx_delay", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__two_tx_delay), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"tx_data", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"tx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"tx_fifo_wfull", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_wfull), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"tx_fifo_winc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_fifo_winc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"tx_state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__tx_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"txrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__txrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_baud", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_baud), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_conf", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_conf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_delay", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_delay), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_int_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_int_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_rx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rx), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_rxfifo_stat", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxfifo_stat), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_rxtrig", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_rxtrig), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_status", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_status2_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_status2_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status2_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_status3_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_status3_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_status3_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_tx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_tx), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_txfifo_stat", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txfifo_stat), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"uart_txtrig", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__uart_txtrig), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_reg_if.varInsert(__Vfinal,"wr_en", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_reg_if__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"CHECK_DATA", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__CHECK_DATA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__IDLE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"RX_DATA", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__RX_DATA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"SEND", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__SEND))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"START", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__START))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"STOP", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__STOP))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"check_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"check_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__check_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"clk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"clk26m", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__clk26m), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"data_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"data_rx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_rx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"data_to_regif", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__data_to_regif), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"neg_urxd_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__neg_urxd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"nextstate", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"p_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"p_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"p_error_ack_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"p_error_ack_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__p_error_ack_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"parity", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"parity_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"parity_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__parity_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rst26m_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst26m_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rst_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rst_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_ack_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_ack_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_ack_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_bpsen", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_bpsen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_fifo_rempty", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rempty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_fifo_rinc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_rinc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_fifo_wfull", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_wfull), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_fifo_winc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_fifo_winc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_start", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_start_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rx_start_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rx_start_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"rxrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__rxrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_check_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_check_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_check_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_error", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_error_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_error_ack_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"st_error_ack_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__st_error_ack_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"start_right", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__start_right), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"urxd_i", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"urxd_i_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"urxd_i_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__urxd_i_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx.varInsert(__Vfinal,"wdata_state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__wdata_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"clk", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"data_i", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"data_o", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.data_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"fifo_cnt", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"fifo_rst", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.fifo_rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"ram", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.ram), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,15,0 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"rempty", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rempty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"rinc", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rinc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"rptr", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"rst_", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.rst_), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"wfull", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.wfull), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"winc", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.winc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_rx__u_uart_rxfifo.varInsert(__Vfinal,"wptr", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo.wptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"CHECK_BIT", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__CHECK_BIT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"DELAY", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__DELAY))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__IDLE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"IRQ", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__IRQ))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"START_BIT", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__START_BIT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"STOP", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__STOP))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"TX_DATA", const_cast<void*>(static_cast<const void*>(&(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__TX_DATA))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"baud_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__baud_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"check", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"check_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"check_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__check_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"clk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"clk26m", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__clk26m), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"data_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"data_tx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__data_tx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"nextstate", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__nextstate), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"parity", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"parity_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"parity_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__parity_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"rdata_state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rdata_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"rst26m_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst26m_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"rst_", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__rst_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"state", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"stop_bit", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"stop_bit_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"stop_bit_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__stop_bit_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"two_tx_delay", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"two_tx_delay_syn1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"two_tx_delay_syn2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__two_tx_delay_syn2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_ack", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_ack_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_ack_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_ack_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_bpsclk", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_bpsen", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_bpsen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_fifo_cnt", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_fifo_rempty", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rempty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_fifo_rinc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_rinc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_fifo_wfull", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_wfull), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_fifo_winc", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_fifo_winc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_start", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_start_delay1", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"tx_start_delay2", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__tx_start_delay2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"txrst", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__txrst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"uart_tx", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__uart_tx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx.varInsert(__Vfinal,"utxd_o", &(TOP.cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__utxd_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"clk", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"data_i", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"data_o", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.data_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"fifo_cnt", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_cnt), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"fifo_rst", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.fifo_rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"ram", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.ram), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,15,0 ,7,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"rempty", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rempty), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"rinc", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rinc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"rptr", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"rst_", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.rst_), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"wfull", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.wfull), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"winc", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.winc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cocotb_top__u_uart_top__u_uart_tx__u_uart_txfifo.varInsert(__Vfinal,"wptr", &(TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo.wptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
    }
}

// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s_HH_
#define _relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mux_832_16_1_1.h"

namespace ap_rtl {

struct relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s : public sc_module {
    // Port declarations 63
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > data_0_V_address0;
    sc_out< sc_logic > data_0_V_ce0;
    sc_in< sc_lv<16> > data_0_V_q0;
    sc_out< sc_lv<4> > data_1_V_address0;
    sc_out< sc_logic > data_1_V_ce0;
    sc_in< sc_lv<16> > data_1_V_q0;
    sc_out< sc_lv<4> > data_2_V_address0;
    sc_out< sc_logic > data_2_V_ce0;
    sc_in< sc_lv<16> > data_2_V_q0;
    sc_out< sc_lv<4> > data_3_V_address0;
    sc_out< sc_logic > data_3_V_ce0;
    sc_in< sc_lv<16> > data_3_V_q0;
    sc_out< sc_lv<4> > data_4_V_address0;
    sc_out< sc_logic > data_4_V_ce0;
    sc_in< sc_lv<16> > data_4_V_q0;
    sc_out< sc_lv<4> > data_5_V_address0;
    sc_out< sc_logic > data_5_V_ce0;
    sc_in< sc_lv<16> > data_5_V_q0;
    sc_out< sc_lv<4> > data_6_V_address0;
    sc_out< sc_logic > data_6_V_ce0;
    sc_in< sc_lv<16> > data_6_V_q0;
    sc_out< sc_lv<4> > data_7_V_address0;
    sc_out< sc_logic > data_7_V_ce0;
    sc_in< sc_lv<16> > data_7_V_q0;
    sc_out< sc_lv<4> > res_0_V_address0;
    sc_out< sc_logic > res_0_V_ce0;
    sc_out< sc_logic > res_0_V_we0;
    sc_out< sc_lv<15> > res_0_V_d0;
    sc_out< sc_lv<4> > res_1_V_address0;
    sc_out< sc_logic > res_1_V_ce0;
    sc_out< sc_logic > res_1_V_we0;
    sc_out< sc_lv<15> > res_1_V_d0;
    sc_out< sc_lv<4> > res_2_V_address0;
    sc_out< sc_logic > res_2_V_ce0;
    sc_out< sc_logic > res_2_V_we0;
    sc_out< sc_lv<15> > res_2_V_d0;
    sc_out< sc_lv<4> > res_3_V_address0;
    sc_out< sc_logic > res_3_V_ce0;
    sc_out< sc_logic > res_3_V_we0;
    sc_out< sc_lv<15> > res_3_V_d0;
    sc_out< sc_lv<4> > res_4_V_address0;
    sc_out< sc_logic > res_4_V_ce0;
    sc_out< sc_logic > res_4_V_we0;
    sc_out< sc_lv<15> > res_4_V_d0;
    sc_out< sc_lv<4> > res_5_V_address0;
    sc_out< sc_logic > res_5_V_ce0;
    sc_out< sc_logic > res_5_V_we0;
    sc_out< sc_lv<15> > res_5_V_d0;
    sc_out< sc_lv<4> > res_6_V_address0;
    sc_out< sc_logic > res_6_V_ce0;
    sc_out< sc_logic > res_6_V_we0;
    sc_out< sc_lv<15> > res_6_V_d0;
    sc_out< sc_lv<4> > res_7_V_address0;
    sc_out< sc_logic > res_7_V_ce0;
    sc_out< sc_logic > res_7_V_we0;
    sc_out< sc_lv<15> > res_7_V_d0;


    // Module declarations
    relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s(sc_module_name name);
    SC_HAS_PROCESS(relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s);

    ~relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config9_s();

    sc_trace_file* mVcdFile;

    myproject_mux_832_16_1_1<1,1,16,16,16,16,16,16,16,16,32,16>* myproject_mux_832_16_1_1_U655;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > ii_1_fu_287_p2;
    sc_signal< sc_lv<8> > ii_1_reg_371;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > arrayNo_reg_376;
    sc_signal< sc_lv<1> > tmp_fu_281_p2;
    sc_signal< sc_lv<4> > res_0_V_addr_reg_421;
    sc_signal< sc_lv<4> > res_1_V_addr_reg_426;
    sc_signal< sc_lv<4> > res_2_V_addr_reg_431;
    sc_signal< sc_lv<4> > res_3_V_addr_reg_436;
    sc_signal< sc_lv<4> > res_4_V_addr_reg_441;
    sc_signal< sc_lv<4> > res_5_V_addr_reg_446;
    sc_signal< sc_lv<4> > res_6_V_addr_reg_451;
    sc_signal< sc_lv<4> > res_7_V_addr_reg_456;
    sc_signal< sc_lv<16> > datareg_V_fu_330_p10;
    sc_signal< sc_lv<16> > datareg_V_reg_461;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<15> > tmp_26_fu_352_p1;
    sc_signal< sc_lv<15> > tmp_26_reg_466;
    sc_signal< sc_lv<15> > datareg_V_1_fu_361_p3;
    sc_signal< sc_lv<15> > datareg_V_1_reg_471;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<8> > ii_reg_270;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > newIndex_fu_307_p1;
    sc_signal< sc_lv<4> > tmp_25_fu_303_p1;
    sc_signal< sc_lv<32> > datareg_V_fu_330_p9;
    sc_signal< sc_lv<1> > tmp_s_fu_356_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_data_0_V_address0();
    void thread_data_0_V_ce0();
    void thread_data_1_V_address0();
    void thread_data_1_V_ce0();
    void thread_data_2_V_address0();
    void thread_data_2_V_ce0();
    void thread_data_3_V_address0();
    void thread_data_3_V_ce0();
    void thread_data_4_V_address0();
    void thread_data_4_V_ce0();
    void thread_data_5_V_address0();
    void thread_data_5_V_ce0();
    void thread_data_6_V_address0();
    void thread_data_6_V_ce0();
    void thread_data_7_V_address0();
    void thread_data_7_V_ce0();
    void thread_datareg_V_1_fu_361_p3();
    void thread_datareg_V_fu_330_p9();
    void thread_ii_1_fu_287_p2();
    void thread_newIndex_fu_307_p1();
    void thread_res_0_V_address0();
    void thread_res_0_V_ce0();
    void thread_res_0_V_d0();
    void thread_res_0_V_we0();
    void thread_res_1_V_address0();
    void thread_res_1_V_ce0();
    void thread_res_1_V_d0();
    void thread_res_1_V_we0();
    void thread_res_2_V_address0();
    void thread_res_2_V_ce0();
    void thread_res_2_V_d0();
    void thread_res_2_V_we0();
    void thread_res_3_V_address0();
    void thread_res_3_V_ce0();
    void thread_res_3_V_d0();
    void thread_res_3_V_we0();
    void thread_res_4_V_address0();
    void thread_res_4_V_ce0();
    void thread_res_4_V_d0();
    void thread_res_4_V_we0();
    void thread_res_5_V_address0();
    void thread_res_5_V_ce0();
    void thread_res_5_V_d0();
    void thread_res_5_V_we0();
    void thread_res_6_V_address0();
    void thread_res_6_V_ce0();
    void thread_res_6_V_d0();
    void thread_res_6_V_we0();
    void thread_res_7_V_address0();
    void thread_res_7_V_ce0();
    void thread_res_7_V_d0();
    void thread_res_7_V_we0();
    void thread_tmp_25_fu_303_p1();
    void thread_tmp_26_fu_352_p1();
    void thread_tmp_fu_281_p2();
    void thread_tmp_s_fu_356_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

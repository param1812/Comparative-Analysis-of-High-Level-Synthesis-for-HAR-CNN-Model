// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_HH_
#define _dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mux_832_16_1_1.h"
#include "myproject_mul_mul_16s_11s_26_3_1.h"
#include "dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V.h"
#include "dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_b6_V.h"
#include "dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_mult_V.h"
#include "dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_acc_V.h"

namespace ap_rtl {

struct dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s : public sc_module {
    // Port declarations 63
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > data_0_V_address0;
    sc_out< sc_logic > data_0_V_ce0;
    sc_in< sc_lv<16> > data_0_V_q0;
    sc_out< sc_lv<10> > data_1_V_address0;
    sc_out< sc_logic > data_1_V_ce0;
    sc_in< sc_lv<16> > data_1_V_q0;
    sc_out< sc_lv<10> > data_2_V_address0;
    sc_out< sc_logic > data_2_V_ce0;
    sc_in< sc_lv<16> > data_2_V_q0;
    sc_out< sc_lv<10> > data_3_V_address0;
    sc_out< sc_logic > data_3_V_ce0;
    sc_in< sc_lv<16> > data_3_V_q0;
    sc_out< sc_lv<10> > data_4_V_address0;
    sc_out< sc_logic > data_4_V_ce0;
    sc_in< sc_lv<16> > data_4_V_q0;
    sc_out< sc_lv<10> > data_5_V_address0;
    sc_out< sc_logic > data_5_V_ce0;
    sc_in< sc_lv<16> > data_5_V_q0;
    sc_out< sc_lv<10> > data_6_V_address0;
    sc_out< sc_logic > data_6_V_ce0;
    sc_in< sc_lv<16> > data_6_V_q0;
    sc_out< sc_lv<10> > data_7_V_address0;
    sc_out< sc_logic > data_7_V_ce0;
    sc_in< sc_lv<16> > data_7_V_q0;
    sc_out< sc_lv<4> > res_0_V_address0;
    sc_out< sc_logic > res_0_V_ce0;
    sc_out< sc_logic > res_0_V_we0;
    sc_out< sc_lv<16> > res_0_V_d0;
    sc_out< sc_lv<4> > res_1_V_address0;
    sc_out< sc_logic > res_1_V_ce0;
    sc_out< sc_logic > res_1_V_we0;
    sc_out< sc_lv<16> > res_1_V_d0;
    sc_out< sc_lv<4> > res_2_V_address0;
    sc_out< sc_logic > res_2_V_ce0;
    sc_out< sc_logic > res_2_V_we0;
    sc_out< sc_lv<16> > res_2_V_d0;
    sc_out< sc_lv<4> > res_3_V_address0;
    sc_out< sc_logic > res_3_V_ce0;
    sc_out< sc_logic > res_3_V_we0;
    sc_out< sc_lv<16> > res_3_V_d0;
    sc_out< sc_lv<4> > res_4_V_address0;
    sc_out< sc_logic > res_4_V_ce0;
    sc_out< sc_logic > res_4_V_we0;
    sc_out< sc_lv<16> > res_4_V_d0;
    sc_out< sc_lv<4> > res_5_V_address0;
    sc_out< sc_logic > res_5_V_ce0;
    sc_out< sc_logic > res_5_V_we0;
    sc_out< sc_lv<16> > res_5_V_d0;
    sc_out< sc_lv<4> > res_6_V_address0;
    sc_out< sc_logic > res_6_V_ce0;
    sc_out< sc_logic > res_6_V_we0;
    sc_out< sc_lv<16> > res_6_V_d0;
    sc_out< sc_lv<4> > res_7_V_address0;
    sc_out< sc_logic > res_7_V_ce0;
    sc_out< sc_logic > res_7_V_we0;
    sc_out< sc_lv<16> > res_7_V_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s(sc_module_name name);
    SC_HAS_PROCESS(dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s);

    ~dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s();

    sc_trace_file* mVcdFile;

    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V* w6_V_U;
    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_b6_V* b6_V_U;
    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_mult_V* mult_V_U;
    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_acc_V* acc_V_U;
    myproject_mux_832_16_1_1<1,1,16,16,16,16,16,16,16,16,32,16>* myproject_mux_832_16_1_1_U594;
    myproject_mul_mul_16s_11s_26_3_1<1,3,16,11,26>* myproject_mul_mul_16s_11s_26_3_1_U595;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<24> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<20> > w6_V_address0;
    sc_signal< sc_logic > w6_V_ce0;
    sc_signal< sc_lv<11> > w6_V_q0;
    sc_signal< sc_lv<7> > b6_V_address0;
    sc_signal< sc_logic > b6_V_ce0;
    sc_signal< sc_lv<10> > b6_V_q0;
    sc_signal< sc_lv<16> > acc_V_q0;
    sc_signal< sc_lv<16> > reg_489;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<27> > next_mul_fu_501_p2;
    sc_signal< sc_lv<27> > next_mul_reg_752;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<13> > ii_7_fu_513_p2;
    sc_signal< sc_lv<13> > ii_7_reg_760;
    sc_signal< sc_lv<4> > tmp_466_reg_765;
    sc_signal< sc_lv<1> > tmp_fu_507_p2;
    sc_signal< sc_lv<16> > data_0_V_load_reg_810;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<16> > data_1_V_load_reg_815;
    sc_signal< sc_lv<16> > data_2_V_load_reg_820;
    sc_signal< sc_lv<16> > data_3_V_load_reg_825;
    sc_signal< sc_lv<16> > data_4_V_load_reg_830;
    sc_signal< sc_lv<16> > data_5_V_load_reg_835;
    sc_signal< sc_lv<16> > data_6_V_load_reg_840;
    sc_signal< sc_lv<16> > data_7_V_load_reg_845;
    sc_signal< sc_lv<20> > tmp_227_fu_558_p3;
    sc_signal< sc_lv<20> > tmp_227_reg_850;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<26> > OP1_V_cast_fu_566_p1;
    sc_signal< sc_lv<26> > OP1_V_cast_reg_855;
    sc_signal< sc_lv<8> > jj_3_fu_580_p2;
    sc_signal< sc_lv<8> > jj_3_reg_863;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<20> > index_fu_586_p2;
    sc_signal< sc_lv<20> > index_reg_868;
    sc_signal< sc_lv<1> > tmp_230_fu_574_p2;
    sc_signal< sc_lv<13> > idx_urem_fu_603_p3;
    sc_signal< sc_lv<64> > tmp_233_fu_611_p1;
    sc_signal< sc_lv<64> > tmp_233_reg_878;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<11> > w6_V_load_reg_888;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<26> > grp_fu_747_p2;
    sc_signal< sc_lv<26> > p_Val2_s_reg_898;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<8> > iacc_2_fu_634_p2;
    sc_signal< sc_lv<8> > iacc_2_reg_906;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<64> > tmp_229_fu_640_p1;
    sc_signal< sc_lv<64> > tmp_229_reg_911;
    sc_signal< sc_lv<1> > tmp_s_fu_628_p2;
    sc_signal< sc_lv<10> > b6_V_load_reg_921;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<13> > ii_8_fu_655_p2;
    sc_signal< sc_lv<13> > ii_8_reg_929;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<20> > tmp_232_fu_661_p3;
    sc_signal< sc_lv<20> > tmp_232_reg_934;
    sc_signal< sc_lv<1> > tmp_228_fu_649_p2;
    sc_signal< sc_lv<8> > jj_4_fu_679_p2;
    sc_signal< sc_lv<8> > jj_4_reg_942;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<20> > index_2_fu_685_p2;
    sc_signal< sc_lv<20> > index_2_reg_947;
    sc_signal< sc_lv<1> > tmp_237_fu_673_p2;
    sc_signal< sc_lv<7> > acc_V_addr_4_reg_952;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<16> > mult_V_q0;
    sc_signal< sc_lv<16> > p_Val2_28_reg_962;
    sc_signal< sc_lv<16> > p_Val2_s_62_fu_699_p2;
    sc_signal< sc_lv<16> > p_Val2_s_62_reg_967;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<8> > ires_2_fu_710_p2;
    sc_signal< sc_lv<8> > ires_2_reg_975;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<1> > tmp_231_fu_704_p2;
    sc_signal< sc_lv<4> > arrayNo4_cast_reg_985;
    sc_signal< sc_lv<4> > res_0_V_addr_reg_989;
    sc_signal< sc_lv<4> > res_1_V_addr_reg_994;
    sc_signal< sc_lv<4> > res_2_V_addr_reg_999;
    sc_signal< sc_lv<4> > res_3_V_addr_reg_1004;
    sc_signal< sc_lv<4> > res_4_V_addr_reg_1009;
    sc_signal< sc_lv<4> > res_5_V_addr_reg_1014;
    sc_signal< sc_lv<4> > res_6_V_addr_reg_1019;
    sc_signal< sc_lv<4> > res_7_V_addr_reg_1024;
    sc_signal< sc_lv<20> > mult_V_address0;
    sc_signal< sc_logic > mult_V_ce0;
    sc_signal< sc_logic > mult_V_we0;
    sc_signal< sc_lv<16> > mult_V_d0;
    sc_signal< sc_lv<7> > acc_V_address0;
    sc_signal< sc_logic > acc_V_ce0;
    sc_signal< sc_logic > acc_V_we0;
    sc_signal< sc_lv<16> > acc_V_d0;
    sc_signal< sc_lv<13> > ii_reg_398;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<27> > phi_mul_reg_410;
    sc_signal< sc_lv<13> > phi_urem_reg_421;
    sc_signal< sc_lv<8> > jj_reg_433;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<8> > iacc_reg_444;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<13> > ii2_reg_455;
    sc_signal< sc_lv<8> > jj3_reg_466;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<8> > ires_reg_477;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<64> > newIndex7_fu_529_p1;
    sc_signal< sc_lv<64> > tmp_238_fu_690_p1;
    sc_signal< sc_lv<64> > tmp_239_fu_695_p1;
    sc_signal< sc_lv<64> > tmp_236_fu_716_p1;
    sc_signal< sc_lv<64> > newIndex8_fu_735_p1;
    sc_signal< sc_lv<16> > b6_V_load_cast_fu_645_p1;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > cache_V_fu_544_p9;
    sc_signal< sc_lv<16> > cache_V_fu_544_p10;
    sc_signal< sc_lv<20> > jj_cast_fu_570_p1;
    sc_signal< sc_lv<13> > next_urem_fu_591_p2;
    sc_signal< sc_lv<1> > tmp_467_fu_597_p2;
    sc_signal< sc_lv<20> > jj3_cast_fu_669_p1;
    sc_signal< sc_lv<4> > tmp_468_fu_731_p1;
    sc_signal< sc_lv<16> > grp_fu_747_p0;
    sc_signal< sc_lv<24> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<24> ap_ST_fsm_state1;
    static const sc_lv<24> ap_ST_fsm_state2;
    static const sc_lv<24> ap_ST_fsm_state3;
    static const sc_lv<24> ap_ST_fsm_state4;
    static const sc_lv<24> ap_ST_fsm_state5;
    static const sc_lv<24> ap_ST_fsm_state6;
    static const sc_lv<24> ap_ST_fsm_state7;
    static const sc_lv<24> ap_ST_fsm_state8;
    static const sc_lv<24> ap_ST_fsm_state9;
    static const sc_lv<24> ap_ST_fsm_state10;
    static const sc_lv<24> ap_ST_fsm_state11;
    static const sc_lv<24> ap_ST_fsm_state12;
    static const sc_lv<24> ap_ST_fsm_state13;
    static const sc_lv<24> ap_ST_fsm_state14;
    static const sc_lv<24> ap_ST_fsm_state15;
    static const sc_lv<24> ap_ST_fsm_state16;
    static const sc_lv<24> ap_ST_fsm_state17;
    static const sc_lv<24> ap_ST_fsm_state18;
    static const sc_lv<24> ap_ST_fsm_state19;
    static const sc_lv<24> ap_ST_fsm_state20;
    static const sc_lv<24> ap_ST_fsm_state21;
    static const sc_lv<24> ap_ST_fsm_state22;
    static const sc_lv<24> ap_ST_fsm_state23;
    static const sc_lv<24> ap_ST_fsm_state24;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<27> ap_const_lv27_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<27> ap_const_lv27_2E8C;
    static const sc_lv<13> ap_const_lv13_1600;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<13> ap_const_lv13_2C0;
    static const sc_lv<32> ap_const_lv32_19;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_OP1_V_cast_fu_566_p1();
    void thread_acc_V_address0();
    void thread_acc_V_ce0();
    void thread_acc_V_d0();
    void thread_acc_V_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b6_V_address0();
    void thread_b6_V_ce0();
    void thread_b6_V_load_cast_fu_645_p1();
    void thread_cache_V_fu_544_p9();
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
    void thread_grp_fu_747_p0();
    void thread_iacc_2_fu_634_p2();
    void thread_idx_urem_fu_603_p3();
    void thread_ii_7_fu_513_p2();
    void thread_ii_8_fu_655_p2();
    void thread_index_2_fu_685_p2();
    void thread_index_fu_586_p2();
    void thread_ires_2_fu_710_p2();
    void thread_jj3_cast_fu_669_p1();
    void thread_jj_3_fu_580_p2();
    void thread_jj_4_fu_679_p2();
    void thread_jj_cast_fu_570_p1();
    void thread_mult_V_address0();
    void thread_mult_V_ce0();
    void thread_mult_V_d0();
    void thread_mult_V_we0();
    void thread_newIndex7_fu_529_p1();
    void thread_newIndex8_fu_735_p1();
    void thread_next_mul_fu_501_p2();
    void thread_next_urem_fu_591_p2();
    void thread_p_Val2_s_62_fu_699_p2();
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
    void thread_tmp_227_fu_558_p3();
    void thread_tmp_228_fu_649_p2();
    void thread_tmp_229_fu_640_p1();
    void thread_tmp_230_fu_574_p2();
    void thread_tmp_231_fu_704_p2();
    void thread_tmp_232_fu_661_p3();
    void thread_tmp_233_fu_611_p1();
    void thread_tmp_236_fu_716_p1();
    void thread_tmp_237_fu_673_p2();
    void thread_tmp_238_fu_690_p1();
    void thread_tmp_239_fu_695_p1();
    void thread_tmp_467_fu_597_p2();
    void thread_tmp_468_fu_731_p1();
    void thread_tmp_fu_507_p2();
    void thread_tmp_s_fu_628_p2();
    void thread_w6_V_address0();
    void thread_w6_V_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

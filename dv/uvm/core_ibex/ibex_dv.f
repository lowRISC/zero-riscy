// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// The boot address is specified as a hex number and is used in SystemVerilog
// code like this: 32'h `BOOT_ADDR.
//
// We can't put a ' character in the constant, because Riviera's TCL machinery
// doesn't support them in defines. We also can't just use the decimal value
// (2147483648), because an undecorated integer literal is interpreted as a
// signed 32-bit integer.
+define+BOOT_ADDR=8000_0000
+define+TRACE_EXECUTION
+define+RVFI
+define+UVM

// Until this list is generated by FuseSoC, we have to use manually generated
// wrappers around the prim_* modules to instantiate the prim_generic_* ones,
// see https://github.com/lowRISC/ibex/issues/893.
+incdir+${LOWRISC_IP_DIR}/ip/prim/rtl
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_pkg.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_assert.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_util_pkg.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_pkg.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_22_16_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_22_16_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_64_57_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_64_57_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_22_16_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_22_16_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_39_32_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_39_32_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_72_64_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_hamming_72_64_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_ram_1p_pkg.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_ram_1p_adv.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_ram_1p_scr.sv
${LOWRISC_IP_DIR}/ip/prim_generic/rtl/prim_generic_ram_1p.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_ram_1p.sv
${LOWRISC_IP_DIR}/ip/prim_generic/rtl/prim_generic_clock_gating.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_clock_gating.sv
${LOWRISC_IP_DIR}/ip/prim_generic/rtl/prim_generic_buf.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_buf.sv
${LOWRISC_IP_DIR}/ip/prim_generic/rtl/prim_generic_clock_mux2.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_clock_mux2.sv
${LOWRISC_IP_DIR}/ip/prim_generic/rtl/prim_generic_flop.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/prim/prim_flop.sv

// Shared lowRISC code
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_cipher_pkg.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_lfsr.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_28_22_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_28_22_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_39_32_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_39_32_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_72_64_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_inv_72_64_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_prince.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_subst_perm.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_28_22_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_28_22_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_39_32_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_39_32_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_72_64_enc.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_secded_72_64_dec.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_onehot_check.sv
${LOWRISC_IP_DIR}/ip/prim/rtl/prim_mubi_pkg.sv

// ibex CORE RTL files
+incdir+${PRJ_DIR}/rtl
${PRJ_DIR}/rtl/ibex_pkg.sv
${PRJ_DIR}/rtl/ibex_tracer_pkg.sv
${PRJ_DIR}/rtl/ibex_tracer.sv
${PRJ_DIR}/rtl/ibex_alu.sv
${PRJ_DIR}/rtl/ibex_branch_predict.sv
${PRJ_DIR}/rtl/ibex_compressed_decoder.sv
${PRJ_DIR}/rtl/ibex_controller.sv
${PRJ_DIR}/rtl/ibex_csr.sv
${PRJ_DIR}/rtl/ibex_cs_registers.sv
${PRJ_DIR}/rtl/ibex_counter.sv
${PRJ_DIR}/rtl/ibex_decoder.sv
${PRJ_DIR}/rtl/ibex_dummy_instr.sv
${PRJ_DIR}/rtl/ibex_ex_block.sv
${PRJ_DIR}/rtl/ibex_wb_stage.sv
${PRJ_DIR}/rtl/ibex_id_stage.sv
${PRJ_DIR}/rtl/ibex_icache.sv
${PRJ_DIR}/rtl/ibex_if_stage.sv
${PRJ_DIR}/rtl/ibex_load_store_unit.sv
${PRJ_DIR}/rtl/ibex_lockstep.sv
${PRJ_DIR}/rtl/ibex_multdiv_slow.sv
${PRJ_DIR}/rtl/ibex_multdiv_fast.sv
${PRJ_DIR}/rtl/ibex_prefetch_buffer.sv
${PRJ_DIR}/rtl/ibex_fetch_fifo.sv
${PRJ_DIR}/rtl/ibex_register_file_ff.sv
${PRJ_DIR}/rtl/ibex_register_file_fpga.sv
${PRJ_DIR}/rtl/ibex_register_file_latch.sv
${PRJ_DIR}/rtl/ibex_pmp.sv
${PRJ_DIR}/rtl/ibex_core.sv
${PRJ_DIR}/rtl/ibex_top.sv
${PRJ_DIR}/rtl/ibex_top_tracing.sv

// Core DV files
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/common
${PRJ_DIR}/dv/uvm/core_ibex/common/date.c
${PRJ_DIR}/vendor/google_riscv-dv/src/riscv_signature_pkg.sv
+incdir+${LOWRISC_IP_DIR}/dv/sv/dv_utils
+incdir+${LOWRISC_IP_DIR}/dv/sv/dv_base_reg
+incdir+${LOWRISC_IP_DIR}/dv/sv/csr_utils
+incdir+${LOWRISC_IP_DIR}/dv/sv/dv_lib
+incdir+${LOWRISC_IP_DIR}/dv/sv/mem_model
+incdir+${LOWRISC_IP_DIR}/dv/sv/push_pull_agent
+incdir+${LOWRISC_IP_DIR}/dv/sv/push_pull_agent/seq_lib
+incdir+${LOWRISC_IP_DIR}/dv/sv/str_utils
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/env
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/fcov
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/tests
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_mem_intf_agent
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/common/irq_agent
+incdir+${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_cosim_agent
+incdir+${PRJ_DIR}/dv/cosim
${PRJ_DIR}/dv/uvm/bus_params_pkg/bus_params_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/common_ifs/common_ifs_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/common_ifs/clk_rst_if.sv
${LOWRISC_IP_DIR}/dv/sv/common_ifs/pins_if.sv
${LOWRISC_IP_DIR}/dv/sv/str_utils/str_utils_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/dv_utils/dv_test_status_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/dv_utils/dv_utils_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/dv_base_reg/dv_base_reg_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/csr_utils/csr_utils_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/dv_lib/dv_lib_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/mem_model/mem_model_pkg.sv
${LOWRISC_IP_DIR}/dv/sv/push_pull_agent/push_pull_if.sv
${LOWRISC_IP_DIR}/dv/sv/push_pull_agent/push_pull_agent_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_mem_intf_agent/ibex_mem_intf.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_mem_intf_agent/ibex_mem_intf_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/irq_agent/irq_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/irq_agent/irq_agent_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/env/core_ibex_rvfi_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_cosim_agent/core_ibex_ifetch_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_cosim_agent/core_ibex_ifetch_pmp_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_cosim_agent/ibex_cosim_agent_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/common/ibex_mem_intf_agent/ibex_mem_intf_agent_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/env/core_ibex_instr_monitor_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/env/core_ibex_dut_probe_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/env/core_ibex_csr_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/env/core_ibex_env_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/tests/core_ibex_test_pkg.sv
${PRJ_DIR}/dv/uvm/core_ibex/fcov/core_ibex_fcov_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/fcov/core_ibex_fcov_bind.sv
${PRJ_DIR}/dv/uvm/core_ibex/fcov/core_ibex_pmp_fcov_if.sv
${PRJ_DIR}/dv/uvm/core_ibex/tb/core_ibex_tb_top.sv

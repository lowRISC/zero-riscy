// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

////////////////////////////////////////////////////////////////////////////////
// Engineer:       Francesco Conti - f.conti@unibo.it                         //
//                                                                            //
// Additional contributions by:                                               //
//                 Markus Wegmann - markus.wegmann@technokrat.ch              //
//                                                                            //
// Design Name:    RISC-V register file                                       //
// Project Name:   ibex                                                       //
// Language:       SystemVerilog                                              //
//                                                                            //
// Description:    Register file with 31 or 15x 32 bit wide registers.        //
//                 Register 0 is fixed to 0. This register file is based on   //
//                 flip flops.                                                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

/**
 * RISC-V register file
 *
 * Register file with 31 or 15x 32 bit wide registers. Register 0 is fixed to 0.
 * This register file is based on flip flops.
 */
module ibex_register_file #(
    parameter bit RV32E     = 0,
    parameter DATA_WIDTH    = 32
) (
    // Clock and Reset
    input  logic                   clk_i,
    input  logic                   rst_ni,

    input  logic                   test_en_i,

    //Read port R1
    input  logic [4:0]             raddr_a_i,
    output logic [DATA_WIDTH-1:0]  rdata_a_o,

    //Read port R2
    input  logic [4:0]             raddr_b_i,
    output logic [DATA_WIDTH-1:0]  rdata_b_o,


    // Write port W1
    input  logic [4:0]              waddr_a_i,
    input  logic [DATA_WIDTH-1:0]   wdata_a_i,
    input  logic                    we_a_i

);

  localparam    ADDR_WIDTH = RV32E ? 4 : 5;
  localparam    NUM_WORDS  = 2**ADDR_WIDTH;

  logic [NUM_WORDS-1:0][DATA_WIDTH-1:0] rf_reg;
  logic [NUM_WORDS-1:1][DATA_WIDTH-1:0] rf_reg_tmp;
  logic [NUM_WORDS-1:1]                 we_a_dec;

  always_comb begin : we_a_decoder
    for (int i = 1; i < NUM_WORDS; i++) begin
      we_a_dec[i] = (waddr_a_i == i) ?  we_a_i : 1'b0;
    end
  end

  // loop from 1 to NUM_WORDS-1 as R0 is nil
  always_ff @(posedge clk_i, negedge rst_ni) begin
    if (!rst_ni) begin
      rf_reg_tmp <= '{default:'0};
    end else begin
      for (int r = 1; r < NUM_WORDS; r++) begin
        if (we_a_dec[r]) rf_reg_tmp[r] <= wdata_a_i;
      end
    end
  end

  // R0 is nil
  assign rf_reg[0] = '0;
  assign rf_reg[NUM_WORDS-1:1] = rf_reg_tmp[NUM_WORDS-1:1];

  assign rdata_a_o = rf_reg[raddr_a_i];
  assign rdata_b_o = rf_reg[raddr_b_i];

endmodule

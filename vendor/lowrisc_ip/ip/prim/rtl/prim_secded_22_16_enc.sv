// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// SECDED encoder generated by util/design/secded_gen.py

module prim_secded_22_16_enc (
  input        [15:0] data_i,
  output logic [21:0] data_o
);

  always_comb begin : p_encode
    data_o = 22'(data_i);
    data_o[16] = 0 ^ ^(data_o & 22'h00496E);
    data_o[17] = 0 ^ ^(data_o & 22'h00F20B);
    data_o[18] = 0 ^ ^(data_o & 22'h008ED8);
    data_o[19] = 0 ^ ^(data_o & 22'h007714);
    data_o[20] = 0 ^ ^(data_o & 22'h00ACA5);
    data_o[21] = 0 ^ ^(data_o & 22'h0011F3);
  end

endmodule : prim_secded_22_16_enc

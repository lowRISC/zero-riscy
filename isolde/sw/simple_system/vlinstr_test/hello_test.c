// Copyleft 

// Masks to isolate bits 6-0 and 14-12
#define MASK_6_0     0x0000007F  // Mask for bits 6-0 (7 bits)
#define MASK_14_12   0x00007000  // Mask for bits 14-12 (3 bits)

// Macro to clear and set bits 6-0 (opcode)
#define SET_BITS_6_0(value, new_bits) \
    (((value) & ~MASK_6_0) | ((new_bits) & MASK_6_0))

// Macro to clear and set bits 14-12 (funct3)
#define SET_BITS_14_12(value, new_bits) \
    (((value) & ~MASK_14_12) | (((new_bits) << 12) & MASK_14_12))


#include "simple_system_common.h"



int main(int argc, char **argv) {

  puts("Hello test instr\n");

    unsigned int enc_instr64 = 0xBEAD0000;  // Example value
   unsigned int dummy = 0xBADCAFE;

    // Setting bits 6-0 and 14-12 using macros
    enc_instr64 = SET_BITS_6_0(enc_instr64, 0x3F);  // Set bits 6-0 to 0x3F
    enc_instr64 = SET_BITS_14_12(enc_instr64, 0x3);   // Set bits 14-12 to 0x3










#ifdef vlen64
    // Inline assembly to output the values
 asm volatile (
  ".word 0xBEAD003F\n"
  ".word 0xBADCAFE\n"

  );
 #else
//      vle32.q Q0, 1, 2, 3, 4                  # encoding: [0x7f,0x50,0x00,0x06,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00]
 asm volatile (
  ".word 0x0600507f\n"
  ".word 0x00000001\n"
  ".word 0x00000002\n"
  ".word 0x00000003\n"
  ".word 0x00000004\n"

  );

//       vle32.q Q1, 10, 20, 30, 40                  # encoding: [0xff,0x50,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00]
 asm volatile (
  ".word 0x060050ff\n"
  ".word 0x00000010\n"
  ".word 0x00000020\n"
  ".word 0x00000030\n"
  ".word 0x00000040\n"

  );

//       vle32.q Q2, 1, 2, 3, 3                  # encoding: [0x7f,0x51,0x00,0x06,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00]
asm volatile (
  ".word 0x0600517f\n"
  ".word 0x00000001\n"
  ".word 0x00000002\n"
  ".word 0x00000003\n"
  ".word 0x00000003\n"

  );

//       vle32.q Q3, 1, 1, 28, 28                # encoding: [0xff,0x51,0x00,0x06,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00]
asm volatile (
  ".word 0x060051ff\n"
  ".word 0x00000001\n"
  ".word 0x00000001\n"
  ".word 0x0000001c\n"
  ".word 0x0000001c\n"

  );

#endif

  return 0;
}

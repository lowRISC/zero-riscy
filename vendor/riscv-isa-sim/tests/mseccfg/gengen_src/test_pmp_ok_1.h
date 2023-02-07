/*
 * File automatically generated by
 * gengen 1.4.2 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#ifndef PMP_OK_1_GEN_CLASS_H
#define PMP_OK_1_GEN_CLASS_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class pmp_ok_1_gen_class
{
 protected:
  int create_pmp_cfg;
  int expected_rw_fail;
  int expected_x_fail;
  int m_mode_rwx;
  int pmp_addr_offset;
  int pmp_l;
  int pmp_r;
  int pmp_w;
  int pmp_x;
  int set_sec_mml;
  int set_sec_mmwp;
  int switch_u_mode;
  string tag;

 public:
  pmp_ok_1_gen_class() :
    create_pmp_cfg (0), expected_rw_fail (0), expected_x_fail (0), m_mode_rwx (0), pmp_addr_offset (0), pmp_l (0), pmp_r (0), pmp_w (0), pmp_x (0), set_sec_mml (0), set_sec_mmwp (0), switch_u_mode (0)
  {
  }
  
  pmp_ok_1_gen_class(int _create_pmp_cfg, int _expected_rw_fail, int _expected_x_fail, int _m_mode_rwx, int _pmp_addr_offset, int _pmp_l, int _pmp_r, int _pmp_w, int _pmp_x, int _set_sec_mml, int _set_sec_mmwp, int _switch_u_mode, const string &_tag) :
    create_pmp_cfg (_create_pmp_cfg), expected_rw_fail (_expected_rw_fail), expected_x_fail (_expected_x_fail), m_mode_rwx (_m_mode_rwx), pmp_addr_offset (_pmp_addr_offset), pmp_l (_pmp_l), pmp_r (_pmp_r), pmp_w (_pmp_w), pmp_x (_pmp_x), set_sec_mml (_set_sec_mml), set_sec_mmwp (_set_sec_mmwp), switch_u_mode (_switch_u_mode), tag (_tag)
  {
  }

  void set_create_pmp_cfg(int _create_pmp_cfg)
  {
    create_pmp_cfg = _create_pmp_cfg;
  }

  void set_expected_rw_fail(int _expected_rw_fail)
  {
    expected_rw_fail = _expected_rw_fail;
  }

  void set_expected_x_fail(int _expected_x_fail)
  {
    expected_x_fail = _expected_x_fail;
  }

  void set_m_mode_rwx(int _m_mode_rwx)
  {
    m_mode_rwx = _m_mode_rwx;
  }

  void set_pmp_addr_offset(int _pmp_addr_offset)
  {
    pmp_addr_offset = _pmp_addr_offset;
  }

  void set_pmp_l(int _pmp_l)
  {
    pmp_l = _pmp_l;
  }

  void set_pmp_r(int _pmp_r)
  {
    pmp_r = _pmp_r;
  }

  void set_pmp_w(int _pmp_w)
  {
    pmp_w = _pmp_w;
  }

  void set_pmp_x(int _pmp_x)
  {
    pmp_x = _pmp_x;
  }

  void set_set_sec_mml(int _set_sec_mml)
  {
    set_sec_mml = _set_sec_mml;
  }

  void set_set_sec_mmwp(int _set_sec_mmwp)
  {
    set_sec_mmwp = _set_sec_mmwp;
  }

  void set_switch_u_mode(int _switch_u_mode)
  {
    switch_u_mode = _switch_u_mode;
  }

  void set_tag(const string &_tag)
  {
    tag = _tag;
  }

  void generate_pmp_ok_1(ostream &stream, unsigned int indent = 0)
  {
    string indent_str (indent, ' ');
    indent = 0;
  
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * ";
    stream << tag;
    stream << "\n";
    stream << indent_str;
    stream << " * Generated from gen_pmp_test.cc and test_pmp_ok_1.cc_skel.";
    stream << "\n";
    stream << indent_str;
    stream << " * ";
    stream << "\n";
    stream << indent_str;
    stream << " * This test program is expected to start executed from M mode.";
    stream << "\n";
    stream << indent_str;
    stream << " * That will be easier for us to deal with pmp exception for test.";
    stream << "\n";
    stream << indent_str;
    stream << " * ";
    stream << "\n";
    stream << indent_str;
    stream << " * Remarks:";
    stream << "\n";
    stream << indent_str;
    stream << " * - RW=01 not covered. U/M mode share will be tested separately";
    stream << "\n";
    stream << indent_str;
    stream << " * - RLB is always 0. CSR access control will be tested separately";
    stream << "\n";
    stream << indent_str;
    stream << " * ";
    stream << "\n";
    stream << indent_str;
    stream << " * ";
    stream << "@";
    stream << "changed 2020-Mar-2 soberl";
    stream << "\n";
    stream << indent_str;
    stream << " *  For RWXL + MML, need to separate R and W combinations.";
    stream << "\n";
    stream << indent_str;
    stream << " *  Skip RW=01 (share mode) at generator driver side.";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * Macros from encoding.h";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "#define MSTATUS_MPP         0x00001800";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_R     0x01";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_W     0x02";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_X     0x04";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_A     0x18";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_L     0x80";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_SHIFT 2";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_OFF   0x0";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_TOR   0x08";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_NA4   0x10";
    stream << "\n";
    stream << indent_str;
    stream << "#define PMP_NAPOT 0x18";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#define MSECCFG_MML  0x1";
    stream << "\n";
    stream << indent_str;
    stream << "#define MSECCFG_MMWP 0x2";
    stream << "\n";
    stream << indent_str;
    stream << "#define MSECCFG_RLB  0x4";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#define TEST_RW 1";
    stream << "\n";
    stream << indent_str;
    stream << "#define TEST_FETCH 1";
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * Whether rwx share single cfg for M mode";
    stream << "\n";
    stream << indent_str;
    stream << " * When ";
    stream << "@";
    stream << "set_sec_mml";
    stream << "@";
    stream << " set, it must be 0, otherwise unexpected exception";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "#define M_MODE_RWX ";
    stream << m_mode_rwx;
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#define CAUSE_LOAD_ACCESS 0x5";
    stream << "\n";
    stream << indent_str;
    stream << "#define CAUSE_STORE_ACCESS 0x7";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "typedef unsigned long reg_t;";
    stream << "\n";
    stream << indent_str;
    stream << "typedef unsigned long uintptr_t;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * functions from syscalls.c";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "#if PRINTF_SUPPORTED";
    stream << "\n";
    stream << indent_str;
    stream << "int printf(const char* fmt, ...);";
    stream << "\n";
    stream << indent_str;
    stream << "#else";
    stream << "\n";
    stream << indent_str;
    stream << "#define printf(...)";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "void __attribute__((noreturn)) tohost_exit(uintptr_t code);";
    stream << "\n";
    stream << indent_str;
    stream << "void exit(int code);";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * local status";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "#define TEST_MEM_START 0x200000";
    stream << "\n";
    stream << indent_str;
    stream << "#define TEST_MEM_END 0x240000";
    stream << "\n";
    stream << indent_str;
    stream << "#define U_MEM_END (TEST_MEM_END + 0x10000)";
    stream << "\n";
    stream << indent_str;
    stream << "#define FAKE_ADDRESS 0x10000000";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static const unsigned long expected_rw_fail = ";
    stream << expected_rw_fail;
    stream << ";";
    stream << "\n";
    stream << indent_str;
    stream << "static unsigned actual_rw_fail = 0;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static const unsigned long expected_x_fail = ";
    stream << expected_x_fail;
    stream << ";";
    stream << "\n";
    stream << indent_str;
    stream << "static unsigned actual_x_fail = 0;";
    stream << "\n";
    stream << indent_str;
    stream << "static void checkTestResult(void);";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * override syscalls.c.";
    stream << "\n";
    stream << indent_str;
    stream << " *  currently simply skip to nexp instruction";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "uintptr_t handle_trap(uintptr_t cause, uintptr_t epc, uintptr_t regs[32])";
    stream << "\n";
    stream << indent_str;
    stream << "{";
    stream << "\n";
    stream << indent_str;
    stream << "    if (epc >= TEST_MEM_START && epc < TEST_MEM_END) {";
    stream << "\n";
    stream << indent_str;
    stream << "        asm volatile (\"nop\");";
    stream << "\n";
    stream << indent_str;
    stream << "        actual_x_fail = 1;";
    stream << "\n";
    stream << indent_str;
    stream << "        checkTestResult();";
    stream << "\n";
    stream << indent_str;
    stream << "    } else if (cause == CAUSE_LOAD_ACCESS || cause == CAUSE_STORE_ACCESS) {";
    stream << "\n";
    stream << indent_str;
    stream << "        reg_t addr;";
    stream << "\n";
    stream << indent_str;
    stream << "        asm volatile (\"csrr %0, mtval\\n\" : \"=r\"(addr));";
    stream << "\n";
    stream << indent_str;
    stream << "        if (addr >= TEST_MEM_START && addr < TEST_MEM_END) {";
    stream << "\n";
    stream << indent_str;
    stream << "            actual_rw_fail = 1;";
    stream << "\n";
    stream << indent_str;
    stream << "            return epc + 4;";
    stream << "\n";
    stream << indent_str;
    stream << "        }";
    stream << "\n";
    stream << indent_str;
    indent = 8;
    stream << "        ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "        if (addr == FAKE_ADDRESS) {";
    stream << "\n";
    stream << indent_str;
    stream << "            asm volatile (\"nop\");";
    stream << "\n";
    stream << indent_str;
    stream << "            asm volatile (\"nop\");";
    stream << "\n";
    stream << indent_str;
    stream << "            checkTestResult();";
    stream << "\n";
    stream << indent_str;
    stream << "        }";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    printf(\"cause = %ld, epc = 0x%lx\\n\", cause, epc);";
    stream << "\n";
    stream << indent_str;
    stream << "    tohost_exit(1337);";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "// switch (eret) to U mode and resume next PC";
    stream << "\n";
    stream << indent_str;
    stream << "static void switch_to_U() {";
    stream << "\n";
    stream << indent_str;
    stream << "    reg_t tmp;";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (";
    stream << "\n";
    stream << indent_str;
    stream << "            \"li %0, %1\\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            \"\\tcsrc mstatus, t0\\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            \"\\tla %0, try_access_umode \\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            \"\\tcsrw mepc, %0\\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            \"\\tli sp, %2\\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            \"\\tmret\\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "            : \"=r\"(tmp) : \"n\"(MSTATUS_MPP), \"n\"(U_MEM_END) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static void switch_mode() {";
    stream << "\n";
    stream << indent_str;
    stream << "#if ";
    stream << switch_u_mode;
    stream << "\n";
    stream << indent_str;
    stream << "    switch_to_U();";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "__attribute ((noinline))";
    stream << "\n";
    stream << indent_str;
    stream << "static void target_foo() {";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"nop\");";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    actual_x_fail = 0;";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * avoid to access actual_x_fail lies in M mode";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "__attribute ((section(\".text_test_foo\"), noinline))";
    stream << "\n";
    stream << indent_str;
    stream << "static void target_foo_umode() {";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"nop\");";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "__attribute ((section(\".data_test_arr\"), aligned(8)))";
    stream << "\n";
    stream << indent_str;
    stream << "static volatile unsigned char target_arr[100] = {";
    stream << "\n";
    stream << indent_str;
    stream << "        1,2,3,4,5,6,7,8,";
    stream << "\n";
    stream << indent_str;
    stream << "};";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static int detect_pmp_granularity(){";
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned int granule;";
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned long int temp_reg;";
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned long int all_ones = ~0x0UL;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr0, %0 \\n\" :: \"r\"(all_ones) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrr %0, pmpaddr0 \\n\" : \"=r\"(temp_reg));";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr0, %0 \\n\" :: \"r\"(0x0) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    int g = 2;";
    stream << "\n";
    stream << indent_str;
    stream << "    for(uintptr_t i = 1; i; i<<=1) {";
    stream << "\n";
    stream << indent_str;
    stream << "        if((temp_reg & i) != 0)";
    stream << "\n";
    stream << indent_str;
    stream << "            break;";
    stream << "\n";
    stream << indent_str;
    stream << "        g++;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "    granule = 1UL << g;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    return granule;";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static int mismatch_addr_offset(int granule_size){";
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned int addr_offset = ";
    stream << pmp_addr_offset;
    stream << ";";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    if (addr_offset == 0x0){";
    stream << "\n";
    stream << indent_str;
    stream << "        return 0x0;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "    else {";
    stream << "\n";
    stream << indent_str;
    stream << "        unsigned int mismatch_offset   = granule_size;";
    stream << "\n";
    stream << indent_str;
    stream << "        while (mismatch_offset < addr_offset){";
    stream << "\n";
    stream << indent_str;
    stream << "            mismatch_offset = mismatch_offset << 0x1;";
    stream << "\n";
    stream << indent_str;
    stream << "        }";
    stream << "\n";
    stream << indent_str;
    stream << "        return mismatch_offset;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "/*";
    stream << "\n";
    stream << indent_str;
    stream << " * On processor_t::reset():";
    stream << "\n";
    stream << indent_str;
    stream << " *  - set_csr(CSR_PMPADDR0, ~reg_t(0));";
    stream << "\n";
    stream << indent_str;
    stream << " *    set_csr(CSR_PMPCFG0, PMP_R | PMP_W | PMP_X | PMP_NAPOT);";
    stream << "\n";
    stream << indent_str;
    stream << " */";
    stream << "\n";
    stream << indent_str;
    stream << "static void set_cfg() {";
    stream << "\n";
    stream << indent_str;
    stream << "#if 1";
    stream << "\n";
    stream << indent_str;
    stream << "    /*";
    stream << "\n";
    stream << indent_str;
    stream << "     * set MSECCFG_RLB to avoid locked";
    stream << "\n";
    stream << indent_str;
    stream << "     */";
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned rlb_value = MSECCFG_RLB;";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrs 0x747, %0 \\n\"::\"r\"(rlb_value));";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    /*";
    stream << "\n";
    stream << indent_str;
    stream << "     * Set pmp0cfg for M mode (M_MEM), and pmp1cfg for base of TOR.";
    stream << "\n";
    stream << indent_str;
    stream << "     * Then use pmp2cfg for TEST_MEM. Both test code and data share PMP entrance.";
    stream << "\n";
    stream << indent_str;
    stream << "     * Also use pmp3cfg for fixed U mode (U_MEM).";
    stream << "\n";
    stream << indent_str;
    stream << "     * ";
    stream << "\n";
    stream << indent_str;
    stream << "     * Here ";
    stream << "@";
    stream << "pmp_addr_offset:int";
    stream << "@";
    stream << " is to create an address mismatch";
    stream << "\n";
    stream << indent_str;
    stream << "     * And ";
    stream << "@";
    stream << "create_pmp_cfg:int";
    stream << "@";
    stream << " is to create cfg mismatch.";
    stream << "\n";
    stream << indent_str;
    stream << "     */";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    unsigned int mismatch_offset = ";
    stream << pmp_addr_offset;
    stream << ";";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    if (mismatch_offset != 0x0){";
    stream << "\n";
    stream << indent_str;
    stream << "        volatile int pmp_granularity = detect_pmp_granularity();";
    stream << "\n";
    stream << indent_str;
    stream << "        mismatch_offset = mismatch_addr_offset(pmp_granularity);";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr3, %0 \\n\" :: \"r\"(U_MEM_END >> 2) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr2, %0 \\n\" :: \"r\"(TEST_MEM_END >> 2) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr1, %0 \\n\" :: \"r\"((TEST_MEM_START + mismatch_offset) >> 2) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "#if M_MODE_RWX";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr0, %0 \\n\" :: \"r\"((TEST_MEM_START >> 3) - 1) : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "    reg_t cfg0 = (PMP_R | PMP_W | PMP_X | PMP_NAPOT);";
    stream << "\n";
    stream << indent_str;
    stream << "#else";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr6, %0 \\n\" :: \"r\"(TEST_MEM_START >> 2) : \"memory\"); // for data";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr5, %0 \\n\" :: \"r\"(0x80010000 >> 2) : \"memory\");       // for code";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpaddr4, %0 \\n\" :: \"r\"(0x80000000 >> 2) : \"memory\");       // addr start";
    stream << "\n";
    stream << indent_str;
    stream << "    reg_t cfg0 = PMP_OFF;";
    stream << "\n";
    stream << indent_str;
    stream << "    reg_t cfg1 = PMP_OFF | ((PMP_R | PMP_W | PMP_TOR) << 16) | ((PMP_X | PMP_TOR) << 8);";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    // Only true for Spike";
    stream << "\n";
    stream << indent_str;
    stream << "//    asm volatile (\"csrr %0, pmpcfg0\\n\":\"=r\"(cfg0)); ";
    stream << "\n";
    stream << indent_str;
    stream << "//    if (cfg0 != (PMP_R | PMP_W | PMP_X | PMP_NAPOT)) {";
    stream << "\n";
    stream << indent_str;
    stream << "//        exit(cfg0);";
    stream << "\n";
    stream << indent_str;
    stream << "//    }";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    if (";
    stream << set_sec_mml;
    stream << ") {    // need to set L bit for M mode code like trap_handling";
    stream << "\n";
    stream << indent_str;
    stream << "#if M_MODE_RWX";
    stream << "\n";
    stream << indent_str;
    stream << "        cfg0 |= PMP_L;";
    stream << "\n";
    stream << indent_str;
    stream << "#else";
    stream << "\n";
    stream << indent_str;
    stream << "        cfg1 |= ((PMP_L << 8) | (PMP_L << 16));";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    cfg0 |= (PMP_R | PMP_W | PMP_X | PMP_TOR) << 24;    // for U_MEM";
    stream << "\n";
    stream << indent_str;
    stream << "#if ";
    stream << create_pmp_cfg;
    stream << "\n";
    stream << indent_str;
    stream << "    cfg0 |= ( (";
    stream << pmp_r;
    stream << " ? PMP_R : 0)";
    stream << "\n";
    stream << indent_str;
    stream << "            | (";
    stream << pmp_w;
    stream << " ? PMP_W : 0)";
    stream << "\n";
    stream << indent_str;
    stream << "            | (";
    stream << pmp_x;
    stream << " ? PMP_X : 0) ";
    stream << "\n";
    stream << indent_str;
    stream << "            | PMP_TOR | (";
    stream << pmp_l;
    stream << " ? PMP_L : 0)) << 16;";
    stream << "\n";
    stream << indent_str;
    stream << "#endif   ";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "#if !M_MODE_RWX";
    stream << "\n";
    stream << indent_str;
    stream << "#if __riscv_xlen == 64";
    stream << "\n";
    stream << indent_str;
    stream << "    cfg0 |= (cfg1 << 32);";
    stream << "\n";
    stream << indent_str;
    stream << "#else";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpcfg1, %0 \\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "                :";
    stream << "\n";
    stream << indent_str;
    stream << "                : \"r\"(cfg1)";
    stream << "\n";
    stream << indent_str;
    stream << "                : \"memory\");";
    stream << "\n";
    stream << indent_str;
    stream << "#endif // __riscv_xlen == 64";
    stream << "\n";
    stream << indent_str;
    stream << "#endif // !M_MODE_RWX";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"csrw pmpcfg0, %0 \\n\"";
    stream << "\n";
    stream << indent_str;
    stream << "                :";
    stream << "\n";
    stream << indent_str;
    stream << "                : \"r\"(cfg0)";
    stream << "\n";
    stream << indent_str;
    stream << "                : \"memory\");";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    // set proc->state.mseccfg, for MML/MMWP";
    stream << "\n";
    stream << indent_str;
    stream << "    const unsigned seccfg_bits = (";
    stream << set_sec_mml;
    stream << " ? MSECCFG_MML : 0) | (";
    stream << set_sec_mmwp;
    stream << " ? MSECCFG_MMWP : 0);";
    stream << "\n";
    stream << indent_str;
    stream << "    if (seccfg_bits) {";
    stream << "\n";
    stream << indent_str;
    stream << "        asm volatile (\"csrs 0x747, %0 \\n\"::\"r\"(seccfg_bits));";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    // currently dummy since tlb flushed when set_csr on mseccfg";
    stream << "\n";
    stream << indent_str;
    stream << "    asm volatile (\"fence.i \\n\");";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "// from pmp_ok() side,W/R/X is similar";
    stream << "\n";
    stream << indent_str;
    stream << "__attribute ((noinline))";
    stream << "\n";
    stream << indent_str;
    stream << "static void try_access() {";
    stream << "\n";
    stream << indent_str;
    stream << "#if TEST_RW";
    stream << "\n";
    stream << indent_str;
    stream << "    target_arr[0] += 1;";
    stream << "\n";
    stream << indent_str;
    stream << "    const unsigned long delta = (unsigned long)0x1020304005060708ULL;";
    stream << "\n";
    stream << indent_str;
    stream << "    *(long *)target_arr += delta;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    if (*(long *)target_arr != (unsigned long)0x0807060504030201ULL + delta + 1) {";
    stream << "\n";
    stream << indent_str;
    stream << "        actual_rw_fail = 1;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#if TEST_FETCH";
    stream << "\n";
    stream << indent_str;
    stream << "    actual_x_fail = 1;  // reset inside target_foo()";
    stream << "\n";
    stream << indent_str;
    stream << "    target_foo();";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "// in case mml set, printf cannot be used in U mode";
    stream << "\n";
    stream << indent_str;
    stream << "__attribute ((section(\".text_umode\")))";
    stream << "\n";
    stream << indent_str;
    stream << "void try_access_umode() {";
    stream << "\n";
    stream << indent_str;
    stream << "#if TEST_RW";
    stream << "\n";
    stream << indent_str;
    stream << "    target_arr[0] += 1;";
    stream << "\n";
    stream << indent_str;
    stream << "//    const unsigned long delta = 0x1020304005060708UL;";
    stream << "\n";
    stream << indent_str;
    stream << "//    *(long *)target_arr += delta;";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "//    if (*(long *)target_arr != 0x0807060504030201UL + delta + 1) {";
    stream << "\n";
    stream << indent_str;
    stream << "//        actual_rw_fail = 1;";
    stream << "\n";
    stream << indent_str;
    stream << "//    }";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "#if TEST_FETCH";
    stream << "\n";
    stream << indent_str;
    stream << "    target_foo_umode();";
    stream << "\n";
    stream << indent_str;
    stream << "#endif";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    /*";
    stream << "\n";
    stream << indent_str;
    stream << "     * switch to M mode by invoking a write access fault for special address.";
    stream << "\n";
    stream << indent_str;
    stream << "     */";
    stream << "\n";
    stream << indent_str;
    stream << "    volatile unsigned char * p = (unsigned char *)(FAKE_ADDRESS);";
    stream << "\n";
    stream << indent_str;
    stream << "    *p = 1;";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "static void checkTestResult() {";
    stream << "\n";
    stream << indent_str;
    stream << "    int ret = 0;";
    stream << "\n";
    stream << indent_str;
    stream << "    if (expected_rw_fail != actual_rw_fail) {";
    stream << "\n";
    stream << indent_str;
    stream << "        ret += 1;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    if (expected_x_fail != actual_x_fail) {";
    stream << "\n";
    stream << indent_str;
    stream << "        ret += 2;";
    stream << "\n";
    stream << indent_str;
    stream << "    }";
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    indent = 4;
    stream << "    ";
    indent = 0;
    stream << "\n";
    stream << indent_str;
    stream << "    exit(ret); ";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "int main() {";
    stream << "\n";
    stream << indent_str;
    stream << "    // assert in M mode";
    stream << "\n";
    stream << indent_str;
    stream << "    set_cfg();";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    switch_mode();  // in case swith to u mode, branch to try_access_umode directly";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    try_access();";
    stream << "\n";
    stream << indent_str;
    stream << "\n";
    stream << indent_str;
    stream << "    checkTestResult();";
    stream << "\n";
    stream << indent_str;
    stream << "    return 0; // assert 0";
    stream << "\n";
    stream << indent_str;
    stream << "}";
    stream << "\n";
    stream << indent_str;
  }
};

#endif // PMP_OK_1_GEN_CLASS_H

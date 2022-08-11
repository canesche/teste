// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int opcode; int /*<<< orphan*/  rt; } ;
struct TYPE_3__ {int /*<<< orphan*/  func; } ;
union mips_instruction {TYPE_2__ i_format; TYPE_1__ r_format; } ;

/* Variables and functions */
#define  bcond_op 151 
#define  beq_op 150 
#define  beql_op 149 
#define  bgez_op 148 
#define  bgezal_op 147 
#define  bgezall_op 146 
#define  bgezl_op 145 
#define  bgtz_op 144 
#define  bgtzl_op 143 
#define  blez_op 142 
#define  blezl_op 141 
#define  bltz_op 140 
#define  bltzal_op 139 
#define  bltzall_op 138 
#define  bltzl_op 137 
#define  bne_op 136 
#define  bnel_op 135 
#define  bposge32_op 134 
#define  cop1_op 133 
#define  j_op 132 
#define  jal_op 131 
#define  jalr_op 130 
#define  jr_op 129 
#define  spec_op 128 

__attribute__((used)) static inline int __insn_has_delay_slot(const union mips_instruction insn)
{
	switch (insn.i_format.opcode) {
	/*
	 * jr and jalr are in r_format format.
	 */
	case spec_op:
		switch (insn.r_format.func) {
		case jalr_op:
		case jr_op:
			return 1;
		}
		break;

	/*
	 * This group contains:
	 * bltz_op, bgez_op, bltzl_op, bgezl_op,
	 * bltzal_op, bgezal_op, bltzall_op, bgezall_op.
	 */
	case bcond_op:
		switch (insn.i_format.rt) {
		case bltz_op:
		case bltzl_op:
		case bgez_op:
		case bgezl_op:
		case bltzal_op:
		case bltzall_op:
		case bgezal_op:
		case bgezall_op:
		case bposge32_op:
			return 1;
		}
		break;

	/*
	 * These are unconditional and in j_format.
	 */
	case jal_op:
	case j_op:
	case beq_op:
	case beql_op:
	case bne_op:
	case bnel_op:
	case blez_op: /* not really i_format */
	case blezl_op:
	case bgtz_op:
	case bgtzl_op:
		return 1;

	/*
	 * And now the FPA/cp1 branch instructions.
	 */
	case cop1_op:
#ifdef CONFIG_CPU_CAVIUM_OCTEON
	case lwc2_op: /* This is bbit0 on Octeon */
	case ldc2_op: /* This is bbit032 on Octeon */
	case swc2_op: /* This is bbit1 on Octeon */
	case sdc2_op: /* This is bbit132 on Octeon */
#endif
		return 1;
	}

	return 0;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          const union mips_instruction insn = 0;
          int benchRet = __insn_has_delay_slot(insn);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

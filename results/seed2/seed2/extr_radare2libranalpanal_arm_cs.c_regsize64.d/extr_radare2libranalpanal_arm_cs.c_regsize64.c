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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_3__* detail; } ;
typedef  TYPE_4__ cs_insn ;
struct TYPE_7__ {TYPE_1__* operands; } ;
struct TYPE_8__ {TYPE_2__ arm64; } ;
struct TYPE_6__ {unsigned int reg; } ;

/* Variables and functions */
 unsigned int ARM64_REG_B0 ; 
 unsigned int ARM64_REG_B31 ; 
 unsigned int ARM64_REG_H0 ; 
 unsigned int ARM64_REG_H31 ; 
 unsigned int ARM64_REG_Q0 ; 
 unsigned int ARM64_REG_Q31 ; 
 unsigned int ARM64_REG_S0 ; 
 unsigned int ARM64_REG_S31 ; 
 unsigned int ARM64_REG_W0 ; 
 unsigned int ARM64_REG_W30 ; 
 unsigned int ARM64_REG_WZR ; 

__attribute__((used)) static int regsize64(cs_insn *insn, int n) {
	unsigned int reg = insn->detail->arm64.operands[n].reg;
	if ( (reg >= ARM64_REG_S0 && reg <= ARM64_REG_S31) ||
		(reg >= ARM64_REG_W0 && reg <= ARM64_REG_W30) ||
		reg == ARM64_REG_WZR) {
		return 4;
	}
	if (reg >= ARM64_REG_B0 && reg <= ARM64_REG_B31) {
		return 1;
	}
	if (reg >= ARM64_REG_H0 && reg <= ARM64_REG_H31) {
		return 2;
	}
	if (reg >= ARM64_REG_Q0 && reg <= ARM64_REG_Q31) {
		return 16;
	}
	return 8;
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
          int n = 100;
          int _len_insn0 = 1;
          struct TYPE_9__ * insn = (struct TYPE_9__ *) malloc(_len_insn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              int _len_insn__i0__detail0 = 1;
          insn[_i0].detail = (struct TYPE_8__ *) malloc(_len_insn__i0__detail0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail0; _j0++) {
              int _len_insn__i0__detail_arm64_operands0 = 1;
          insn[_i0].detail->arm64.operands = (struct TYPE_6__ *) malloc(_len_insn__i0__detail_arm64_operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail_arm64_operands0; _j0++) {
            insn[_i0].detail->arm64.operands->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = regsize64(insn,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_insn0; _aux++) {
          free(insn[_aux].detail);
          }
          free(insn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_insn0 = 65025;
          struct TYPE_9__ * insn = (struct TYPE_9__ *) malloc(_len_insn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              int _len_insn__i0__detail0 = 1;
          insn[_i0].detail = (struct TYPE_8__ *) malloc(_len_insn__i0__detail0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail0; _j0++) {
              int _len_insn__i0__detail_arm64_operands0 = 1;
          insn[_i0].detail->arm64.operands = (struct TYPE_6__ *) malloc(_len_insn__i0__detail_arm64_operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail_arm64_operands0; _j0++) {
            insn[_i0].detail->arm64.operands->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = regsize64(insn,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_insn0; _aux++) {
          free(insn[_aux].detail);
          }
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_insn0 = 100;
          struct TYPE_9__ * insn = (struct TYPE_9__ *) malloc(_len_insn0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
              int _len_insn__i0__detail0 = 1;
          insn[_i0].detail = (struct TYPE_8__ *) malloc(_len_insn__i0__detail0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail0; _j0++) {
              int _len_insn__i0__detail_arm64_operands0 = 1;
          insn[_i0].detail->arm64.operands = (struct TYPE_6__ *) malloc(_len_insn__i0__detail_arm64_operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_insn__i0__detail_arm64_operands0; _j0++) {
            insn[_i0].detail->arm64.operands->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = regsize64(insn,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_insn0; _aux++) {
          free(insn[_aux].detail);
          }
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

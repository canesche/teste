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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ opcode; int func; } ;
union mips_instruction {TYPE_1__ spec3_format; } ;

/* Variables and functions */
#define  cachee_op 143 
#define  lbe_op 142 
#define  lbue_op 141 
#define  lhe_op 140 
#define  lhue_op 139 
#define  lle_op 138 
#define  lwe_op 137 
#define  lwle_op 136 
#define  lwre_op 135 
#define  prefe_op 134 
#define  sbe_op 133 
#define  sce_op 132 
#define  she_op 131 
 scalar_t__ spec3_op ; 
#define  swe_op 130 
#define  swle_op 129 
#define  swre_op 128 

__attribute__((used)) static bool is_eva_access(union mips_instruction inst)
{
	if (inst.spec3_format.opcode != spec3_op)
		return false;

	switch (inst.spec3_format.func) {
	case lwle_op:
	case lwre_op:
	case cachee_op:
	case sbe_op:
	case she_op:
	case sce_op:
	case swe_op:
	case swle_op:
	case swre_op:
	case prefe_op:
	case lbue_op:
	case lhue_op:
	case lbe_op:
	case lhe_op:
	case lle_op:
	case lwe_op:
		return true;
	default:
		return false;
	}
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
          union mips_instruction inst = 0;
          int benchRet = is_eva_access(inst);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

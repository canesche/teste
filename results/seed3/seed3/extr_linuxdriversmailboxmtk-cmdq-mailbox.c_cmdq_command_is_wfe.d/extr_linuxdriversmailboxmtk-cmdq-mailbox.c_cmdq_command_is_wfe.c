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

/* Type definitions */
typedef  int u64 ;

/* Variables and functions */
 int CMDQ_CODE_WFE ; 
 scalar_t__ CMDQ_OP_CODE_MASK ; 
 int CMDQ_OP_CODE_SHIFT ; 
 int CMDQ_WFE_UPDATE ; 
 int CMDQ_WFE_WAIT ; 
 int CMDQ_WFE_WAIT_VALUE ; 

__attribute__((used)) static bool cmdq_command_is_wfe(u64 cmd)
{
	u64 wfe_option = CMDQ_WFE_UPDATE | CMDQ_WFE_WAIT | CMDQ_WFE_WAIT_VALUE;
	u64 wfe_op = (u64)(CMDQ_CODE_WFE << CMDQ_OP_CODE_SHIFT) << 32;
	u64 wfe_mask = (u64)CMDQ_OP_CODE_MASK << 32 | 0xffffffff;

	return ((cmd & wfe_mask) == (wfe_op | wfe_option));
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
          int cmd = 100;
          int benchRet = cmdq_command_is_wfe(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          int benchRet = cmdq_command_is_wfe(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          int benchRet = cmdq_command_is_wfe(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

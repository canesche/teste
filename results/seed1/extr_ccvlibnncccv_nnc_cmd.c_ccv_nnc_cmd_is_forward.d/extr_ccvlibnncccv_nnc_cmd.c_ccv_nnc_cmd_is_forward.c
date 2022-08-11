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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int cmd; } ;
typedef  TYPE_1__ ccv_nnc_cmd_t ;

/* Variables and functions */
#define  CCV_NNC_CUSTOM_BACKWARD 132 
#define  CCV_NNC_CUSTOM_FORWARD 131 
#define  CCV_NNC_GRAPH_BACKWARD 130 
#define  CCV_NNC_GRAPH_FORWARD 129 
#define  CCV_NNC_NOOP 128 

int ccv_nnc_cmd_is_forward(const ccv_nnc_cmd_t cmd)
{
	switch (cmd.cmd)
	{
		case CCV_NNC_NOOP:
			return 0;
		case CCV_NNC_CUSTOM_FORWARD:
		case CCV_NNC_CUSTOM_BACKWARD:
		case CCV_NNC_GRAPH_FORWARD:
		case CCV_NNC_GRAPH_BACKWARD:
		default:
			return !(cmd.cmd & 0x1); // If it is even, it is forward
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
          const struct TYPE_3__ cmd;
          int benchRet = ccv_nnc_cmd_is_forward(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

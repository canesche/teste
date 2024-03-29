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
typedef  int u32 ;
struct hfi1_devdata {scalar_t__ icode; } ;

/* Variables and functions */
 int ASIC_CCLOCK_PS ; 
 int FPGA_CCLOCK_PS ; 
 scalar_t__ ICODE_FPGA_EMULATION ; 

u32 ns_to_cclock(struct hfi1_devdata *dd, u32 ns)
{
	u32 cclocks;

	if (dd->icode == ICODE_FPGA_EMULATION)
		cclocks = (ns * 1000) / FPGA_CCLOCK_PS;
	else  /* simulation pretends to be ASIC */
		cclocks = (ns * 1000) / ASIC_CCLOCK_PS;
	if (ns && !cclocks)	/* if ns nonzero, must be at least 1 */
		cclocks = 1;
	return cclocks;
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
          int ns = 100;
          int _len_dd0 = 1;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].icode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ns_to_cclock(dd,ns);
          printf("%d\n", benchRet); 
          free(dd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ns = 255;
          int _len_dd0 = 65025;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].icode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ns_to_cclock(dd,ns);
          printf("%d\n", benchRet); 
          free(dd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ns = 10;
          int _len_dd0 = 100;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].icode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ns_to_cclock(dd,ns);
          printf("%d\n", benchRet); 
          free(dd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

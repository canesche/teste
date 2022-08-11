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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct dpi_clk_calc_ctx {int pck_min; TYPE_1__ dispc_cinfo; } ;

/* Variables and functions */

__attribute__((used)) static bool dpi_calc_dispc_cb(int lckd, int pckd, unsigned long lck,
		unsigned long pck, void *data)
{
	struct dpi_clk_calc_ctx *ctx = data;

	/*
	 * Odd dividers give us uneven duty cycle, causing problem when level
	 * shifted. So skip all odd dividers when the pixel clock is on the
	 * higher side.
	 */
	if (ctx->pck_min >= 100000000) {
		if (lckd > 1 && lckd % 2 != 0)
			return false;

		if (pckd > 1 && pckd % 2 != 0)
			return false;
	}

	ctx->dispc_cinfo.lck_div = lckd;
	ctx->dispc_cinfo.pck_div = pckd;
	ctx->dispc_cinfo.lck = lck;
	ctx->dispc_cinfo.pck = pck;

	return true;
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
          int lckd = 100;
          int pckd = 100;
          unsigned long lck = 100;
          unsigned long pck = 100;
          void * data;
          int benchRet = dpi_calc_dispc_cb(lckd,pckd,lck,pck,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lckd = 255;
          int pckd = 255;
          unsigned long lck = 255;
          unsigned long pck = 255;
          void * data;
          int benchRet = dpi_calc_dispc_cb(lckd,pckd,lck,pck,data);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lckd = 10;
          int pckd = 10;
          unsigned long lck = 10;
          unsigned long pck = 10;
          void * data;
          int benchRet = dpi_calc_dispc_cb(lckd,pckd,lck,pck,data);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {int dev_flags; int dev_devwidth; } ;
typedef  TYPE_1__ dbdev_tab_t ;
struct TYPE_4__ {TYPE_1__* chan_dest; TYPE_1__* chan_src; } ;
typedef  TYPE_2__ chan_tab_t ;

/* Variables and functions */
 int DEV_FLAGS_IN ; 
 int DEV_FLAGS_OUT ; 

u32 au1xxx_dbdma_set_devwidth(u32 chanid, int bits)
{
	u32		rv;
	chan_tab_t	*ctp;
	dbdev_tab_t	*stp, *dtp;

	ctp = *((chan_tab_t **)chanid);
	stp = ctp->chan_src;
	dtp = ctp->chan_dest;
	rv = 0;

	if (stp->dev_flags & DEV_FLAGS_IN) {	/* Source in fifo */
		rv = stp->dev_devwidth;
		stp->dev_devwidth = bits;
	}
	if (dtp->dev_flags & DEV_FLAGS_OUT) {	/* Destination out fifo */
		rv = dtp->dev_devwidth;
		dtp->dev_devwidth = bits;
	}

	return rv;
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
          int chanid = 100;
          int bits = 100;
          int benchRet = au1xxx_dbdma_set_devwidth(chanid,bits);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int chanid = 255;
          int bits = 255;
          int benchRet = au1xxx_dbdma_set_devwidth(chanid,bits);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int chanid = 10;
          int bits = 10;
          int benchRet = au1xxx_dbdma_set_devwidth(chanid,bits);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u16 ;
struct ioatdma_chan {size_t xfercap_log; } ;

/* Variables and functions */

__attribute__((used)) static inline u16
ioat_xferlen_to_descs(struct ioatdma_chan *ioat_chan, size_t len)
{
	u16 num_descs = len >> ioat_chan->xfercap_log;

	num_descs += !!(len & ((1 << ioat_chan->xfercap_log) - 1));
	return num_descs;
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
          unsigned long len = 100;
          int _len_ioat_chan0 = 1;
          struct ioatdma_chan * ioat_chan = (struct ioatdma_chan *) malloc(_len_ioat_chan0*sizeof(struct ioatdma_chan));
          for(int _i0 = 0; _i0 < _len_ioat_chan0; _i0++) {
            ioat_chan[_i0].xfercap_log = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ioat_xferlen_to_descs(ioat_chan,len);
          printf("%d\n", benchRet); 
          free(ioat_chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_ioat_chan0 = 65025;
          struct ioatdma_chan * ioat_chan = (struct ioatdma_chan *) malloc(_len_ioat_chan0*sizeof(struct ioatdma_chan));
          for(int _i0 = 0; _i0 < _len_ioat_chan0; _i0++) {
            ioat_chan[_i0].xfercap_log = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ioat_xferlen_to_descs(ioat_chan,len);
          printf("%d\n", benchRet); 
          free(ioat_chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_ioat_chan0 = 100;
          struct ioatdma_chan * ioat_chan = (struct ioatdma_chan *) malloc(_len_ioat_chan0*sizeof(struct ioatdma_chan));
          for(int _i0 = 0; _i0 < _len_ioat_chan0; _i0++) {
            ioat_chan[_i0].xfercap_log = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ioat_xferlen_to_descs(ioat_chan,len);
          printf("%d\n", benchRet); 
          free(ioat_chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

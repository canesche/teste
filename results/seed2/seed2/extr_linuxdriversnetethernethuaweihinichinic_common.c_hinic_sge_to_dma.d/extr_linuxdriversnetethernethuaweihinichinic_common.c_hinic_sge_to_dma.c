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
struct hinic_sge {int lo_addr; scalar_t__ hi_addr; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;

/* Variables and functions */

dma_addr_t hinic_sge_to_dma(struct hinic_sge *sge)
{
	return (dma_addr_t)((((u64)sge->hi_addr) << 32) | sge->lo_addr);
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
          int _len_sge0 = 1;
          struct hinic_sge * sge = (struct hinic_sge *) malloc(_len_sge0*sizeof(struct hinic_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].lo_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].hi_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hinic_sge_to_dma(sge);
          printf("%d\n", benchRet); 
          free(sge);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sge0 = 65025;
          struct hinic_sge * sge = (struct hinic_sge *) malloc(_len_sge0*sizeof(struct hinic_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].lo_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].hi_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hinic_sge_to_dma(sge);
          printf("%d\n", benchRet); 
          free(sge);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sge0 = 100;
          struct hinic_sge * sge = (struct hinic_sge *) malloc(_len_sge0*sizeof(struct hinic_sge));
          for(int _i0 = 0; _i0 < _len_sge0; _i0++) {
            sge[_i0].lo_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        sge[_i0].hi_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hinic_sge_to_dma(sge);
          printf("%d\n", benchRet); 
          free(sge);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ u64 ;
struct tsb {int dummy; } ;
struct tcw {scalar_t__ tsb; } ;
typedef  scalar_t__ addr_t ;

/* Variables and functions */

void tcw_set_tsb(struct tcw *tcw, struct tsb *tsb)
{
	tcw->tsb = (u64) ((addr_t) tsb);
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
          int _len_tcw0 = 1;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].tsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tsb0 = 1;
          struct tsb * tsb = (struct tsb *) malloc(_len_tsb0*sizeof(struct tsb));
          for(int _i0 = 0; _i0 < _len_tsb0; _i0++) {
            tsb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcw_set_tsb(tcw,tsb);
          free(tcw);
          free(tsb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tcw0 = 65025;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].tsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tsb0 = 65025;
          struct tsb * tsb = (struct tsb *) malloc(_len_tsb0*sizeof(struct tsb));
          for(int _i0 = 0; _i0 < _len_tsb0; _i0++) {
            tsb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcw_set_tsb(tcw,tsb);
          free(tcw);
          free(tsb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tcw0 = 100;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].tsb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tsb0 = 100;
          struct tsb * tsb = (struct tsb *) malloc(_len_tsb0*sizeof(struct tsb));
          for(int _i0 = 0; _i0 < _len_tsb0; _i0++) {
            tsb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcw_set_tsb(tcw,tsb);
          free(tcw);
          free(tsb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

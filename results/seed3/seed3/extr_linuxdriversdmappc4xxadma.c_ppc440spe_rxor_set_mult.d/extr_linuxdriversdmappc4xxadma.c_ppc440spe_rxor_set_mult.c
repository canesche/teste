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
typedef  size_t u8 ;
struct xor_cb {TYPE_1__* ops; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;
struct TYPE_2__ {size_t h; } ;

/* Variables and functions */
 size_t DMA_CUED_MULT1_OFF ; 

__attribute__((used)) static void ppc440spe_rxor_set_mult(struct ppc440spe_adma_desc_slot *desc,
	u8 xor_arg_no, u8 idx, u8 mult)
{
	struct xor_cb *xcb = desc->hw_desc;

	xcb->ops[xor_arg_no].h |= mult << (DMA_CUED_MULT1_OFF + idx * 8);
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
          unsigned long xor_arg_no = 100;
          unsigned long idx = 100;
          unsigned long mult = 100;
          int _len_desc0 = 1;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_desc0 = 1;
          desc[_i0].hw_desc = (struct xor_cb *) malloc(_len_desc__i0__hw_desc0*sizeof(struct xor_cb));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc0; _j0++) {
              int _len_desc__i0__hw_desc_ops0 = 1;
          desc[_i0].hw_desc->ops = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_desc_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc_ops0; _j0++) {
            desc[_i0].hw_desc->ops->h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ppc440spe_rxor_set_mult(desc,xor_arg_no,idx,mult);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_desc);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long xor_arg_no = 255;
          unsigned long idx = 255;
          unsigned long mult = 255;
          int _len_desc0 = 65025;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_desc0 = 1;
          desc[_i0].hw_desc = (struct xor_cb *) malloc(_len_desc__i0__hw_desc0*sizeof(struct xor_cb));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc0; _j0++) {
              int _len_desc__i0__hw_desc_ops0 = 1;
          desc[_i0].hw_desc->ops = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_desc_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc_ops0; _j0++) {
            desc[_i0].hw_desc->ops->h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ppc440spe_rxor_set_mult(desc,xor_arg_no,idx,mult);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_desc);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long xor_arg_no = 10;
          unsigned long idx = 10;
          unsigned long mult = 10;
          int _len_desc0 = 100;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_desc0 = 1;
          desc[_i0].hw_desc = (struct xor_cb *) malloc(_len_desc__i0__hw_desc0*sizeof(struct xor_cb));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc0; _j0++) {
              int _len_desc__i0__hw_desc_ops0 = 1;
          desc[_i0].hw_desc->ops = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_desc_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc_ops0; _j0++) {
            desc[_i0].hw_desc->ops->h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ppc440spe_rxor_set_mult(desc,xor_arg_no,idx,mult);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_desc);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

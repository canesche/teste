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
typedef  int /*<<< orphan*/  u32 ;
struct ppc440spe_adma_desc_slot {TYPE_1__* hw_next; } ;
struct ppc440spe_adma_chan {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  phys; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 ppc440spe_desc_get_link(struct ppc440spe_adma_desc_slot *desc,
					struct ppc440spe_adma_chan *chan)
{
	if (!desc->hw_next)
		return 0;

	return desc->hw_next->phys;
}


// ------------------------------------------------------------------------- //




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
          int _len_desc0 = 1;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_next0 = 1;
          desc[_i0].hw_next = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_next0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_next0; _j0++) {
            desc[_i0].hw_next->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chan0 = 1;
          struct ppc440spe_adma_chan * chan = (struct ppc440spe_adma_chan *) malloc(_len_chan0*sizeof(struct ppc440spe_adma_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ppc440spe_desc_get_link(desc,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_next);
          }
          free(desc);
          free(chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_desc0 = 65025;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_next0 = 1;
          desc[_i0].hw_next = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_next0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_next0; _j0++) {
            desc[_i0].hw_next->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chan0 = 65025;
          struct ppc440spe_adma_chan * chan = (struct ppc440spe_adma_chan *) malloc(_len_chan0*sizeof(struct ppc440spe_adma_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ppc440spe_desc_get_link(desc,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_next);
          }
          free(desc);
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_desc0 = 100;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_next0 = 1;
          desc[_i0].hw_next = (struct TYPE_2__ *) malloc(_len_desc__i0__hw_next0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_next0; _j0++) {
            desc[_i0].hw_next->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chan0 = 100;
          struct ppc440spe_adma_chan * chan = (struct ppc440spe_adma_chan *) malloc(_len_chan0*sizeof(struct ppc440spe_adma_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ppc440spe_desc_get_link(desc,chan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_next);
          }
          free(desc);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

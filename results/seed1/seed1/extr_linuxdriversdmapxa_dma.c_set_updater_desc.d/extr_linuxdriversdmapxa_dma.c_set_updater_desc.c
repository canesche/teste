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
typedef  int /*<<< orphan*/  u32 ;
struct pxad_desc_sw {int nb_desc; void* first; struct pxad_desc_hw** hw_desc; scalar_t__ cyclic; } ;
struct pxad_desc_hw {int dcmd; void* ddadr; void* dtadr; void* dsadr; } ;
typedef  void* dma_addr_t ;

/* Variables and functions */
 void* DDADR_STOP ; 
 unsigned long DMA_PREP_INTERRUPT ; 
 int PXA_DCMD_BURST32 ; 
 int PXA_DCMD_ENDIRQEN ; 
 int PXA_DCMD_LENGTH ; 
 int PXA_DCMD_WIDTH4 ; 

__attribute__((used)) static void set_updater_desc(struct pxad_desc_sw *sw_desc,
			     unsigned long flags)
{
	struct pxad_desc_hw *updater =
		sw_desc->hw_desc[sw_desc->nb_desc - 1];
	dma_addr_t dma = sw_desc->hw_desc[sw_desc->nb_desc - 2]->ddadr;

	updater->ddadr = DDADR_STOP;
	updater->dsadr = dma;
	updater->dtadr = dma + 8;
	updater->dcmd = PXA_DCMD_WIDTH4 | PXA_DCMD_BURST32 |
		(PXA_DCMD_LENGTH & sizeof(u32));
	if (flags & DMA_PREP_INTERRUPT)
		updater->dcmd |= PXA_DCMD_ENDIRQEN;
	if (sw_desc->cyclic)
		sw_desc->hw_desc[sw_desc->nb_desc - 2]->ddadr = sw_desc->first;
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
          unsigned long flags = 100;
          int _len_sw_desc0 = 1;
          struct pxad_desc_sw * sw_desc = (struct pxad_desc_sw *) malloc(_len_sw_desc0*sizeof(struct pxad_desc_sw));
          for(int _i0 = 0; _i0 < _len_sw_desc0; _i0++) {
            sw_desc[_i0].nb_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sw_desc__i0__hw_desc0 = 1;
          sw_desc[_i0].hw_desc = (struct pxad_desc_hw **) malloc(_len_sw_desc__i0__hw_desc0*sizeof(struct pxad_desc_hw *));
          for(int _j0 = 0; _j0 < _len_sw_desc__i0__hw_desc0; _j0++) {
            int _len_sw_desc__i0__hw_desc1 = 1;
            sw_desc[_i0].hw_desc[_j0] = (struct pxad_desc_hw *) malloc(_len_sw_desc__i0__hw_desc1*sizeof(struct pxad_desc_hw));
            for(int _j1 = 0; _j1 < _len_sw_desc__i0__hw_desc1; _j1++) {
              sw_desc[_i0].hw_desc[_j0]->dcmd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        sw_desc[_i0].cyclic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_updater_desc(sw_desc,flags);
          for(int _aux = 0; _aux < _len_sw_desc0; _aux++) {
          free(*(sw_desc[_aux].hw_desc));
        free(sw_desc[_aux].hw_desc);
          }
          free(sw_desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long flags = 255;
          int _len_sw_desc0 = 65025;
          struct pxad_desc_sw * sw_desc = (struct pxad_desc_sw *) malloc(_len_sw_desc0*sizeof(struct pxad_desc_sw));
          for(int _i0 = 0; _i0 < _len_sw_desc0; _i0++) {
            sw_desc[_i0].nb_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sw_desc__i0__hw_desc0 = 1;
          sw_desc[_i0].hw_desc = (struct pxad_desc_hw **) malloc(_len_sw_desc__i0__hw_desc0*sizeof(struct pxad_desc_hw *));
          for(int _j0 = 0; _j0 < _len_sw_desc__i0__hw_desc0; _j0++) {
            int _len_sw_desc__i0__hw_desc1 = 1;
            sw_desc[_i0].hw_desc[_j0] = (struct pxad_desc_hw *) malloc(_len_sw_desc__i0__hw_desc1*sizeof(struct pxad_desc_hw));
            for(int _j1 = 0; _j1 < _len_sw_desc__i0__hw_desc1; _j1++) {
              sw_desc[_i0].hw_desc[_j0]->dcmd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        sw_desc[_i0].cyclic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_updater_desc(sw_desc,flags);
          for(int _aux = 0; _aux < _len_sw_desc0; _aux++) {
          free(*(sw_desc[_aux].hw_desc));
        free(sw_desc[_aux].hw_desc);
          }
          free(sw_desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long flags = 10;
          int _len_sw_desc0 = 100;
          struct pxad_desc_sw * sw_desc = (struct pxad_desc_sw *) malloc(_len_sw_desc0*sizeof(struct pxad_desc_sw));
          for(int _i0 = 0; _i0 < _len_sw_desc0; _i0++) {
            sw_desc[_i0].nb_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sw_desc__i0__hw_desc0 = 1;
          sw_desc[_i0].hw_desc = (struct pxad_desc_hw **) malloc(_len_sw_desc__i0__hw_desc0*sizeof(struct pxad_desc_hw *));
          for(int _j0 = 0; _j0 < _len_sw_desc__i0__hw_desc0; _j0++) {
            int _len_sw_desc__i0__hw_desc1 = 1;
            sw_desc[_i0].hw_desc[_j0] = (struct pxad_desc_hw *) malloc(_len_sw_desc__i0__hw_desc1*sizeof(struct pxad_desc_hw));
            for(int _j1 = 0; _j1 < _len_sw_desc__i0__hw_desc1; _j1++) {
              sw_desc[_i0].hw_desc[_j0]->dcmd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        sw_desc[_i0].cyclic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_updater_desc(sw_desc,flags);
          for(int _aux = 0; _aux < _len_sw_desc0; _aux++) {
          free(*(sw_desc[_aux].hw_desc));
        free(sw_desc[_aux].hw_desc);
          }
          free(sw_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

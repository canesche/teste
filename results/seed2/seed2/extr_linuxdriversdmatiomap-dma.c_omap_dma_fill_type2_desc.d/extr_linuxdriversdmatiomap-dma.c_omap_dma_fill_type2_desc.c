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
struct omap_type2_desc {int next_desc; int fn; int /*<<< orphan*/  en; int /*<<< orphan*/  csfi; int /*<<< orphan*/  cdfi; int /*<<< orphan*/  csei; int /*<<< orphan*/  cdei; int /*<<< orphan*/  cicr; int /*<<< orphan*/  addr; } ;
struct omap_sg {int t2_desc_paddr; int fn; int /*<<< orphan*/  fi; int /*<<< orphan*/  ei; int /*<<< orphan*/  addr; int /*<<< orphan*/  en; struct omap_type2_desc* t2_desc; } ;
struct omap_desc {int /*<<< orphan*/  fi; int /*<<< orphan*/  ei; int /*<<< orphan*/  cicr; struct omap_sg* sg; } ;
typedef  enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;

/* Variables and functions */
 int /*<<< orphan*/  CICR_BLOCK_IE ; 
 int /*<<< orphan*/  DESC_NTYPE_TYPE2 ; 
 int /*<<< orphan*/  DESC_NXT_DV_REFRESH ; 
 int /*<<< orphan*/  DESC_NXT_DV_REUSE ; 
 int /*<<< orphan*/  DESC_NXT_SV_REFRESH ; 
 int /*<<< orphan*/  DESC_NXT_SV_REUSE ; 
#define  DMA_DEV_TO_MEM 129 
#define  DMA_MEM_TO_DEV 128 

__attribute__((used)) static void omap_dma_fill_type2_desc(struct omap_desc *d, int idx,
				     enum dma_transfer_direction dir, bool last)
{
	struct omap_sg *sg = &d->sg[idx];
	struct omap_type2_desc *t2_desc = sg->t2_desc;

	if (idx)
		d->sg[idx - 1].t2_desc->next_desc = sg->t2_desc_paddr;
	if (last)
		t2_desc->next_desc = 0xfffffffc;

	t2_desc->en = sg->en;
	t2_desc->addr = sg->addr;
	t2_desc->fn = sg->fn & 0xffff;
	t2_desc->cicr = d->cicr;
	if (!last)
		t2_desc->cicr &= ~CICR_BLOCK_IE;

	switch (dir) {
	case DMA_DEV_TO_MEM:
		t2_desc->cdei = sg->ei;
		t2_desc->csei = d->ei;
		t2_desc->cdfi = sg->fi;
		t2_desc->csfi = d->fi;

		t2_desc->en |= DESC_NXT_DV_REFRESH;
		t2_desc->en |= DESC_NXT_SV_REUSE;
		break;
	case DMA_MEM_TO_DEV:
		t2_desc->cdei = d->ei;
		t2_desc->csei = sg->ei;
		t2_desc->cdfi = d->fi;
		t2_desc->csfi = sg->fi;

		t2_desc->en |= DESC_NXT_SV_REFRESH;
		t2_desc->en |= DESC_NXT_DV_REUSE;
		break;
	default:
		return;
	}

	t2_desc->en |= DESC_NTYPE_TYPE2;
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
          int idx = 100;
          enum dma_transfer_direction dir = 0;
          int last = 100;
          int _len_d0 = 1;
          struct omap_desc * d = (struct omap_desc *) malloc(_len_d0*sizeof(struct omap_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cicr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg0 = 1;
          d[_i0].sg = (struct omap_sg *) malloc(_len_d__i0__sg0*sizeof(struct omap_sg));
          for(int _j0 = 0; _j0 < _len_d__i0__sg0; _j0++) {
            d[_i0].sg->t2_desc_paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg_t2_desc0 = 1;
          d[_i0].sg->t2_desc = (struct omap_type2_desc *) malloc(_len_d__i0__sg_t2_desc0*sizeof(struct omap_type2_desc));
          for(int _j0 = 0; _j0 < _len_d__i0__sg_t2_desc0; _j0++) {
            d[_i0].sg->t2_desc->next_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->en = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cicr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          omap_dma_fill_type2_desc(d,idx,dir,last);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].sg);
          }
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          enum dma_transfer_direction dir = 0;
          int last = 255;
          int _len_d0 = 65025;
          struct omap_desc * d = (struct omap_desc *) malloc(_len_d0*sizeof(struct omap_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cicr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg0 = 1;
          d[_i0].sg = (struct omap_sg *) malloc(_len_d__i0__sg0*sizeof(struct omap_sg));
          for(int _j0 = 0; _j0 < _len_d__i0__sg0; _j0++) {
            d[_i0].sg->t2_desc_paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg_t2_desc0 = 1;
          d[_i0].sg->t2_desc = (struct omap_type2_desc *) malloc(_len_d__i0__sg_t2_desc0*sizeof(struct omap_type2_desc));
          for(int _j0 = 0; _j0 < _len_d__i0__sg_t2_desc0; _j0++) {
            d[_i0].sg->t2_desc->next_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->en = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cicr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          omap_dma_fill_type2_desc(d,idx,dir,last);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].sg);
          }
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          enum dma_transfer_direction dir = 0;
          int last = 10;
          int _len_d0 = 100;
          struct omap_desc * d = (struct omap_desc *) malloc(_len_d0*sizeof(struct omap_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cicr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg0 = 1;
          d[_i0].sg = (struct omap_sg *) malloc(_len_d__i0__sg0*sizeof(struct omap_sg));
          for(int _j0 = 0; _j0 < _len_d__i0__sg0; _j0++) {
            d[_i0].sg->t2_desc_paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->fi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->ei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__sg_t2_desc0 = 1;
          d[_i0].sg->t2_desc = (struct omap_type2_desc *) malloc(_len_d__i0__sg_t2_desc0*sizeof(struct omap_type2_desc));
          for(int _j0 = 0; _j0 < _len_d__i0__sg_t2_desc0; _j0++) {
            d[_i0].sg->t2_desc->next_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->fn = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->en = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdfi = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->csei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cdei = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->cicr = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].sg->t2_desc->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          omap_dma_fill_type2_desc(d,idx,dir,last);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].sg);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

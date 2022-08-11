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
struct omap_dmadev {struct omap_chan** lch_map; TYPE_1__* plat; scalar_t__ base; } ;
struct omap_chan {scalar_t__ channel_base; } ;
struct TYPE_2__ {unsigned int channel_stride; } ;

/* Variables and functions */

__attribute__((used)) static void omap_dma_assign(struct omap_dmadev *od, struct omap_chan *c,
	unsigned lch)
{
	c->channel_base = od->base + od->plat->channel_stride * lch;

	od->lch_map[lch] = c;
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
          unsigned int lch = 100;
          int _len_od0 = 1;
          struct omap_dmadev * od = (struct omap_dmadev *) malloc(_len_od0*sizeof(struct omap_dmadev));
          for(int _i0 = 0; _i0 < _len_od0; _i0++) {
              int _len_od__i0__lch_map0 = 1;
          od[_i0].lch_map = (struct omap_chan **) malloc(_len_od__i0__lch_map0*sizeof(struct omap_chan *));
          for(int _j0 = 0; _j0 < _len_od__i0__lch_map0; _j0++) {
            int _len_od__i0__lch_map1 = 1;
            od[_i0].lch_map[_j0] = (struct omap_chan *) malloc(_len_od__i0__lch_map1*sizeof(struct omap_chan));
            for(int _j1 = 0; _j1 < _len_od__i0__lch_map1; _j1++) {
              od[_i0].lch_map[_j0]->channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_od__i0__plat0 = 1;
          od[_i0].plat = (struct TYPE_2__ *) malloc(_len_od__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_od__i0__plat0; _j0++) {
            od[_i0].plat->channel_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        od[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct omap_chan * c = (struct omap_chan *) malloc(_len_c0*sizeof(struct omap_chan));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap_dma_assign(od,c,lch);
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(*(od[_aux].lch_map));
        free(od[_aux].lch_map);
          }
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(od[_aux].plat);
          }
          free(od);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int lch = 255;
          int _len_od0 = 65025;
          struct omap_dmadev * od = (struct omap_dmadev *) malloc(_len_od0*sizeof(struct omap_dmadev));
          for(int _i0 = 0; _i0 < _len_od0; _i0++) {
              int _len_od__i0__lch_map0 = 1;
          od[_i0].lch_map = (struct omap_chan **) malloc(_len_od__i0__lch_map0*sizeof(struct omap_chan *));
          for(int _j0 = 0; _j0 < _len_od__i0__lch_map0; _j0++) {
            int _len_od__i0__lch_map1 = 1;
            od[_i0].lch_map[_j0] = (struct omap_chan *) malloc(_len_od__i0__lch_map1*sizeof(struct omap_chan));
            for(int _j1 = 0; _j1 < _len_od__i0__lch_map1; _j1++) {
              od[_i0].lch_map[_j0]->channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_od__i0__plat0 = 1;
          od[_i0].plat = (struct TYPE_2__ *) malloc(_len_od__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_od__i0__plat0; _j0++) {
            od[_i0].plat->channel_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        od[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 65025;
          struct omap_chan * c = (struct omap_chan *) malloc(_len_c0*sizeof(struct omap_chan));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap_dma_assign(od,c,lch);
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(*(od[_aux].lch_map));
        free(od[_aux].lch_map);
          }
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(od[_aux].plat);
          }
          free(od);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int lch = 10;
          int _len_od0 = 100;
          struct omap_dmadev * od = (struct omap_dmadev *) malloc(_len_od0*sizeof(struct omap_dmadev));
          for(int _i0 = 0; _i0 < _len_od0; _i0++) {
              int _len_od__i0__lch_map0 = 1;
          od[_i0].lch_map = (struct omap_chan **) malloc(_len_od__i0__lch_map0*sizeof(struct omap_chan *));
          for(int _j0 = 0; _j0 < _len_od__i0__lch_map0; _j0++) {
            int _len_od__i0__lch_map1 = 1;
            od[_i0].lch_map[_j0] = (struct omap_chan *) malloc(_len_od__i0__lch_map1*sizeof(struct omap_chan));
            for(int _j1 = 0; _j1 < _len_od__i0__lch_map1; _j1++) {
              od[_i0].lch_map[_j0]->channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_od__i0__plat0 = 1;
          od[_i0].plat = (struct TYPE_2__ *) malloc(_len_od__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_od__i0__plat0; _j0++) {
            od[_i0].plat->channel_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        od[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 100;
          struct omap_chan * c = (struct omap_chan *) malloc(_len_c0*sizeof(struct omap_chan));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].channel_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          omap_dma_assign(od,c,lch);
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(*(od[_aux].lch_map));
        free(od[_aux].lch_map);
          }
          for(int _aux = 0; _aux < _len_od0; _aux++) {
          free(od[_aux].plat);
          }
          free(od);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct mux_hwclock {TYPE_2__* info; } ;
struct clockgen_pll_div {int dummy; } ;
struct clockgen {TYPE_1__* pll; } ;
struct TYPE_6__ {int flags; int pll; int div; } ;
struct TYPE_5__ {TYPE_3__* clksel; } ;
struct TYPE_4__ {struct clockgen_pll_div const* div; } ;

/* Variables and functions */
 int CLKSEL_VALID ; 

__attribute__((used)) static const struct clockgen_pll_div *get_pll_div(struct clockgen *cg,
						  struct mux_hwclock *hwc,
						  int idx)
{
	int pll, div;

	if (!(hwc->info->clksel[idx].flags & CLKSEL_VALID))
		return NULL;

	pll = hwc->info->clksel[idx].pll;
	div = hwc->info->clksel[idx].div;

	return &cg->pll[pll].div[div];
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
          int _len_cg0 = 1;
          struct clockgen * cg = (struct clockgen *) malloc(_len_cg0*sizeof(struct clockgen));
          for(int _i0 = 0; _i0 < _len_cg0; _i0++) {
              int _len_cg__i0__pll0 = 1;
          cg[_i0].pll = (struct TYPE_4__ *) malloc(_len_cg__i0__pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll0; _j0++) {
              int _len_cg__i0__pll_div0 = 1;
          cg[_i0].pll->div = (const struct clockgen_pll_div *) malloc(_len_cg__i0__pll_div0*sizeof(const struct clockgen_pll_div));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll_div0; _j0++) {
              }
          }
          }
          int _len_hwc0 = 1;
          struct mux_hwclock * hwc = (struct mux_hwclock *) malloc(_len_hwc0*sizeof(struct mux_hwclock));
          for(int _i0 = 0; _i0 < _len_hwc0; _i0++) {
              int _len_hwc__i0__info0 = 1;
          hwc[_i0].info = (struct TYPE_5__ *) malloc(_len_hwc__i0__info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info0; _j0++) {
              int _len_hwc__i0__info_clksel0 = 1;
          hwc[_i0].info->clksel = (struct TYPE_6__ *) malloc(_len_hwc__i0__info_clksel0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info_clksel0; _j0++) {
            hwc[_i0].info->clksel->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->pll = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const struct clockgen_pll_div * benchRet = get_pll_div(cg,hwc,idx);
          for(int _aux = 0; _aux < _len_cg0; _aux++) {
          free(cg[_aux].pll);
          }
          free(cg);
          for(int _aux = 0; _aux < _len_hwc0; _aux++) {
          free(hwc[_aux].info);
          }
          free(hwc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_cg0 = 65025;
          struct clockgen * cg = (struct clockgen *) malloc(_len_cg0*sizeof(struct clockgen));
          for(int _i0 = 0; _i0 < _len_cg0; _i0++) {
              int _len_cg__i0__pll0 = 1;
          cg[_i0].pll = (struct TYPE_4__ *) malloc(_len_cg__i0__pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll0; _j0++) {
              int _len_cg__i0__pll_div0 = 1;
          cg[_i0].pll->div = (const struct clockgen_pll_div *) malloc(_len_cg__i0__pll_div0*sizeof(const struct clockgen_pll_div));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll_div0; _j0++) {
              }
          }
          }
          int _len_hwc0 = 65025;
          struct mux_hwclock * hwc = (struct mux_hwclock *) malloc(_len_hwc0*sizeof(struct mux_hwclock));
          for(int _i0 = 0; _i0 < _len_hwc0; _i0++) {
              int _len_hwc__i0__info0 = 1;
          hwc[_i0].info = (struct TYPE_5__ *) malloc(_len_hwc__i0__info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info0; _j0++) {
              int _len_hwc__i0__info_clksel0 = 1;
          hwc[_i0].info->clksel = (struct TYPE_6__ *) malloc(_len_hwc__i0__info_clksel0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info_clksel0; _j0++) {
            hwc[_i0].info->clksel->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->pll = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const struct clockgen_pll_div * benchRet = get_pll_div(cg,hwc,idx);
          for(int _aux = 0; _aux < _len_cg0; _aux++) {
          free(cg[_aux].pll);
          }
          free(cg);
          for(int _aux = 0; _aux < _len_hwc0; _aux++) {
          free(hwc[_aux].info);
          }
          free(hwc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_cg0 = 100;
          struct clockgen * cg = (struct clockgen *) malloc(_len_cg0*sizeof(struct clockgen));
          for(int _i0 = 0; _i0 < _len_cg0; _i0++) {
              int _len_cg__i0__pll0 = 1;
          cg[_i0].pll = (struct TYPE_4__ *) malloc(_len_cg__i0__pll0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll0; _j0++) {
              int _len_cg__i0__pll_div0 = 1;
          cg[_i0].pll->div = (const struct clockgen_pll_div *) malloc(_len_cg__i0__pll_div0*sizeof(const struct clockgen_pll_div));
          for(int _j0 = 0; _j0 < _len_cg__i0__pll_div0; _j0++) {
              }
          }
          }
          int _len_hwc0 = 100;
          struct mux_hwclock * hwc = (struct mux_hwclock *) malloc(_len_hwc0*sizeof(struct mux_hwclock));
          for(int _i0 = 0; _i0 < _len_hwc0; _i0++) {
              int _len_hwc__i0__info0 = 1;
          hwc[_i0].info = (struct TYPE_5__ *) malloc(_len_hwc__i0__info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info0; _j0++) {
              int _len_hwc__i0__info_clksel0 = 1;
          hwc[_i0].info->clksel = (struct TYPE_6__ *) malloc(_len_hwc__i0__info_clksel0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwc__i0__info_clksel0; _j0++) {
            hwc[_i0].info->clksel->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->pll = ((-2 * (next_i()%2)) + 1) * next_i();
        hwc[_i0].info->clksel->div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const struct clockgen_pll_div * benchRet = get_pll_div(cg,hwc,idx);
          for(int _aux = 0; _aux < _len_cg0; _aux++) {
          free(cg[_aux].pll);
          }
          free(cg);
          for(int _aux = 0; _aux < _len_hwc0; _aux++) {
          free(hwc[_aux].info);
          }
          free(hwc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

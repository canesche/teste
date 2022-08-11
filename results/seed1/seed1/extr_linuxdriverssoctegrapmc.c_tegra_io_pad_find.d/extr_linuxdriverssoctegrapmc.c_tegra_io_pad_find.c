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
struct tegra_pmc {TYPE_1__* soc; } ;
struct tegra_io_pad_soc {int id; } ;
typedef  enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;
struct TYPE_2__ {unsigned int num_io_pads; struct tegra_io_pad_soc const* io_pads; } ;

/* Variables and functions */

__attribute__((used)) static const struct tegra_io_pad_soc *
tegra_io_pad_find(struct tegra_pmc *pmc, enum tegra_io_pad id)
{
	unsigned int i;

	for (i = 0; i < pmc->soc->num_io_pads; i++)
		if (pmc->soc->io_pads[i].id == id)
			return &pmc->soc->io_pads[i];

	return NULL;
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
          enum tegra_io_pad id = 0;
          int _len_pmc0 = 1;
          struct tegra_pmc * pmc = (struct tegra_pmc *) malloc(_len_pmc0*sizeof(struct tegra_pmc));
          for(int _i0 = 0; _i0 < _len_pmc0; _i0++) {
              int _len_pmc__i0__soc0 = 1;
          pmc[_i0].soc = (struct TYPE_2__ *) malloc(_len_pmc__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc0; _j0++) {
            pmc[_i0].soc->num_io_pads = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmc__i0__soc_io_pads0 = 1;
          pmc[_i0].soc->io_pads = (const struct tegra_io_pad_soc *) malloc(_len_pmc__i0__soc_io_pads0*sizeof(const struct tegra_io_pad_soc));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc_io_pads0; _j0++) {
              }
          }
          }
          const struct tegra_io_pad_soc * benchRet = tegra_io_pad_find(pmc,id);
          for(int _aux = 0; _aux < _len_pmc0; _aux++) {
          free(pmc[_aux].soc);
          }
          free(pmc);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum tegra_io_pad id = 0;
          int _len_pmc0 = 65025;
          struct tegra_pmc * pmc = (struct tegra_pmc *) malloc(_len_pmc0*sizeof(struct tegra_pmc));
          for(int _i0 = 0; _i0 < _len_pmc0; _i0++) {
              int _len_pmc__i0__soc0 = 1;
          pmc[_i0].soc = (struct TYPE_2__ *) malloc(_len_pmc__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc0; _j0++) {
            pmc[_i0].soc->num_io_pads = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmc__i0__soc_io_pads0 = 1;
          pmc[_i0].soc->io_pads = (const struct tegra_io_pad_soc *) malloc(_len_pmc__i0__soc_io_pads0*sizeof(const struct tegra_io_pad_soc));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc_io_pads0; _j0++) {
              }
          }
          }
          const struct tegra_io_pad_soc * benchRet = tegra_io_pad_find(pmc,id);
          for(int _aux = 0; _aux < _len_pmc0; _aux++) {
          free(pmc[_aux].soc);
          }
          free(pmc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum tegra_io_pad id = 0;
          int _len_pmc0 = 100;
          struct tegra_pmc * pmc = (struct tegra_pmc *) malloc(_len_pmc0*sizeof(struct tegra_pmc));
          for(int _i0 = 0; _i0 < _len_pmc0; _i0++) {
              int _len_pmc__i0__soc0 = 1;
          pmc[_i0].soc = (struct TYPE_2__ *) malloc(_len_pmc__i0__soc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc0; _j0++) {
            pmc[_i0].soc->num_io_pads = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmc__i0__soc_io_pads0 = 1;
          pmc[_i0].soc->io_pads = (const struct tegra_io_pad_soc *) malloc(_len_pmc__i0__soc_io_pads0*sizeof(const struct tegra_io_pad_soc));
          for(int _j0 = 0; _j0 < _len_pmc__i0__soc_io_pads0; _j0++) {
              }
          }
          }
          const struct tegra_io_pad_soc * benchRet = tegra_io_pad_find(pmc,id);
          for(int _aux = 0; _aux < _len_pmc0; _aux++) {
          free(pmc[_aux].soc);
          }
          free(pmc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

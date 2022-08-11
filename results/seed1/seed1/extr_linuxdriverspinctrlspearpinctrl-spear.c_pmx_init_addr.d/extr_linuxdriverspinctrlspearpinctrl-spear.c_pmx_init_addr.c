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
typedef  int u16 ;
struct spear_pingroup {int nmodemuxs; struct spear_modemux* modemuxs; } ;
struct spear_pinctrl_machdata {int ngroups; struct spear_pingroup** groups; } ;
struct spear_modemux {int nmuxregs; TYPE_1__* muxregs; } ;
struct TYPE_2__ {int reg; } ;

/* Variables and functions */

void pmx_init_addr(struct spear_pinctrl_machdata *machdata, u16 reg)
{
	struct spear_pingroup *pgroup;
	struct spear_modemux *modemux;
	int i, j, group;

	for (group = 0; group < machdata->ngroups; group++) {
		pgroup = machdata->groups[group];

		for (i = 0; i < pgroup->nmodemuxs; i++) {
			modemux = &pgroup->modemuxs[i];

			for (j = 0; j < modemux->nmuxregs; j++)
				if (modemux->muxregs[j].reg == 0xFFFF)
					modemux->muxregs[j].reg = reg;
		}
	}
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
          int reg = 100;
          int _len_machdata0 = 1;
          struct spear_pinctrl_machdata * machdata = (struct spear_pinctrl_machdata *) malloc(_len_machdata0*sizeof(struct spear_pinctrl_machdata));
          for(int _i0 = 0; _i0 < _len_machdata0; _i0++) {
            machdata[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups0 = 1;
          machdata[_i0].groups = (struct spear_pingroup **) malloc(_len_machdata__i0__groups0*sizeof(struct spear_pingroup *));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups0; _j0++) {
            int _len_machdata__i0__groups1 = 1;
            machdata[_i0].groups[_j0] = (struct spear_pingroup *) malloc(_len_machdata__i0__groups1*sizeof(struct spear_pingroup));
            for(int _j1 = 0; _j1 < _len_machdata__i0__groups1; _j1++) {
              machdata[_i0].groups[_j0]->nmodemuxs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs = (struct spear_modemux *) malloc(_len_machdata__i0__groups__j0__modemuxs0*sizeof(struct spear_modemux));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->nmuxregs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs_muxregs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs->muxregs = (struct TYPE_2__ *) malloc(_len_machdata__i0__groups__j0__modemuxs_muxregs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs_muxregs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->muxregs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          pmx_init_addr(machdata,reg);
          for(int _aux = 0; _aux < _len_machdata0; _aux++) {
          free(*(machdata[_aux].groups));
        free(machdata[_aux].groups);
          }
          free(machdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reg = 255;
          int _len_machdata0 = 65025;
          struct spear_pinctrl_machdata * machdata = (struct spear_pinctrl_machdata *) malloc(_len_machdata0*sizeof(struct spear_pinctrl_machdata));
          for(int _i0 = 0; _i0 < _len_machdata0; _i0++) {
            machdata[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups0 = 1;
          machdata[_i0].groups = (struct spear_pingroup **) malloc(_len_machdata__i0__groups0*sizeof(struct spear_pingroup *));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups0; _j0++) {
            int _len_machdata__i0__groups1 = 1;
            machdata[_i0].groups[_j0] = (struct spear_pingroup *) malloc(_len_machdata__i0__groups1*sizeof(struct spear_pingroup));
            for(int _j1 = 0; _j1 < _len_machdata__i0__groups1; _j1++) {
              machdata[_i0].groups[_j0]->nmodemuxs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs = (struct spear_modemux *) malloc(_len_machdata__i0__groups__j0__modemuxs0*sizeof(struct spear_modemux));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->nmuxregs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs_muxregs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs->muxregs = (struct TYPE_2__ *) malloc(_len_machdata__i0__groups__j0__modemuxs_muxregs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs_muxregs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->muxregs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          pmx_init_addr(machdata,reg);
          for(int _aux = 0; _aux < _len_machdata0; _aux++) {
          free(*(machdata[_aux].groups));
        free(machdata[_aux].groups);
          }
          free(machdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reg = 10;
          int _len_machdata0 = 100;
          struct spear_pinctrl_machdata * machdata = (struct spear_pinctrl_machdata *) malloc(_len_machdata0*sizeof(struct spear_pinctrl_machdata));
          for(int _i0 = 0; _i0 < _len_machdata0; _i0++) {
            machdata[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups0 = 1;
          machdata[_i0].groups = (struct spear_pingroup **) malloc(_len_machdata__i0__groups0*sizeof(struct spear_pingroup *));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups0; _j0++) {
            int _len_machdata__i0__groups1 = 1;
            machdata[_i0].groups[_j0] = (struct spear_pingroup *) malloc(_len_machdata__i0__groups1*sizeof(struct spear_pingroup));
            for(int _j1 = 0; _j1 < _len_machdata__i0__groups1; _j1++) {
              machdata[_i0].groups[_j0]->nmodemuxs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs = (struct spear_modemux *) malloc(_len_machdata__i0__groups__j0__modemuxs0*sizeof(struct spear_modemux));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->nmuxregs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_machdata__i0__groups__j0__modemuxs_muxregs0 = 1;
          machdata[_i0].groups[_j0]->modemuxs->muxregs = (struct TYPE_2__ *) malloc(_len_machdata__i0__groups__j0__modemuxs_muxregs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_machdata__i0__groups__j0__modemuxs_muxregs0; _j0++) {
            machdata[_i0].groups[_j0]->modemuxs->muxregs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          pmx_init_addr(machdata,reg);
          for(int _aux = 0; _aux < _len_machdata0; _aux++) {
          free(*(machdata[_aux].groups));
        free(machdata[_aux].groups);
          }
          free(machdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

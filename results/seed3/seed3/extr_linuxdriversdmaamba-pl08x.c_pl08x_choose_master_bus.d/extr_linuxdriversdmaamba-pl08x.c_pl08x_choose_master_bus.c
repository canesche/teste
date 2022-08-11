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
typedef  int u32 ;
struct pl08x_bus_data {scalar_t__ buswidth; } ;
struct pl08x_lli_build_data {struct pl08x_bus_data dstbus; struct pl08x_bus_data srcbus; } ;
struct pl08x_driver_data {TYPE_1__* vd; } ;
struct TYPE_2__ {scalar_t__ ftdmac020; } ;

/* Variables and functions */
 int PL080_CONTROL_DST_INCR ; 
 int PL080_CONTROL_SRC_INCR ; 

__attribute__((used)) static void pl08x_choose_master_bus(struct pl08x_driver_data *pl08x,
				    struct pl08x_lli_build_data *bd,
				    struct pl08x_bus_data **mbus,
				    struct pl08x_bus_data **sbus,
				    u32 cctl)
{
	bool dst_incr;
	bool src_incr;

	/*
	 * The FTDMAC020 only supports memory-to-memory transfer, so
	 * source and destination always increase.
	 */
	if (pl08x->vd->ftdmac020) {
		dst_incr = true;
		src_incr = true;
	} else {
		dst_incr = !!(cctl & PL080_CONTROL_DST_INCR);
		src_incr = !!(cctl & PL080_CONTROL_SRC_INCR);
	}

	/*
	 * If either bus is not advancing, i.e. it is a peripheral, that
	 * one becomes master
	 */
	if (!dst_incr) {
		*mbus = &bd->dstbus;
		*sbus = &bd->srcbus;
	} else if (!src_incr) {
		*mbus = &bd->srcbus;
		*sbus = &bd->dstbus;
	} else {
		if (bd->dstbus.buswidth >= bd->srcbus.buswidth) {
			*mbus = &bd->dstbus;
			*sbus = &bd->srcbus;
		} else {
			*mbus = &bd->srcbus;
			*sbus = &bd->dstbus;
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
          int cctl = 100;
          int _len_pl08x0 = 1;
          struct pl08x_driver_data * pl08x = (struct pl08x_driver_data *) malloc(_len_pl08x0*sizeof(struct pl08x_driver_data));
          for(int _i0 = 0; _i0 < _len_pl08x0; _i0++) {
              int _len_pl08x__i0__vd0 = 1;
          pl08x[_i0].vd = (struct TYPE_2__ *) malloc(_len_pl08x__i0__vd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pl08x__i0__vd0; _j0++) {
            pl08x[_i0].vd->ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bd0 = 1;
          struct pl08x_lli_build_data * bd = (struct pl08x_lli_build_data *) malloc(_len_bd0*sizeof(struct pl08x_lli_build_data));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].dstbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].srcbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mbus0 = 1;
          struct pl08x_bus_data ** mbus = (struct pl08x_bus_data **) malloc(_len_mbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_mbus0; _i0++) {
            int _len_mbus1 = 1;
            mbus[_i0] = (struct pl08x_bus_data *) malloc(_len_mbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_mbus1; _i1++) {
              mbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sbus0 = 1;
          struct pl08x_bus_data ** sbus = (struct pl08x_bus_data **) malloc(_len_sbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_sbus0; _i0++) {
            int _len_sbus1 = 1;
            sbus[_i0] = (struct pl08x_bus_data *) malloc(_len_sbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_sbus1; _i1++) {
              sbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pl08x_choose_master_bus(pl08x,bd,mbus,sbus,cctl);
          for(int _aux = 0; _aux < _len_pl08x0; _aux++) {
          free(pl08x[_aux].vd);
          }
          free(pl08x);
          free(bd);
          for(int i1 = 0; i1 < _len_mbus0; i1++) {
            int _len_mbus1 = 1;
              free(mbus[i1]);
          }
          free(mbus);
          for(int i1 = 0; i1 < _len_sbus0; i1++) {
            int _len_sbus1 = 1;
              free(sbus[i1]);
          }
          free(sbus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cctl = 255;
          int _len_pl08x0 = 65025;
          struct pl08x_driver_data * pl08x = (struct pl08x_driver_data *) malloc(_len_pl08x0*sizeof(struct pl08x_driver_data));
          for(int _i0 = 0; _i0 < _len_pl08x0; _i0++) {
              int _len_pl08x__i0__vd0 = 1;
          pl08x[_i0].vd = (struct TYPE_2__ *) malloc(_len_pl08x__i0__vd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pl08x__i0__vd0; _j0++) {
            pl08x[_i0].vd->ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bd0 = 65025;
          struct pl08x_lli_build_data * bd = (struct pl08x_lli_build_data *) malloc(_len_bd0*sizeof(struct pl08x_lli_build_data));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].dstbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].srcbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mbus0 = 65025;
          struct pl08x_bus_data ** mbus = (struct pl08x_bus_data **) malloc(_len_mbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_mbus0; _i0++) {
            int _len_mbus1 = 1;
            mbus[_i0] = (struct pl08x_bus_data *) malloc(_len_mbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_mbus1; _i1++) {
              mbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sbus0 = 65025;
          struct pl08x_bus_data ** sbus = (struct pl08x_bus_data **) malloc(_len_sbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_sbus0; _i0++) {
            int _len_sbus1 = 1;
            sbus[_i0] = (struct pl08x_bus_data *) malloc(_len_sbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_sbus1; _i1++) {
              sbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pl08x_choose_master_bus(pl08x,bd,mbus,sbus,cctl);
          for(int _aux = 0; _aux < _len_pl08x0; _aux++) {
          free(pl08x[_aux].vd);
          }
          free(pl08x);
          free(bd);
          for(int i1 = 0; i1 < _len_mbus0; i1++) {
            int _len_mbus1 = 1;
              free(mbus[i1]);
          }
          free(mbus);
          for(int i1 = 0; i1 < _len_sbus0; i1++) {
            int _len_sbus1 = 1;
              free(sbus[i1]);
          }
          free(sbus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cctl = 10;
          int _len_pl08x0 = 100;
          struct pl08x_driver_data * pl08x = (struct pl08x_driver_data *) malloc(_len_pl08x0*sizeof(struct pl08x_driver_data));
          for(int _i0 = 0; _i0 < _len_pl08x0; _i0++) {
              int _len_pl08x__i0__vd0 = 1;
          pl08x[_i0].vd = (struct TYPE_2__ *) malloc(_len_pl08x__i0__vd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pl08x__i0__vd0; _j0++) {
            pl08x[_i0].vd->ftdmac020 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bd0 = 100;
          struct pl08x_lli_build_data * bd = (struct pl08x_lli_build_data *) malloc(_len_bd0*sizeof(struct pl08x_lli_build_data));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
            bd[_i0].dstbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
        bd[_i0].srcbus.buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mbus0 = 100;
          struct pl08x_bus_data ** mbus = (struct pl08x_bus_data **) malloc(_len_mbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_mbus0; _i0++) {
            int _len_mbus1 = 1;
            mbus[_i0] = (struct pl08x_bus_data *) malloc(_len_mbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_mbus1; _i1++) {
              mbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sbus0 = 100;
          struct pl08x_bus_data ** sbus = (struct pl08x_bus_data **) malloc(_len_sbus0*sizeof(struct pl08x_bus_data *));
          for(int _i0 = 0; _i0 < _len_sbus0; _i0++) {
            int _len_sbus1 = 1;
            sbus[_i0] = (struct pl08x_bus_data *) malloc(_len_sbus1*sizeof(struct pl08x_bus_data));
            for(int _i1 = 0; _i1 < _len_sbus1; _i1++) {
              sbus[_i0][_i1].buswidth = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pl08x_choose_master_bus(pl08x,bd,mbus,sbus,cctl);
          for(int _aux = 0; _aux < _len_pl08x0; _aux++) {
          free(pl08x[_aux].vd);
          }
          free(pl08x);
          free(bd);
          for(int i1 = 0; i1 < _len_mbus0; i1++) {
            int _len_mbus1 = 1;
              free(mbus[i1]);
          }
          free(mbus);
          for(int i1 = 0; i1 < _len_sbus0; i1++) {
            int _len_sbus1 = 1;
              free(sbus[i1]);
          }
          free(sbus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

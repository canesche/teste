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
typedef  int /*<<< orphan*/  u8 ;
struct tc_configuration {TYPE_1__* path; } ;
struct ixgbe_dcb_config {struct tc_configuration* tc_config; } ;
struct TYPE_2__ {int /*<<< orphan*/  prio_type; } ;

/* Variables and functions */
 int MAX_TRAFFIC_CLASS ; 

void ixgbe_dcb_unpack_prio(struct ixgbe_dcb_config *cfg, int direction,
			    u8 *ptype)
{
	struct tc_configuration *tc_config = &cfg->tc_config[0];
	int tc;

	for (tc = 0; tc < MAX_TRAFFIC_CLASS; tc++)
		ptype[tc] = tc_config[tc].path[direction].prio_type;
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
          int direction = 100;
          int _len_cfg0 = 1;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
              int _len_cfg__i0__tc_config_path0 = 1;
          cfg[_i0].tc_config->path = (struct TYPE_2__ *) malloc(_len_cfg__i0__tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config_path0; _j0++) {
            cfg[_i0].tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptype0 = 1;
          int * ptype = (int *) malloc(_len_ptype0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptype0; _i0++) {
            ptype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_prio(cfg,direction,ptype);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(ptype);
        
        break;
    }
    // big-arr
    case 1:
    {
          int direction = 255;
          int _len_cfg0 = 65025;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
              int _len_cfg__i0__tc_config_path0 = 1;
          cfg[_i0].tc_config->path = (struct TYPE_2__ *) malloc(_len_cfg__i0__tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config_path0; _j0++) {
            cfg[_i0].tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptype0 = 65025;
          int * ptype = (int *) malloc(_len_ptype0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptype0; _i0++) {
            ptype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_prio(cfg,direction,ptype);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(ptype);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int direction = 10;
          int _len_cfg0 = 100;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
              int _len_cfg__i0__tc_config_path0 = 1;
          cfg[_i0].tc_config->path = (struct TYPE_2__ *) malloc(_len_cfg__i0__tc_config_path0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config_path0; _j0++) {
            cfg[_i0].tc_config->path->prio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ptype0 = 100;
          int * ptype = (int *) malloc(_len_ptype0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptype0; _i0++) {
            ptype[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_prio(cfg,direction,ptype);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(ptype);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {int ui_label; } ;
struct pp_power_state {TYPE_1__ classification; } ;
struct pp_hwmgr {int num_ps; scalar_t__ ps_size; struct pp_power_state* ps; } ;
typedef  enum PP_StateUILabel { ____Placeholder_PP_StateUILabel } PP_StateUILabel ;

/* Variables and functions */
 int EINVAL ; 
#define  PP_StateUILabel_Balanced 129 
#define  PP_StateUILabel_Battery 128 
 int PP_StateUILabel_Performance ; 

int psm_set_user_performance_state(struct pp_hwmgr *hwmgr,
					enum PP_StateUILabel label_id,
					struct pp_power_state **state)
{
	int table_entries;
	int i;

	if (!hwmgr->ps)
		return 0;

	table_entries = hwmgr->num_ps;
	*state = hwmgr->ps;

restart_search:
	for (i = 0; i < table_entries; i++) {
		if ((*state)->classification.ui_label & label_id)
			return 0;
		*state = (struct pp_power_state *)((uintptr_t)*state + hwmgr->ps_size);
	}

	switch (label_id) {
	case PP_StateUILabel_Battery:
	case PP_StateUILabel_Balanced:
		label_id = PP_StateUILabel_Performance;
		goto restart_search;
	default:
		break;
	}
	return -EINVAL;
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
          enum PP_StateUILabel label_id = 0;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].num_ps = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].ps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__ps0 = 1;
          hwmgr[_i0].ps = (struct pp_power_state *) malloc(_len_hwmgr__i0__ps0*sizeof(struct pp_power_state));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__ps0; _j0++) {
            hwmgr[_i0].ps->classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 1;
          struct pp_power_state ** state = (struct pp_power_state **) malloc(_len_state0*sizeof(struct pp_power_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pp_power_state *) malloc(_len_state1*sizeof(struct pp_power_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = psm_set_user_performance_state(hwmgr,label_id,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].ps);
          }
          free(hwmgr);
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              free(state[i1]);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum PP_StateUILabel label_id = 0;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].num_ps = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].ps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__ps0 = 1;
          hwmgr[_i0].ps = (struct pp_power_state *) malloc(_len_hwmgr__i0__ps0*sizeof(struct pp_power_state));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__ps0; _j0++) {
            hwmgr[_i0].ps->classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 65025;
          struct pp_power_state ** state = (struct pp_power_state **) malloc(_len_state0*sizeof(struct pp_power_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pp_power_state *) malloc(_len_state1*sizeof(struct pp_power_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = psm_set_user_performance_state(hwmgr,label_id,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].ps);
          }
          free(hwmgr);
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              free(state[i1]);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum PP_StateUILabel label_id = 0;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].num_ps = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].ps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__ps0 = 1;
          hwmgr[_i0].ps = (struct pp_power_state *) malloc(_len_hwmgr__i0__ps0*sizeof(struct pp_power_state));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__ps0; _j0++) {
            hwmgr[_i0].ps->classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 100;
          struct pp_power_state ** state = (struct pp_power_state **) malloc(_len_state0*sizeof(struct pp_power_state *));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            int _len_state1 = 1;
            state[_i0] = (struct pp_power_state *) malloc(_len_state1*sizeof(struct pp_power_state));
            for(int _i1 = 0; _i1 < _len_state1; _i1++) {
              state[_i0][_i1].classification.ui_label = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = psm_set_user_performance_state(hwmgr,label_id,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].ps);
          }
          free(hwmgr);
          for(int i1 = 0; i1 < _len_state0; i1++) {
            int _len_state1 = 1;
              free(state[i1]);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

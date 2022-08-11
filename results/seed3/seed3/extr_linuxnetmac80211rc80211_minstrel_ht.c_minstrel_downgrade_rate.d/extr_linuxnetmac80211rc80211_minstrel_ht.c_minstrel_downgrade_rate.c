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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct minstrel_ht_sta {TYPE_1__* groups; int /*<<< orphan*/ * supported; } ;
struct TYPE_4__ {scalar_t__ streams; } ;
struct TYPE_3__ {int* max_group_tp_rate; } ;

/* Variables and functions */
 int MCS_GROUP_RATES ; 
 TYPE_2__* minstrel_mcs_groups ; 

__attribute__((used)) static void
minstrel_downgrade_rate(struct minstrel_ht_sta *mi, u16 *idx, bool primary)
{
	int group, orig_group;

	orig_group = group = *idx / MCS_GROUP_RATES;
	while (group > 0) {
		group--;

		if (!mi->supported[group])
			continue;

		if (minstrel_mcs_groups[group].streams >
		    minstrel_mcs_groups[orig_group].streams)
			continue;

		if (primary)
			*idx = mi->groups[group].max_group_tp_rate[0];
		else
			*idx = mi->groups[group].max_group_tp_rate[1];
		break;
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
          int primary = 100;
          int _len_mi0 = 1;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_3__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_max_group_tp_rate0 = 1;
          mi[_i0].groups->max_group_tp_rate = (int *) malloc(_len_mi__i0__groups_max_group_tp_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_max_group_tp_rate0; _j0++) {
            mi[_i0].groups->max_group_tp_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mi__i0__supported0 = 1;
          mi[_i0].supported = (int *) malloc(_len_mi__i0__supported0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__supported0; _j0++) {
            mi[_i0].supported[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_idx0 = 1;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          minstrel_downgrade_rate(mi,idx,primary);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].supported);
          }
          free(mi);
          free(idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int primary = 255;
          int _len_mi0 = 65025;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_3__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_max_group_tp_rate0 = 1;
          mi[_i0].groups->max_group_tp_rate = (int *) malloc(_len_mi__i0__groups_max_group_tp_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_max_group_tp_rate0; _j0++) {
            mi[_i0].groups->max_group_tp_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mi__i0__supported0 = 1;
          mi[_i0].supported = (int *) malloc(_len_mi__i0__supported0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__supported0; _j0++) {
            mi[_i0].supported[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_idx0 = 65025;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          minstrel_downgrade_rate(mi,idx,primary);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].supported);
          }
          free(mi);
          free(idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int primary = 10;
          int _len_mi0 = 100;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_3__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_max_group_tp_rate0 = 1;
          mi[_i0].groups->max_group_tp_rate = (int *) malloc(_len_mi__i0__groups_max_group_tp_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_max_group_tp_rate0; _j0++) {
            mi[_i0].groups->max_group_tp_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mi__i0__supported0 = 1;
          mi[_i0].supported = (int *) malloc(_len_mi__i0__supported0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mi__i0__supported0; _j0++) {
            mi[_i0].supported[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_idx0 = 100;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          minstrel_downgrade_rate(mi,idx,primary);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].supported);
          }
          free(mi);
          free(idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

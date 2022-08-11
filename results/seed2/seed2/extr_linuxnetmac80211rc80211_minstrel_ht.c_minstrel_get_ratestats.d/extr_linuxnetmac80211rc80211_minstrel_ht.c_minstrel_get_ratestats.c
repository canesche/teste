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
struct minstrel_rate_stats {int dummy; } ;
struct minstrel_ht_sta {TYPE_1__* groups; } ;
struct TYPE_2__ {struct minstrel_rate_stats* rates; } ;

/* Variables and functions */
 int MCS_GROUP_RATES ; 

__attribute__((used)) static inline struct minstrel_rate_stats *
minstrel_get_ratestats(struct minstrel_ht_sta *mi, int index)
{
	return &mi->groups[index / MCS_GROUP_RATES].rates[index % MCS_GROUP_RATES];
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
          int index = 100;
          int _len_mi0 = 1;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_2__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_rates0 = 1;
          mi[_i0].groups->rates = (struct minstrel_rate_stats *) malloc(_len_mi__i0__groups_rates0*sizeof(struct minstrel_rate_stats));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_rates0; _j0++) {
            mi[_i0].groups->rates->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct minstrel_rate_stats * benchRet = minstrel_get_ratestats(mi,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          free(mi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_mi0 = 65025;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_2__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_rates0 = 1;
          mi[_i0].groups->rates = (struct minstrel_rate_stats *) malloc(_len_mi__i0__groups_rates0*sizeof(struct minstrel_rate_stats));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_rates0; _j0++) {
            mi[_i0].groups->rates->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct minstrel_rate_stats * benchRet = minstrel_get_ratestats(mi,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          free(mi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_mi0 = 100;
          struct minstrel_ht_sta * mi = (struct minstrel_ht_sta *) malloc(_len_mi0*sizeof(struct minstrel_ht_sta));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__groups0 = 1;
          mi[_i0].groups = (struct TYPE_2__ *) malloc(_len_mi__i0__groups0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups0; _j0++) {
              int _len_mi__i0__groups_rates0 = 1;
          mi[_i0].groups->rates = (struct minstrel_rate_stats *) malloc(_len_mi__i0__groups_rates0*sizeof(struct minstrel_rate_stats));
          for(int _j0 = 0; _j0 < _len_mi__i0__groups_rates0; _j0++) {
            mi[_i0].groups->rates->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct minstrel_rate_stats * benchRet = minstrel_get_ratestats(mi,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].groups);
          }
          free(mi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

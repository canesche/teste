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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int nb_channels; TYPE_1__* chstats; } ;
struct TYPE_4__ {int imask; scalar_t__ nb_denormals; scalar_t__ nb_infs; scalar_t__ nb_nans; scalar_t__ nb_samples; scalar_t__ zero_runs; scalar_t__ max_count; scalar_t__ min_count; scalar_t__ mask; scalar_t__ diff1_sum_x2; scalar_t__ diff1_sum; scalar_t__ max_runs; scalar_t__ min_runs; scalar_t__ max_run; scalar_t__ min_run; scalar_t__ avg_sigma_x2; scalar_t__ sigma_x2; scalar_t__ sigma_x; void* max_diff; void* min_diff; void* min_non_zero; void* max_sigma_x2; void* nmax; void* max; void* min_sigma_x2; void* nmin; void* min; } ;
typedef  TYPE_1__ ChannelStats ;
typedef  TYPE_2__ AudioStatsContext ;

/* Variables and functions */
 void* DBL_MAX ; 
 void* DBL_MIN ; 

__attribute__((used)) static void reset_stats(AudioStatsContext *s)
{
    int c;

    for (c = 0; c < s->nb_channels; c++) {
        ChannelStats *p = &s->chstats[c];

        p->min = p->nmin = p->min_sigma_x2 = DBL_MAX;
        p->max = p->nmax = p->max_sigma_x2 = DBL_MIN;
        p->min_non_zero = DBL_MAX;
        p->min_diff = DBL_MAX;
        p->max_diff = DBL_MIN;
        p->sigma_x = 0;
        p->sigma_x2 = 0;
        p->avg_sigma_x2 = 0;
        p->min_run = 0;
        p->max_run = 0;
        p->min_runs = 0;
        p->max_runs = 0;
        p->diff1_sum = 0;
        p->diff1_sum_x2 = 0;
        p->mask = 0;
        p->imask = 0xFFFFFFFFFFFFFFFF;
        p->min_count = 0;
        p->max_count = 0;
        p->zero_runs = 0;
        p->nb_samples = 0;
        p->nb_nans = 0;
        p->nb_infs = 0;
        p->nb_denormals = 0;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__chstats0 = 1;
          s[_i0].chstats = (struct TYPE_4__ *) malloc(_len_s__i0__chstats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__chstats0; _j0++) {
            s[_i0].chstats->imask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_denormals = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_infs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_nans = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->zero_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->avg_sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_stats(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chstats);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__chstats0 = 1;
          s[_i0].chstats = (struct TYPE_4__ *) malloc(_len_s__i0__chstats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__chstats0; _j0++) {
            s[_i0].chstats->imask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_denormals = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_infs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_nans = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->zero_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->avg_sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_stats(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chstats);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__chstats0 = 1;
          s[_i0].chstats = (struct TYPE_4__ *) malloc(_len_s__i0__chstats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__chstats0; _j0++) {
            s[_i0].chstats->imask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_denormals = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_infs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_nans = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->nb_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->zero_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->mask = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->diff1_sum = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_runs = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->max_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->min_run = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->avg_sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chstats->sigma_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_stats(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].chstats);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

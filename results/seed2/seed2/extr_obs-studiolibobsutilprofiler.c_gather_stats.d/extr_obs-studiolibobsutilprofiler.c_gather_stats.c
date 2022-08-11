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
typedef  double uint64_t ;
struct TYPE_4__ {double count; double time_delta; } ;
typedef  TYPE_1__ profiler_time_entry ;
struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
typedef  TYPE_2__ profiler_time_entries_t ;

/* Variables and functions */

__attribute__((used)) static void gather_stats(uint64_t expected_time_between_calls,
		profiler_time_entries_t *entries,
		uint64_t calls, uint64_t *percentile99, uint64_t *median,
		double *percent_within_bounds)
{
	if (!entries->num) {
		*percentile99 = 0;
		*median = 0;
		*percent_within_bounds = 0.;
		return;
	}

	/*if (entry_buffer->num > 2)
		blog(LOG_INFO, "buffer-size %lu, overall count %llu\n"
				"map-size %lu, occupied %lu, probes %lu",
				entry_buffer->num, calls,
				map->size, map->occupied,
				map->max_probe_count);*/
	uint64_t accu = 0;
	for (size_t i = 0; i < entries->num; i++) {
		uint64_t old_accu = accu;
		accu += entries->array[i].count;

		if (old_accu < calls * 0.01 && accu >= calls * 0.01)
			*percentile99 = entries->array[i].time_delta;
		else if (old_accu < calls * 0.5 && accu >= calls * 0.5) {
			*median = entries->array[i].time_delta;
			break;
		}
	}

	*percent_within_bounds = 0.;
	if (!expected_time_between_calls)
		return;

	accu = 0;
	for (size_t i = 0; i < entries->num; i++) {
		profiler_time_entry *entry = &entries->array[i];
		if (entry->time_delta < expected_time_between_calls)
			break;

		accu += entry->count;
	}
	*percent_within_bounds = (1. - (double)accu / calls) * 100;
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
          double expected_time_between_calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_entries0 = 1;
          struct TYPE_5__ * entries = (struct TYPE_5__ *) malloc(_len_entries0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entries__i0__array0 = 1;
          entries[_i0].array = (struct TYPE_4__ *) malloc(_len_entries__i0__array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entries__i0__array0; _j0++) {
            entries[_i0].array->count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        entries[_i0].array->time_delta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_percentile990 = 1;
          double * percentile99 = (double *) malloc(_len_percentile990*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percentile990; _i0++) {
            percentile99[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_median0 = 1;
          double * median = (double *) malloc(_len_median0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_median0; _i0++) {
            median[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_percent_within_bounds0 = 1;
          double * percent_within_bounds = (double *) malloc(_len_percent_within_bounds0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percent_within_bounds0; _i0++) {
            percent_within_bounds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gather_stats(expected_time_between_calls,entries,calls,percentile99,median,percent_within_bounds);
          for(int _aux = 0; _aux < _len_entries0; _aux++) {
          free(entries[_aux].array);
          }
          free(entries);
          free(percentile99);
          free(median);
          free(percent_within_bounds);
        
        break;
    }
    // big-arr
    case 1:
    {
          double expected_time_between_calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_entries0 = 65025;
          struct TYPE_5__ * entries = (struct TYPE_5__ *) malloc(_len_entries0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entries__i0__array0 = 1;
          entries[_i0].array = (struct TYPE_4__ *) malloc(_len_entries__i0__array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entries__i0__array0; _j0++) {
            entries[_i0].array->count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        entries[_i0].array->time_delta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_percentile990 = 65025;
          double * percentile99 = (double *) malloc(_len_percentile990*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percentile990; _i0++) {
            percentile99[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_median0 = 65025;
          double * median = (double *) malloc(_len_median0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_median0; _i0++) {
            median[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_percent_within_bounds0 = 65025;
          double * percent_within_bounds = (double *) malloc(_len_percent_within_bounds0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percent_within_bounds0; _i0++) {
            percent_within_bounds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gather_stats(expected_time_between_calls,entries,calls,percentile99,median,percent_within_bounds);
          for(int _aux = 0; _aux < _len_entries0; _aux++) {
          free(entries[_aux].array);
          }
          free(entries);
          free(percentile99);
          free(median);
          free(percent_within_bounds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double expected_time_between_calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double calls = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_entries0 = 100;
          struct TYPE_5__ * entries = (struct TYPE_5__ *) malloc(_len_entries0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_entries__i0__array0 = 1;
          entries[_i0].array = (struct TYPE_4__ *) malloc(_len_entries__i0__array0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_entries__i0__array0; _j0++) {
            entries[_i0].array->count = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        entries[_i0].array->time_delta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_percentile990 = 100;
          double * percentile99 = (double *) malloc(_len_percentile990*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percentile990; _i0++) {
            percentile99[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_median0 = 100;
          double * median = (double *) malloc(_len_median0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_median0; _i0++) {
            median[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_percent_within_bounds0 = 100;
          double * percent_within_bounds = (double *) malloc(_len_percent_within_bounds0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_percent_within_bounds0; _i0++) {
            percent_within_bounds[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gather_stats(expected_time_between_calls,entries,calls,percentile99,median,percent_within_bounds);
          for(int _aux = 0; _aux < _len_entries0; _aux++) {
          free(entries[_aux].array);
          }
          free(entries);
          free(percentile99);
          free(median);
          free(percent_within_bounds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct tracing_map_elt {struct hist_elt_data* private_data; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {size_t var_ref_idx; } ;
struct hist_elt_data {int /*<<< orphan*/ * var_ref_vals; } ;

/* Variables and functions */

__attribute__((used)) static u64 hist_field_var_ref(struct hist_field *hist_field,
			      struct tracing_map_elt *elt,
			      struct ring_buffer_event *rbe,
			      void *event)
{
	struct hist_elt_data *elt_data;
	u64 var_val = 0;

	elt_data = elt->private_data;
	var_val = elt_data->var_ref_vals[hist_field->var_ref_idx];

	return var_val;
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
          int _len_hist_field0 = 1;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].var_ref_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elt0 = 1;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
              int _len_elt__i0__private_data0 = 1;
          elt[_i0].private_data = (struct hist_elt_data *) malloc(_len_elt__i0__private_data0*sizeof(struct hist_elt_data));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data0; _j0++) {
              int _len_elt__i0__private_data_var_ref_vals0 = 1;
          elt[_i0].private_data->var_ref_vals = (int *) malloc(_len_elt__i0__private_data_var_ref_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data_var_ref_vals0; _j0++) {
            elt[_i0].private_data->var_ref_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rbe0 = 1;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_var_ref(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          free(hist_field);
          for(int _aux = 0; _aux < _len_elt0; _aux++) {
          free(elt[_aux].private_data);
          }
          free(elt);
          free(rbe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hist_field0 = 65025;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].var_ref_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elt0 = 65025;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
              int _len_elt__i0__private_data0 = 1;
          elt[_i0].private_data = (struct hist_elt_data *) malloc(_len_elt__i0__private_data0*sizeof(struct hist_elt_data));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data0; _j0++) {
              int _len_elt__i0__private_data_var_ref_vals0 = 1;
          elt[_i0].private_data->var_ref_vals = (int *) malloc(_len_elt__i0__private_data_var_ref_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data_var_ref_vals0; _j0++) {
            elt[_i0].private_data->var_ref_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rbe0 = 65025;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_var_ref(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          free(hist_field);
          for(int _aux = 0; _aux < _len_elt0; _aux++) {
          free(elt[_aux].private_data);
          }
          free(elt);
          free(rbe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hist_field0 = 100;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].var_ref_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elt0 = 100;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
              int _len_elt__i0__private_data0 = 1;
          elt[_i0].private_data = (struct hist_elt_data *) malloc(_len_elt__i0__private_data0*sizeof(struct hist_elt_data));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data0; _j0++) {
              int _len_elt__i0__private_data_var_ref_vals0 = 1;
          elt[_i0].private_data->var_ref_vals = (int *) malloc(_len_elt__i0__private_data_var_ref_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elt__i0__private_data_var_ref_vals0; _j0++) {
            elt[_i0].private_data->var_ref_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rbe0 = 100;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_var_ref(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          free(hist_field);
          for(int _aux = 0; _aux < _len_elt0; _aux++) {
          free(elt[_aux].private_data);
          }
          free(elt);
          free(rbe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

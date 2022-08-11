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
struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {unsigned int idx; struct hist_trigger_data* hist_data; } ;
struct hist_field {int flags; TYPE_1__ var; } ;

/* Variables and functions */
 int HIST_FIELD_FL_VAR_REF ; 

__attribute__((used)) static struct hist_field *
check_field_for_var_ref(struct hist_field *hist_field,
			struct hist_trigger_data *var_data,
			unsigned int var_idx)
{
	struct hist_field *found = NULL;

	if (hist_field && hist_field->flags & HIST_FIELD_FL_VAR_REF) {
		if (hist_field->var.idx == var_idx &&
		    hist_field->var.hist_data == var_data) {
			found = hist_field;
		}
	}

	return found;
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
          unsigned int var_idx = 100;
          int _len_hist_field0 = 1;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_field[_i0].var.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_field__i0__var_hist_data0 = 1;
          hist_field[_i0].var.hist_data = (struct hist_trigger_data *) malloc(_len_hist_field__i0__var_hist_data0*sizeof(struct hist_trigger_data));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__var_hist_data0; _j0++) {
            hist_field[_i0].var.hist_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var_data0 = 1;
          struct hist_trigger_data * var_data = (struct hist_trigger_data *) malloc(_len_var_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_var_data0; _i0++) {
            var_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hist_field * benchRet = check_field_for_var_ref(hist_field,var_data,var_idx);
          printf("%d\n", (*benchRet).flags);
          free(hist_field);
          free(var_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int var_idx = 255;
          int _len_hist_field0 = 65025;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_field[_i0].var.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_field__i0__var_hist_data0 = 1;
          hist_field[_i0].var.hist_data = (struct hist_trigger_data *) malloc(_len_hist_field__i0__var_hist_data0*sizeof(struct hist_trigger_data));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__var_hist_data0; _j0++) {
            hist_field[_i0].var.hist_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var_data0 = 65025;
          struct hist_trigger_data * var_data = (struct hist_trigger_data *) malloc(_len_var_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_var_data0; _i0++) {
            var_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hist_field * benchRet = check_field_for_var_ref(hist_field,var_data,var_idx);
          printf("%d\n", (*benchRet).flags);
          free(hist_field);
          free(var_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int var_idx = 10;
          int _len_hist_field0 = 100;
          struct hist_field * hist_field = (struct hist_field *) malloc(_len_hist_field0*sizeof(struct hist_field));
          for(int _i0 = 0; _i0 < _len_hist_field0; _i0++) {
            hist_field[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_field[_i0].var.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_field__i0__var_hist_data0 = 1;
          hist_field[_i0].var.hist_data = (struct hist_trigger_data *) malloc(_len_hist_field__i0__var_hist_data0*sizeof(struct hist_trigger_data));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__var_hist_data0; _j0++) {
            hist_field[_i0].var.hist_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var_data0 = 100;
          struct hist_trigger_data * var_data = (struct hist_trigger_data *) malloc(_len_var_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_var_data0; _i0++) {
            var_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hist_field * benchRet = check_field_for_var_ref(hist_field,var_data,var_idx);
          printf("%d\n", (*benchRet).flags);
          free(hist_field);
          free(var_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct hist_trigger_data {int /*<<< orphan*/  n_field_var_str; int /*<<< orphan*/  n_field_vars; struct field_var** field_vars; } ;
struct field_var {TYPE_1__* val; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int HIST_FIELD_FL_STRING ; 

__attribute__((used)) static void save_field_var(struct hist_trigger_data *hist_data,
			   struct field_var *field_var)
{
	hist_data->field_vars[hist_data->n_field_vars++] = field_var;

	if (field_var->val->flags & HIST_FIELD_FL_STRING)
		hist_data->n_field_var_str++;
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
          int _len_hist_data0 = 1;
          struct hist_trigger_data * hist_data = (struct hist_trigger_data *) malloc(_len_hist_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_hist_data0; _i0++) {
            hist_data[_i0].n_field_var_str = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_data[_i0].n_field_vars = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_data__i0__field_vars0 = 1;
          hist_data[_i0].field_vars = (struct field_var **) malloc(_len_hist_data__i0__field_vars0*sizeof(struct field_var *));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars0; _j0++) {
            int _len_hist_data__i0__field_vars1 = 1;
            hist_data[_i0].field_vars[_j0] = (struct field_var *) malloc(_len_hist_data__i0__field_vars1*sizeof(struct field_var));
            for(int _j1 = 0; _j1 < _len_hist_data__i0__field_vars1; _j1++) {
                int _len_hist_data__i0__field_vars__j0__val0 = 1;
          hist_data[_i0].field_vars[_j0]->val = (struct TYPE_2__ *) malloc(_len_hist_data__i0__field_vars__j0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars__j0__val0; _j0++) {
            hist_data[_i0].field_vars[_j0]->val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_field_var0 = 1;
          struct field_var * field_var = (struct field_var *) malloc(_len_field_var0*sizeof(struct field_var));
          for(int _i0 = 0; _i0 < _len_field_var0; _i0++) {
              int _len_field_var__i0__val0 = 1;
          field_var[_i0].val = (struct TYPE_2__ *) malloc(_len_field_var__i0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_field_var__i0__val0; _j0++) {
            field_var[_i0].val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          save_field_var(hist_data,field_var);
          for(int _aux = 0; _aux < _len_hist_data0; _aux++) {
          free(*(hist_data[_aux].field_vars));
        free(hist_data[_aux].field_vars);
          }
          free(hist_data);
          for(int _aux = 0; _aux < _len_field_var0; _aux++) {
          free(field_var[_aux].val);
          }
          free(field_var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hist_data0 = 65025;
          struct hist_trigger_data * hist_data = (struct hist_trigger_data *) malloc(_len_hist_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_hist_data0; _i0++) {
            hist_data[_i0].n_field_var_str = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_data[_i0].n_field_vars = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_data__i0__field_vars0 = 1;
          hist_data[_i0].field_vars = (struct field_var **) malloc(_len_hist_data__i0__field_vars0*sizeof(struct field_var *));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars0; _j0++) {
            int _len_hist_data__i0__field_vars1 = 1;
            hist_data[_i0].field_vars[_j0] = (struct field_var *) malloc(_len_hist_data__i0__field_vars1*sizeof(struct field_var));
            for(int _j1 = 0; _j1 < _len_hist_data__i0__field_vars1; _j1++) {
                int _len_hist_data__i0__field_vars__j0__val0 = 1;
          hist_data[_i0].field_vars[_j0]->val = (struct TYPE_2__ *) malloc(_len_hist_data__i0__field_vars__j0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars__j0__val0; _j0++) {
            hist_data[_i0].field_vars[_j0]->val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_field_var0 = 65025;
          struct field_var * field_var = (struct field_var *) malloc(_len_field_var0*sizeof(struct field_var));
          for(int _i0 = 0; _i0 < _len_field_var0; _i0++) {
              int _len_field_var__i0__val0 = 1;
          field_var[_i0].val = (struct TYPE_2__ *) malloc(_len_field_var__i0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_field_var__i0__val0; _j0++) {
            field_var[_i0].val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          save_field_var(hist_data,field_var);
          for(int _aux = 0; _aux < _len_hist_data0; _aux++) {
          free(*(hist_data[_aux].field_vars));
        free(hist_data[_aux].field_vars);
          }
          free(hist_data);
          for(int _aux = 0; _aux < _len_field_var0; _aux++) {
          free(field_var[_aux].val);
          }
          free(field_var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hist_data0 = 100;
          struct hist_trigger_data * hist_data = (struct hist_trigger_data *) malloc(_len_hist_data0*sizeof(struct hist_trigger_data));
          for(int _i0 = 0; _i0 < _len_hist_data0; _i0++) {
            hist_data[_i0].n_field_var_str = ((-2 * (next_i()%2)) + 1) * next_i();
        hist_data[_i0].n_field_vars = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist_data__i0__field_vars0 = 1;
          hist_data[_i0].field_vars = (struct field_var **) malloc(_len_hist_data__i0__field_vars0*sizeof(struct field_var *));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars0; _j0++) {
            int _len_hist_data__i0__field_vars1 = 1;
            hist_data[_i0].field_vars[_j0] = (struct field_var *) malloc(_len_hist_data__i0__field_vars1*sizeof(struct field_var));
            for(int _j1 = 0; _j1 < _len_hist_data__i0__field_vars1; _j1++) {
                int _len_hist_data__i0__field_vars__j0__val0 = 1;
          hist_data[_i0].field_vars[_j0]->val = (struct TYPE_2__ *) malloc(_len_hist_data__i0__field_vars__j0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_data__i0__field_vars__j0__val0; _j0++) {
            hist_data[_i0].field_vars[_j0]->val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_field_var0 = 100;
          struct field_var * field_var = (struct field_var *) malloc(_len_field_var0*sizeof(struct field_var));
          for(int _i0 = 0; _i0 < _len_field_var0; _i0++) {
              int _len_field_var__i0__val0 = 1;
          field_var[_i0].val = (struct TYPE_2__ *) malloc(_len_field_var__i0__val0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_field_var__i0__val0; _j0++) {
            field_var[_i0].val->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          save_field_var(hist_data,field_var);
          for(int _aux = 0; _aux < _len_hist_data0; _aux++) {
          free(*(hist_data[_aux].field_vars));
        free(hist_data[_aux].field_vars);
          }
          free(hist_data);
          for(int _aux = 0; _aux < _len_field_var0; _aux++) {
          free(field_var[_aux].val);
          }
          free(field_var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

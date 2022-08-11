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
typedef  int /*<<< orphan*/  u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {TYPE_1__* field; } ;
struct TYPE_2__ {int offset; } ;

/* Variables and functions */

__attribute__((used)) static u64 hist_field_pstring(struct hist_field *hist_field,
			      struct tracing_map_elt *elt,
			      struct ring_buffer_event *rbe,
			      void *event)
{
	char **addr = (char **)(event + hist_field->field->offset);

	return (u64)(unsigned long)*addr;
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
              int _len_hist_field__i0__field0 = 1;
          hist_field[_i0].field = (struct TYPE_2__ *) malloc(_len_hist_field__i0__field0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__field0; _j0++) {
            hist_field[_i0].field->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_elt0 = 1;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
            elt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbe0 = 1;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_pstring(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist_field0; _aux++) {
          free(hist_field[_aux].field);
          }
          free(hist_field);
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
              int _len_hist_field__i0__field0 = 1;
          hist_field[_i0].field = (struct TYPE_2__ *) malloc(_len_hist_field__i0__field0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__field0; _j0++) {
            hist_field[_i0].field->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_elt0 = 65025;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
            elt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbe0 = 65025;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_pstring(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist_field0; _aux++) {
          free(hist_field[_aux].field);
          }
          free(hist_field);
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
              int _len_hist_field__i0__field0 = 1;
          hist_field[_i0].field = (struct TYPE_2__ *) malloc(_len_hist_field__i0__field0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist_field__i0__field0; _j0++) {
            hist_field[_i0].field->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_elt0 = 100;
          struct tracing_map_elt * elt = (struct tracing_map_elt *) malloc(_len_elt0*sizeof(struct tracing_map_elt));
          for(int _i0 = 0; _i0 < _len_elt0; _i0++) {
            elt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rbe0 = 100;
          struct ring_buffer_event * rbe = (struct ring_buffer_event *) malloc(_len_rbe0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_rbe0; _i0++) {
            rbe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * event;
          int benchRet = hist_field_pstring(hist_field,elt,rbe,event);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist_field0; _aux++) {
          free(hist_field[_aux].field);
          }
          free(hist_field);
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

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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t ngx_uint_t ;
struct TYPE_7__ {TYPE_1__* variables; } ;
typedef  TYPE_2__ ngx_stream_session_t ;
struct TYPE_8__ {size_t* flushes; } ;
typedef  TYPE_3__ ngx_stream_complex_value_t ;
struct TYPE_6__ {scalar_t__ not_found; scalar_t__ valid; scalar_t__ no_cacheable; } ;

/* Variables and functions */

void
ngx_stream_script_flush_complex_value(ngx_stream_session_t *s,
    ngx_stream_complex_value_t *val)
{
    ngx_uint_t *index;

    index = val->flushes;

    if (index) {
        while (*index != (ngx_uint_t) -1) {

            if (s->variables[*index].no_cacheable) {
                s->variables[*index].valid = 0;
                s->variables[*index].not_found = 0;
            }

            index++;
        }
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
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__variables0 = 1;
          s[_i0].variables = (struct TYPE_6__ *) malloc(_len_s__i0__variables0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__variables0; _j0++) {
            s[_i0].variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_val0 = 1;
          struct TYPE_8__ * val = (struct TYPE_8__ *) malloc(_len_val0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__flushes0 = 1;
          val[_i0].flushes = (unsigned long *) malloc(_len_val__i0__flushes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_val__i0__flushes0; _j0++) {
            val[_i0].flushes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ngx_stream_script_flush_complex_value(s,val);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].variables);
          }
          free(s);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].flushes);
          }
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__variables0 = 1;
          s[_i0].variables = (struct TYPE_6__ *) malloc(_len_s__i0__variables0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__variables0; _j0++) {
            s[_i0].variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_val0 = 65025;
          struct TYPE_8__ * val = (struct TYPE_8__ *) malloc(_len_val0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__flushes0 = 1;
          val[_i0].flushes = (unsigned long *) malloc(_len_val__i0__flushes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_val__i0__flushes0; _j0++) {
            val[_i0].flushes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ngx_stream_script_flush_complex_value(s,val);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].variables);
          }
          free(s);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].flushes);
          }
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__variables0 = 1;
          s[_i0].variables = (struct TYPE_6__ *) malloc(_len_s__i0__variables0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__variables0; _j0++) {
            s[_i0].variables->not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->valid = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].variables->no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_val0 = 100;
          struct TYPE_8__ * val = (struct TYPE_8__ *) malloc(_len_val0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
              int _len_val__i0__flushes0 = 1;
          val[_i0].flushes = (unsigned long *) malloc(_len_val__i0__flushes0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_val__i0__flushes0; _j0++) {
            val[_i0].flushes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ngx_stream_script_flush_complex_value(s,val);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].variables);
          }
          free(s);
          for(int _aux = 0; _aux < _len_val0; _aux++) {
          free(val[_aux].flushes);
          }
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

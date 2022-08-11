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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__** prev_dc; scalar_t__** dc_cache; } ;
typedef  TYPE_1__ MSS4Context ;

/* Variables and functions */
 size_t LEFT ; 
 size_t TOP ; 

__attribute__((used)) static inline void mss4_update_dc_cache(MSS4Context *c, int mb_x)
{
    int i;

    c->dc_cache[0][TOP]  = c->prev_dc[0][mb_x * 2 + 1];
    c->dc_cache[0][LEFT] = 0;
    c->dc_cache[1][TOP]  = 0;
    c->dc_cache[1][LEFT] = 0;

    for (i = 0; i < 2; i++)
        c->prev_dc[0][mb_x * 2 + i] = 0;

    for (i = 1; i < 3; i++) {
        c->dc_cache[i + 1][TOP]  = c->prev_dc[i][mb_x];
        c->dc_cache[i + 1][LEFT] = 0;
        c->prev_dc[i][mb_x]      = 0;
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
          int mb_x = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__prev_dc0 = 1;
          c[_i0].prev_dc = (long **) malloc(_len_c__i0__prev_dc0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__prev_dc0; _j0++) {
            int _len_c__i0__prev_dc1 = 1;
            c[_i0].prev_dc[_j0] = (long *) malloc(_len_c__i0__prev_dc1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__prev_dc1; _j1++) {
              c[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__dc_cache0 = 1;
          c[_i0].dc_cache = (long **) malloc(_len_c__i0__dc_cache0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__dc_cache0; _j0++) {
            int _len_c__i0__dc_cache1 = 1;
            c[_i0].dc_cache[_j0] = (long *) malloc(_len_c__i0__dc_cache1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__dc_cache1; _j1++) {
              c[_i0].dc_cache[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          mss4_update_dc_cache(c,mb_x);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].prev_dc));
        free(c[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].dc_cache));
        free(c[_aux].dc_cache);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mb_x = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__prev_dc0 = 1;
          c[_i0].prev_dc = (long **) malloc(_len_c__i0__prev_dc0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__prev_dc0; _j0++) {
            int _len_c__i0__prev_dc1 = 1;
            c[_i0].prev_dc[_j0] = (long *) malloc(_len_c__i0__prev_dc1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__prev_dc1; _j1++) {
              c[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__dc_cache0 = 1;
          c[_i0].dc_cache = (long **) malloc(_len_c__i0__dc_cache0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__dc_cache0; _j0++) {
            int _len_c__i0__dc_cache1 = 1;
            c[_i0].dc_cache[_j0] = (long *) malloc(_len_c__i0__dc_cache1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__dc_cache1; _j1++) {
              c[_i0].dc_cache[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          mss4_update_dc_cache(c,mb_x);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].prev_dc));
        free(c[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].dc_cache));
        free(c[_aux].dc_cache);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mb_x = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__prev_dc0 = 1;
          c[_i0].prev_dc = (long **) malloc(_len_c__i0__prev_dc0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__prev_dc0; _j0++) {
            int _len_c__i0__prev_dc1 = 1;
            c[_i0].prev_dc[_j0] = (long *) malloc(_len_c__i0__prev_dc1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__prev_dc1; _j1++) {
              c[_i0].prev_dc[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__dc_cache0 = 1;
          c[_i0].dc_cache = (long **) malloc(_len_c__i0__dc_cache0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__dc_cache0; _j0++) {
            int _len_c__i0__dc_cache1 = 1;
            c[_i0].dc_cache[_j0] = (long *) malloc(_len_c__i0__dc_cache1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__dc_cache1; _j1++) {
              c[_i0].dc_cache[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          mss4_update_dc_cache(c,mb_x);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].prev_dc));
        free(c[_aux].prev_dc);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].dc_cache));
        free(c[_aux].dc_cache);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

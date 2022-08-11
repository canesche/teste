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
struct TYPE_3__ {int stride; scalar_t__** src; scalar_t__** ref; } ;
typedef  TYPE_1__ MotionEstContext ;

/* Variables and functions */

__attribute__((used)) static inline void init_mv4_ref(MotionEstContext *c){
    const int stride= c->stride;

    c->ref[1][0] = c->ref[0][0] + 8;
    c->ref[2][0] = c->ref[0][0] + 8*stride;
    c->ref[3][0] = c->ref[2][0] + 8;
    c->src[1][0] = c->src[0][0] + 8;
    c->src[2][0] = c->src[0][0] + 8*stride;
    c->src[3][0] = c->src[2][0] + 8;
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
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__src0 = 1;
          c[_i0].src = (long **) malloc(_len_c__i0__src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (long *) malloc(_len_c__i0__src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              c[_i0].src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (long **) malloc(_len_c__i0__ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (long *) malloc(_len_c__i0__ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              c[_i0].ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_mv4_ref(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].src));
        free(c[_aux].src);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].ref));
        free(c[_aux].ref);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__src0 = 1;
          c[_i0].src = (long **) malloc(_len_c__i0__src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (long *) malloc(_len_c__i0__src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              c[_i0].src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (long **) malloc(_len_c__i0__ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (long *) malloc(_len_c__i0__ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              c[_i0].ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_mv4_ref(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].src));
        free(c[_aux].src);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].ref));
        free(c[_aux].ref);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__src0 = 1;
          c[_i0].src = (long **) malloc(_len_c__i0__src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__src0; _j0++) {
            int _len_c__i0__src1 = 1;
            c[_i0].src[_j0] = (long *) malloc(_len_c__i0__src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__src1; _j1++) {
              c[_i0].src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_c__i0__ref0 = 1;
          c[_i0].ref = (long **) malloc(_len_c__i0__ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_c__i0__ref0; _j0++) {
            int _len_c__i0__ref1 = 1;
            c[_i0].ref[_j0] = (long *) malloc(_len_c__i0__ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_c__i0__ref1; _j1++) {
              c[_i0].ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_mv4_ref(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].src));
        free(c[_aux].src);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].ref));
        free(c[_aux].ref);
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

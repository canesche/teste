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
struct gl_transform {float** m; float* t; } ;

/* Variables and functions */

void gl_transform_ortho(struct gl_transform *t, float x0, float x1,
                        float y0, float y1)
{
    if (y1 < y0) {
        float tmp = y0;
        y0 = tmp - y1;
        y1 = tmp;
    }

    t->m[0][0] = 2.0f / (x1 - x0);
    t->m[0][1] = 0.0f;
    t->m[1][0] = 0.0f;
    t->m[1][1] = 2.0f / (y1 - y0);
    t->t[0] = -(x1 + x0) / (x1 - x0);
    t->t[1] = -(y1 + y0) / (y1 - y0);
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
          float x0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float x1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_t0 = 1;
          struct gl_transform * t = (struct gl_transform *) malloc(_len_t0*sizeof(struct gl_transform));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__m0 = 1;
          t[_i0].m = (float **) malloc(_len_t__i0__m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t__i0__m0; _j0++) {
            int _len_t__i0__m1 = 1;
            t[_i0].m[_j0] = (float *) malloc(_len_t__i0__m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t__i0__m1; _j1++) {
              t[_i0].m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t__i0__t0 = 1;
          t[_i0].t = (float *) malloc(_len_t__i0__t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t__i0__t0; _j0++) {
            t[_i0].t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          gl_transform_ortho(t,x0,x1,y0,y1);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].m));
        free(t[_aux].m);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].t);
          }
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          float x0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float x1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_t0 = 65025;
          struct gl_transform * t = (struct gl_transform *) malloc(_len_t0*sizeof(struct gl_transform));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__m0 = 1;
          t[_i0].m = (float **) malloc(_len_t__i0__m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t__i0__m0; _j0++) {
            int _len_t__i0__m1 = 1;
            t[_i0].m[_j0] = (float *) malloc(_len_t__i0__m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t__i0__m1; _j1++) {
              t[_i0].m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t__i0__t0 = 1;
          t[_i0].t = (float *) malloc(_len_t__i0__t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t__i0__t0; _j0++) {
            t[_i0].t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          gl_transform_ortho(t,x0,x1,y0,y1);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].m));
        free(t[_aux].m);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].t);
          }
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float x0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float x1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y0 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float y1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_t0 = 100;
          struct gl_transform * t = (struct gl_transform *) malloc(_len_t0*sizeof(struct gl_transform));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__m0 = 1;
          t[_i0].m = (float **) malloc(_len_t__i0__m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t__i0__m0; _j0++) {
            int _len_t__i0__m1 = 1;
            t[_i0].m[_j0] = (float *) malloc(_len_t__i0__m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t__i0__m1; _j1++) {
              t[_i0].m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t__i0__t0 = 1;
          t[_i0].t = (float *) malloc(_len_t__i0__t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t__i0__t0; _j0++) {
            t[_i0].t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          gl_transform_ortho(t,x0,x1,y0,y1);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(*(t[_aux].m));
        free(t[_aux].m);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].t);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

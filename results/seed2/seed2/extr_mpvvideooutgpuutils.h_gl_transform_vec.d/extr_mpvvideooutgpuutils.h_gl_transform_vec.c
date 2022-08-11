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

__attribute__((used)) static inline void gl_transform_vec(struct gl_transform t, float *x, float *y)
{
    float vx = *x, vy = *y;
    *x = vx * t.m[0][0] + vy * t.m[0][1] + t.t[0];
    *y = vx * t.m[1][0] + vy * t.m[1][1] + t.t[1];
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
          struct gl_transform t;
          int _len_t_m0 = 1;
          t.m = (float **) malloc(_len_t_m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t_m0; _j0++) {
            int _len_t_m1 = 1;
            t.m[_j0] = (float *) malloc(_len_t_m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t_m1; _j1++) {
              t.m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t_t0 = 1;
          t.t = (float *) malloc(_len_t_t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t_t0; _j0++) {
            t.t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_x0 = 1;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_y0 = 1;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gl_transform_vec(t,x,y);
          free(*(t.m));
        free(t.m);
          free(t.t);
          free(x);
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          struct gl_transform t;
          int _len_t_m0 = 1;
          t.m = (float **) malloc(_len_t_m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t_m0; _j0++) {
            int _len_t_m1 = 1;
            t.m[_j0] = (float *) malloc(_len_t_m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t_m1; _j1++) {
              t.m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t_t0 = 1;
          t.t = (float *) malloc(_len_t_t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t_t0; _j0++) {
            t.t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_x0 = 65025;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_y0 = 65025;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gl_transform_vec(t,x,y);
          free(*(t.m));
        free(t.m);
          free(t.t);
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct gl_transform t;
          int _len_t_m0 = 1;
          t.m = (float **) malloc(_len_t_m0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_t_m0; _j0++) {
            int _len_t_m1 = 1;
            t.m[_j0] = (float *) malloc(_len_t_m1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_t_m1; _j1++) {
              t.m[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_t_t0 = 1;
          t.t = (float *) malloc(_len_t_t0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_t_t0; _j0++) {
            t.t[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_x0 = 100;
          float * x = (float *) malloc(_len_x0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_y0 = 100;
          float * y = (float *) malloc(_len_y0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          gl_transform_vec(t,x,y);
          free(*(t.m));
        free(t.m);
          free(t.t);
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

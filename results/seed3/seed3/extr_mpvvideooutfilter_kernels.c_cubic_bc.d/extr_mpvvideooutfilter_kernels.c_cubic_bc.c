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
struct TYPE_3__ {double* params; } ;
typedef  TYPE_1__ params ;

/* Variables and functions */

__attribute__((used)) static double cubic_bc(params *p, double x)
{
    double b = p->params[0],
           c = p->params[1];
    double p0 = (6.0 - 2.0 * b) / 6.0,
           p2 = (-18.0 + 12.0 * b + 6.0 * c) / 6.0,
           p3 = (12.0 - 9.0 * b - 6.0 * c) / 6.0,
           q0 = (8.0 * b + 24.0 * c) / 6.0,
           q1 = (-12.0 * b - 48.0 * c) / 6.0,
           q2 = (6.0 * b + 30.0 * c) / 6.0,
           q3 = (-b - 6.0 * c) / 6.0;

    if (x < 1.0) {
        return p0 + x * x * (p2 + x * p3);
    } else if (x < 2.0) {
        return q0 + x * (q1 + x * (q2 + x * q3));
    }
    return 0.0;
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
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__params0 = 1;
          p[_i0].params = (double *) malloc(_len_p__i0__params0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_p__i0__params0; _j0++) {
            p[_i0].params[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = cubic_bc(p,x);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].params);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__params0 = 1;
          p[_i0].params = (double *) malloc(_len_p__i0__params0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_p__i0__params0; _j0++) {
            p[_i0].params[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = cubic_bc(p,x);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].params);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__params0 = 1;
          p[_i0].params = (double *) malloc(_len_p__i0__params0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_p__i0__params0; _j0++) {
            p[_i0].params[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = cubic_bc(p,x);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].params);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

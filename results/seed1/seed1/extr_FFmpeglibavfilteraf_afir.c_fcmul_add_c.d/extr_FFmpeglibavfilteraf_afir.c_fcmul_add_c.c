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
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void fcmul_add_c(float *sum, const float *t, const float *c, ptrdiff_t len)
{
    int n;

    for (n = 0; n < len; n++) {
        const float cre = c[2 * n    ];
        const float cim = c[2 * n + 1];
        const float tre = t[2 * n    ];
        const float tim = t[2 * n + 1];

        sum[2 * n    ] += tre * cre - tim * cim;
        sum[2 * n + 1] += tre * cim + tim * cre;
    }

    sum[2 * n] += t[2 * n] * c[2 * n];
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
          int len = 100;
          int _len_sum0 = 1;
          float * sum = (float *) malloc(_len_sum0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_sum0; _i0++) {
            sum[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_t0 = 1;
          const float * t = (const float *) malloc(_len_t0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_c0 = 1;
          const float * c = (const float *) malloc(_len_c0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          fcmul_add_c(sum,t,c,len);
          free(sum);
          free(t);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_sum0 = 65025;
          float * sum = (float *) malloc(_len_sum0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_sum0; _i0++) {
            sum[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_t0 = 65025;
          const float * t = (const float *) malloc(_len_t0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_c0 = 65025;
          const float * c = (const float *) malloc(_len_c0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          fcmul_add_c(sum,t,c,len);
          free(sum);
          free(t);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_sum0 = 100;
          float * sum = (float *) malloc(_len_sum0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_sum0; _i0++) {
            sum[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_t0 = 100;
          const float * t = (const float *) malloc(_len_t0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_c0 = 100;
          const float * c = (const float *) malloc(_len_c0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          fcmul_add_c(sum,t,c,len);
          free(sum);
          free(t);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

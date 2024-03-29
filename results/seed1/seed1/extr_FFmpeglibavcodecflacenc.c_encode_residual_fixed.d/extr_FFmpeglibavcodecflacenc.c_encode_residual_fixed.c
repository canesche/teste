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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void encode_residual_fixed(int32_t *res, const int32_t *smp, int n,
                                  int order)
{
    int i;

    for (i = 0; i < order; i++)
        res[i] = smp[i];

    if (order == 0) {
        for (i = order; i < n; i++)
            res[i] = smp[i];
    } else if (order == 1) {
        for (i = order; i < n; i++)
            res[i] = smp[i] - smp[i-1];
    } else if (order == 2) {
        int a = smp[order-1] - smp[order-2];
        for (i = order; i < n; i += 2) {
            int b    = smp[i  ] - smp[i-1];
            res[i]   = b - a;
            a        = smp[i+1] - smp[i  ];
            res[i+1] = a - b;
        }
    } else if (order == 3) {
        int a = smp[order-1] -   smp[order-2];
        int c = smp[order-1] - 2*smp[order-2] + smp[order-3];
        for (i = order; i < n; i += 2) {
            int b    = smp[i  ] - smp[i-1];
            int d    = b - a;
            res[i]   = d - c;
            a        = smp[i+1] - smp[i  ];
            c        = a - b;
            res[i+1] = c - d;
        }
    } else {
        int a = smp[order-1] -   smp[order-2];
        int c = smp[order-1] - 2*smp[order-2] +   smp[order-3];
        int e = smp[order-1] - 3*smp[order-2] + 3*smp[order-3] - smp[order-4];
        for (i = order; i < n; i += 2) {
            int b    = smp[i  ] - smp[i-1];
            int d    = b - a;
            int f    = d - c;
            res[i  ] = f - e;
            a        = smp[i+1] - smp[i  ];
            c        = a - b;
            e        = c - d;
            res[i+1] = e - f;
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
          int n = 100;
          int order = 100;
          int _len_res0 = 1;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp0 = 1;
          const int * smp = (const int *) malloc(_len_smp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_residual_fixed(res,smp,n,order);
          free(res);
          free(smp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int order = 255;
          int _len_res0 = 65025;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp0 = 65025;
          const int * smp = (const int *) malloc(_len_smp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_residual_fixed(res,smp,n,order);
          free(res);
          free(smp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int order = 10;
          int _len_res0 = 100;
          int * res = (int *) malloc(_len_res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp0 = 100;
          const int * smp = (const int *) malloc(_len_smp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_residual_fixed(res,smp,n,order);
          free(res);
          free(smp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

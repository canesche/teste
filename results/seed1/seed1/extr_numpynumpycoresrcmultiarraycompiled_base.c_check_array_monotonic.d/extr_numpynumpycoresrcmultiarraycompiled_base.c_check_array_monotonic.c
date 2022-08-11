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
typedef  size_t npy_intp ;

/* Variables and functions */

__attribute__((used)) static int
check_array_monotonic(const double *a, npy_intp lena)
{
    npy_intp i;
    double next;
    double last;

    if (lena == 0) {
        /* all bin edges hold the same value */
        return 1;
    }
    last = a[0];

    /* Skip repeated values at the beginning of the array */
    for (i = 1; (i < lena) && (a[i] == last); i++);

    if (i == lena) {
        /* all bin edges hold the same value */
        return 1;
    }

    next = a[i];
    if (last < next) {
        /* Possibly monotonic increasing */
        for (i += 1; i < lena; i++) {
            last = next;
            next = a[i];
            if (last > next) {
                return 0;
            }
        }
        return 1;
    }
    else {
        /* last > next, possibly monotonic decreasing */
        for (i += 1; i < lena; i++) {
            last = next;
            next = a[i];
            if (last < next) {
                return 0;
            }
        }
        return -1;
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
          unsigned long lena = 100;
          int _len_a0 = 1;
          const double * a = (const double *) malloc(_len_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = check_array_monotonic(a,lena);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long lena = 255;
          int _len_a0 = 65025;
          const double * a = (const double *) malloc(_len_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = check_array_monotonic(a,lena);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long lena = 10;
          int _len_a0 = 100;
          const double * a = (const double *) malloc(_len_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = check_array_monotonic(a,lena);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

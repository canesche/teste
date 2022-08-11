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

/* Variables and functions */

long double __p1evll(long double x, const long double *P, int n)
{
	long double y;

	n -= 1;
	y = x + *P++;
	do {
		y = y * x + *P++;
	} while (--n);

	return y;
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
          long double x = 100;
          int n = 100;
          int _len_P0 = 1;
          const long double * P = (const long double *) malloc(_len_P0*sizeof(const long double));
          for(int _i0 = 0; _i0 < _len_P0; _i0++) {
            P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long double benchRet = __p1evll(x,P,n);
          printf("%Lf\n", benchRet); 
          free(P);
        
        break;
    }
    // big-arr
    case 1:
    {
          long double x = 255;
          int n = 255;
          int _len_P0 = 65025;
          const long double * P = (const long double *) malloc(_len_P0*sizeof(const long double));
          for(int _i0 = 0; _i0 < _len_P0; _i0++) {
            P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long double benchRet = __p1evll(x,P,n);
          printf("%Lf\n", benchRet); 
          free(P);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long double x = 10;
          int n = 10;
          int _len_P0 = 100;
          const long double * P = (const long double *) malloc(_len_P0*sizeof(const long double));
          for(int _i0 = 0; _i0 < _len_P0; _i0++) {
            P[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long double benchRet = __p1evll(x,P,n);
          printf("%Lf\n", benchRet); 
          free(P);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int fixpt_div32(u32 dividend, u32 divisor, u32 *quotient, u32 *fraction)
{
	u32 remainder;
	u32 q, f = 0;
	int i;

	if (0 == divisor)
		return -EINVAL;

	q = dividend / divisor;
	remainder = dividend - q * divisor;

	for (i = 0; i < 31; i++) {
		remainder <<= 1;
		if (remainder >= divisor) {
			f += 1;
			remainder -= divisor;
		}
		f <<= 1;
	}

	*quotient = q;
	*fraction = f;

	return 0;
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
          int dividend = 100;
          int divisor = 100;
          int _len_quotient0 = 1;
          int * quotient = (int *) malloc(_len_quotient0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotient0; _i0++) {
            quotient[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fraction0 = 1;
          int * fraction = (int *) malloc(_len_fraction0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fraction0; _i0++) {
            fraction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fixpt_div32(dividend,divisor,quotient,fraction);
          printf("%d\n", benchRet); 
          free(quotient);
          free(fraction);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dividend = 255;
          int divisor = 255;
          int _len_quotient0 = 65025;
          int * quotient = (int *) malloc(_len_quotient0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotient0; _i0++) {
            quotient[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fraction0 = 65025;
          int * fraction = (int *) malloc(_len_fraction0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fraction0; _i0++) {
            fraction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fixpt_div32(dividend,divisor,quotient,fraction);
          printf("%d\n", benchRet); 
          free(quotient);
          free(fraction);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dividend = 10;
          int divisor = 10;
          int _len_quotient0 = 100;
          int * quotient = (int *) malloc(_len_quotient0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quotient0; _i0++) {
            quotient[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fraction0 = 100;
          int * fraction = (int *) malloc(_len_fraction0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fraction0; _i0++) {
            fraction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fixpt_div32(dividend,divisor,quotient,fraction);
          printf("%d\n", benchRet); 
          free(quotient);
          free(fraction);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

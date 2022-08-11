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
 int M_PI ; 
 scalar_t__* sin_off_tbl ; 
 double* sin_sign_tbl ; 

double
sin(double x)
{
    int quadrant;
    double x2, result;

    /* Calculate the quadrant */
    quadrant = (int)(x * (2./M_PI));

    /* Get offset inside quadrant */
    x = x - quadrant * (M_PI/2.);

    /* Normalize quadrant to [0..3] */
    quadrant = (quadrant - 1) & 0x3;

    /* Fixup value for the generic function */
    x += sin_off_tbl[quadrant];

    /* Calculate the negative of the square of x */
    x2 = - (x * x);

    /* This is an unrolled taylor series using <PRECISION> iterations
     * Example with 4 iterations:
     * result = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8!
     * To save multiplications and to keep the precision high, it's performed
     * like this:
     * result = 1 - x^2 * (1/2! - x^2 * (1/4! - x^2 * (1/6! - x^2 * (1/8!))))
     */

    /* Start with 0, compiler will optimize this away */
    result = 0;

#if (PRECISION >= 10)
    result += 1./(1.*2*3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20);
    result *= x2;
#endif
#if (PRECISION >= 9)
    result += 1./(1.*2*3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18);
    result *= x2;
#endif
#if (PRECISION >= 8)
    result += 1./(1.*2*3*4*5*6*7*8*9*10*11*12*13*14*15*16);
    result *= x2;
#endif
#if (PRECISION >= 7)
    result += 1./(1.*2*3*4*5*6*7*8*9*10*11*12*13*14);
    result *= x2;
#endif
#if (PRECISION >= 6)
    result += 1./(1.*2*3*4*5*6*7*8*9*10*11*12);
    result *= x2;
#endif
#if (PRECISION >= 5)
    result += 1./(1.*2*3*4*5*6*7*8*9*10);
    result *= x2;
#endif
    result += 1./(1.*2*3*4*5*6*7*8);
    result *= x2;

    result += 1./(1.*2*3*4*5*6);
    result *= x2;

    result += 1./(1.*2*3*4);
    result *= x2;

    result += 1./(1.*2);
    result *= x2;

    result += 1;

    /* Apply correct sign */
    result *= sin_sign_tbl[quadrant];

    return result;
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
          double benchRet = sin(x);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

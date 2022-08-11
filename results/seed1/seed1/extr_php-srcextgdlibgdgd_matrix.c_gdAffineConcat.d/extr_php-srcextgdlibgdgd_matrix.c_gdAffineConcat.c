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
 int GD_TRUE ; 

int gdAffineConcat (double dst[6], const double m1[6], const double m2[6])
{
	double dst0, dst1, dst2, dst3, dst4, dst5;

	dst0 = m1[0] * m2[0] + m1[1] * m2[2];
	dst1 = m1[0] * m2[1] + m1[1] * m2[3];
	dst2 = m1[2] * m2[0] + m1[3] * m2[2];
	dst3 = m1[2] * m2[1] + m1[3] * m2[3];
	dst4 = m1[4] * m2[0] + m1[5] * m2[2] + m2[4];
	dst5 = m1[4] * m2[1] + m1[5] * m2[3] + m2[5];
	dst[0] = dst0;
	dst[1] = dst1;
	dst[2] = dst2;
	dst[3] = dst3;
	dst[4] = dst4;
	dst[5] = dst5;
	return GD_TRUE;
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
          int _len_dst0 = 6;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m10 = 6;
          double const* m1 = (double const*) malloc(_len_m10*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m10; _i0++) {
            m1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m20 = 6;
          double const* m2 = (double const*) malloc(_len_m20*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m20; _i0++) {
            m2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineConcat(dst,m1,m2);
          printf("%d\n", benchRet); 
          free(dst);
          free(m1);
          free(m2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m10 = 65025;
          double const* m1 = (double const*) malloc(_len_m10*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m10; _i0++) {
            m1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m20 = 65025;
          double const* m2 = (double const*) malloc(_len_m20*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m20; _i0++) {
            m2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineConcat(dst,m1,m2);
          printf("%d\n", benchRet); 
          free(dst);
          free(m1);
          free(m2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m10 = 100;
          double const* m1 = (double const*) malloc(_len_m10*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m10; _i0++) {
            m1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_m20 = 100;
          double const* m2 = (double const*) malloc(_len_m20*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_m20; _i0++) {
            m2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineConcat(dst,m1,m2);
          printf("%d\n", benchRet); 
          free(dst);
          free(m1);
          free(m2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

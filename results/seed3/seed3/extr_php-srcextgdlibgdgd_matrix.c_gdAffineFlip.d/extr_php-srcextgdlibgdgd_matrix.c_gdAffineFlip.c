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

int gdAffineFlip (double dst[6], const double src[6], const int flip_h, const int flip_v)
{
	dst[0] = flip_h ? - src[0] : src[0];
	dst[1] = flip_h ? - src[1] : src[1];
	dst[2] = flip_v ? - src[2] : src[2];
	dst[3] = flip_v ? - src[3] : src[3];
	dst[4] = flip_h ? - src[4] : src[4];
	dst[5] = flip_v ? - src[5] : src[5];
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
          const int flip_h = 100;
          const int flip_v = 100;
          int _len_dst0 = 6;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 6;
          double const* src = (double const*) malloc(_len_src0*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineFlip(dst,src,flip_h,flip_v);
          printf("%d\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int flip_h = 255;
          const int flip_v = 255;
          int _len_dst0 = 65025;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 65025;
          double const* src = (double const*) malloc(_len_src0*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineFlip(dst,src,flip_h,flip_v);
          printf("%d\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int flip_h = 10;
          const int flip_v = 10;
          int _len_dst0 = 100;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 100;
          double const* src = (double const*) malloc(_len_src0*sizeof(double const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = gdAffineFlip(dst,src,flip_h,flip_v);
          printf("%d\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

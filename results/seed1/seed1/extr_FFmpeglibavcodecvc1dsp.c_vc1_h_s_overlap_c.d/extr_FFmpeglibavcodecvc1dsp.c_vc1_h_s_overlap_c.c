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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void vc1_h_s_overlap_c(int16_t *left, int16_t *right, int left_stride, int right_stride, int flags)
{
    int i;
    int a, b, c, d;
    int d1, d2;
    int rnd1 = flags & 2 ? 3 : 4;
    int rnd2 = 7 - rnd1;
    for (i = 0; i < 8; i++) {
        a  = left[6];
        b  = left[7];
        c  = right[0];
        d  = right[1];
        d1 = a - d;
        d2 = a - d + b - c;

        left[6]  = ((a << 3) - d1 + rnd1) >> 3;
        left[7]  = ((b << 3) - d2 + rnd2) >> 3;
        right[0] = ((c << 3) + d2 + rnd1) >> 3;
        right[1] = ((d << 3) + d1 + rnd2) >> 3;

        right += right_stride;
        left  += left_stride;
        if (flags & 1) {
            rnd2   = 7 - rnd2;
            rnd1   = 7 - rnd1;
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
          int left_stride = 100;
          int right_stride = 100;
          int flags = 100;
          int _len_left0 = 1;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 1;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc1_h_s_overlap_c(left,right,left_stride,right_stride,flags);
          free(left);
          free(right);
        
        break;
    }
    // big-arr
    case 1:
    {
          int left_stride = 255;
          int right_stride = 255;
          int flags = 255;
          int _len_left0 = 65025;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 65025;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc1_h_s_overlap_c(left,right,left_stride,right_stride,flags);
          free(left);
          free(right);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int left_stride = 10;
          int right_stride = 10;
          int flags = 10;
          int _len_left0 = 100;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 100;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc1_h_s_overlap_c(left,right,left_stride,right_stride,flags);
          free(left);
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

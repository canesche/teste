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

__attribute__((used)) static void vector_fmul_reverse_c(float *dst, const float *src0,
                                  const float *src1, int len)
{
    int i;

    src1 += len-1;
    for (i = 0; i < len; i++)
        dst[i] = src0[i] * src1[-i];
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
          int _len_dst0 = 1;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src00 = 1;
          const float * src0 = (const float *) malloc(_len_src00*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src10 = 1;
          const float * src1 = (const float *) malloc(_len_src10*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          vector_fmul_reverse_c(dst,src0,src1,len);
          free(dst);
          free(src0);
          free(src1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_dst0 = 65025;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src00 = 65025;
          const float * src0 = (const float *) malloc(_len_src00*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src10 = 65025;
          const float * src1 = (const float *) malloc(_len_src10*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          vector_fmul_reverse_c(dst,src0,src1,len);
          free(dst);
          free(src0);
          free(src1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_dst0 = 100;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src00 = 100;
          const float * src0 = (const float *) malloc(_len_src00*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src10 = 100;
          const float * src1 = (const float *) malloc(_len_src10*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          vector_fmul_reverse_c(dst,src0,src1,len);
          free(dst);
          free(src0);
          free(src1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

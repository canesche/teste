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
typedef  size_t uint8_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void pseudocolor_filter_11d(int max, int width, int height,
                                   const uint8_t *index,
                                   const uint8_t *src,
                                   uint8_t *dst,
                                   ptrdiff_t ilinesize,
                                   ptrdiff_t slinesize,
                                   ptrdiff_t dlinesize,
                                   float *lut)
{
    int x, y;

    for (y = 0; y < height; y++) {
        for (x = 0; x < width; x++) {
            int v = lut[index[(y >> 1) * ilinesize + (x >> 1)]];

            if (v >= 0 && v <= max) {
                dst[x] = v;
            } else {
                dst[x] = src[x];
            }
        }
        src += slinesize;
        dst += dlinesize;
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
          int max = 100;
          int width = 100;
          int height = 100;
          int ilinesize = 100;
          int slinesize = 100;
          int dlinesize = 100;
          int _len_index0 = 1;
          const unsigned long * index = (const unsigned long *) malloc(_len_index0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const unsigned long * src = (const unsigned long *) malloc(_len_src0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 1;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_11d(max,width,height,index,src,dst,ilinesize,slinesize,dlinesize,lut);
          free(index);
          free(src);
          free(dst);
          free(lut);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max = 255;
          int width = 255;
          int height = 255;
          int ilinesize = 255;
          int slinesize = 255;
          int dlinesize = 255;
          int _len_index0 = 65025;
          const unsigned long * index = (const unsigned long *) malloc(_len_index0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const unsigned long * src = (const unsigned long *) malloc(_len_src0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 65025;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_11d(max,width,height,index,src,dst,ilinesize,slinesize,dlinesize,lut);
          free(index);
          free(src);
          free(dst);
          free(lut);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max = 10;
          int width = 10;
          int height = 10;
          int ilinesize = 10;
          int slinesize = 10;
          int dlinesize = 10;
          int _len_index0 = 100;
          const unsigned long * index = (const unsigned long *) malloc(_len_index0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const unsigned long * src = (const unsigned long *) malloc(_len_src0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 100;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_11d(max,width,height,index,src,dst,ilinesize,slinesize,dlinesize,lut);
          free(index);
          free(src);
          free(dst);
          free(lut);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

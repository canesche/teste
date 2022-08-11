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
typedef  int uint8_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void premultiply8offset(const uint8_t *msrc, const uint8_t *asrc,
                               uint8_t *dst,
                               ptrdiff_t mlinesize, ptrdiff_t alinesize,
                               ptrdiff_t dlinesize,
                               int w, int h,
                               int half, int shift, int offset)
{
    int x, y;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            dst[x] = ((((msrc[x] - offset) * (((asrc[x] >> 1) & 1) + asrc[x])) + 128) >> 8) + offset;
        }

        dst  += dlinesize;
        msrc += mlinesize;
        asrc += alinesize;
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
          int mlinesize = 100;
          int alinesize = 100;
          int dlinesize = 100;
          int w = 100;
          int h = 100;
          int half = 100;
          int shift = 100;
          int offset = 100;
          int _len_msrc0 = 1;
          const int * msrc = (const int *) malloc(_len_msrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_msrc0; _i0++) {
            msrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asrc0 = 1;
          const int * asrc = (const int *) malloc(_len_asrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_asrc0; _i0++) {
            asrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply8offset(msrc,asrc,dst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(msrc);
          free(asrc);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mlinesize = 255;
          int alinesize = 255;
          int dlinesize = 255;
          int w = 255;
          int h = 255;
          int half = 255;
          int shift = 255;
          int offset = 255;
          int _len_msrc0 = 65025;
          const int * msrc = (const int *) malloc(_len_msrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_msrc0; _i0++) {
            msrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asrc0 = 65025;
          const int * asrc = (const int *) malloc(_len_asrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_asrc0; _i0++) {
            asrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply8offset(msrc,asrc,dst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(msrc);
          free(asrc);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mlinesize = 10;
          int alinesize = 10;
          int dlinesize = 10;
          int w = 10;
          int h = 10;
          int half = 10;
          int shift = 10;
          int offset = 10;
          int _len_msrc0 = 100;
          const int * msrc = (const int *) malloc(_len_msrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_msrc0; _i0++) {
            msrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asrc0 = 100;
          const int * asrc = (const int *) malloc(_len_asrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_asrc0; _i0++) {
            asrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply8offset(msrc,asrc,dst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(msrc);
          free(asrc);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

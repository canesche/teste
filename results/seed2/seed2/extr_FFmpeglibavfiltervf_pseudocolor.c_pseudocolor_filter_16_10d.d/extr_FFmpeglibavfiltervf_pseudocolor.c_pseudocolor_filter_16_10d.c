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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  size_t uint16_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void pseudocolor_filter_16_10d(int max, int width, int height,
                                      const uint8_t *iindex,
                                      const uint8_t *ssrc,
                                      uint8_t *ddst,
                                      ptrdiff_t ilinesize,
                                      ptrdiff_t slinesize,
                                      ptrdiff_t dlinesize,
                                      float *lut)
{
    const uint16_t *index = (const uint16_t *)iindex;
    const uint16_t *src = (const uint16_t *)ssrc;
    uint16_t *dst = (uint16_t *)ddst;
    int x, y;

    for (y = 0; y < height; y++) {
        for (x = 0; x < width; x++) {
            int v = lut[index[x >> 1]];

            if (v >= 0 && v <= max) {
                dst[x] = v;
            } else {
                dst[x] = src[x];
            }
        }
        index += ilinesize / 2;
        src += slinesize / 2;
        dst += dlinesize / 2;
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
          int _len_iindex0 = 1;
          const int * iindex = (const int *) malloc(_len_iindex0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iindex0; _i0++) {
            iindex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssrc0 = 1;
          const int * ssrc = (const int *) malloc(_len_ssrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssrc0; _i0++) {
            ssrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 1;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 1;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_16_10d(max,width,height,iindex,ssrc,ddst,ilinesize,slinesize,dlinesize,lut);
          free(iindex);
          free(ssrc);
          free(ddst);
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
          int _len_iindex0 = 65025;
          const int * iindex = (const int *) malloc(_len_iindex0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iindex0; _i0++) {
            iindex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssrc0 = 65025;
          const int * ssrc = (const int *) malloc(_len_ssrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssrc0; _i0++) {
            ssrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 65025;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 65025;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_16_10d(max,width,height,iindex,ssrc,ddst,ilinesize,slinesize,dlinesize,lut);
          free(iindex);
          free(ssrc);
          free(ddst);
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
          int _len_iindex0 = 100;
          const int * iindex = (const int *) malloc(_len_iindex0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_iindex0; _i0++) {
            iindex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssrc0 = 100;
          const int * ssrc = (const int *) malloc(_len_ssrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ssrc0; _i0++) {
            ssrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 100;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut0 = 100;
          float * lut = (float *) malloc(_len_lut0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pseudocolor_filter_16_10d(max,width,height,iindex,ssrc,ddst,ilinesize,slinesize,dlinesize,lut);
          free(iindex);
          free(ssrc);
          free(ddst);
          free(lut);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

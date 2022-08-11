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
typedef  int uint16_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void premultiply16(const uint8_t *mmsrc, const uint8_t *aasrc,
                          uint8_t *ddst,
                          ptrdiff_t mlinesize, ptrdiff_t alinesize,
                          ptrdiff_t dlinesize,
                          int w, int h,
                          int half, int shift, int offset)
{
    const uint16_t *msrc = (const uint16_t *)mmsrc;
    const uint16_t *asrc = (const uint16_t *)aasrc;
    uint16_t *dst = (uint16_t *)ddst;
    int x, y;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            dst[x] = ((msrc[x] * (((asrc[x] >> 1) & 1) + asrc[x])) + half) >> shift;
        }

        dst  += dlinesize / 2;
        msrc += mlinesize / 2;
        asrc += alinesize / 2;
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
          int _len_mmsrc0 = 1;
          const int * mmsrc = (const int *) malloc(_len_mmsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mmsrc0; _i0++) {
            mmsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aasrc0 = 1;
          const int * aasrc = (const int *) malloc(_len_aasrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aasrc0; _i0++) {
            aasrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 1;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply16(mmsrc,aasrc,ddst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(mmsrc);
          free(aasrc);
          free(ddst);
        
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
          int _len_mmsrc0 = 65025;
          const int * mmsrc = (const int *) malloc(_len_mmsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mmsrc0; _i0++) {
            mmsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aasrc0 = 65025;
          const int * aasrc = (const int *) malloc(_len_aasrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aasrc0; _i0++) {
            aasrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 65025;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply16(mmsrc,aasrc,ddst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(mmsrc);
          free(aasrc);
          free(ddst);
        
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
          int _len_mmsrc0 = 100;
          const int * mmsrc = (const int *) malloc(_len_mmsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mmsrc0; _i0++) {
            mmsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aasrc0 = 100;
          const int * aasrc = (const int *) malloc(_len_aasrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_aasrc0; _i0++) {
            aasrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddst0 = 100;
          int * ddst = (int *) malloc(_len_ddst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ddst0; _i0++) {
            ddst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          premultiply16(mmsrc,aasrc,ddst,mlinesize,alinesize,dlinesize,w,h,half,shift,offset);
          free(mmsrc);
          free(aasrc);
          free(ddst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

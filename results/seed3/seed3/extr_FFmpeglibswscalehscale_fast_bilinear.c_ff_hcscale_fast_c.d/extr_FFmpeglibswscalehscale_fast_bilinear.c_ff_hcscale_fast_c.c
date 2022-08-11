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
typedef  unsigned int uint8_t ;
typedef  unsigned int int16_t ;
typedef  int /*<<< orphan*/  SwsContext ;

/* Variables and functions */

void ff_hcscale_fast_c(SwsContext *c, int16_t *dst1, int16_t *dst2,
                           int dstWidth, const uint8_t *src1,
                           const uint8_t *src2, int srcW, int xInc)
{
    int i;
    unsigned int xpos = 0;
    for (i = 0; i < dstWidth; i++) {
        register unsigned int xx     = xpos >> 16;
        register unsigned int xalpha = (xpos & 0xFFFF) >> 9;
        dst1[i] = (src1[xx] * (xalpha ^ 127) + src1[xx + 1] * xalpha);
        dst2[i] = (src2[xx] * (xalpha ^ 127) + src2[xx + 1] * xalpha);
        xpos   += xInc;
    }
    for (i=dstWidth-1; (i*xInc)>>16 >=srcW-1; i--) {
        dst1[i] = src1[srcW-1]*128;
        dst2[i] = src2[srcW-1]*128;
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
          int dstWidth = 100;
          int srcW = 100;
          int xInc = 100;
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 1;
          unsigned int * dst1 = (unsigned int *) malloc(_len_dst10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst20 = 1;
          unsigned int * dst2 = (unsigned int *) malloc(_len_dst20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst20; _i0++) {
            dst2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 1;
          const unsigned int * src1 = (const unsigned int *) malloc(_len_src10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 1;
          const unsigned int * src2 = (const unsigned int *) malloc(_len_src20*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_hcscale_fast_c(c,dst1,dst2,dstWidth,src1,src2,srcW,xInc);
          free(c);
          free(dst1);
          free(dst2);
          free(src1);
          free(src2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dstWidth = 255;
          int srcW = 255;
          int xInc = 255;
          int _len_c0 = 65025;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 65025;
          unsigned int * dst1 = (unsigned int *) malloc(_len_dst10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst20 = 65025;
          unsigned int * dst2 = (unsigned int *) malloc(_len_dst20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst20; _i0++) {
            dst2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 65025;
          const unsigned int * src1 = (const unsigned int *) malloc(_len_src10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 65025;
          const unsigned int * src2 = (const unsigned int *) malloc(_len_src20*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_hcscale_fast_c(c,dst1,dst2,dstWidth,src1,src2,srcW,xInc);
          free(c);
          free(dst1);
          free(dst2);
          free(src1);
          free(src2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dstWidth = 10;
          int srcW = 10;
          int xInc = 10;
          int _len_c0 = 100;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst10 = 100;
          unsigned int * dst1 = (unsigned int *) malloc(_len_dst10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst10; _i0++) {
            dst1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst20 = 100;
          unsigned int * dst2 = (unsigned int *) malloc(_len_dst20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst20; _i0++) {
            dst2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src10 = 100;
          const unsigned int * src1 = (const unsigned int *) malloc(_len_src10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 100;
          const unsigned int * src2 = (const unsigned int *) malloc(_len_src20*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_hcscale_fast_c(c,dst1,dst2,dstWidth,src1,src2,srcW,xInc);
          free(c);
          free(dst1);
          free(dst2);
          free(src1);
          free(src2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

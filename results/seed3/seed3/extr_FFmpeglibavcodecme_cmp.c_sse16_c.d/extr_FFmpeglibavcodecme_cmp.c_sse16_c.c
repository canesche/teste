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
typedef  scalar_t__ uint32_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;
typedef  int /*<<< orphan*/  MpegEncContext ;

/* Variables and functions */
 scalar_t__* ff_square_tab ; 

__attribute__((used)) static int sse16_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
                   ptrdiff_t stride, int h)
{
    int s = 0, i;
    const uint32_t *sq = ff_square_tab + 256;

    for (i = 0; i < h; i++) {
        s += sq[pix1[0]  - pix2[0]];
        s += sq[pix1[1]  - pix2[1]];
        s += sq[pix1[2]  - pix2[2]];
        s += sq[pix1[3]  - pix2[3]];
        s += sq[pix1[4]  - pix2[4]];
        s += sq[pix1[5]  - pix2[5]];
        s += sq[pix1[6]  - pix2[6]];
        s += sq[pix1[7]  - pix2[7]];
        s += sq[pix1[8]  - pix2[8]];
        s += sq[pix1[9]  - pix2[9]];
        s += sq[pix1[10] - pix2[10]];
        s += sq[pix1[11] - pix2[11]];
        s += sq[pix1[12] - pix2[12]];
        s += sq[pix1[13] - pix2[13]];
        s += sq[pix1[14] - pix2[14]];
        s += sq[pix1[15] - pix2[15]];

        pix1 += stride;
        pix2 += stride;
    }
    return s;
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
          int stride = 100;
          int h = 100;
          int _len_v0 = 1;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix10 = 1;
          unsigned long * pix1 = (unsigned long *) malloc(_len_pix10*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 1;
          unsigned long * pix2 = (unsigned long *) malloc(_len_pix20*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sse16_c(v,pix1,pix2,stride,h);
          printf("%d\n", benchRet); 
          free(v);
          free(pix1);
          free(pix2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int h = 255;
          int _len_v0 = 65025;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix10 = 65025;
          unsigned long * pix1 = (unsigned long *) malloc(_len_pix10*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 65025;
          unsigned long * pix2 = (unsigned long *) malloc(_len_pix20*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sse16_c(v,pix1,pix2,stride,h);
          printf("%d\n", benchRet); 
          free(v);
          free(pix1);
          free(pix2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int h = 10;
          int _len_v0 = 100;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix10 = 100;
          unsigned long * pix1 = (unsigned long *) malloc(_len_pix10*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 100;
          unsigned long * pix2 = (unsigned long *) malloc(_len_pix20*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sse16_c(v,pix1,pix2,stride,h);
          printf("%d\n", benchRet); 
          free(v);
          free(pix1);
          free(pix2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

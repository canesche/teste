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
typedef  int uint32_t ;
typedef  int pixel ;

/* Variables and functions */

__attribute__((used)) static void ssim_4x4x2_core( const pixel *pix1, intptr_t stride1,
                             const pixel *pix2, intptr_t stride2,
                             int sums[2][4] )
{
    int x,y,z;

    for( z = 0; z < 2; z++ )
    {
        uint32_t s1 = 0, s2 = 0, ss = 0, s12 = 0;
        for( y = 0; y < 4; y++ )
            for( x = 0; x < 4; x++ )
            {
                int a = pix1[x+y*stride1];
                int b = pix2[x+y*stride2];
                s1  += a;
                s2  += b;
                ss  += a*a;
                ss  += b*b;
                s12 += a*b;
            }
        sums[z][0] = s1;
        sums[z][1] = s2;
        sums[z][2] = ss;
        sums[z][3] = s12;
        pix1 += 4;
        pix2 += 4;
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
          long stride1 = 100;
          long stride2 = 100;
          int _len_pix10 = 1;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 1;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 2;
          int ** sums = (int **) malloc(_len_sums0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 4;
            sums[_i0] = (int *) malloc(_len_sums1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4x2_core(pix1,stride1,pix2,stride2,sums);
          free(pix1);
          free(pix2);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 4;
              free(sums[i1]);
          }
          free(sums);
        
        break;
    }
    // big-arr
    case 1:
    {
          long stride1 = 255;
          long stride2 = 255;
          int _len_pix10 = 65025;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 65025;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 65025;
          int ** sums = (int **) malloc(_len_sums0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 4;
            sums[_i0] = (int *) malloc(_len_sums1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4x2_core(pix1,stride1,pix2,stride2,sums);
          free(pix1);
          free(pix2);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 4;
              free(sums[i1]);
          }
          free(sums);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long stride1 = 10;
          long stride2 = 10;
          int _len_pix10 = 100;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 100;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 100;
          int ** sums = (int **) malloc(_len_sums0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 4;
            sums[_i0] = (int *) malloc(_len_sums1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4x2_core(pix1,stride1,pix2,stride2,sums);
          free(pix1);
          free(pix2);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 4;
              free(sums[i1]);
          }
          free(sums);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

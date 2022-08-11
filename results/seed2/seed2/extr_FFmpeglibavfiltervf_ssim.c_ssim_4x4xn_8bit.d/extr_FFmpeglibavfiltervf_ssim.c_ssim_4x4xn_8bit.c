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
typedef  int uint32_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void ssim_4x4xn_8bit(const uint8_t *main, ptrdiff_t main_stride,
                            const uint8_t *ref, ptrdiff_t ref_stride,
                            int (*sums)[4], int width)
{
    int x, y, z;

    for (z = 0; z < width; z++) {
        uint32_t s1 = 0, s2 = 0, ss = 0, s12 = 0;

        for (y = 0; y < 4; y++) {
            for (x = 0; x < 4; x++) {
                int a = main[x + y * main_stride];
                int b = ref[x + y * ref_stride];

                s1  += a;
                s2  += b;
                ss  += a*a;
                ss  += b*b;
                s12 += a*b;
            }
        }

        sums[z][0] = s1;
        sums[z][1] = s2;
        sums[z][2] = ss;
        sums[z][3] = s12;
        main += 4;
        ref += 4;
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
          int main_stride = 100;
          int ref_stride = 100;
          int width = 100;
          int _len_main0 = 1;
          const int * main = (const int *) malloc(_len_main0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_main0; _i0++) {
            main[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 1;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 4;
          int (*)* sums = (int (*)*) malloc(_len_sums0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 1;
            sums[_i0] = (int ()*) malloc(_len_sums1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4xn_8bit(main,main_stride,ref,ref_stride,sums,width);
          free(main);
          free(ref);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 1;
              free(sums[i1]);
          }
          free(sums);
        
        break;
    }
    // big-arr
    case 1:
    {
          int main_stride = 255;
          int ref_stride = 255;
          int width = 255;
          int _len_main0 = 65025;
          const int * main = (const int *) malloc(_len_main0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_main0; _i0++) {
            main[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 65025;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 65025;
          int (*)* sums = (int (*)*) malloc(_len_sums0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 1;
            sums[_i0] = (int ()*) malloc(_len_sums1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4xn_8bit(main,main_stride,ref,ref_stride,sums,width);
          free(main);
          free(ref);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 1;
              free(sums[i1]);
          }
          free(sums);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int main_stride = 10;
          int ref_stride = 10;
          int width = 10;
          int _len_main0 = 100;
          const int * main = (const int *) malloc(_len_main0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_main0; _i0++) {
            main[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 100;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sums0 = 100;
          int (*)* sums = (int (*)*) malloc(_len_sums0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_sums0; _i0++) {
            int _len_sums1 = 1;
            sums[_i0] = (int ()*) malloc(_len_sums1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_sums1; _i1++) {
              sums[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ssim_4x4xn_8bit(main,main_stride,ref,ref_stride,sums,width);
          free(main);
          free(ref);
          for(int i1 = 0; i1 < _len_sums0; i1++) {
            int _len_sums1 = 1;
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

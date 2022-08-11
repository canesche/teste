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
struct histogram {unsigned int*** data; } ;

/* Variables and functions */
 int B_SHIFT ; 
 int G_SHIFT ; 
 int R_SHIFT ; 

__attribute__((used)) static unsigned int histogram_color(struct histogram *h, int r_min, int r_max,
                                    int g_min, int g_max, int b_min, int b_max)
{
    unsigned long long r_sum = 0, g_sum = 0, b_sum = 0;
    unsigned int tmp, count = 0;
    int r, g, b;

    for (r = r_min; r <= r_max; r++)
    for (g = g_min; g <= g_max; g++)
    for (b = b_min; b <= b_max; b++)
    {
        if (!(tmp = h->data[r][g][b])) continue;
        r_sum += ((r << R_SHIFT) + ((1 << R_SHIFT) / 2)) * tmp;
        g_sum += ((g << G_SHIFT) + ((1 << G_SHIFT) / 2)) * tmp;
        b_sum += ((b << B_SHIFT) + ((1 << B_SHIFT) / 2)) * tmp;
        count += tmp;
    }

    return ((b_sum + (count / 2)) / count) |
           ((g_sum + (count / 2)) / count) << 8 |
           ((r_sum + (count / 2)) / count) << 16 | 0xff000000;
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
          int r_min = 100;
          int r_max = 100;
          int g_min = 100;
          int g_max = 100;
          int b_min = 100;
          int b_max = 100;
          int _len_h0 = 1;
          struct histogram * h = (struct histogram *) malloc(_len_h0*sizeof(struct histogram));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__data0 = 1;
          h[_i0].data = (unsigned int ***) malloc(_len_h__i0__data0*sizeof(unsigned int **));
          for(int _j0 = 0; _j0 < _len_h__i0__data0; _j0++) {
            int _len_h__i0__data1 = 1;
            h[_i0].data[_j0] = (unsigned int **) malloc(_len_h__i0__data1*sizeof(unsigned int *));
            for(int _j1 = 0; _j1 < _len_h__i0__data1; _j1++) {
              int _len_h__i0__data2 = 1;
              h[_i0].data[_j0][_j1] = (unsigned int *) malloc(_len_h__i0__data2*sizeof(unsigned int));
              for(int _j2 = 0; _j2 < _len_h__i0__data2; _j2++) {
                h[_i0].data[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          unsigned int benchRet = histogram_color(h,r_min,r_max,g_min,g_max,b_min,b_max);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          }
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int r_min = 255;
          int r_max = 255;
          int g_min = 255;
          int g_max = 255;
          int b_min = 255;
          int b_max = 255;
          int _len_h0 = 65025;
          struct histogram * h = (struct histogram *) malloc(_len_h0*sizeof(struct histogram));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__data0 = 1;
          h[_i0].data = (unsigned int ***) malloc(_len_h__i0__data0*sizeof(unsigned int **));
          for(int _j0 = 0; _j0 < _len_h__i0__data0; _j0++) {
            int _len_h__i0__data1 = 1;
            h[_i0].data[_j0] = (unsigned int **) malloc(_len_h__i0__data1*sizeof(unsigned int *));
            for(int _j1 = 0; _j1 < _len_h__i0__data1; _j1++) {
              int _len_h__i0__data2 = 1;
              h[_i0].data[_j0][_j1] = (unsigned int *) malloc(_len_h__i0__data2*sizeof(unsigned int));
              for(int _j2 = 0; _j2 < _len_h__i0__data2; _j2++) {
                h[_i0].data[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          unsigned int benchRet = histogram_color(h,r_min,r_max,g_min,g_max,b_min,b_max);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int r_min = 10;
          int r_max = 10;
          int g_min = 10;
          int g_max = 10;
          int b_min = 10;
          int b_max = 10;
          int _len_h0 = 100;
          struct histogram * h = (struct histogram *) malloc(_len_h0*sizeof(struct histogram));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__data0 = 1;
          h[_i0].data = (unsigned int ***) malloc(_len_h__i0__data0*sizeof(unsigned int **));
          for(int _j0 = 0; _j0 < _len_h__i0__data0; _j0++) {
            int _len_h__i0__data1 = 1;
            h[_i0].data[_j0] = (unsigned int **) malloc(_len_h__i0__data1*sizeof(unsigned int *));
            for(int _j1 = 0; _j1 < _len_h__i0__data1; _j1++) {
              int _len_h__i0__data2 = 1;
              h[_i0].data[_j0][_j1] = (unsigned int *) malloc(_len_h__i0__data2*sizeof(unsigned int));
              for(int _j2 = 0; _j2 < _len_h__i0__data2; _j2++) {
                h[_i0].data[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          unsigned int benchRet = histogram_color(h,r_min,r_max,g_min,g_max,b_min,b_max);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int int16_t ;
struct TYPE_3__ {unsigned int** thres2; } ;
typedef  TYPE_1__ PP7Context ;

/* Variables and functions */
 int* factor ; 

__attribute__((used)) static int softthresh_c(PP7Context *p, int16_t *src, int qp)
{
    int i;
    int a;

    a = src[0] * factor[0];
    for (i = 1; i < 16; i++) {
        unsigned int threshold1 = p->thres2[qp][i];
        unsigned int threshold2 = threshold1 << 1;
        int level = src[i];
        if (((unsigned)(level + threshold1)) > threshold2) {
            if (level > 0)
                a += (level - (int)threshold1) * factor[i];
            else
                a += (level + (int)threshold1) * factor[i];
        }
    }
    return (a + (1 << 11)) >> 12;
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
          int qp = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__thres20 = 1;
          p[_i0].thres2 = (unsigned int **) malloc(_len_p__i0__thres20*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_p__i0__thres20; _j0++) {
            int _len_p__i0__thres21 = 1;
            p[_i0].thres2[_j0] = (unsigned int *) malloc(_len_p__i0__thres21*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_p__i0__thres21; _j1++) {
              p[_i0].thres2[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = softthresh_c(p,src,qp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].thres2));
        free(p[_aux].thres2);
          }
          free(p);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int qp = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__thres20 = 1;
          p[_i0].thres2 = (unsigned int **) malloc(_len_p__i0__thres20*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_p__i0__thres20; _j0++) {
            int _len_p__i0__thres21 = 1;
            p[_i0].thres2[_j0] = (unsigned int *) malloc(_len_p__i0__thres21*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_p__i0__thres21; _j1++) {
              p[_i0].thres2[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = softthresh_c(p,src,qp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].thres2));
        free(p[_aux].thres2);
          }
          free(p);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qp = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__thres20 = 1;
          p[_i0].thres2 = (unsigned int **) malloc(_len_p__i0__thres20*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_p__i0__thres20; _j0++) {
            int _len_p__i0__thres21 = 1;
            p[_i0].thres2[_j0] = (unsigned int *) malloc(_len_p__i0__thres21*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_p__i0__thres21; _j1++) {
              p[_i0].thres2[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = softthresh_c(p,src,qp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].thres2));
        free(p[_aux].thres2);
          }
          free(p);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

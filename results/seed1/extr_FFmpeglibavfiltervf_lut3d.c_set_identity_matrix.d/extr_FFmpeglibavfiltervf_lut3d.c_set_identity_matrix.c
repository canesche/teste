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
struct rgbvec {int r; int g; int b; } ;
struct TYPE_3__ {int lutsize; struct rgbvec*** lut; } ;
typedef  TYPE_1__ LUT3DContext ;

/* Variables and functions */

__attribute__((used)) static void set_identity_matrix(LUT3DContext *lut3d, int size)
{
    int i, j, k;
    const float c = 1. / (size - 1);

    lut3d->lutsize = size;
    for (k = 0; k < size; k++) {
        for (j = 0; j < size; j++) {
            for (i = 0; i < size; i++) {
                struct rgbvec *vec = &lut3d->lut[k][j][i];
                vec->r = k * c;
                vec->g = j * c;
                vec->b = i * c;
            }
        }
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
          int size = 100;
          int _len_lut3d0 = 1;
          struct TYPE_3__ * lut3d = (struct TYPE_3__ *) malloc(_len_lut3d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lut3d0; _i0++) {
            lut3d[_i0].lutsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lut3d__i0__lut0 = 1;
          lut3d[_i0].lut = (struct rgbvec ***) malloc(_len_lut3d__i0__lut0*sizeof(struct rgbvec **));
          for(int _j0 = 0; _j0 < _len_lut3d__i0__lut0; _j0++) {
            int _len_lut3d__i0__lut1 = 1;
            lut3d[_i0].lut[_j0] = (struct rgbvec **) malloc(_len_lut3d__i0__lut1*sizeof(struct rgbvec *));
            for(int _j1 = 0; _j1 < _len_lut3d__i0__lut1; _j1++) {
              int _len_lut3d__i0__lut2 = 1;
              lut3d[_i0].lut[_j0][_j1] = (struct rgbvec *) malloc(_len_lut3d__i0__lut2*sizeof(struct rgbvec));
              for(int _j2 = 0; _j2 < _len_lut3d__i0__lut2; _j2++) {
                lut3d[_i0].lut[_j0][_j1]->r = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->g = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->b = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          set_identity_matrix(lut3d,size);
          for(int _aux = 0; _aux < _len_lut3d0; _aux++) {
          }
          free(lut3d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_lut3d0 = 65025;
          struct TYPE_3__ * lut3d = (struct TYPE_3__ *) malloc(_len_lut3d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lut3d0; _i0++) {
            lut3d[_i0].lutsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lut3d__i0__lut0 = 1;
          lut3d[_i0].lut = (struct rgbvec ***) malloc(_len_lut3d__i0__lut0*sizeof(struct rgbvec **));
          for(int _j0 = 0; _j0 < _len_lut3d__i0__lut0; _j0++) {
            int _len_lut3d__i0__lut1 = 1;
            lut3d[_i0].lut[_j0] = (struct rgbvec **) malloc(_len_lut3d__i0__lut1*sizeof(struct rgbvec *));
            for(int _j1 = 0; _j1 < _len_lut3d__i0__lut1; _j1++) {
              int _len_lut3d__i0__lut2 = 1;
              lut3d[_i0].lut[_j0][_j1] = (struct rgbvec *) malloc(_len_lut3d__i0__lut2*sizeof(struct rgbvec));
              for(int _j2 = 0; _j2 < _len_lut3d__i0__lut2; _j2++) {
                lut3d[_i0].lut[_j0][_j1]->r = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->g = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->b = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          set_identity_matrix(lut3d,size);
          for(int _aux = 0; _aux < _len_lut3d0; _aux++) {
          }
          free(lut3d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_lut3d0 = 100;
          struct TYPE_3__ * lut3d = (struct TYPE_3__ *) malloc(_len_lut3d0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lut3d0; _i0++) {
            lut3d[_i0].lutsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lut3d__i0__lut0 = 1;
          lut3d[_i0].lut = (struct rgbvec ***) malloc(_len_lut3d__i0__lut0*sizeof(struct rgbvec **));
          for(int _j0 = 0; _j0 < _len_lut3d__i0__lut0; _j0++) {
            int _len_lut3d__i0__lut1 = 1;
            lut3d[_i0].lut[_j0] = (struct rgbvec **) malloc(_len_lut3d__i0__lut1*sizeof(struct rgbvec *));
            for(int _j1 = 0; _j1 < _len_lut3d__i0__lut1; _j1++) {
              int _len_lut3d__i0__lut2 = 1;
              lut3d[_i0].lut[_j0][_j1] = (struct rgbvec *) malloc(_len_lut3d__i0__lut2*sizeof(struct rgbvec));
              for(int _j2 = 0; _j2 < _len_lut3d__i0__lut2; _j2++) {
                lut3d[_i0].lut[_j0][_j1]->r = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->g = ((-2 * (next_i()%2)) + 1) * next_i();
        lut3d[_i0].lut[_j0][_j1]->b = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          set_identity_matrix(lut3d,size);
          for(int _aux = 0; _aux < _len_lut3d0; _aux++) {
          }
          free(lut3d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

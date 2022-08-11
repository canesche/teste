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
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
typedef  int int32_t ;
struct TYPE_12__ {int i_stepsize; } ;
struct TYPE_11__ {int** coord; } ;
struct TYPE_10__ {int* i_data; int** coord; } ;
struct TYPE_9__ {int* data; int stride; } ;
typedef  TYPE_1__ Jpeg2000T1Context ;
typedef  TYPE_2__ Jpeg2000Component ;
typedef  TYPE_3__ Jpeg2000Cblk ;
typedef  TYPE_4__ Jpeg2000Band ;

/* Variables and functions */

__attribute__((used)) static void dequantization_int(int x, int y, Jpeg2000Cblk *cblk,
                               Jpeg2000Component *comp,
                               Jpeg2000T1Context *t1, Jpeg2000Band *band)
{
    int i, j;
    int w = cblk->coord[0][1] - cblk->coord[0][0];
    for (j = 0; j < (cblk->coord[1][1] - cblk->coord[1][0]); ++j) {
        int32_t *datap = &comp->i_data[(comp->coord[0][1] - comp->coord[0][0]) * (y + j) + x];
        int *src = t1->data + j*t1->stride;
        if (band->i_stepsize == 32768) {
            for (i = 0; i < w; ++i)
                datap[i] = src[i] / 2;
        } else {
            // This should be VERY uncommon
            for (i = 0; i < w; ++i)
                datap[i] = (src[i] * (int64_t)band->i_stepsize) / 65536;
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
          int x = 100;
          int y = 100;
          int _len_cblk0 = 1;
          struct TYPE_11__ * cblk = (struct TYPE_11__ *) malloc(_len_cblk0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cblk0; _i0++) {
              int _len_cblk__i0__coord0 = 1;
          cblk[_i0].coord = (int **) malloc(_len_cblk__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cblk__i0__coord0; _j0++) {
            int _len_cblk__i0__coord1 = 1;
            cblk[_i0].coord[_j0] = (int *) malloc(_len_cblk__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cblk__i0__coord1; _j1++) {
              cblk[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_comp0 = 1;
          struct TYPE_10__ * comp = (struct TYPE_10__ *) malloc(_len_comp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
              int _len_comp__i0__i_data0 = 1;
          comp[_i0].i_data = (int *) malloc(_len_comp__i0__i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__i_data0; _j0++) {
            comp[_i0].i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__coord0 = 1;
          comp[_i0].coord = (int **) malloc(_len_comp__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_comp__i0__coord0; _j0++) {
            int _len_comp__i0__coord1 = 1;
            comp[_i0].coord[_j0] = (int *) malloc(_len_comp__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_comp__i0__coord1; _j1++) {
              comp[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t10 = 1;
          struct TYPE_9__ * t1 = (struct TYPE_9__ *) malloc(_len_t10*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
              int _len_t1__i0__data0 = 1;
          t1[_i0].data = (int *) malloc(_len_t1__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t1__i0__data0; _j0++) {
            t1[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t1[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band0 = 1;
          struct TYPE_12__ * band = (struct TYPE_12__ *) malloc(_len_band0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0].i_stepsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequantization_int(x,y,cblk,comp,t1,band);
          for(int _aux = 0; _aux < _len_cblk0; _aux++) {
          free(*(cblk[_aux].coord));
        free(cblk[_aux].coord);
          }
          free(cblk);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].i_data);
          }
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(*(comp[_aux].coord));
        free(comp[_aux].coord);
          }
          free(comp);
          for(int _aux = 0; _aux < _len_t10; _aux++) {
          free(t1[_aux].data);
          }
          free(t1);
          free(band);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_cblk0 = 65025;
          struct TYPE_11__ * cblk = (struct TYPE_11__ *) malloc(_len_cblk0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cblk0; _i0++) {
              int _len_cblk__i0__coord0 = 1;
          cblk[_i0].coord = (int **) malloc(_len_cblk__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cblk__i0__coord0; _j0++) {
            int _len_cblk__i0__coord1 = 1;
            cblk[_i0].coord[_j0] = (int *) malloc(_len_cblk__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cblk__i0__coord1; _j1++) {
              cblk[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_comp0 = 65025;
          struct TYPE_10__ * comp = (struct TYPE_10__ *) malloc(_len_comp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
              int _len_comp__i0__i_data0 = 1;
          comp[_i0].i_data = (int *) malloc(_len_comp__i0__i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__i_data0; _j0++) {
            comp[_i0].i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__coord0 = 1;
          comp[_i0].coord = (int **) malloc(_len_comp__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_comp__i0__coord0; _j0++) {
            int _len_comp__i0__coord1 = 1;
            comp[_i0].coord[_j0] = (int *) malloc(_len_comp__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_comp__i0__coord1; _j1++) {
              comp[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t10 = 65025;
          struct TYPE_9__ * t1 = (struct TYPE_9__ *) malloc(_len_t10*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
              int _len_t1__i0__data0 = 1;
          t1[_i0].data = (int *) malloc(_len_t1__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t1__i0__data0; _j0++) {
            t1[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t1[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band0 = 65025;
          struct TYPE_12__ * band = (struct TYPE_12__ *) malloc(_len_band0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0].i_stepsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequantization_int(x,y,cblk,comp,t1,band);
          for(int _aux = 0; _aux < _len_cblk0; _aux++) {
          free(*(cblk[_aux].coord));
        free(cblk[_aux].coord);
          }
          free(cblk);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].i_data);
          }
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(*(comp[_aux].coord));
        free(comp[_aux].coord);
          }
          free(comp);
          for(int _aux = 0; _aux < _len_t10; _aux++) {
          free(t1[_aux].data);
          }
          free(t1);
          free(band);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_cblk0 = 100;
          struct TYPE_11__ * cblk = (struct TYPE_11__ *) malloc(_len_cblk0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_cblk0; _i0++) {
              int _len_cblk__i0__coord0 = 1;
          cblk[_i0].coord = (int **) malloc(_len_cblk__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cblk__i0__coord0; _j0++) {
            int _len_cblk__i0__coord1 = 1;
            cblk[_i0].coord[_j0] = (int *) malloc(_len_cblk__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cblk__i0__coord1; _j1++) {
              cblk[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_comp0 = 100;
          struct TYPE_10__ * comp = (struct TYPE_10__ *) malloc(_len_comp0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
              int _len_comp__i0__i_data0 = 1;
          comp[_i0].i_data = (int *) malloc(_len_comp__i0__i_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__i_data0; _j0++) {
            comp[_i0].i_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__coord0 = 1;
          comp[_i0].coord = (int **) malloc(_len_comp__i0__coord0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_comp__i0__coord0; _j0++) {
            int _len_comp__i0__coord1 = 1;
            comp[_i0].coord[_j0] = (int *) malloc(_len_comp__i0__coord1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_comp__i0__coord1; _j1++) {
              comp[_i0].coord[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_t10 = 100;
          struct TYPE_9__ * t1 = (struct TYPE_9__ *) malloc(_len_t10*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_t10; _i0++) {
              int _len_t1__i0__data0 = 1;
          t1[_i0].data = (int *) malloc(_len_t1__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t1__i0__data0; _j0++) {
            t1[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t1[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band0 = 100;
          struct TYPE_12__ * band = (struct TYPE_12__ *) malloc(_len_band0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0].i_stepsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequantization_int(x,y,cblk,comp,t1,band);
          for(int _aux = 0; _aux < _len_cblk0; _aux++) {
          free(*(cblk[_aux].coord));
        free(cblk[_aux].coord);
          }
          free(cblk);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].i_data);
          }
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(*(comp[_aux].coord));
        free(comp[_aux].coord);
          }
          free(comp);
          for(int _aux = 0; _aux < _len_t10; _aux++) {
          free(t1[_aux].data);
          }
          free(t1);
          free(band);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int** dc_val; int b8_stride; int mb_stride; TYPE_2__ cur_pic; } ;
struct TYPE_5__ {int* linesize; } ;
typedef  TYPE_3__ ERContext ;

/* Variables and functions */

__attribute__((used)) static void put_dc(ERContext *s, uint8_t *dest_y, uint8_t *dest_cb,
                   uint8_t *dest_cr, int mb_x, int mb_y)
{
    int *linesize = s->cur_pic.f->linesize;
    int dc, dcu, dcv, y, i;
    for (i = 0; i < 4; i++) {
        dc = s->dc_val[0][mb_x * 2 + (i &  1) + (mb_y * 2 + (i >> 1)) * s->b8_stride];
        if (dc < 0)
            dc = 0;
        else if (dc > 2040)
            dc = 2040;
        for (y = 0; y < 8; y++) {
            int x;
            for (x = 0; x < 8; x++)
                dest_y[x + (i &  1) * 8 + (y + (i >> 1) * 8) * linesize[0]] = dc / 8;
        }
    }
    dcu = s->dc_val[1][mb_x + mb_y * s->mb_stride];
    dcv = s->dc_val[2][mb_x + mb_y * s->mb_stride];
    if (dcu < 0)
        dcu = 0;
    else if (dcu > 2040)
        dcu = 2040;
    if (dcv < 0)
        dcv = 0;
    else if (dcv > 2040)
        dcv = 2040;

    if (dest_cr)
    for (y = 0; y < 8; y++) {
        int x;
        for (x = 0; x < 8; x++) {
            dest_cb[x + y * linesize[1]] = dcu / 8;
            dest_cr[x + y * linesize[2]] = dcv / 8;
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
          int mb_x = 100;
          int mb_y = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dc_val0 = 1;
          s[_i0].dc_val = (int **) malloc(_len_s__i0__dc_val0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dc_val0; _j0++) {
            int _len_s__i0__dc_val1 = 1;
            s[_i0].dc_val[_j0] = (int *) malloc(_len_s__i0__dc_val1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dc_val1; _j1++) {
              s[_i0].dc_val[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cur_pic_f0 = 1;
          s[_i0].cur_pic.f = (struct TYPE_5__ *) malloc(_len_s__i0__cur_pic_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f0; _j0++) {
              int _len_s__i0__cur_pic_f_linesize0 = 1;
          s[_i0].cur_pic.f->linesize = (int *) malloc(_len_s__i0__cur_pic_f_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f_linesize0; _j0++) {
            s[_i0].cur_pic.f->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dest_y0 = 1;
          int * dest_y = (int *) malloc(_len_dest_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_y0; _i0++) {
            dest_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cb0 = 1;
          int * dest_cb = (int *) malloc(_len_dest_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cb0; _i0++) {
            dest_cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cr0 = 1;
          int * dest_cr = (int *) malloc(_len_dest_cr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cr0; _i0++) {
            dest_cr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          put_dc(s,dest_y,dest_cb,dest_cr,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dc_val));
        free(s[_aux].dc_val);
          }
          free(s);
          free(dest_y);
          free(dest_cb);
          free(dest_cr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mb_x = 255;
          int mb_y = 255;
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dc_val0 = 1;
          s[_i0].dc_val = (int **) malloc(_len_s__i0__dc_val0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dc_val0; _j0++) {
            int _len_s__i0__dc_val1 = 1;
            s[_i0].dc_val[_j0] = (int *) malloc(_len_s__i0__dc_val1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dc_val1; _j1++) {
              s[_i0].dc_val[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cur_pic_f0 = 1;
          s[_i0].cur_pic.f = (struct TYPE_5__ *) malloc(_len_s__i0__cur_pic_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f0; _j0++) {
              int _len_s__i0__cur_pic_f_linesize0 = 1;
          s[_i0].cur_pic.f->linesize = (int *) malloc(_len_s__i0__cur_pic_f_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f_linesize0; _j0++) {
            s[_i0].cur_pic.f->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dest_y0 = 65025;
          int * dest_y = (int *) malloc(_len_dest_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_y0; _i0++) {
            dest_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cb0 = 65025;
          int * dest_cb = (int *) malloc(_len_dest_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cb0; _i0++) {
            dest_cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cr0 = 65025;
          int * dest_cr = (int *) malloc(_len_dest_cr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cr0; _i0++) {
            dest_cr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          put_dc(s,dest_y,dest_cb,dest_cr,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dc_val));
        free(s[_aux].dc_val);
          }
          free(s);
          free(dest_y);
          free(dest_cb);
          free(dest_cr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mb_x = 10;
          int mb_y = 10;
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dc_val0 = 1;
          s[_i0].dc_val = (int **) malloc(_len_s__i0__dc_val0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dc_val0; _j0++) {
            int _len_s__i0__dc_val1 = 1;
            s[_i0].dc_val[_j0] = (int *) malloc(_len_s__i0__dc_val1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dc_val1; _j1++) {
              s[_i0].dc_val[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cur_pic_f0 = 1;
          s[_i0].cur_pic.f = (struct TYPE_5__ *) malloc(_len_s__i0__cur_pic_f0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f0; _j0++) {
              int _len_s__i0__cur_pic_f_linesize0 = 1;
          s[_i0].cur_pic.f->linesize = (int *) malloc(_len_s__i0__cur_pic_f_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_pic_f_linesize0; _j0++) {
            s[_i0].cur_pic.f->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dest_y0 = 100;
          int * dest_y = (int *) malloc(_len_dest_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_y0; _i0++) {
            dest_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cb0 = 100;
          int * dest_cb = (int *) malloc(_len_dest_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cb0; _i0++) {
            dest_cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_cr0 = 100;
          int * dest_cr = (int *) malloc(_len_dest_cr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_cr0; _i0++) {
            dest_cr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          put_dc(s,dest_y,dest_cb,dest_cr,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dc_val));
        free(s[_aux].dc_val);
          }
          free(s);
          free(dest_y);
          free(dest_cb);
          free(dest_cr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

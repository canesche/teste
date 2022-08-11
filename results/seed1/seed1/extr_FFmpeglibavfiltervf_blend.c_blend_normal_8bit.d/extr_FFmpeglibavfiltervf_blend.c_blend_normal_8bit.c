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
typedef  double uint8_t ;
typedef  int ptrdiff_t ;
struct TYPE_3__ {double opacity; } ;
typedef  TYPE_1__ FilterParams ;

/* Variables and functions */

__attribute__((used)) static void blend_normal_8bit(const uint8_t *top, ptrdiff_t top_linesize,
                              const uint8_t *bottom, ptrdiff_t bottom_linesize,
                              uint8_t *dst, ptrdiff_t dst_linesize,
                              ptrdiff_t width, ptrdiff_t height,
                              FilterParams *param, double *values, int starty)
{
    const double opacity = param->opacity;
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            dst[j] = top[j] * opacity + bottom[j] * (1. - opacity);
        }
        dst    += dst_linesize;
        top    += top_linesize;
        bottom += bottom_linesize;
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
          int top_linesize = 100;
          int bottom_linesize = 100;
          int dst_linesize = 100;
          int width = 100;
          int height = 100;
          int starty = 100;
          int _len_top0 = 1;
          const double * top = (const double *) malloc(_len_top0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_bottom0 = 1;
          const double * bottom = (const double *) malloc(_len_bottom0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 1;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_param0 = 1;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].opacity = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_values0 = 1;
          double * values = (double *) malloc(_len_values0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          blend_normal_8bit(top,top_linesize,bottom,bottom_linesize,dst,dst_linesize,width,height,param,values,starty);
          free(top);
          free(bottom);
          free(dst);
          free(param);
          free(values);
        
        break;
    }
    // big-arr
    case 1:
    {
          int top_linesize = 255;
          int bottom_linesize = 255;
          int dst_linesize = 255;
          int width = 255;
          int height = 255;
          int starty = 255;
          int _len_top0 = 65025;
          const double * top = (const double *) malloc(_len_top0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_bottom0 = 65025;
          const double * bottom = (const double *) malloc(_len_bottom0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 65025;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_param0 = 65025;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].opacity = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_values0 = 65025;
          double * values = (double *) malloc(_len_values0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          blend_normal_8bit(top,top_linesize,bottom,bottom_linesize,dst,dst_linesize,width,height,param,values,starty);
          free(top);
          free(bottom);
          free(dst);
          free(param);
          free(values);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int top_linesize = 10;
          int bottom_linesize = 10;
          int dst_linesize = 10;
          int width = 10;
          int height = 10;
          int starty = 10;
          int _len_top0 = 100;
          const double * top = (const double *) malloc(_len_top0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_bottom0 = 100;
          const double * bottom = (const double *) malloc(_len_bottom0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 100;
          double * dst = (double *) malloc(_len_dst0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_param0 = 100;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].opacity = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_values0 = 100;
          double * values = (double *) malloc(_len_values0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          blend_normal_8bit(top,top_linesize,bottom,bottom_linesize,dst,dst_linesize,width,height,param,values,starty);
          free(top);
          free(bottom);
          free(dst);
          free(param);
          free(values);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

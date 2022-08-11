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
typedef  int uint8_t ;
struct TYPE_3__ {int contrast; double brightness; } ;
typedef  TYPE_1__ EQParameters ;

/* Variables and functions */

__attribute__((used)) static void process_c(EQParameters *param, uint8_t *dst, int dst_stride,
                      const uint8_t *src, int src_stride, int w, int h)
{
    int x, y, pel;

    int contrast = (int) (param->contrast * 256 * 16);
    int brightness = ((int) (100.0 * param->brightness + 100.0) * 511) / 200 - 128 - contrast / 32;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            pel = ((src[y * src_stride + x] * contrast) >> 12) + brightness;

            if (pel & ~255)
                pel = (-pel) >> 31;

            dst[y * dst_stride + x] = pel;
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
          int dst_stride = 100;
          int src_stride = 100;
          int w = 100;
          int h = 100;
          int _len_param0 = 1;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].brightness = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_c(param,dst,dst_stride,src,src_stride,w,h);
          free(param);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dst_stride = 255;
          int src_stride = 255;
          int w = 255;
          int h = 255;
          int _len_param0 = 65025;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].brightness = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_c(param,dst,dst_stride,src,src_stride,w,h);
          free(param);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dst_stride = 10;
          int src_stride = 10;
          int w = 10;
          int h = 10;
          int _len_param0 = 100;
          struct TYPE_3__ * param = (struct TYPE_3__ *) malloc(_len_param0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].contrast = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].brightness = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          process_c(param,dst,dst_stride,src,src_stride,w,h);
          free(param);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

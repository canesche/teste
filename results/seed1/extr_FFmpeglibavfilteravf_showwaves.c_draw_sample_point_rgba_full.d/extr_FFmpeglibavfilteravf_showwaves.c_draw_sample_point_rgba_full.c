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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */

__attribute__((used)) static void draw_sample_point_rgba_full(uint8_t *buf, int height, int linesize,
                                   int16_t *prev_y,
                                   const uint8_t color[4], int h)
{
    if (h >= 0 && h < height) {
        buf[h * linesize + 0] = color[0];
        buf[h * linesize + 1] = color[1];
        buf[h * linesize + 2] = color[2];
        buf[h * linesize + 3] = color[3];
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
          int height = 100;
          int linesize = 100;
          int h = 100;
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_y0 = 1;
          int * prev_y = (int *) malloc(_len_prev_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_y0; _i0++) {
            prev_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 4;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_sample_point_rgba_full(buf,height,linesize,prev_y,color,h);
          free(buf);
          free(prev_y);
          free(color);
        
        break;
    }
    // big-arr
    case 1:
    {
          int height = 255;
          int linesize = 255;
          int h = 255;
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_y0 = 65025;
          int * prev_y = (int *) malloc(_len_prev_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_y0; _i0++) {
            prev_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 65025;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_sample_point_rgba_full(buf,height,linesize,prev_y,color,h);
          free(buf);
          free(prev_y);
          free(color);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int height = 10;
          int linesize = 10;
          int h = 10;
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_y0 = 100;
          int * prev_y = (int *) malloc(_len_prev_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_y0; _i0++) {
            prev_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 100;
          int const* color = (int const*) malloc(_len_color0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_sample_point_rgba_full(buf,height,linesize,prev_y,color,h);
          free(buf);
          free(prev_y);
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Variables and functions */

float im2col_get_pixel(float *im, int height, int width, int channels,
                        int row, int col, int channel, int pad)
{
    row -= pad;
    col -= pad;

    if (row < 0 || col < 0 ||
        row >= height || col >= width) return 0;
    return im[col + width*(row + height*channel)];
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
          int width = 100;
          int channels = 100;
          int row = 100;
          int col = 100;
          int channel = 100;
          int pad = 100;
          int _len_im0 = 1;
          float * im = (float *) malloc(_len_im0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = im2col_get_pixel(im,height,width,channels,row,col,channel,pad);
          printf("%f\n", benchRet); 
          free(im);
        
        break;
    }
    // big-arr
    case 1:
    {
          int height = 255;
          int width = 255;
          int channels = 255;
          int row = 255;
          int col = 255;
          int channel = 255;
          int pad = 255;
          int _len_im0 = 65025;
          float * im = (float *) malloc(_len_im0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = im2col_get_pixel(im,height,width,channels,row,col,channel,pad);
          printf("%f\n", benchRet); 
          free(im);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int height = 10;
          int width = 10;
          int channels = 10;
          int row = 10;
          int col = 10;
          int channel = 10;
          int pad = 10;
          int _len_im0 = 100;
          float * im = (float *) malloc(_len_im0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = im2col_get_pixel(im,height,width,channels,row,col,channel,pad);
          printf("%f\n", benchRet); 
          free(im);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

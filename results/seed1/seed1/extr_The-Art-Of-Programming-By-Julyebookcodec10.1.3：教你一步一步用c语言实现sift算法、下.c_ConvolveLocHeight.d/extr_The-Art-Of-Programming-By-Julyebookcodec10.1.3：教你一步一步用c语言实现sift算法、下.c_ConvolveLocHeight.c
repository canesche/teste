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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ fl; } ;
struct TYPE_5__ {int rows; int step; TYPE_1__ data; } ;
typedef  TYPE_2__ CvMat ;

/* Variables and functions */

float ConvolveLocHeight(float* kernel, int dim, CvMat * src, int x, int y)   
{  
#define Src(ROW,COL) ((float *)(src->data.fl + src->step/sizeof(float) *(ROW)))[(COL)]  
	unsigned int j;  
	float pixel = 0;  
	int cen = dim / 2;  
	//printf("ConvolveLoc(): Applying convoluation at location (%d, %d)/n", x, y);  
	for ( j = 0; j < dim; j++)   
	{  
		int row = y + (j - cen);  
		if (row < 0)  
			row = 0;  
		if (row >= src->rows)  
			row = src->rows - 1;  
		pixel += kernel[j] * Src(row,x);  
	}  
	if (pixel > 1)  
		pixel = 1;  
	return pixel;  
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
          int dim = 100;
          int x = 100;
          int y = 100;
          int _len_kernel0 = 1;
          float * kernel = (float *) malloc(_len_kernel0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_kernel0; _i0++) {
            kernel[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 1;
          struct TYPE_5__ * src = (struct TYPE_5__ *) malloc(_len_src0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].data.fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = ConvolveLocHeight(kernel,dim,src,x,y);
          printf("%f\n", benchRet); 
          free(kernel);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dim = 255;
          int x = 255;
          int y = 255;
          int _len_kernel0 = 65025;
          float * kernel = (float *) malloc(_len_kernel0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_kernel0; _i0++) {
            kernel[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 65025;
          struct TYPE_5__ * src = (struct TYPE_5__ *) malloc(_len_src0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].data.fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = ConvolveLocHeight(kernel,dim,src,x,y);
          printf("%f\n", benchRet); 
          free(kernel);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dim = 10;
          int x = 10;
          int y = 10;
          int _len_kernel0 = 100;
          float * kernel = (float *) malloc(_len_kernel0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_kernel0; _i0++) {
            kernel[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_src0 = 100;
          struct TYPE_5__ * src = (struct TYPE_5__ *) malloc(_len_src0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].data.fl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = ConvolveLocHeight(kernel,dim,src,x,y);
          printf("%f\n", benchRet); 
          free(kernel);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

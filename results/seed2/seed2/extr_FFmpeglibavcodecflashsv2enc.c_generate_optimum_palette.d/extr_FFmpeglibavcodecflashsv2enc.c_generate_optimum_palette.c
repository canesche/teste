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
typedef  int /*<<< orphan*/  Palette ;

/* Variables and functions */

__attribute__((used)) static int generate_optimum_palette(Palette * palette, const uint8_t * image,
                                   int width, int height, int stride)
{
    //this isn't implemented yet!  Default palette only!
    return -1;
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
          int width = 100;
          int height = 100;
          int stride = 100;
          int _len_palette0 = 1;
          int * palette = (int *) malloc(_len_palette0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_image0 = 1;
          const int * image = (const int *) malloc(_len_image0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = generate_optimum_palette(palette,image,width,height,stride);
          printf("%d\n", benchRet); 
          free(palette);
          free(image);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int stride = 255;
          int _len_palette0 = 65025;
          int * palette = (int *) malloc(_len_palette0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_image0 = 65025;
          const int * image = (const int *) malloc(_len_image0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = generate_optimum_palette(palette,image,width,height,stride);
          printf("%d\n", benchRet); 
          free(palette);
          free(image);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int stride = 10;
          int _len_palette0 = 100;
          int * palette = (int *) malloc(_len_palette0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_palette0; _i0++) {
            palette[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_image0 = 100;
          const int * image = (const int *) malloc(_len_image0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = generate_optimum_palette(palette,image,width,height,stride);
          printf("%d\n", benchRet); 
          free(palette);
          free(image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

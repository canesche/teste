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
typedef  unsigned long long uint64_t ;
struct TYPE_6__ {TYPE_1__* frames; } ;
struct TYPE_7__ {TYPE_2__ gif; } ;
typedef  TYPE_3__ gs_image_file_t ;
struct TYPE_5__ {scalar_t__ frame_delay; } ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t get_time(gs_image_file_t *image, int i)
{
	uint64_t val = (uint64_t)image->gif.frames[i].frame_delay * 10000000ULL;
	if (!val)
		val = 100000000;
	return val;
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
          int i = 100;
          int _len_image0 = 1;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
              int _len_image__i0__gif_frames0 = 1;
          image[_i0].gif.frames = (struct TYPE_5__ *) malloc(_len_image__i0__gif_frames0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_image__i0__gif_frames0; _j0++) {
            image[_i0].gif.frames->frame_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = get_time(image,i);
          printf("%llu\n", benchRet); 
          free(image);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_image0 = 65025;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
              int _len_image__i0__gif_frames0 = 1;
          image[_i0].gif.frames = (struct TYPE_5__ *) malloc(_len_image__i0__gif_frames0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_image__i0__gif_frames0; _j0++) {
            image[_i0].gif.frames->frame_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = get_time(image,i);
          printf("%llu\n", benchRet); 
          free(image);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_image0 = 100;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
              int _len_image__i0__gif_frames0 = 1;
          image[_i0].gif.frames = (struct TYPE_5__ *) malloc(_len_image__i0__gif_frames0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_image__i0__gif_frames0; _j0++) {
            image[_i0].gif.frames->frame_delay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = get_time(image,i);
          printf("%llu\n", benchRet); 
          free(image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u_long ;
typedef  int u_int ;
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
struct fb_info {scalar_t__ screen_base; } ;

/* Variables and functions */

void atafb_mfb_linefill(struct fb_info *info, u_long next_line,
			int dy, int dx, u32 width,
			const u8 *data, u32 bgcolor, u32 fgcolor)
{
	u8 *dest;
	u_int rows;

	dest = (u8 *)info->screen_base + dy * next_line + (dx >> 3);

	for (rows = width / 8; rows--; /* check margins */ ) {
		// use fast_memmove or fb_memmove
		*dest++ = *data++;
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
          int next_line = 100;
          int dy = 100;
          int dx = 100;
          int width = 100;
          int bgcolor = 100;
          int fgcolor = 100;
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atafb_mfb_linefill(info,next_line,dy,dx,width,data,bgcolor,fgcolor);
          free(info);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int next_line = 255;
          int dy = 255;
          int dx = 255;
          int width = 255;
          int bgcolor = 255;
          int fgcolor = 255;
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atafb_mfb_linefill(info,next_line,dy,dx,width,data,bgcolor,fgcolor);
          free(info);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int next_line = 10;
          int dy = 10;
          int dx = 10;
          int width = 10;
          int bgcolor = 10;
          int fgcolor = 10;
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atafb_mfb_linefill(info,next_line,dy,dx,width,data,bgcolor,fgcolor);
          free(info);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

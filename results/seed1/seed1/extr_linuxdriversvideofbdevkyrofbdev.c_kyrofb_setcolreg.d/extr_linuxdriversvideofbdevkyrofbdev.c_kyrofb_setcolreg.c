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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u_int ;
struct kyrofb_info {int* palette; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; struct kyrofb_info* par; } ;

/* Variables and functions */

__attribute__((used)) static int kyrofb_setcolreg(u_int regno, u_int red, u_int green,
			    u_int blue, u_int transp, struct fb_info *info)
{
	struct kyrofb_info *par = info->par;

	if (regno > 255)
		return 1;	/* Invalid register */

	if (regno < 16) {
		switch (info->var.bits_per_pixel) {
		case 16:
			par->palette[regno] =
			     (red   & 0xf800) |
			    ((green & 0xfc00) >> 5) |
			    ((blue  & 0xf800) >> 11);
			break;
		case 32:
			red >>= 8; green >>= 8; blue >>= 8; transp >>= 8;
			par->palette[regno] =
			    (transp << 24) | (red << 16) | (green << 8) | blue;
			break;
		}
	}

	return 0;
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
          int regno = 100;
          int red = 100;
          int green = 100;
          int blue = 100;
          int transp = 100;
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct kyrofb_info *) malloc(_len_info__i0__par0*sizeof(struct kyrofb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_palette0 = 1;
          info[_i0].par->palette = (int *) malloc(_len_info__i0__par_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__par_palette0; _j0++) {
            info[_i0].par->palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = kyrofb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int regno = 255;
          int red = 255;
          int green = 255;
          int blue = 255;
          int transp = 255;
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct kyrofb_info *) malloc(_len_info__i0__par0*sizeof(struct kyrofb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_palette0 = 1;
          info[_i0].par->palette = (int *) malloc(_len_info__i0__par_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__par_palette0; _j0++) {
            info[_i0].par->palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = kyrofb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int regno = 10;
          int red = 10;
          int green = 10;
          int blue = 10;
          int transp = 10;
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct kyrofb_info *) malloc(_len_info__i0__par0*sizeof(struct kyrofb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_palette0 = 1;
          info[_i0].par->palette = (int *) malloc(_len_info__i0__par_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__par_palette0; _j0++) {
            info[_i0].par->palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = kyrofb_setcolreg(regno,red,green,blue,transp,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_10__ {int length; unsigned int offset; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_11__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_7__ {scalar_t__ visual; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; } ;
struct TYPE_12__ {int* palette; } ;

/* Variables and functions */
 int AU1200_LCD_NBR_PALETTE_ENTRIES ; 
 int EINVAL ; 
 scalar_t__ FB_VISUAL_TRUECOLOR ; 
 TYPE_6__* lcd ; 

__attribute__((used)) static int au1200fb_fb_setcolreg(unsigned regno, unsigned red, unsigned green,
	unsigned blue, unsigned transp, struct fb_info *fbi)
{
	volatile u32 *palette = lcd->palette;
	u32 value;

	if (regno > (AU1200_LCD_NBR_PALETTE_ENTRIES - 1))
		return -EINVAL;

	if (fbi->var.grayscale) {
		/* Convert color to grayscale */
		red = green = blue =
			(19595 * red + 38470 * green + 7471 * blue) >> 16;
	}

	if (fbi->fix.visual == FB_VISUAL_TRUECOLOR) {
		/* Place color in the pseudopalette */
		if (regno > 16)
			return -EINVAL;

		palette = (u32*) fbi->pseudo_palette;

		red   >>= (16 - fbi->var.red.length);
		green >>= (16 - fbi->var.green.length);
		blue  >>= (16 - fbi->var.blue.length);

		value = (red   << fbi->var.red.offset) 	|
			(green << fbi->var.green.offset)|
			(blue  << fbi->var.blue.offset);
		value &= 0xFFFF;

	} else if (1 /*FIX!!! panel_is_active(fbdev->panel)*/) {
		/* COLOR TFT PALLETTIZED (use RGB 565) */
		value = (red & 0xF800)|((green >> 5) &
				0x07E0)|((blue >> 11) & 0x001F);
		value &= 0xFFFF;

	} else if (0 /*panel_is_color(fbdev->panel)*/) {
		/* COLOR STN MODE */
		value = 0x1234;
		value &= 0xFFF;
	} else {
		/* MONOCHROME MODE */
		value = (green >> 12) & 0x000F;
		value &= 0xF;
	}

	palette[regno] = value;

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
          unsigned int regno = 100;
          unsigned int red = 100;
          unsigned int green = 100;
          unsigned int blue = 100;
          unsigned int transp = 100;
          int _len_fbi0 = 1;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
            fbi[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = au1200fb_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          free(fbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int regno = 255;
          unsigned int red = 255;
          unsigned int green = 255;
          unsigned int blue = 255;
          unsigned int transp = 255;
          int _len_fbi0 = 65025;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
            fbi[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = au1200fb_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          free(fbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int regno = 10;
          unsigned int red = 10;
          unsigned int green = 10;
          unsigned int blue = 10;
          unsigned int transp = 10;
          int _len_fbi0 = 100;
          struct fb_info * fbi = (struct fb_info *) malloc(_len_fbi0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_fbi0; _i0++) {
            fbi[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].var.grayscale = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
        fbi[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = au1200fb_fb_setcolreg(regno,red,green,blue,transp,fbi);
          printf("%d\n", benchRet); 
          free(fbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

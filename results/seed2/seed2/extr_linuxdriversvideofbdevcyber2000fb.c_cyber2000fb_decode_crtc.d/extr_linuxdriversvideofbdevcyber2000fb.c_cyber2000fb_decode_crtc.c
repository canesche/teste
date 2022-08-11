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
typedef  int u_int ;
struct par_info {int* crtc; int pitch; int crtc_ofl; } ;
struct fb_var_screeninfo {int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; int vmode; } ;
struct cfb_info {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int EXT_CRT_VRTOFL_INTERLACE ; 
 int EXT_CRT_VRTOFL_LINECOMP10 ; 
 int FB_VMODE_INTERLACED ; 
 int FB_VMODE_MASK ; 

__attribute__((used)) static int
cyber2000fb_decode_crtc(struct par_info *hw, struct cfb_info *cfb,
			struct fb_var_screeninfo *var)
{
	u_int Htotal, Hblankend, Hsyncend;
	u_int Vtotal, Vdispend, Vblankstart, Vblankend, Vsyncstart, Vsyncend;
#define ENCODE_BIT(v, b1, m, b2) ((((v) >> (b1)) & (m)) << (b2))

	hw->crtc[13] = hw->pitch;
	hw->crtc[17] = 0xe3;
	hw->crtc[14] = 0;
	hw->crtc[8]  = 0;

	Htotal     = var->xres + var->right_margin +
		     var->hsync_len + var->left_margin;

	if (Htotal > 2080)
		return -EINVAL;

	hw->crtc[0] = (Htotal >> 3) - 5;
	hw->crtc[1] = (var->xres >> 3) - 1;
	hw->crtc[2] = var->xres >> 3;
	hw->crtc[4] = (var->xres + var->right_margin) >> 3;

	Hblankend   = (Htotal - 4 * 8) >> 3;

	hw->crtc[3] = ENCODE_BIT(Hblankend,  0, 0x1f,  0) |
		      ENCODE_BIT(1,          0, 0x01,  7);

	Hsyncend    = (var->xres + var->right_margin + var->hsync_len) >> 3;

	hw->crtc[5] = ENCODE_BIT(Hsyncend,   0, 0x1f,  0) |
		      ENCODE_BIT(Hblankend,  5, 0x01,  7);

	Vdispend    = var->yres - 1;
	Vsyncstart  = var->yres + var->lower_margin;
	Vsyncend    = var->yres + var->lower_margin + var->vsync_len;
	Vtotal      = var->yres + var->lower_margin + var->vsync_len +
		      var->upper_margin - 2;

	if (Vtotal > 2047)
		return -EINVAL;

	Vblankstart = var->yres + 6;
	Vblankend   = Vtotal - 10;

	hw->crtc[6]  = Vtotal;
	hw->crtc[7]  = ENCODE_BIT(Vtotal,     8, 0x01,  0) |
			ENCODE_BIT(Vdispend,   8, 0x01,  1) |
			ENCODE_BIT(Vsyncstart, 8, 0x01,  2) |
			ENCODE_BIT(Vblankstart, 8, 0x01,  3) |
			ENCODE_BIT(1,          0, 0x01,  4) |
			ENCODE_BIT(Vtotal,     9, 0x01,  5) |
			ENCODE_BIT(Vdispend,   9, 0x01,  6) |
			ENCODE_BIT(Vsyncstart, 9, 0x01,  7);
	hw->crtc[9]  = ENCODE_BIT(0,          0, 0x1f,  0) |
			ENCODE_BIT(Vblankstart, 9, 0x01,  5) |
			ENCODE_BIT(1,          0, 0x01,  6);
	hw->crtc[10] = Vsyncstart;
	hw->crtc[11] = ENCODE_BIT(Vsyncend,   0, 0x0f,  0) |
		       ENCODE_BIT(1,          0, 0x01,  7);
	hw->crtc[12] = Vdispend;
	hw->crtc[15] = Vblankstart;
	hw->crtc[16] = Vblankend;
	hw->crtc[18] = 0xff;

	/*
	 * overflow - graphics reg 0x11
	 * 0=VTOTAL:10 1=VDEND:10 2=VRSTART:10 3=VBSTART:10
	 * 4=LINECOMP:10 5-IVIDEO 6=FIXCNT
	 */
	hw->crtc_ofl =
		ENCODE_BIT(Vtotal, 10, 0x01, 0) |
		ENCODE_BIT(Vdispend, 10, 0x01, 1) |
		ENCODE_BIT(Vsyncstart, 10, 0x01, 2) |
		ENCODE_BIT(Vblankstart, 10, 0x01, 3) |
		EXT_CRT_VRTOFL_LINECOMP10;

	/* woody: set the interlaced bit... */
	/* FIXME: what about doublescan? */
	if ((var->vmode & FB_VMODE_MASK) == FB_VMODE_INTERLACED)
		hw->crtc_ofl |= EXT_CRT_VRTOFL_INTERLACE;

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
          int _len_hw0 = 1;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__crtc0 = 1;
          hw[_i0].crtc = (int *) malloc(_len_hw__i0__crtc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__crtc0; _j0++) {
            hw[_i0].crtc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].crtc_ofl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 1;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_crtc(hw,cfb,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].crtc);
          }
          free(hw);
          free(cfb);
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__crtc0 = 1;
          hw[_i0].crtc = (int *) malloc(_len_hw__i0__crtc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__crtc0; _j0++) {
            hw[_i0].crtc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].crtc_ofl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 65025;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_crtc(hw,cfb,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].crtc);
          }
          free(hw);
          free(cfb);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__crtc0 = 1;
          hw[_i0].crtc = (int *) malloc(_len_hw__i0__crtc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__crtc0; _j0++) {
            hw[_i0].crtc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].crtc_ofl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 100;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_crtc(hw,cfb,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].crtc);
          }
          free(hw);
          free(cfb);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

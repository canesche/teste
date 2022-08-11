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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct TYPE_3__ {int LVDSHDE; int LVDSVDE; } ;
struct xgi_hw_device_info {int const ulCRT2LCDType; int ulExternalChip; } ;
struct xgifb_video_info {scalar_t__ chip; int display2; unsigned long video_size; int /*<<< orphan*/  TV_type; int /*<<< orphan*/  hasVB; TYPE_1__ lvds_data; struct xgi_hw_device_info hw_info; } ;
struct TYPE_4__ {int xres; int yres; int bpp; int chipset; } ;

/* Variables and functions */
 int /*<<< orphan*/  HASVB_CHRONTEL ; 
 int /*<<< orphan*/  HASVB_LVDS_CHRONTEL ; 
#define  LCD_1024x600 141 
#define  LCD_1024x768 140 
#define  LCD_1152x768 139 
#define  LCD_1280x1024 138 
#define  LCD_1280x768 137 
#define  LCD_1280x960 136 
#define  LCD_1400x1050 135 
#define  LCD_1600x1200 134 
#define  LCD_640x480 133 
#define  LCD_800x600 132 
 int MD_XGI315 ; 
 int /*<<< orphan*/  TVMODE_NTSC ; 
 int /*<<< orphan*/  TVMODE_PAL ; 
 scalar_t__ XG21 ; 
 scalar_t__ XG27 ; 
#define  XGIFB_DISP_CRT 131 
#define  XGIFB_DISP_LCD 130 
#define  XGIFB_DISP_NONE 129 
#define  XGIFB_DISP_TV 128 
 TYPE_2__* XGIbios_mode ; 

__attribute__((used)) static int XGIfb_validate_mode(struct xgifb_video_info *xgifb_info, int myindex)
{
	u16 xres, yres;
	struct xgi_hw_device_info *hw_info = &xgifb_info->hw_info;
	unsigned long required_mem;

	if (xgifb_info->chip == XG21) {
		if (xgifb_info->display2 == XGIFB_DISP_LCD) {
			xres = xgifb_info->lvds_data.LVDSHDE;
			yres = xgifb_info->lvds_data.LVDSVDE;
			if (XGIbios_mode[myindex].xres > xres)
				return -1;
			if (XGIbios_mode[myindex].yres > yres)
				return -1;
			if ((XGIbios_mode[myindex].xres < xres) &&
			    (XGIbios_mode[myindex].yres < yres)) {
				if (XGIbios_mode[myindex].bpp > 8)
					return -1;
			}
		}
		goto check_memory;
	}

	/* FIXME: for now, all is valid on XG27 */
	if (xgifb_info->chip == XG27)
		goto check_memory;

	if (!(XGIbios_mode[myindex].chipset & MD_XGI315))
		return -1;

	switch (xgifb_info->display2) {
	case XGIFB_DISP_LCD:
		switch (hw_info->ulCRT2LCDType) {
		case LCD_640x480:
			xres = 640;
			yres = 480;
			break;
		case LCD_800x600:
			xres = 800;
			yres = 600;
			break;
		case LCD_1024x600:
			xres = 1024;
			yres = 600;
			break;
		case LCD_1024x768:
			xres = 1024;
			yres = 768;
			break;
		case LCD_1152x768:
			xres = 1152;
			yres = 768;
			break;
		case LCD_1280x960:
			xres = 1280;
			yres = 960;
			break;
		case LCD_1280x768:
			xres = 1280;
			yres = 768;
			break;
		case LCD_1280x1024:
			xres = 1280;
			yres = 1024;
			break;
		case LCD_1400x1050:
			xres = 1400;
			yres = 1050;
			break;
		case LCD_1600x1200:
			xres = 1600;
			yres = 1200;
			break;
		default:
			xres = 0;
			yres = 0;
			break;
		}
		if (XGIbios_mode[myindex].xres > xres)
			return -1;
		if (XGIbios_mode[myindex].yres > yres)
			return -1;
		if ((hw_info->ulExternalChip == 0x01) || /* LVDS */
		    (hw_info->ulExternalChip == 0x05)) { /* LVDS+Chrontel */
			switch (XGIbios_mode[myindex].xres) {
			case 512:
				if (XGIbios_mode[myindex].yres != 512)
					return -1;
				if (hw_info->ulCRT2LCDType == LCD_1024x600)
					return -1;
				break;
			case 640:
				if ((XGIbios_mode[myindex].yres != 400) &&
				    (XGIbios_mode[myindex].yres	!= 480))
					return -1;
				break;
			case 800:
				if (XGIbios_mode[myindex].yres != 600)
					return -1;
				break;
			case 1024:
				if ((XGIbios_mode[myindex].yres != 600) &&
				    (XGIbios_mode[myindex].yres != 768))
					return -1;
				if ((XGIbios_mode[myindex].yres == 600) &&
				    (hw_info->ulCRT2LCDType != LCD_1024x600))
					return -1;
				break;
			case 1152:
				if ((XGIbios_mode[myindex].yres) != 768)
					return -1;
				if (hw_info->ulCRT2LCDType != LCD_1152x768)
					return -1;
				break;
			case 1280:
				if ((XGIbios_mode[myindex].yres != 768) &&
				    (XGIbios_mode[myindex].yres != 1024))
					return -1;
				if ((XGIbios_mode[myindex].yres == 768) &&
				    (hw_info->ulCRT2LCDType != LCD_1280x768))
					return -1;
				break;
			case 1400:
				if (XGIbios_mode[myindex].yres != 1050)
					return -1;
				break;
			case 1600:
				if (XGIbios_mode[myindex].yres != 1200)
					return -1;
				break;
			default:
				return -1;
			}
		} else {
			switch (XGIbios_mode[myindex].xres) {
			case 512:
				if (XGIbios_mode[myindex].yres != 512)
					return -1;
				break;
			case 640:
				if ((XGIbios_mode[myindex].yres != 400) &&
				    (XGIbios_mode[myindex].yres != 480))
					return -1;
				break;
			case 800:
				if (XGIbios_mode[myindex].yres != 600)
					return -1;
				break;
			case 1024:
				if (XGIbios_mode[myindex].yres != 768)
					return -1;
				break;
			case 1280:
				if ((XGIbios_mode[myindex].yres != 960) &&
				    (XGIbios_mode[myindex].yres != 1024))
					return -1;
				if (XGIbios_mode[myindex].yres == 960) {
					if (hw_info->ulCRT2LCDType ==
					    LCD_1400x1050)
						return -1;
				}
				break;
			case 1400:
				if (XGIbios_mode[myindex].yres != 1050)
					return -1;
				break;
			case 1600:
				if (XGIbios_mode[myindex].yres != 1200)
					return -1;
				break;
			default:
				return -1;
			}
		}
		break;
	case XGIFB_DISP_TV:
		switch (XGIbios_mode[myindex].xres) {
		case 512:
		case 640:
		case 800:
			break;
		case 720:
			if (xgifb_info->TV_type == TVMODE_NTSC) {
				if (XGIbios_mode[myindex].yres != 480)
					return -1;
			} else if (xgifb_info->TV_type == TVMODE_PAL) {
				if (XGIbios_mode[myindex].yres != 576)
					return -1;
			}
			/* LVDS/CHRONTEL does not support 720 */
			if (xgifb_info->hasVB == HASVB_LVDS_CHRONTEL ||
			    xgifb_info->hasVB == HASVB_CHRONTEL) {
				return -1;
			}
			break;
		case 1024:
			if (xgifb_info->TV_type == TVMODE_NTSC) {
				if (XGIbios_mode[myindex].bpp == 32)
					return -1;
			}
			break;
		default:
			return -1;
		}
		break;
	case XGIFB_DISP_CRT:
		if (XGIbios_mode[myindex].xres > 1280)
			return -1;
		break;
	case XGIFB_DISP_NONE:
		break;
	}

check_memory:
	required_mem = XGIbios_mode[myindex].xres * XGIbios_mode[myindex].yres *
		       XGIbios_mode[myindex].bpp / 8;
	if (required_mem > xgifb_info->video_size)
		return -1;
	return myindex;
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
          int myindex = 100;
          int _len_xgifb_info0 = 1;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].chip = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].display2 = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].video_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].TV_type = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hasVB = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulCRT2LCDType = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulExternalChip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_validate_mode(xgifb_info,myindex);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int myindex = 255;
          int _len_xgifb_info0 = 65025;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].chip = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].display2 = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].video_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].TV_type = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hasVB = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulCRT2LCDType = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulExternalChip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_validate_mode(xgifb_info,myindex);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int myindex = 10;
          int _len_xgifb_info0 = 100;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].chip = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].display2 = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].video_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].TV_type = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hasVB = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulCRT2LCDType = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].hw_info.ulExternalChip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_validate_mode(xgifb_info,myindex);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

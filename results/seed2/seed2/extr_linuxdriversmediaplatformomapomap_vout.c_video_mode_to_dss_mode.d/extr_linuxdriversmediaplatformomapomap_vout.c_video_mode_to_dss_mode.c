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
struct v4l2_pix_format {int pixelformat; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct omap_vout_device {struct omapvideo_info vid_info; struct v4l2_pix_format pix; } ;
struct omap_overlay {int /*<<< orphan*/  id; } ;
typedef  enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;

/* Variables and functions */
 int EINVAL ; 
 int OMAP_DSS_COLOR_ARGB32 ; 
 int OMAP_DSS_COLOR_RGB16 ; 
 int OMAP_DSS_COLOR_RGB24P ; 
 int OMAP_DSS_COLOR_RGB24U ; 
 int OMAP_DSS_COLOR_RGBX32 ; 
 int OMAP_DSS_COLOR_UYVY ; 
 int OMAP_DSS_COLOR_YUV2 ; 
 int /*<<< orphan*/  OMAP_DSS_VIDEO1 ; 
#define  V4L2_PIX_FMT_BGR32 133 
#define  V4L2_PIX_FMT_RGB24 132 
#define  V4L2_PIX_FMT_RGB32 131 
#define  V4L2_PIX_FMT_RGB565 130 
#define  V4L2_PIX_FMT_UYVY 129 
#define  V4L2_PIX_FMT_YUYV 128 

__attribute__((used)) static int video_mode_to_dss_mode(struct omap_vout_device *vout)
{
	struct omap_overlay *ovl;
	struct omapvideo_info *ovid;
	struct v4l2_pix_format *pix = &vout->pix;
	enum omap_color_mode mode;

	ovid = &vout->vid_info;
	ovl = ovid->overlays[0];

	switch (pix->pixelformat) {
	case V4L2_PIX_FMT_YUYV:
		mode = OMAP_DSS_COLOR_YUV2;
		break;
	case V4L2_PIX_FMT_UYVY:
		mode = OMAP_DSS_COLOR_UYVY;
		break;
	case V4L2_PIX_FMT_RGB565:
		mode = OMAP_DSS_COLOR_RGB16;
		break;
	case V4L2_PIX_FMT_RGB24:
		mode = OMAP_DSS_COLOR_RGB24P;
		break;
	case V4L2_PIX_FMT_RGB32:
		mode = (ovl->id == OMAP_DSS_VIDEO1) ?
			OMAP_DSS_COLOR_RGB24U : OMAP_DSS_COLOR_ARGB32;
		break;
	case V4L2_PIX_FMT_BGR32:
		mode = OMAP_DSS_COLOR_RGBX32;
		break;
	default:
		mode = -EINVAL;
		break;
	}
	return mode;
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
          int _len_vout0 = 1;
          struct omap_vout_device * vout = (struct omap_vout_device *) malloc(_len_vout0*sizeof(struct omap_vout_device));
          for(int _i0 = 0; _i0 < _len_vout0; _i0++) {
              int _len_vout__i0__vid_info_overlays0 = 1;
          vout[_i0].vid_info.overlays = (struct omap_overlay **) malloc(_len_vout__i0__vid_info_overlays0*sizeof(struct omap_overlay *));
          for(int _j0 = 0; _j0 < _len_vout__i0__vid_info_overlays0; _j0++) {
            int _len_vout__i0__vid_info_overlays1 = 1;
            vout[_i0].vid_info.overlays[_j0] = (struct omap_overlay *) malloc(_len_vout__i0__vid_info_overlays1*sizeof(struct omap_overlay));
            for(int _j1 = 0; _j1 < _len_vout__i0__vid_info_overlays1; _j1++) {
              vout[_i0].vid_info.overlays[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        vout[_i0].pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = video_mode_to_dss_mode(vout);
          printf("%d\n", benchRet); 
          free(vout);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vout0 = 65025;
          struct omap_vout_device * vout = (struct omap_vout_device *) malloc(_len_vout0*sizeof(struct omap_vout_device));
          for(int _i0 = 0; _i0 < _len_vout0; _i0++) {
              int _len_vout__i0__vid_info_overlays0 = 1;
          vout[_i0].vid_info.overlays = (struct omap_overlay **) malloc(_len_vout__i0__vid_info_overlays0*sizeof(struct omap_overlay *));
          for(int _j0 = 0; _j0 < _len_vout__i0__vid_info_overlays0; _j0++) {
            int _len_vout__i0__vid_info_overlays1 = 1;
            vout[_i0].vid_info.overlays[_j0] = (struct omap_overlay *) malloc(_len_vout__i0__vid_info_overlays1*sizeof(struct omap_overlay));
            for(int _j1 = 0; _j1 < _len_vout__i0__vid_info_overlays1; _j1++) {
              vout[_i0].vid_info.overlays[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        vout[_i0].pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = video_mode_to_dss_mode(vout);
          printf("%d\n", benchRet); 
          free(vout);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vout0 = 100;
          struct omap_vout_device * vout = (struct omap_vout_device *) malloc(_len_vout0*sizeof(struct omap_vout_device));
          for(int _i0 = 0; _i0 < _len_vout0; _i0++) {
              int _len_vout__i0__vid_info_overlays0 = 1;
          vout[_i0].vid_info.overlays = (struct omap_overlay **) malloc(_len_vout__i0__vid_info_overlays0*sizeof(struct omap_overlay *));
          for(int _j0 = 0; _j0 < _len_vout__i0__vid_info_overlays0; _j0++) {
            int _len_vout__i0__vid_info_overlays1 = 1;
            vout[_i0].vid_info.overlays[_j0] = (struct omap_overlay *) malloc(_len_vout__i0__vid_info_overlays1*sizeof(struct omap_overlay));
            for(int _j1 = 0; _j1 < _len_vout__i0__vid_info_overlays1; _j1++) {
              vout[_i0].vid_info.overlays[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        vout[_i0].pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = video_mode_to_dss_mode(vout);
          printf("%d\n", benchRet); 
          free(vout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

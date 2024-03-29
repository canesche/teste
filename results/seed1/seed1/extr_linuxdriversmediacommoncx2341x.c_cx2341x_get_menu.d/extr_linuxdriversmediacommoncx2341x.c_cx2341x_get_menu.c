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
typedef  int u32 ;

/* Variables and functions */
#define  V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE 132 
#define  V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE 131 
#define  V4L2_CID_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE 130 
#define  V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE 129 
#define  V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE 128 

__attribute__((used)) static const char **cx2341x_get_menu(u32 id)
{
	static const char *cx2341x_video_spatial_filter_mode_menu[] = {
		"Manual",
		"Auto",
		NULL
	};

	static const char *cx2341x_video_luma_spatial_filter_type_menu[] = {
		"Off",
		"1D Horizontal",
		"1D Vertical",
		"2D H/V Separable",
		"2D Symmetric non-separable",
		NULL
	};

	static const char *cx2341x_video_chroma_spatial_filter_type_menu[] = {
		"Off",
		"1D Horizontal",
		NULL
	};

	static const char *cx2341x_video_temporal_filter_mode_menu[] = {
		"Manual",
		"Auto",
		NULL
	};

	static const char *cx2341x_video_median_filter_type_menu[] = {
		"Off",
		"Horizontal",
		"Vertical",
		"Horizontal/Vertical",
		"Diagonal",
		NULL
	};

	switch (id) {
	case V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE:
		return cx2341x_video_spatial_filter_mode_menu;
	case V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE:
		return cx2341x_video_luma_spatial_filter_type_menu;
	case V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE:
		return cx2341x_video_chroma_spatial_filter_type_menu;
	case V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE:
		return cx2341x_video_temporal_filter_mode_menu;
	case V4L2_CID_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE:
		return cx2341x_video_median_filter_type_menu;
	}
	return NULL;
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
          int id = 100;
          const char ** benchRet = cx2341x_get_menu(id);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          const char ** benchRet = cx2341x_get_menu(id);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          const char ** benchRet = cx2341x_get_menu(id);
          printf("%c\n", ((**benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

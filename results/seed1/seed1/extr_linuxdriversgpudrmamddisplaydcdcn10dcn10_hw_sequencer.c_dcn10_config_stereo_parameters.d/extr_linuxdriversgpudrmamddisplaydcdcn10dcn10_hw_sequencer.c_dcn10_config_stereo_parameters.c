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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int /*<<< orphan*/  RIGHT_EYE_3D_POLARITY; } ;
struct TYPE_10__ {int timing_3d_format; TYPE_4__ flags; } ;
struct dc_stream_state {int view_format; TYPE_5__ timing; TYPE_3__* sink; } ;
struct crtc_stereo_flags {int PROGRAM_STEREO; int PROGRAM_POLARITY; int DISABLE_STEREO_DP_SYNC; int FRAME_PACKED; int /*<<< orphan*/  RIGHT_EYE_POLARITY; } ;
typedef  enum view_3d_format { ____Placeholder_view_3d_format } view_3d_format ;
typedef  enum display_dongle_type { ____Placeholder_display_dongle_type } display_dongle_type ;
typedef  enum dc_timing_3d_format { ____Placeholder_dc_timing_3d_format } dc_timing_3d_format ;
struct TYPE_8__ {TYPE_2__* link; } ;
struct TYPE_7__ {TYPE_1__* ddc; } ;
struct TYPE_6__ {int dongle_type; } ;

/* Variables and functions */
 int DISPLAY_DONGLE_DP_DVI_CONVERTER ; 
 int DISPLAY_DONGLE_DP_HDMI_CONVERTER ; 
 int DISPLAY_DONGLE_DP_VGA_CONVERTER ; 
 int TIMING_3D_FORMAT_DP_HDMI_INBAND_FA ; 
 int TIMING_3D_FORMAT_HW_FRAME_PACKING ; 
 int TIMING_3D_FORMAT_INBAND_FA ; 
 int TIMING_3D_FORMAT_NONE ; 
 int TIMING_3D_FORMAT_SIDEBAND_FA ; 
 int TIMING_3D_FORMAT_SIDE_BY_SIDE ; 
 int TIMING_3D_FORMAT_TOP_AND_BOTTOM ; 
 int VIEW_3D_FORMAT_FRAME_SEQUENTIAL ; 

__attribute__((used)) static void dcn10_config_stereo_parameters(
		struct dc_stream_state *stream, struct crtc_stereo_flags *flags)
{
	enum view_3d_format view_format = stream->view_format;
	enum dc_timing_3d_format timing_3d_format =\
			stream->timing.timing_3d_format;
	bool non_stereo_timing = false;

	if (timing_3d_format == TIMING_3D_FORMAT_NONE ||
		timing_3d_format == TIMING_3D_FORMAT_SIDE_BY_SIDE ||
		timing_3d_format == TIMING_3D_FORMAT_TOP_AND_BOTTOM)
		non_stereo_timing = true;

	if (non_stereo_timing == false &&
		view_format == VIEW_3D_FORMAT_FRAME_SEQUENTIAL) {

		flags->PROGRAM_STEREO         = 1;
		flags->PROGRAM_POLARITY       = 1;
		if (timing_3d_format == TIMING_3D_FORMAT_INBAND_FA ||
			timing_3d_format == TIMING_3D_FORMAT_DP_HDMI_INBAND_FA ||
			timing_3d_format == TIMING_3D_FORMAT_SIDEBAND_FA) {
			enum display_dongle_type dongle = \
					stream->sink->link->ddc->dongle_type;
			if (dongle == DISPLAY_DONGLE_DP_VGA_CONVERTER ||
				dongle == DISPLAY_DONGLE_DP_DVI_CONVERTER ||
				dongle == DISPLAY_DONGLE_DP_HDMI_CONVERTER)
				flags->DISABLE_STEREO_DP_SYNC = 1;
		}
		flags->RIGHT_EYE_POLARITY =\
				stream->timing.flags.RIGHT_EYE_3D_POLARITY;
		if (timing_3d_format == TIMING_3D_FORMAT_HW_FRAME_PACKING)
			flags->FRAME_PACKED = 1;
	}

	return;
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
          int _len_stream0 = 1;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.flags.RIGHT_EYE_3D_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__sink0 = 1;
          stream[_i0].sink = (struct TYPE_8__ *) malloc(_len_stream__i0__sink0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink0; _j0++) {
              int _len_stream__i0__sink_link0 = 1;
          stream[_i0].sink->link = (struct TYPE_7__ *) malloc(_len_stream__i0__sink_link0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link0; _j0++) {
              int _len_stream__i0__sink_link_ddc0 = 1;
          stream[_i0].sink->link->ddc = (struct TYPE_6__ *) malloc(_len_stream__i0__sink_link_ddc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link_ddc0; _j0++) {
            stream[_i0].sink->link->ddc->dongle_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_flags0 = 1;
          struct crtc_stereo_flags * flags = (struct crtc_stereo_flags *) malloc(_len_flags0*sizeof(struct crtc_stereo_flags));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0].PROGRAM_STEREO = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].PROGRAM_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].DISABLE_STEREO_DP_SYNC = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].FRAME_PACKED = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].RIGHT_EYE_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dcn10_config_stereo_parameters(stream,flags);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].sink);
          }
          free(stream);
          free(flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stream0 = 65025;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.flags.RIGHT_EYE_3D_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__sink0 = 1;
          stream[_i0].sink = (struct TYPE_8__ *) malloc(_len_stream__i0__sink0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink0; _j0++) {
              int _len_stream__i0__sink_link0 = 1;
          stream[_i0].sink->link = (struct TYPE_7__ *) malloc(_len_stream__i0__sink_link0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link0; _j0++) {
              int _len_stream__i0__sink_link_ddc0 = 1;
          stream[_i0].sink->link->ddc = (struct TYPE_6__ *) malloc(_len_stream__i0__sink_link_ddc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link_ddc0; _j0++) {
            stream[_i0].sink->link->ddc->dongle_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_flags0 = 65025;
          struct crtc_stereo_flags * flags = (struct crtc_stereo_flags *) malloc(_len_flags0*sizeof(struct crtc_stereo_flags));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0].PROGRAM_STEREO = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].PROGRAM_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].DISABLE_STEREO_DP_SYNC = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].FRAME_PACKED = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].RIGHT_EYE_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dcn10_config_stereo_parameters(stream,flags);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].sink);
          }
          free(stream);
          free(flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stream0 = 100;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.flags.RIGHT_EYE_3D_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__sink0 = 1;
          stream[_i0].sink = (struct TYPE_8__ *) malloc(_len_stream__i0__sink0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink0; _j0++) {
              int _len_stream__i0__sink_link0 = 1;
          stream[_i0].sink->link = (struct TYPE_7__ *) malloc(_len_stream__i0__sink_link0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link0; _j0++) {
              int _len_stream__i0__sink_link_ddc0 = 1;
          stream[_i0].sink->link->ddc = (struct TYPE_6__ *) malloc(_len_stream__i0__sink_link_ddc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__sink_link_ddc0; _j0++) {
            stream[_i0].sink->link->ddc->dongle_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_flags0 = 100;
          struct crtc_stereo_flags * flags = (struct crtc_stereo_flags *) malloc(_len_flags0*sizeof(struct crtc_stereo_flags));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0].PROGRAM_STEREO = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].PROGRAM_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].DISABLE_STEREO_DP_SYNC = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].FRAME_PACKED = ((-2 * (next_i()%2)) + 1) * next_i();
        flags[_i0].RIGHT_EYE_POLARITY = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dcn10_config_stereo_parameters(stream,flags);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].sink);
          }
          free(stream);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

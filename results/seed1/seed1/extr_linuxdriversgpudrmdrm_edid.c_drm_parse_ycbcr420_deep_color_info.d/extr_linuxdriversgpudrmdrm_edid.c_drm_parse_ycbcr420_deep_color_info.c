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
typedef  int u8 ;
struct drm_hdmi_info {int y420_dc_modes; } ;
struct TYPE_2__ {struct drm_hdmi_info hdmi; } ;
struct drm_connector {TYPE_1__ display_info; } ;

/* Variables and functions */
 int const DRM_EDID_YCBCR420_DC_MASK ; 

__attribute__((used)) static void drm_parse_ycbcr420_deep_color_info(struct drm_connector *connector,
					       const u8 *db)
{
	u8 dc_mask;
	struct drm_hdmi_info *hdmi = &connector->display_info.hdmi;

	dc_mask = db[7] & DRM_EDID_YCBCR420_DC_MASK;
	hdmi->y420_dc_modes = dc_mask;
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
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].display_info.hdmi.y420_dc_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_db0 = 1;
          const int * db = (const int *) malloc(_len_db0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_parse_ycbcr420_deep_color_info(connector,db);
          free(connector);
          free(db);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_connector0 = 65025;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].display_info.hdmi.y420_dc_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_db0 = 65025;
          const int * db = (const int *) malloc(_len_db0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_parse_ycbcr420_deep_color_info(connector,db);
          free(connector);
          free(db);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_connector0 = 100;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].display_info.hdmi.y420_dc_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_db0 = 100;
          const int * db = (const int *) malloc(_len_db0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_db0; _i0++) {
            db[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_parse_ycbcr420_deep_color_info(connector,db);
          free(connector);
          free(db);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

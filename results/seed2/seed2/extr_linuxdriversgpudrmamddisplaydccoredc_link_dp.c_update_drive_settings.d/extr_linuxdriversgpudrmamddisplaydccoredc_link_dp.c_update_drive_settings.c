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
typedef  size_t uint32_t ;
struct TYPE_3__ {size_t lane_count; } ;
struct link_training_settings {TYPE_2__* lane_settings; TYPE_1__ link_settings; } ;
struct TYPE_4__ {int /*<<< orphan*/  POST_CURSOR2; int /*<<< orphan*/  PRE_EMPHASIS; int /*<<< orphan*/  VOLTAGE_SWING; } ;

/* Variables and functions */

__attribute__((used)) static void update_drive_settings(
		struct link_training_settings *dest,
		struct link_training_settings src)
{
	uint32_t lane;
	for (lane = 0; lane < src.link_settings.lane_count; lane++) {
		dest->lane_settings[lane].VOLTAGE_SWING =
			src.lane_settings[lane].VOLTAGE_SWING;
		dest->lane_settings[lane].PRE_EMPHASIS =
			src.lane_settings[lane].PRE_EMPHASIS;
		dest->lane_settings[lane].POST_CURSOR2 =
			src.lane_settings[lane].POST_CURSOR2;
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
          int _len_dest0 = 1;
          struct link_training_settings * dest = (struct link_training_settings *) malloc(_len_dest0*sizeof(struct link_training_settings));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
              int _len_dest__i0__lane_settings0 = 1;
          dest[_i0].lane_settings = (struct TYPE_4__ *) malloc(_len_dest__i0__lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dest__i0__lane_settings0; _j0++) {
            dest[_i0].lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dest[_i0].link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct link_training_settings src;
          int _len_src_lane_settings0 = 1;
          src.lane_settings = (struct TYPE_4__ *) malloc(_len_src_lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_src_lane_settings0; _j0++) {
            src.lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src.link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          update_drive_settings(dest,src);
          for(int _aux = 0; _aux < _len_dest0; _aux++) {
          free(dest[_aux].lane_settings);
          }
          free(dest);
          free(src.lane_settings);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dest0 = 65025;
          struct link_training_settings * dest = (struct link_training_settings *) malloc(_len_dest0*sizeof(struct link_training_settings));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
              int _len_dest__i0__lane_settings0 = 1;
          dest[_i0].lane_settings = (struct TYPE_4__ *) malloc(_len_dest__i0__lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dest__i0__lane_settings0; _j0++) {
            dest[_i0].lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dest[_i0].link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct link_training_settings src;
          int _len_src_lane_settings0 = 1;
          src.lane_settings = (struct TYPE_4__ *) malloc(_len_src_lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_src_lane_settings0; _j0++) {
            src.lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src.link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          update_drive_settings(dest,src);
          for(int _aux = 0; _aux < _len_dest0; _aux++) {
          free(dest[_aux].lane_settings);
          }
          free(dest);
          free(src.lane_settings);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dest0 = 100;
          struct link_training_settings * dest = (struct link_training_settings *) malloc(_len_dest0*sizeof(struct link_training_settings));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
              int _len_dest__i0__lane_settings0 = 1;
          dest[_i0].lane_settings = (struct TYPE_4__ *) malloc(_len_dest__i0__lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dest__i0__lane_settings0; _j0++) {
            dest[_i0].lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dest[_i0].link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct link_training_settings src;
          int _len_src_lane_settings0 = 1;
          src.lane_settings = (struct TYPE_4__ *) malloc(_len_src_lane_settings0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_src_lane_settings0; _j0++) {
            src.lane_settings->POST_CURSOR2 = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->PRE_EMPHASIS = ((-2 * (next_i()%2)) + 1) * next_i();
        src.lane_settings->VOLTAGE_SWING = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src.link_settings.lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          update_drive_settings(dest,src);
          for(int _aux = 0; _aux < _len_dest0; _aux++) {
          free(dest[_aux].lane_settings);
          }
          free(dest);
          free(src.lane_settings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

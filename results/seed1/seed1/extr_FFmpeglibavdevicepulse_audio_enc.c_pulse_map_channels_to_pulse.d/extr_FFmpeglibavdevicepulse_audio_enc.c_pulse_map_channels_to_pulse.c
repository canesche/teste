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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ channels; void** map; } ;
typedef  TYPE_1__ pa_channel_map ;
typedef  int int64_t ;

/* Variables and functions */
 int AV_CH_BACK_CENTER ; 
 int AV_CH_BACK_LEFT ; 
 int AV_CH_BACK_RIGHT ; 
 int AV_CH_FRONT_CENTER ; 
 int AV_CH_FRONT_LEFT ; 
 int AV_CH_FRONT_LEFT_OF_CENTER ; 
 int AV_CH_FRONT_RIGHT ; 
 int AV_CH_FRONT_RIGHT_OF_CENTER ; 
 int AV_CH_LOW_FREQUENCY ; 
 int AV_CH_LOW_FREQUENCY_2 ; 
 int AV_CH_SIDE_LEFT ; 
 int AV_CH_SIDE_RIGHT ; 
 int AV_CH_STEREO_LEFT ; 
 int AV_CH_STEREO_RIGHT ; 
 int AV_CH_SURROUND_DIRECT_LEFT ; 
 int AV_CH_SURROUND_DIRECT_RIGHT ; 
 int AV_CH_TOP_BACK_CENTER ; 
 int AV_CH_TOP_BACK_LEFT ; 
 int AV_CH_TOP_BACK_RIGHT ; 
 int AV_CH_TOP_CENTER ; 
 int AV_CH_TOP_FRONT_CENTER ; 
 int AV_CH_TOP_FRONT_LEFT ; 
 int AV_CH_TOP_FRONT_RIGHT ; 
 int AV_CH_WIDE_LEFT ; 
 int AV_CH_WIDE_RIGHT ; 
 void* PA_CHANNEL_POSITION_AUX0 ; 
 void* PA_CHANNEL_POSITION_AUX1 ; 
 void* PA_CHANNEL_POSITION_AUX2 ; 
 void* PA_CHANNEL_POSITION_AUX3 ; 
 void* PA_CHANNEL_POSITION_FRONT_CENTER ; 
 void* PA_CHANNEL_POSITION_FRONT_LEFT ; 
 void* PA_CHANNEL_POSITION_FRONT_LEFT_OF_CENTER ; 
 void* PA_CHANNEL_POSITION_FRONT_RIGHT ; 
 void* PA_CHANNEL_POSITION_FRONT_RIGHT_OF_CENTER ; 
 void* PA_CHANNEL_POSITION_LFE ; 
 void* PA_CHANNEL_POSITION_REAR_CENTER ; 
 void* PA_CHANNEL_POSITION_REAR_LEFT ; 
 void* PA_CHANNEL_POSITION_REAR_RIGHT ; 
 void* PA_CHANNEL_POSITION_SIDE_LEFT ; 
 void* PA_CHANNEL_POSITION_SIDE_RIGHT ; 
 void* PA_CHANNEL_POSITION_TOP_CENTER ; 
 void* PA_CHANNEL_POSITION_TOP_FRONT_CENTER ; 
 void* PA_CHANNEL_POSITION_TOP_FRONT_LEFT ; 
 void* PA_CHANNEL_POSITION_TOP_FRONT_RIGHT ; 
 void* PA_CHANNEL_POSITION_TOP_REAR_CENTER ; 
 void* PA_CHANNEL_POSITION_TOP_REAR_LEFT ; 
 void* PA_CHANNEL_POSITION_TOP_REAR_RIGHT ; 

__attribute__((used)) static void pulse_map_channels_to_pulse(int64_t channel_layout, pa_channel_map *channel_map)
{
    channel_map->channels = 0;
    if (channel_layout & AV_CH_FRONT_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_LEFT;
    if (channel_layout & AV_CH_FRONT_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_RIGHT;
    if (channel_layout & AV_CH_FRONT_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_CENTER;
    if (channel_layout & AV_CH_LOW_FREQUENCY)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_LFE;
    if (channel_layout & AV_CH_BACK_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_REAR_LEFT;
    if (channel_layout & AV_CH_BACK_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_REAR_RIGHT;
    if (channel_layout & AV_CH_FRONT_LEFT_OF_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_LEFT_OF_CENTER;
    if (channel_layout & AV_CH_FRONT_RIGHT_OF_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_RIGHT_OF_CENTER;
    if (channel_layout & AV_CH_BACK_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_REAR_CENTER;
    if (channel_layout & AV_CH_SIDE_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_SIDE_LEFT;
    if (channel_layout & AV_CH_SIDE_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_SIDE_RIGHT;
    if (channel_layout & AV_CH_TOP_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_CENTER;
    if (channel_layout & AV_CH_TOP_FRONT_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_FRONT_LEFT;
    if (channel_layout & AV_CH_TOP_FRONT_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_FRONT_CENTER;
    if (channel_layout & AV_CH_TOP_FRONT_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_FRONT_RIGHT;
    if (channel_layout & AV_CH_TOP_BACK_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_REAR_LEFT;
    if (channel_layout & AV_CH_TOP_BACK_CENTER)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_REAR_CENTER;
    if (channel_layout & AV_CH_TOP_BACK_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_TOP_REAR_RIGHT;
    if (channel_layout & AV_CH_STEREO_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_LEFT;
    if (channel_layout & AV_CH_STEREO_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_FRONT_RIGHT;
    if (channel_layout & AV_CH_WIDE_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_AUX0;
    if (channel_layout & AV_CH_WIDE_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_AUX1;
    if (channel_layout & AV_CH_SURROUND_DIRECT_LEFT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_AUX2;
    if (channel_layout & AV_CH_SURROUND_DIRECT_RIGHT)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_AUX3;
    if (channel_layout & AV_CH_LOW_FREQUENCY_2)
        channel_map->map[channel_map->channels++] = PA_CHANNEL_POSITION_LFE;
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
          int channel_layout = 100;
          int _len_channel_map0 = 1;
          struct TYPE_3__ * channel_map = (struct TYPE_3__ *) malloc(_len_channel_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_map0; _i0++) {
            channel_map[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel_map__i0__map0 = 1;
          channel_map[_i0].map = (void **) malloc(_len_channel_map__i0__map0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_channel_map__i0__map0; _j0++) {
          }
          }
          pulse_map_channels_to_pulse(channel_layout,channel_map);
          free(channel_map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel_layout = 255;
          int _len_channel_map0 = 65025;
          struct TYPE_3__ * channel_map = (struct TYPE_3__ *) malloc(_len_channel_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_map0; _i0++) {
            channel_map[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel_map__i0__map0 = 1;
          channel_map[_i0].map = (void **) malloc(_len_channel_map__i0__map0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_channel_map__i0__map0; _j0++) {
          }
          }
          pulse_map_channels_to_pulse(channel_layout,channel_map);
          free(channel_map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel_layout = 10;
          int _len_channel_map0 = 100;
          struct TYPE_3__ * channel_map = (struct TYPE_3__ *) malloc(_len_channel_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_channel_map0; _i0++) {
            channel_map[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel_map__i0__map0 = 1;
          channel_map[_i0].map = (void **) malloc(_len_channel_map__i0__map0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_channel_map__i0__map0; _j0++) {
          }
          }
          pulse_map_channels_to_pulse(channel_layout,channel_map);
          free(channel_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

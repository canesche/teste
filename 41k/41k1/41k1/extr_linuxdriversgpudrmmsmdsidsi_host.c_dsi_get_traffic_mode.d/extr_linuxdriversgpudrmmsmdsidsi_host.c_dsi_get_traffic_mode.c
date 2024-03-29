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
typedef  enum dsi_traffic_mode { ____Placeholder_dsi_traffic_mode } dsi_traffic_mode ;

/* Variables and functions */
 int BURST_MODE ; 
 int const MIPI_DSI_MODE_VIDEO_BURST ; 
 int const MIPI_DSI_MODE_VIDEO_SYNC_PULSE ; 
 int NON_BURST_SYNCH_EVENT ; 
 int NON_BURST_SYNCH_PULSE ; 

__attribute__((used)) static inline enum dsi_traffic_mode dsi_get_traffic_mode(const u32 mode_flags)
{
	if (mode_flags & MIPI_DSI_MODE_VIDEO_BURST)
		return BURST_MODE;
	else if (mode_flags & MIPI_DSI_MODE_VIDEO_SYNC_PULSE)
		return NON_BURST_SYNCH_PULSE;

	return NON_BURST_SYNCH_EVENT;
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
          const int mode_flags = 100;
          enum dsi_traffic_mode benchRet = dsi_get_traffic_mode(mode_flags);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int mode_flags = 255;
          enum dsi_traffic_mode benchRet = dsi_get_traffic_mode(mode_flags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int mode_flags = 10;
          enum dsi_traffic_mode benchRet = dsi_get_traffic_mode(mode_flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

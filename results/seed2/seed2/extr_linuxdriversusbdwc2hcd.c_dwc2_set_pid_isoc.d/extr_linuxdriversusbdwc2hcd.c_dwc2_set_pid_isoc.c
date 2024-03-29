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
struct dwc2_host_chan {scalar_t__ speed; int multi_count; void* data_pid_start; scalar_t__ ep_is_in; } ;

/* Variables and functions */
 void* DWC2_HC_PID_DATA0 ; 
 void* DWC2_HC_PID_DATA1 ; 
 void* DWC2_HC_PID_DATA2 ; 
 void* DWC2_HC_PID_MDATA ; 
 scalar_t__ USB_SPEED_HIGH ; 

__attribute__((used)) static void dwc2_set_pid_isoc(struct dwc2_host_chan *chan)
{
	/* Set up the initial PID for the transfer */
	if (chan->speed == USB_SPEED_HIGH) {
		if (chan->ep_is_in) {
			if (chan->multi_count == 1)
				chan->data_pid_start = DWC2_HC_PID_DATA0;
			else if (chan->multi_count == 2)
				chan->data_pid_start = DWC2_HC_PID_DATA1;
			else
				chan->data_pid_start = DWC2_HC_PID_DATA2;
		} else {
			if (chan->multi_count == 1)
				chan->data_pid_start = DWC2_HC_PID_DATA0;
			else
				chan->data_pid_start = DWC2_HC_PID_MDATA;
		}
	} else {
		chan->data_pid_start = DWC2_HC_PID_DATA0;
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
          int _len_chan0 = 1;
          struct dwc2_host_chan * chan = (struct dwc2_host_chan *) malloc(_len_chan0*sizeof(struct dwc2_host_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].ep_is_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_set_pid_isoc(chan);
          free(chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chan0 = 65025;
          struct dwc2_host_chan * chan = (struct dwc2_host_chan *) malloc(_len_chan0*sizeof(struct dwc2_host_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].ep_is_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_set_pid_isoc(chan);
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chan0 = 100;
          struct dwc2_host_chan * chan = (struct dwc2_host_chan *) malloc(_len_chan0*sizeof(struct dwc2_host_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].ep_is_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_set_pid_isoc(chan);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

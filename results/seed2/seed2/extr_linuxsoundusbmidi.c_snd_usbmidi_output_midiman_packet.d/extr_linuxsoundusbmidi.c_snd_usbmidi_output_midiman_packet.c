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
typedef  int uint8_t ;
struct urb {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;

/* Variables and functions */
 int* snd_usbmidi_cin_length ; 

__attribute__((used)) static void snd_usbmidi_output_midiman_packet(struct urb *urb, uint8_t p0,
					      uint8_t p1, uint8_t p2,
					      uint8_t p3)
{

	uint8_t *buf =
		(uint8_t *)urb->transfer_buffer + urb->transfer_buffer_length;
	buf[0] = p1;
	buf[1] = p2;
	buf[2] = p3;
	buf[3] = (p0 & 0xf0) | snd_usbmidi_cin_length[p0 & 0x0f];
	urb->transfer_buffer_length += 4;
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
          int p0 = 100;
          int p1 = 100;
          int p2 = 100;
          int p3 = 100;
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_usbmidi_output_midiman_packet(urb,p0,p1,p2,p3);
          free(urb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p0 = 255;
          int p1 = 255;
          int p2 = 255;
          int p3 = 255;
          int _len_urb0 = 65025;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_usbmidi_output_midiman_packet(urb,p0,p1,p2,p3);
          free(urb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p0 = 10;
          int p1 = 10;
          int p2 = 10;
          int p3 = 10;
          int _len_urb0 = 100;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].transfer_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_usbmidi_output_midiman_packet(urb,p0,p1,p2,p3);
          free(urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

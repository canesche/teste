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
struct urb {int dummy; } ;
typedef  enum debuglevel { ____Placeholder_debuglevel } debuglevel ;

/* Variables and functions */

__attribute__((used)) static inline void dump_urb(enum debuglevel level, const char *tag,
			    struct urb *urb)
{
#ifdef CONFIG_GIGASET_DEBUG
	int i;
	gig_dbg(level, "%s urb(0x%08lx)->{", tag, (unsigned long) urb);
	if (urb) {
		gig_dbg(level,
			"  dev=0x%08lx, pipe=%s:EP%d/DV%d:%s, "
			"hcpriv=0x%08lx, transfer_flags=0x%x,",
			(unsigned long) urb->dev,
			usb_pipetype_str(urb->pipe),
			usb_pipeendpoint(urb->pipe), usb_pipedevice(urb->pipe),
			usb_pipein(urb->pipe) ? "in" : "out",
			(unsigned long) urb->hcpriv,
			urb->transfer_flags);
		gig_dbg(level,
			"  transfer_buffer=0x%08lx[%d], actual_length=%d, "
			"setup_packet=0x%08lx,",
			(unsigned long) urb->transfer_buffer,
			urb->transfer_buffer_length, urb->actual_length,
			(unsigned long) urb->setup_packet);
		gig_dbg(level,
			"  start_frame=%d, number_of_packets=%d, interval=%d, "
			"error_count=%d,",
			urb->start_frame, urb->number_of_packets, urb->interval,
			urb->error_count);
		gig_dbg(level,
			"  context=0x%08lx, complete=0x%08lx, "
			"iso_frame_desc[]={",
			(unsigned long) urb->context,
			(unsigned long) urb->complete);
		for (i = 0; i < urb->number_of_packets; i++) {
			struct usb_iso_packet_descriptor *pifd
				= &urb->iso_frame_desc[i];
			gig_dbg(level,
				"    {offset=%u, length=%u, actual_length=%u, "
				"status=%u}",
				pifd->offset, pifd->length, pifd->actual_length,
				pifd->status);
		}
	}
	gig_dbg(level, "}}");
#endif
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
          enum debuglevel level = 0;
          int _len_tag0 = 1;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_urb(level,tag,urb);
          free(tag);
          free(urb);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum debuglevel level = 0;
          int _len_tag0 = 65025;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 65025;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_urb(level,tag,urb);
          free(tag);
          free(urb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum debuglevel level = 0;
          int _len_tag0 = 100;
          const char * tag = (const char *) malloc(_len_tag0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 100;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_urb(level,tag,urb);
          free(tag);
          free(urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct usbip_iso_packet_descriptor {int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; int /*<<< orphan*/  length; int /*<<< orphan*/  offset; } ;
struct usb_iso_packet_descriptor {int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; int /*<<< orphan*/  length; int /*<<< orphan*/  offset; } ;

/* Variables and functions */

__attribute__((used)) static void usbip_pack_iso(struct usbip_iso_packet_descriptor *iso,
			   struct usb_iso_packet_descriptor *uiso, int pack)
{
	if (pack) {
		iso->offset		= uiso->offset;
		iso->length		= uiso->length;
		iso->status		= uiso->status;
		iso->actual_length	= uiso->actual_length;
	} else {
		uiso->offset		= iso->offset;
		uiso->length		= iso->length;
		uiso->status		= iso->status;
		uiso->actual_length	= iso->actual_length;
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
          int pack = 100;
          int _len_iso0 = 1;
          struct usbip_iso_packet_descriptor * iso = (struct usbip_iso_packet_descriptor *) malloc(_len_iso0*sizeof(struct usbip_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_iso0; _i0++) {
            iso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uiso0 = 1;
          struct usb_iso_packet_descriptor * uiso = (struct usb_iso_packet_descriptor *) malloc(_len_uiso0*sizeof(struct usb_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_uiso0; _i0++) {
            uiso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbip_pack_iso(iso,uiso,pack);
          free(iso);
          free(uiso);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pack = 255;
          int _len_iso0 = 65025;
          struct usbip_iso_packet_descriptor * iso = (struct usbip_iso_packet_descriptor *) malloc(_len_iso0*sizeof(struct usbip_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_iso0; _i0++) {
            iso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uiso0 = 65025;
          struct usb_iso_packet_descriptor * uiso = (struct usb_iso_packet_descriptor *) malloc(_len_uiso0*sizeof(struct usb_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_uiso0; _i0++) {
            uiso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbip_pack_iso(iso,uiso,pack);
          free(iso);
          free(uiso);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pack = 10;
          int _len_iso0 = 100;
          struct usbip_iso_packet_descriptor * iso = (struct usbip_iso_packet_descriptor *) malloc(_len_iso0*sizeof(struct usbip_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_iso0; _i0++) {
            iso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uiso0 = 100;
          struct usb_iso_packet_descriptor * uiso = (struct usb_iso_packet_descriptor *) malloc(_len_uiso0*sizeof(struct usb_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_uiso0; _i0++) {
            uiso[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbip_pack_iso(iso,uiso,pack);
          free(iso);
          free(uiso);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

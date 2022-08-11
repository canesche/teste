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
struct TYPE_4__ {int usage_page; } ;
struct TYPE_3__ {int usage_index; scalar_t__* usage; } ;
struct hid_parser {int /*<<< orphan*/  scan_flags; TYPE_2__ global; TYPE_1__ local; struct hid_device* device; } ;
struct hid_device {scalar_t__ group; scalar_t__ vendor; scalar_t__ product; } ;

/* Variables and functions */
 unsigned int HID_COLLECTION_PHYSICAL ; 
 scalar_t__ HID_GD_POINTER ; 
 scalar_t__ HID_GROUP_GENERIC ; 
 scalar_t__ HID_GROUP_MULTITOUCH ; 
 scalar_t__ HID_GROUP_SENSOR_HUB ; 
 int /*<<< orphan*/  HID_SCAN_FLAG_GD_POINTER ; 
 int /*<<< orphan*/  HID_SCAN_FLAG_VENDOR_SPECIFIC ; 
 int HID_UP_GENDESK ; 
 int HID_UP_MSVENDOR ; 
 int HID_UP_SENSOR ; 
 scalar_t__ USB_DEVICE_ID_MS_POWER_COVER ; 
 scalar_t__ USB_VENDOR_ID_MICROSOFT ; 

__attribute__((used)) static void hid_scan_collection(struct hid_parser *parser, unsigned type)
{
	struct hid_device *hid = parser->device;
	int i;

	if (((parser->global.usage_page << 16) == HID_UP_SENSOR) &&
	    type == HID_COLLECTION_PHYSICAL)
		hid->group = HID_GROUP_SENSOR_HUB;

	if (hid->vendor == USB_VENDOR_ID_MICROSOFT &&
	    hid->product == USB_DEVICE_ID_MS_POWER_COVER &&
	    hid->group == HID_GROUP_MULTITOUCH)
		hid->group = HID_GROUP_GENERIC;

	if ((parser->global.usage_page << 16) == HID_UP_GENDESK)
		for (i = 0; i < parser->local.usage_index; i++)
			if (parser->local.usage[i] == HID_GD_POINTER)
				parser->scan_flags |= HID_SCAN_FLAG_GD_POINTER;

	if ((parser->global.usage_page << 16) >= HID_UP_MSVENDOR)
		parser->scan_flags |= HID_SCAN_FLAG_VENDOR_SPECIFIC;
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
          unsigned int type = 100;
          int _len_parser0 = 1;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].global.usage_page = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].local.usage_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__local_usage0 = 1;
          parser[_i0].local.usage = (long *) malloc(_len_parser__i0__local_usage0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_parser__i0__local_usage0; _j0++) {
            parser[_i0].local.usage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->product = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_collection(parser,type);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          int _len_parser0 = 65025;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].global.usage_page = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].local.usage_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__local_usage0 = 1;
          parser[_i0].local.usage = (long *) malloc(_len_parser__i0__local_usage0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_parser__i0__local_usage0; _j0++) {
            parser[_i0].local.usage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->product = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_collection(parser,type);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          int _len_parser0 = 100;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
            parser[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].global.usage_page = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].local.usage_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_parser__i0__local_usage0 = 1;
          parser[_i0].local.usage = (long *) malloc(_len_parser__i0__local_usage0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_parser__i0__local_usage0; _j0++) {
            parser[_i0].local.usage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        parser[_i0].device->product = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_collection(parser,type);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

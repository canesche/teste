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
struct hid_report_id {scalar_t__ report_type; } ;
struct hid_report {scalar_t__ type; } ;
struct hid_device {TYPE_1__* driver; } ;
struct TYPE_2__ {struct hid_report_id* report_table; } ;

/* Variables and functions */
 scalar_t__ HID_ANY_ID ; 
 scalar_t__ HID_TERMINATOR ; 

__attribute__((used)) static int hid_match_report(struct hid_device *hid, struct hid_report *report)
{
	const struct hid_report_id *id = hid->driver->report_table;

	if (!id) /* NULL means all */
		return 1;

	for (; id->report_type != HID_TERMINATOR; id++)
		if (id->report_type == HID_ANY_ID ||
				id->report_type == report->type)
			return 1;
	return 0;
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
          int _len_hid0 = 1;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
              int _len_hid__i0__driver0 = 1;
          hid[_i0].driver = (struct TYPE_2__ *) malloc(_len_hid__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver0; _j0++) {
              int _len_hid__i0__driver_report_table0 = 1;
          hid[_i0].driver->report_table = (struct hid_report_id *) malloc(_len_hid__i0__driver_report_table0*sizeof(struct hid_report_id));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver_report_table0; _j0++) {
            hid[_i0].driver->report_table->report_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_report0 = 1;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_match_report(hid,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hid0; _aux++) {
          free(hid[_aux].driver);
          }
          free(hid);
          free(report);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hid0 = 65025;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
              int _len_hid__i0__driver0 = 1;
          hid[_i0].driver = (struct TYPE_2__ *) malloc(_len_hid__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver0; _j0++) {
              int _len_hid__i0__driver_report_table0 = 1;
          hid[_i0].driver->report_table = (struct hid_report_id *) malloc(_len_hid__i0__driver_report_table0*sizeof(struct hid_report_id));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver_report_table0; _j0++) {
            hid[_i0].driver->report_table->report_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_report0 = 65025;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_match_report(hid,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hid0; _aux++) {
          free(hid[_aux].driver);
          }
          free(hid);
          free(report);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hid0 = 100;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
              int _len_hid__i0__driver0 = 1;
          hid[_i0].driver = (struct TYPE_2__ *) malloc(_len_hid__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver0; _j0++) {
              int _len_hid__i0__driver_report_table0 = 1;
          hid[_i0].driver->report_table = (struct hid_report_id *) malloc(_len_hid__i0__driver_report_table0*sizeof(struct hid_report_id));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver_report_table0; _j0++) {
            hid[_i0].driver->report_table->report_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_report0 = 100;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_match_report(hid,report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hid0; _aux++) {
          free(hid[_aux].driver);
          }
          free(hid);
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

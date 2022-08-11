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
struct hid_report {int size; size_t type; TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* report_enum; } ;
struct TYPE_3__ {int numbered; } ;

/* Variables and functions */

__attribute__((used)) static int i2c_hid_get_report_length(struct hid_report *report)
{
	return ((report->size - 1) >> 3) + 1 +
		report->device->report_enum[report->type].numbered + 2;
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
          int _len_report0 = 1;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0__device0 = 1;
          report[_i0].device = (struct TYPE_4__ *) malloc(_len_report__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_report__i0__device0; _j0++) {
              int _len_report__i0__device_report_enum0 = 1;
          report[_i0].device->report_enum = (struct TYPE_3__ *) malloc(_len_report__i0__device_report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_report__i0__device_report_enum0; _j0++) {
            report[_i0].device->report_enum->numbered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = i2c_hid_get_report_length(report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_report0; _aux++) {
          free(report[_aux].device);
          }
          free(report);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_report0 = 65025;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0__device0 = 1;
          report[_i0].device = (struct TYPE_4__ *) malloc(_len_report__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_report__i0__device0; _j0++) {
              int _len_report__i0__device_report_enum0 = 1;
          report[_i0].device->report_enum = (struct TYPE_3__ *) malloc(_len_report__i0__device_report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_report__i0__device_report_enum0; _j0++) {
            report[_i0].device->report_enum->numbered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = i2c_hid_get_report_length(report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_report0; _aux++) {
          free(report[_aux].device);
          }
          free(report);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_report0 = 100;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_report__i0__device0 = 1;
          report[_i0].device = (struct TYPE_4__ *) malloc(_len_report__i0__device0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_report__i0__device0; _j0++) {
              int _len_report__i0__device_report_enum0 = 1;
          report[_i0].device->report_enum = (struct TYPE_3__ *) malloc(_len_report__i0__device_report_enum0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_report__i0__device_report_enum0; _j0++) {
            report[_i0].device->report_enum->numbered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = i2c_hid_get_report_length(report);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_report0; _aux++) {
          free(report[_aux].device);
          }
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

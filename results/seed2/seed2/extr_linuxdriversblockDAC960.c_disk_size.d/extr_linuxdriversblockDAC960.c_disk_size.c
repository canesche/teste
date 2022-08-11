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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_4__** LogicalDeviceInformation; } ;
struct TYPE_8__ {TYPE_1__* LogicalDriveInformation; } ;
struct TYPE_11__ {scalar_t__ FirmwareType; int LogicalDriveCount; TYPE_3__ V2; TYPE_2__ V1; } ;
struct TYPE_10__ {long ConfigurableDeviceSize; } ;
struct TYPE_7__ {long LogicalDriveSize; } ;
typedef  TYPE_4__ DAC960_V2_LogicalDeviceInfo_T ;
typedef  TYPE_5__ DAC960_Controller_T ;

/* Variables and functions */
 scalar_t__ DAC960_V1_Controller ; 

__attribute__((used)) static long disk_size(DAC960_Controller_T *p, int drive_nr)
{
	if (p->FirmwareType == DAC960_V1_Controller) {
		if (drive_nr >= p->LogicalDriveCount)
			return 0;
		return p->V1.LogicalDriveInformation[drive_nr].
			LogicalDriveSize;
	} else {
		DAC960_V2_LogicalDeviceInfo_T *i =
			p->V2.LogicalDeviceInformation[drive_nr];
		if (i == NULL)
			return 0;
		return i->ConfigurableDeviceSize;
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
          int drive_nr = 100;
          int _len_p0 = 1;
          struct TYPE_11__ * p = (struct TYPE_11__ *) malloc(_len_p0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].FirmwareType = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].LogicalDriveCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__V2_LogicalDeviceInformation0 = 1;
          p[_i0].V2.LogicalDeviceInformation = (struct TYPE_10__ **) malloc(_len_p__i0__V2_LogicalDeviceInformation0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__V2_LogicalDeviceInformation0; _j0++) {
            int _len_p__i0__V2_LogicalDeviceInformation1 = 1;
            p[_i0].V2.LogicalDeviceInformation[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__V2_LogicalDeviceInformation1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__V2_LogicalDeviceInformation1; _j1++) {
              p[_i0].V2.LogicalDeviceInformation[_j0]->ConfigurableDeviceSize = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p__i0__V1_LogicalDriveInformation0 = 1;
          p[_i0].V1.LogicalDriveInformation = (struct TYPE_7__ *) malloc(_len_p__i0__V1_LogicalDriveInformation0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__V1_LogicalDriveInformation0; _j0++) {
            p[_i0].V1.LogicalDriveInformation->LogicalDriveSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = disk_size(p,drive_nr);
          printf("%ld\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int drive_nr = 255;
          int _len_p0 = 65025;
          struct TYPE_11__ * p = (struct TYPE_11__ *) malloc(_len_p0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].FirmwareType = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].LogicalDriveCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__V2_LogicalDeviceInformation0 = 1;
          p[_i0].V2.LogicalDeviceInformation = (struct TYPE_10__ **) malloc(_len_p__i0__V2_LogicalDeviceInformation0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__V2_LogicalDeviceInformation0; _j0++) {
            int _len_p__i0__V2_LogicalDeviceInformation1 = 1;
            p[_i0].V2.LogicalDeviceInformation[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__V2_LogicalDeviceInformation1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__V2_LogicalDeviceInformation1; _j1++) {
              p[_i0].V2.LogicalDeviceInformation[_j0]->ConfigurableDeviceSize = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p__i0__V1_LogicalDriveInformation0 = 1;
          p[_i0].V1.LogicalDriveInformation = (struct TYPE_7__ *) malloc(_len_p__i0__V1_LogicalDriveInformation0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__V1_LogicalDriveInformation0; _j0++) {
            p[_i0].V1.LogicalDriveInformation->LogicalDriveSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = disk_size(p,drive_nr);
          printf("%ld\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int drive_nr = 10;
          int _len_p0 = 100;
          struct TYPE_11__ * p = (struct TYPE_11__ *) malloc(_len_p0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].FirmwareType = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].LogicalDriveCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__V2_LogicalDeviceInformation0 = 1;
          p[_i0].V2.LogicalDeviceInformation = (struct TYPE_10__ **) malloc(_len_p__i0__V2_LogicalDeviceInformation0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__V2_LogicalDeviceInformation0; _j0++) {
            int _len_p__i0__V2_LogicalDeviceInformation1 = 1;
            p[_i0].V2.LogicalDeviceInformation[_j0] = (struct TYPE_10__ *) malloc(_len_p__i0__V2_LogicalDeviceInformation1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_p__i0__V2_LogicalDeviceInformation1; _j1++) {
              p[_i0].V2.LogicalDeviceInformation[_j0]->ConfigurableDeviceSize = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_p__i0__V1_LogicalDriveInformation0 = 1;
          p[_i0].V1.LogicalDriveInformation = (struct TYPE_7__ *) malloc(_len_p__i0__V1_LogicalDriveInformation0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_p__i0__V1_LogicalDriveInformation0; _j0++) {
            p[_i0].V1.LogicalDriveInformation->LogicalDriveSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = disk_size(p,drive_nr);
          printf("%ld\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

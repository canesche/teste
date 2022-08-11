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
struct gendisk {scalar_t__ private_data; TYPE_1__* queue; } ;
struct TYPE_4__ {int /*<<< orphan*/ * LogicalDriveInitiallyAccessible; } ;
struct TYPE_3__ {TYPE_2__* queuedata; } ;
typedef  TYPE_2__ DAC960_Controller_T ;

/* Variables and functions */
 unsigned int DISK_EVENT_MEDIA_CHANGE ; 

__attribute__((used)) static unsigned int DAC960_check_events(struct gendisk *disk,
					unsigned int clearing)
{
	DAC960_Controller_T *p = disk->queue->queuedata;
	int drive_nr = (long)disk->private_data;

	if (!p->LogicalDriveInitiallyAccessible[drive_nr])
		return DISK_EVENT_MEDIA_CHANGE;
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
          unsigned int clearing = 100;
          int _len_disk0 = 1;
          struct gendisk * disk = (struct gendisk *) malloc(_len_disk0*sizeof(struct gendisk));
          for(int _i0 = 0; _i0 < _len_disk0; _i0++) {
            disk[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_disk__i0__queue0 = 1;
          disk[_i0].queue = (struct TYPE_3__ *) malloc(_len_disk__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue0; _j0++) {
              int _len_disk__i0__queue_queuedata0 = 1;
          disk[_i0].queue->queuedata = (struct TYPE_4__ *) malloc(_len_disk__i0__queue_queuedata0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata0; _j0++) {
              int _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0 = 1;
          disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible = (int *) malloc(_len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0; _j0++) {
            disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = DAC960_check_events(disk,clearing);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_disk0; _aux++) {
          free(disk[_aux].queue);
          }
          free(disk);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int clearing = 255;
          int _len_disk0 = 65025;
          struct gendisk * disk = (struct gendisk *) malloc(_len_disk0*sizeof(struct gendisk));
          for(int _i0 = 0; _i0 < _len_disk0; _i0++) {
            disk[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_disk__i0__queue0 = 1;
          disk[_i0].queue = (struct TYPE_3__ *) malloc(_len_disk__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue0; _j0++) {
              int _len_disk__i0__queue_queuedata0 = 1;
          disk[_i0].queue->queuedata = (struct TYPE_4__ *) malloc(_len_disk__i0__queue_queuedata0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata0; _j0++) {
              int _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0 = 1;
          disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible = (int *) malloc(_len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0; _j0++) {
            disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = DAC960_check_events(disk,clearing);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_disk0; _aux++) {
          free(disk[_aux].queue);
          }
          free(disk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int clearing = 10;
          int _len_disk0 = 100;
          struct gendisk * disk = (struct gendisk *) malloc(_len_disk0*sizeof(struct gendisk));
          for(int _i0 = 0; _i0 < _len_disk0; _i0++) {
            disk[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_disk__i0__queue0 = 1;
          disk[_i0].queue = (struct TYPE_3__ *) malloc(_len_disk__i0__queue0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue0; _j0++) {
              int _len_disk__i0__queue_queuedata0 = 1;
          disk[_i0].queue->queuedata = (struct TYPE_4__ *) malloc(_len_disk__i0__queue_queuedata0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata0; _j0++) {
              int _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0 = 1;
          disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible = (int *) malloc(_len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_disk__i0__queue_queuedata_LogicalDriveInitiallyAccessible0; _j0++) {
            disk[_i0].queue->queuedata->LogicalDriveInitiallyAccessible[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = DAC960_check_events(disk,clearing);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_disk0; _aux++) {
          free(disk[_aux].queue);
          }
          free(disk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

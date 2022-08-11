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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct kernel_queue {int pending_wptr; int* wptr_kernel; TYPE_3__* queue; int /*<<< orphan*/ * wptr64_kernel; int /*<<< orphan*/  pending_wptr64; TYPE_2__* dev; } ;
struct TYPE_8__ {int queue_size; } ;
struct TYPE_7__ {TYPE_4__ properties; } ;
struct TYPE_6__ {TYPE_1__* device_info; } ;
struct TYPE_5__ {int doorbell_size; } ;

/* Variables and functions */

__attribute__((used)) static void rollback_packet(struct kernel_queue *kq)
{
	if (kq->dev->device_info->doorbell_size == 8) {
		kq->pending_wptr64 = *kq->wptr64_kernel;
		kq->pending_wptr = *kq->wptr_kernel %
			(kq->queue->properties.queue_size / 4);
	} else {
		kq->pending_wptr = *kq->wptr_kernel;
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
          int _len_kq0 = 1;
          struct kernel_queue * kq = (struct kernel_queue *) malloc(_len_kq0*sizeof(struct kernel_queue));
          for(int _i0 = 0; _i0 < _len_kq0; _i0++) {
            kq[_i0].pending_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__wptr_kernel0 = 1;
          kq[_i0].wptr_kernel = (int *) malloc(_len_kq__i0__wptr_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr_kernel0; _j0++) {
            kq[_i0].wptr_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__queue0 = 1;
          kq[_i0].queue = (struct TYPE_7__ *) malloc(_len_kq__i0__queue0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_kq__i0__queue0; _j0++) {
            kq[_i0].queue->properties.queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__wptr64_kernel0 = 1;
          kq[_i0].wptr64_kernel = (int *) malloc(_len_kq__i0__wptr64_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr64_kernel0; _j0++) {
            kq[_i0].wptr64_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kq[_i0].pending_wptr64 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__dev0 = 1;
          kq[_i0].dev = (struct TYPE_6__ *) malloc(_len_kq__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev0; _j0++) {
              int _len_kq__i0__dev_device_info0 = 1;
          kq[_i0].dev->device_info = (struct TYPE_5__ *) malloc(_len_kq__i0__dev_device_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev_device_info0; _j0++) {
            kq[_i0].dev->device_info->doorbell_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rollback_packet(kq);
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].queue);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr64_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].dev);
          }
          free(kq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kq0 = 65025;
          struct kernel_queue * kq = (struct kernel_queue *) malloc(_len_kq0*sizeof(struct kernel_queue));
          for(int _i0 = 0; _i0 < _len_kq0; _i0++) {
            kq[_i0].pending_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__wptr_kernel0 = 1;
          kq[_i0].wptr_kernel = (int *) malloc(_len_kq__i0__wptr_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr_kernel0; _j0++) {
            kq[_i0].wptr_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__queue0 = 1;
          kq[_i0].queue = (struct TYPE_7__ *) malloc(_len_kq__i0__queue0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_kq__i0__queue0; _j0++) {
            kq[_i0].queue->properties.queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__wptr64_kernel0 = 1;
          kq[_i0].wptr64_kernel = (int *) malloc(_len_kq__i0__wptr64_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr64_kernel0; _j0++) {
            kq[_i0].wptr64_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kq[_i0].pending_wptr64 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__dev0 = 1;
          kq[_i0].dev = (struct TYPE_6__ *) malloc(_len_kq__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev0; _j0++) {
              int _len_kq__i0__dev_device_info0 = 1;
          kq[_i0].dev->device_info = (struct TYPE_5__ *) malloc(_len_kq__i0__dev_device_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev_device_info0; _j0++) {
            kq[_i0].dev->device_info->doorbell_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rollback_packet(kq);
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].queue);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr64_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].dev);
          }
          free(kq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kq0 = 100;
          struct kernel_queue * kq = (struct kernel_queue *) malloc(_len_kq0*sizeof(struct kernel_queue));
          for(int _i0 = 0; _i0 < _len_kq0; _i0++) {
            kq[_i0].pending_wptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__wptr_kernel0 = 1;
          kq[_i0].wptr_kernel = (int *) malloc(_len_kq__i0__wptr_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr_kernel0; _j0++) {
            kq[_i0].wptr_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__queue0 = 1;
          kq[_i0].queue = (struct TYPE_7__ *) malloc(_len_kq__i0__queue0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_kq__i0__queue0; _j0++) {
            kq[_i0].queue->properties.queue_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kq__i0__wptr64_kernel0 = 1;
          kq[_i0].wptr64_kernel = (int *) malloc(_len_kq__i0__wptr64_kernel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kq__i0__wptr64_kernel0; _j0++) {
            kq[_i0].wptr64_kernel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kq[_i0].pending_wptr64 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kq__i0__dev0 = 1;
          kq[_i0].dev = (struct TYPE_6__ *) malloc(_len_kq__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev0; _j0++) {
              int _len_kq__i0__dev_device_info0 = 1;
          kq[_i0].dev->device_info = (struct TYPE_5__ *) malloc(_len_kq__i0__dev_device_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_kq__i0__dev_device_info0; _j0++) {
            kq[_i0].dev->device_info->doorbell_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rollback_packet(kq);
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].queue);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].wptr64_kernel);
          }
          for(int _aux = 0; _aux < _len_kq0; _aux++) {
          free(kq[_aux].dev);
          }
          free(kq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u32 ;
struct fib {size_t vector_no; } ;
struct aac_dev {int max_msix; size_t vector_cap; TYPE_1__* scsi_host_ptr; struct fib* fibs; } ;
struct TYPE_2__ {size_t can_queue; } ;

/* Variables and functions */
 size_t AAC_NUM_MGT_FIB ; 

void aac_fib_vector_assign(struct aac_dev *dev)
{
	u32 i = 0;
	u32 vector = 1;
	struct fib *fibptr = NULL;

	for (i = 0, fibptr = &dev->fibs[i];
		i < (dev->scsi_host_ptr->can_queue + AAC_NUM_MGT_FIB);
		i++, fibptr++) {
		if ((dev->max_msix == 1) ||
		  (i > ((dev->scsi_host_ptr->can_queue + AAC_NUM_MGT_FIB - 1)
			- dev->vector_cap))) {
			fibptr->vector_no = 0;
		} else {
			fibptr->vector_no = vector;
			vector++;
			if (vector == dev->max_msix)
				vector = 1;
		}
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
          int _len_dev0 = 1;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].max_msix = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vector_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__scsi_host_ptr0 = 1;
          dev[_i0].scsi_host_ptr = (struct TYPE_2__ *) malloc(_len_dev__i0__scsi_host_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__scsi_host_ptr0; _j0++) {
            dev[_i0].scsi_host_ptr->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__fibs0 = 1;
          dev[_i0].fibs = (struct fib *) malloc(_len_dev__i0__fibs0*sizeof(struct fib));
          for(int _j0 = 0; _j0 < _len_dev__i0__fibs0; _j0++) {
            dev[_i0].fibs->vector_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          aac_fib_vector_assign(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].scsi_host_ptr);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fibs);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].max_msix = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vector_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__scsi_host_ptr0 = 1;
          dev[_i0].scsi_host_ptr = (struct TYPE_2__ *) malloc(_len_dev__i0__scsi_host_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__scsi_host_ptr0; _j0++) {
            dev[_i0].scsi_host_ptr->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__fibs0 = 1;
          dev[_i0].fibs = (struct fib *) malloc(_len_dev__i0__fibs0*sizeof(struct fib));
          for(int _j0 = 0; _j0 < _len_dev__i0__fibs0; _j0++) {
            dev[_i0].fibs->vector_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          aac_fib_vector_assign(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].scsi_host_ptr);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fibs);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].max_msix = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vector_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__scsi_host_ptr0 = 1;
          dev[_i0].scsi_host_ptr = (struct TYPE_2__ *) malloc(_len_dev__i0__scsi_host_ptr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__scsi_host_ptr0; _j0++) {
            dev[_i0].scsi_host_ptr->can_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__fibs0 = 1;
          dev[_i0].fibs = (struct fib *) malloc(_len_dev__i0__fibs0*sizeof(struct fib));
          for(int _j0 = 0; _j0 < _len_dev__i0__fibs0; _j0++) {
            dev[_i0].fibs->vector_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          aac_fib_vector_assign(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].scsi_host_ptr);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fibs);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

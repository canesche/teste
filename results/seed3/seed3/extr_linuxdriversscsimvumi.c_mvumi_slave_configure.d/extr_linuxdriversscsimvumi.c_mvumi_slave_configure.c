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
struct scsi_device {unsigned char id; TYPE_1__* host; } ;
struct mvumi_hba {unsigned char max_target_id; int* target_map; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mvumi_slave_configure(struct scsi_device *sdev)
{
	struct mvumi_hba *mhba;
	unsigned char bitcount = sizeof(unsigned char) * 8;

	mhba = (struct mvumi_hba *) sdev->host->hostdata;
	if (sdev->id >= mhba->max_target_id)
		return -EINVAL;

	mhba->target_map[sdev->id / bitcount] |= (1 << (sdev->id % bitcount));
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
          int _len_sdev0 = 1;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
            sdev[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdev__i0__host0 = 1;
          sdev[_i0].host = (struct TYPE_2__ *) malloc(_len_sdev__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdev__i0__host0; _j0++) {
            sdev[_i0].host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mvumi_slave_configure(sdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdev0; _aux++) {
          free(sdev[_aux].host);
          }
          free(sdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sdev0 = 65025;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
            sdev[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdev__i0__host0 = 1;
          sdev[_i0].host = (struct TYPE_2__ *) malloc(_len_sdev__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdev__i0__host0; _j0++) {
            sdev[_i0].host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mvumi_slave_configure(sdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdev0; _aux++) {
          free(sdev[_aux].host);
          }
          free(sdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sdev0 = 100;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
            sdev[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdev__i0__host0 = 1;
          sdev[_i0].host = (struct TYPE_2__ *) malloc(_len_sdev__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdev__i0__host0; _j0++) {
            sdev[_i0].host->hostdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mvumi_slave_configure(sdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdev0; _aux++) {
          free(sdev[_aux].host);
          }
          free(sdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

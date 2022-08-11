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
typedef  void* u16 ;
struct TYPE_2__ {int* radio_text; void* rds_pi; } ;
struct bcm2048_device {int fifo_size; TYPE_1__ rds_info; } ;

/* Variables and functions */
 int BCM2048_RDS_BLOCK_A ; 
 scalar_t__ BCM2048_RDS_FIFO_DUPLE_SIZE ; 

__attribute__((used)) static void bcm2048_parse_rds_pi(struct bcm2048_device *bdev)
{
	int i, cnt = 0;
	u16 pi;

	for (i = 0; i < bdev->fifo_size; i += BCM2048_RDS_FIFO_DUPLE_SIZE) {
		/* Block A match, only data without crc errors taken */
		if (bdev->rds_info.radio_text[i] == BCM2048_RDS_BLOCK_A) {
			pi = (bdev->rds_info.radio_text[i + 1] << 8) +
				bdev->rds_info.radio_text[i + 2];

			if (!bdev->rds_info.rds_pi) {
				bdev->rds_info.rds_pi = pi;
				return;
			}
			if (pi != bdev->rds_info.rds_pi) {
				cnt++;
				if (cnt > 3) {
					bdev->rds_info.rds_pi = pi;
					cnt = 0;
				}
			} else {
				cnt = 0;
			}
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
          int _len_bdev0 = 1;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            bdev[_i0].fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (int *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_pi(bdev);
          free(bdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bdev0 = 65025;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            bdev[_i0].fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (int *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_pi(bdev);
          free(bdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bdev0 = 100;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            bdev[_i0].fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (int *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_pi(bdev);
          free(bdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

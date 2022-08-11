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
struct TYPE_2__ {scalar_t__* radio_text; scalar_t__* rds_rt; } ;
struct bcm2048_device {TYPE_1__ rds_info; } ;

/* Variables and functions */

__attribute__((used)) static void bcm2048_parse_rds_rt_block(struct bcm2048_device *bdev, int i,
				       int index, int crc)
{
	/* Good data will overwrite poor data */
	if (crc) {
		if (!bdev->rds_info.rds_rt[index])
			bdev->rds_info.rds_rt[index] =
				bdev->rds_info.radio_text[i + 1];
		if (!bdev->rds_info.rds_rt[index + 1])
			bdev->rds_info.rds_rt[index + 1] =
				bdev->rds_info.radio_text[i + 2];
	} else {
		bdev->rds_info.rds_rt[index] =
			bdev->rds_info.radio_text[i + 1];
		bdev->rds_info.rds_rt[index + 1] =
			bdev->rds_info.radio_text[i + 2];
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
          int i = 100;
          int index = 100;
          int crc = 100;
          int _len_bdev0 = 1;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (long *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bdev__i0__rds_info_rds_rt0 = 1;
          bdev[_i0].rds_info.rds_rt = (long *) malloc(_len_bdev__i0__rds_info_rds_rt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_rds_rt0; _j0++) {
            bdev[_i0].rds_info.rds_rt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_rt_block(bdev,i,index,crc);
          free(bdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int index = 255;
          int crc = 255;
          int _len_bdev0 = 65025;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (long *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bdev__i0__rds_info_rds_rt0 = 1;
          bdev[_i0].rds_info.rds_rt = (long *) malloc(_len_bdev__i0__rds_info_rds_rt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_rds_rt0; _j0++) {
            bdev[_i0].rds_info.rds_rt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_rt_block(bdev,i,index,crc);
          free(bdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int index = 10;
          int crc = 10;
          int _len_bdev0 = 100;
          struct bcm2048_device * bdev = (struct bcm2048_device *) malloc(_len_bdev0*sizeof(struct bcm2048_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__rds_info_radio_text0 = 1;
          bdev[_i0].rds_info.radio_text = (long *) malloc(_len_bdev__i0__rds_info_radio_text0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_radio_text0; _j0++) {
            bdev[_i0].rds_info.radio_text[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bdev__i0__rds_info_rds_rt0 = 1;
          bdev[_i0].rds_info.rds_rt = (long *) malloc(_len_bdev__i0__rds_info_rds_rt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bdev__i0__rds_info_rds_rt0; _j0++) {
            bdev[_i0].rds_info.rds_rt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bcm2048_parse_rds_rt_block(bdev,i,index,crc);
          free(bdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

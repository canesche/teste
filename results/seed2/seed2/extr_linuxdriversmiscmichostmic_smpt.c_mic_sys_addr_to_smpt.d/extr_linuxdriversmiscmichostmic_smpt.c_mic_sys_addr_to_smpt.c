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
typedef  int u8 ;
struct mic_device {TYPE_2__* smpt; } ;
typedef  int dma_addr_t ;
struct TYPE_3__ {int base; int page_shift; } ;
struct TYPE_4__ {TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 mic_sys_addr_to_smpt(struct mic_device *mdev, dma_addr_t pa)
{
	return (pa - mdev->smpt->info.base) >> mdev->smpt->info.page_shift;
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
          int pa = 100;
          int _len_mdev0 = 1;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.base = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_sys_addr_to_smpt(mdev,pa);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pa = 255;
          int _len_mdev0 = 65025;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.base = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_sys_addr_to_smpt(mdev,pa);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pa = 10;
          int _len_mdev0 = 100;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.base = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_sys_addr_to_smpt(mdev,pa);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  u32 ;
struct aac_dev {TYPE_2__* safw_phys_luns; } ;
struct TYPE_4__ {TYPE_1__* lun; } ;
struct TYPE_3__ {int /*<<< orphan*/ * node_ident; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 aac_get_safw_phys_device_type(struct aac_dev *dev, int lun)
{
	return dev->safw_phys_luns->lun[lun].node_ident[8];
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
          int lun = 100;
          int _len_dev0 = 1;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__safw_phys_luns0 = 1;
          dev[_i0].safw_phys_luns = (struct TYPE_4__ *) malloc(_len_dev__i0__safw_phys_luns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun0 = 1;
          dev[_i0].safw_phys_luns->lun = (struct TYPE_3__ *) malloc(_len_dev__i0__safw_phys_luns_lun0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun_node_ident0 = 1;
          dev[_i0].safw_phys_luns->lun->node_ident = (int *) malloc(_len_dev__i0__safw_phys_luns_lun_node_ident0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun_node_ident0; _j0++) {
            dev[_i0].safw_phys_luns->lun->node_ident[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = aac_get_safw_phys_device_type(dev,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].safw_phys_luns);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lun = 255;
          int _len_dev0 = 65025;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__safw_phys_luns0 = 1;
          dev[_i0].safw_phys_luns = (struct TYPE_4__ *) malloc(_len_dev__i0__safw_phys_luns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun0 = 1;
          dev[_i0].safw_phys_luns->lun = (struct TYPE_3__ *) malloc(_len_dev__i0__safw_phys_luns_lun0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun_node_ident0 = 1;
          dev[_i0].safw_phys_luns->lun->node_ident = (int *) malloc(_len_dev__i0__safw_phys_luns_lun_node_ident0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun_node_ident0; _j0++) {
            dev[_i0].safw_phys_luns->lun->node_ident[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = aac_get_safw_phys_device_type(dev,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].safw_phys_luns);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lun = 10;
          int _len_dev0 = 100;
          struct aac_dev * dev = (struct aac_dev *) malloc(_len_dev0*sizeof(struct aac_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__safw_phys_luns0 = 1;
          dev[_i0].safw_phys_luns = (struct TYPE_4__ *) malloc(_len_dev__i0__safw_phys_luns0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun0 = 1;
          dev[_i0].safw_phys_luns->lun = (struct TYPE_3__ *) malloc(_len_dev__i0__safw_phys_luns_lun0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun0; _j0++) {
              int _len_dev__i0__safw_phys_luns_lun_node_ident0 = 1;
          dev[_i0].safw_phys_luns->lun->node_ident = (int *) malloc(_len_dev__i0__safw_phys_luns_lun_node_ident0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__safw_phys_luns_lun_node_ident0; _j0++) {
            dev[_i0].safw_phys_luns->lun->node_ident[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = aac_get_safw_phys_device_type(dev,lun);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].safw_phys_luns);
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

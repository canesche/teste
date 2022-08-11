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
       3            linked\n\
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
struct regulator_ops {scalar_t__ set_voltage_sel; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {unsigned int n_voltages; struct regulator_ops* ops; } ;

/* Variables and functions */
 int EINVAL ; 
 int EOPNOTSUPP ; 
 scalar_t__ regulator_set_voltage_sel_regmap ; 

int regulator_list_hardware_vsel(struct regulator *regulator,
				 unsigned selector)
{
	struct regulator_dev *rdev = regulator->rdev;
	const struct regulator_ops *ops = rdev->desc->ops;

	if (selector >= rdev->desc->n_voltages)
		return -EINVAL;
	if (ops->set_voltage_sel != regulator_set_voltage_sel_regmap)
		return -EOPNOTSUPP;

	return selector;
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
          unsigned int selector = 100;
          int _len_regulator0 = 1;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct regulator_dev *) malloc(_len_regulator__i0__rdev0*sizeof(struct regulator_dev));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              int _len_regulator__i0__rdev_desc0 = 1;
          regulator[_i0].rdev->desc = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc0; _j0++) {
            regulator[_i0].rdev->desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regulator__i0__rdev_desc_ops0 = 1;
          regulator[_i0].rdev->desc->ops = (struct regulator_ops *) malloc(_len_regulator__i0__rdev_desc_ops0*sizeof(struct regulator_ops));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc_ops0; _j0++) {
            regulator[_i0].rdev->desc->ops->set_voltage_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = regulator_list_hardware_vsel(regulator,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int selector = 255;
          int _len_regulator0 = 65025;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct regulator_dev *) malloc(_len_regulator__i0__rdev0*sizeof(struct regulator_dev));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              int _len_regulator__i0__rdev_desc0 = 1;
          regulator[_i0].rdev->desc = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc0; _j0++) {
            regulator[_i0].rdev->desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regulator__i0__rdev_desc_ops0 = 1;
          regulator[_i0].rdev->desc->ops = (struct regulator_ops *) malloc(_len_regulator__i0__rdev_desc_ops0*sizeof(struct regulator_ops));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc_ops0; _j0++) {
            regulator[_i0].rdev->desc->ops->set_voltage_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = regulator_list_hardware_vsel(regulator,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int selector = 10;
          int _len_regulator0 = 100;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct regulator_dev *) malloc(_len_regulator__i0__rdev0*sizeof(struct regulator_dev));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              int _len_regulator__i0__rdev_desc0 = 1;
          regulator[_i0].rdev->desc = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc0; _j0++) {
            regulator[_i0].rdev->desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regulator__i0__rdev_desc_ops0 = 1;
          regulator[_i0].rdev->desc->ops = (struct regulator_ops *) malloc(_len_regulator__i0__rdev_desc_ops0*sizeof(struct regulator_ops));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc_ops0; _j0++) {
            regulator[_i0].rdev->desc->ops->set_voltage_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = regulator_list_hardware_vsel(regulator,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned int selector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regulator0 = 1;
          struct regulator * regulator = (struct regulator *) malloc(_len_regulator0*sizeof(struct regulator));
          for(int _i0 = 0; _i0 < _len_regulator0; _i0++) {
              int _len_regulator__i0__rdev0 = 1;
          regulator[_i0].rdev = (struct regulator_dev *) malloc(_len_regulator__i0__rdev0*sizeof(struct regulator_dev));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev0; _j0++) {
              int _len_regulator__i0__rdev_desc0 = 1;
          regulator[_i0].rdev->desc = (struct TYPE_2__ *) malloc(_len_regulator__i0__rdev_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc0; _j0++) {
            regulator[_i0].rdev->desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regulator__i0__rdev_desc_ops0 = 1;
          regulator[_i0].rdev->desc->ops = (struct regulator_ops *) malloc(_len_regulator__i0__rdev_desc_ops0*sizeof(struct regulator_ops));
          for(int _j0 = 0; _j0 < _len_regulator__i0__rdev_desc_ops0; _j0++) {
            regulator[_i0].rdev->desc->ops->set_voltage_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = regulator_list_hardware_vsel(regulator,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regulator0; _aux++) {
          free(regulator[_aux].rdev);
          }
          free(regulator);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

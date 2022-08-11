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

/* Type definitions */
struct led_flash_ops {scalar_t__ fault_get; scalar_t__ timeout_set; scalar_t__ flash_brightness_set; } ;
struct led_classdev {struct attribute_group const** groups; } ;
struct led_classdev_flash {struct attribute_group** sysfs_groups; struct led_flash_ops* ops; struct led_classdev led_cdev; } ;
struct attribute_group {int dummy; } ;

/* Variables and functions */
 struct attribute_group led_flash_brightness_group ; 
 struct attribute_group led_flash_fault_group ; 
 struct attribute_group led_flash_strobe_group ; 
 struct attribute_group led_flash_timeout_group ; 

__attribute__((used)) static void led_flash_init_sysfs_groups(struct led_classdev_flash *fled_cdev)
{
	struct led_classdev *led_cdev = &fled_cdev->led_cdev;
	const struct led_flash_ops *ops = fled_cdev->ops;
	const struct attribute_group **flash_groups = fled_cdev->sysfs_groups;

	int num_sysfs_groups = 0;

	flash_groups[num_sysfs_groups++] = &led_flash_strobe_group;

	if (ops->flash_brightness_set)
		flash_groups[num_sysfs_groups++] = &led_flash_brightness_group;

	if (ops->timeout_set)
		flash_groups[num_sysfs_groups++] = &led_flash_timeout_group;

	if (ops->fault_get)
		flash_groups[num_sysfs_groups++] = &led_flash_fault_group;

	led_cdev->groups = flash_groups;
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
          int _len_fled_cdev0 = 1;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
              int _len_fled_cdev__i0__sysfs_groups0 = 1;
          fled_cdev[_i0].sysfs_groups = (struct attribute_group **) malloc(_len_fled_cdev__i0__sysfs_groups0*sizeof(struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__sysfs_groups0; _j0++) {
            int _len_fled_cdev__i0__sysfs_groups1 = 1;
            fled_cdev[_i0].sysfs_groups[_j0] = (struct attribute_group *) malloc(_len_fled_cdev__i0__sysfs_groups1*sizeof(struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__sysfs_groups1; _j1++) {
              fled_cdev[_i0].sysfs_groups[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fled_cdev__i0__ops0 = 1;
          fled_cdev[_i0].ops = (struct led_flash_ops *) malloc(_len_fled_cdev__i0__ops0*sizeof(struct led_flash_ops));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__ops0; _j0++) {
            fled_cdev[_i0].ops->fault_get = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->timeout_set = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->flash_brightness_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fled_cdev__i0__led_cdev_groups0 = 1;
          fled_cdev[_i0].led_cdev.groups = (const struct attribute_group **) malloc(_len_fled_cdev__i0__led_cdev_groups0*sizeof(const struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__led_cdev_groups0; _j0++) {
            int _len_fled_cdev__i0__led_cdev_groups1 = 1;
            fled_cdev[_i0].led_cdev.groups[_j0] = (const struct attribute_group *) malloc(_len_fled_cdev__i0__led_cdev_groups1*sizeof(const struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__led_cdev_groups1; _j1++) {
                  }
          }
          }
          led_flash_init_sysfs_groups(fled_cdev);
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(*(fled_cdev[_aux].sysfs_groups));
        free(fled_cdev[_aux].sysfs_groups);
          }
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(fled_cdev[_aux].ops);
          }
          free(fled_cdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fled_cdev0 = 65025;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
              int _len_fled_cdev__i0__sysfs_groups0 = 1;
          fled_cdev[_i0].sysfs_groups = (struct attribute_group **) malloc(_len_fled_cdev__i0__sysfs_groups0*sizeof(struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__sysfs_groups0; _j0++) {
            int _len_fled_cdev__i0__sysfs_groups1 = 1;
            fled_cdev[_i0].sysfs_groups[_j0] = (struct attribute_group *) malloc(_len_fled_cdev__i0__sysfs_groups1*sizeof(struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__sysfs_groups1; _j1++) {
              fled_cdev[_i0].sysfs_groups[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fled_cdev__i0__ops0 = 1;
          fled_cdev[_i0].ops = (struct led_flash_ops *) malloc(_len_fled_cdev__i0__ops0*sizeof(struct led_flash_ops));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__ops0; _j0++) {
            fled_cdev[_i0].ops->fault_get = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->timeout_set = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->flash_brightness_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fled_cdev__i0__led_cdev_groups0 = 1;
          fled_cdev[_i0].led_cdev.groups = (const struct attribute_group **) malloc(_len_fled_cdev__i0__led_cdev_groups0*sizeof(const struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__led_cdev_groups0; _j0++) {
            int _len_fled_cdev__i0__led_cdev_groups1 = 1;
            fled_cdev[_i0].led_cdev.groups[_j0] = (const struct attribute_group *) malloc(_len_fled_cdev__i0__led_cdev_groups1*sizeof(const struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__led_cdev_groups1; _j1++) {
                  }
          }
          }
          led_flash_init_sysfs_groups(fled_cdev);
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(*(fled_cdev[_aux].sysfs_groups));
        free(fled_cdev[_aux].sysfs_groups);
          }
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(fled_cdev[_aux].ops);
          }
          free(fled_cdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fled_cdev0 = 100;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
              int _len_fled_cdev__i0__sysfs_groups0 = 1;
          fled_cdev[_i0].sysfs_groups = (struct attribute_group **) malloc(_len_fled_cdev__i0__sysfs_groups0*sizeof(struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__sysfs_groups0; _j0++) {
            int _len_fled_cdev__i0__sysfs_groups1 = 1;
            fled_cdev[_i0].sysfs_groups[_j0] = (struct attribute_group *) malloc(_len_fled_cdev__i0__sysfs_groups1*sizeof(struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__sysfs_groups1; _j1++) {
              fled_cdev[_i0].sysfs_groups[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fled_cdev__i0__ops0 = 1;
          fled_cdev[_i0].ops = (struct led_flash_ops *) malloc(_len_fled_cdev__i0__ops0*sizeof(struct led_flash_ops));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__ops0; _j0++) {
            fled_cdev[_i0].ops->fault_get = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->timeout_set = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].ops->flash_brightness_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fled_cdev__i0__led_cdev_groups0 = 1;
          fled_cdev[_i0].led_cdev.groups = (const struct attribute_group **) malloc(_len_fled_cdev__i0__led_cdev_groups0*sizeof(const struct attribute_group *));
          for(int _j0 = 0; _j0 < _len_fled_cdev__i0__led_cdev_groups0; _j0++) {
            int _len_fled_cdev__i0__led_cdev_groups1 = 1;
            fled_cdev[_i0].led_cdev.groups[_j0] = (const struct attribute_group *) malloc(_len_fled_cdev__i0__led_cdev_groups1*sizeof(const struct attribute_group));
            for(int _j1 = 0; _j1 < _len_fled_cdev__i0__led_cdev_groups1; _j1++) {
                  }
          }
          }
          led_flash_init_sysfs_groups(fled_cdev);
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(*(fled_cdev[_aux].sysfs_groups));
        free(fled_cdev[_aux].sysfs_groups);
          }
          for(int _aux = 0; _aux < _len_fled_cdev0; _aux++) {
          free(fled_cdev[_aux].ops);
          }
          free(fled_cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

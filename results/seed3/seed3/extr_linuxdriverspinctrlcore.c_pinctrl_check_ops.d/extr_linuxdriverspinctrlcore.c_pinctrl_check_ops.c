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
struct pinctrl_ops {int /*<<< orphan*/  get_group_name; int /*<<< orphan*/  get_groups_count; } ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinctrl_ops* pctlops; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int pinctrl_check_ops(struct pinctrl_dev *pctldev)
{
	const struct pinctrl_ops *ops = pctldev->desc->pctlops;

	if (!ops ||
	    !ops->get_groups_count ||
	    !ops->get_group_name)
		return -EINVAL;

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
          int _len_pctldev0 = 1;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
              int _len_pctldev__i0__desc0 = 1;
          pctldev[_i0].desc = (struct TYPE_2__ *) malloc(_len_pctldev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc0; _j0++) {
              int _len_pctldev__i0__desc_pctlops0 = 1;
          pctldev[_i0].desc->pctlops = (struct pinctrl_ops *) malloc(_len_pctldev__i0__desc_pctlops0*sizeof(struct pinctrl_ops));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc_pctlops0; _j0++) {
            pctldev[_i0].desc->pctlops->get_group_name = ((-2 * (next_i()%2)) + 1) * next_i();
        pctldev[_i0].desc->pctlops->get_groups_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pinctrl_check_ops(pctldev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctldev0; _aux++) {
          free(pctldev[_aux].desc);
          }
          free(pctldev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pctldev0 = 65025;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
              int _len_pctldev__i0__desc0 = 1;
          pctldev[_i0].desc = (struct TYPE_2__ *) malloc(_len_pctldev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc0; _j0++) {
              int _len_pctldev__i0__desc_pctlops0 = 1;
          pctldev[_i0].desc->pctlops = (struct pinctrl_ops *) malloc(_len_pctldev__i0__desc_pctlops0*sizeof(struct pinctrl_ops));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc_pctlops0; _j0++) {
            pctldev[_i0].desc->pctlops->get_group_name = ((-2 * (next_i()%2)) + 1) * next_i();
        pctldev[_i0].desc->pctlops->get_groups_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pinctrl_check_ops(pctldev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctldev0; _aux++) {
          free(pctldev[_aux].desc);
          }
          free(pctldev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pctldev0 = 100;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
              int _len_pctldev__i0__desc0 = 1;
          pctldev[_i0].desc = (struct TYPE_2__ *) malloc(_len_pctldev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc0; _j0++) {
              int _len_pctldev__i0__desc_pctlops0 = 1;
          pctldev[_i0].desc->pctlops = (struct pinctrl_ops *) malloc(_len_pctldev__i0__desc_pctlops0*sizeof(struct pinctrl_ops));
          for(int _j0 = 0; _j0 < _len_pctldev__i0__desc_pctlops0; _j0++) {
            pctldev[_i0].desc->pctlops->get_group_name = ((-2 * (next_i()%2)) + 1) * next_i();
        pctldev[_i0].desc->pctlops->get_groups_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pinctrl_check_ops(pctldev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctldev0; _aux++) {
          free(pctldev[_aux].desc);
          }
          free(pctldev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct armada_37xx_pinctrl {int ngroups; struct armada_37xx_pin_group* groups; } ;
struct armada_37xx_pin_group {int npins; int extra_npins; int* pins; } ;

/* Variables and functions */

__attribute__((used)) static struct armada_37xx_pin_group *armada_37xx_find_next_grp_by_pin(
	struct armada_37xx_pinctrl *info, int pin, int *grp)
{
	while (*grp < info->ngroups) {
		struct armada_37xx_pin_group *group = &info->groups[*grp];
		int j;

		*grp = *grp + 1;
		for (j = 0; j < (group->npins + group->extra_npins); j++)
			if (group->pins[j] == pin)
				return group;
	}
	return NULL;
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
          int pin = 100;
          int _len_info0 = 1;
          struct armada_37xx_pinctrl * info = (struct armada_37xx_pinctrl *) malloc(_len_info0*sizeof(struct armada_37xx_pinctrl));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups0 = 1;
          info[_i0].groups = (struct armada_37xx_pin_group *) malloc(_len_info__i0__groups0*sizeof(struct armada_37xx_pin_group));
          for(int _j0 = 0; _j0 < _len_info__i0__groups0; _j0++) {
            info[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].groups->extra_npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups_pins0 = 1;
          info[_i0].groups->pins = (int *) malloc(_len_info__i0__groups_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__groups_pins0; _j0++) {
            info[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_grp0 = 1;
          int * grp = (int *) malloc(_len_grp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct armada_37xx_pin_group * benchRet = armada_37xx_find_next_grp_by_pin(info,pin,grp);
          printf("%d\n", (*benchRet).npins);
          printf("%d\n", (*benchRet).extra_npins);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].groups);
          }
          free(info);
          free(grp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pin = 255;
          int _len_info0 = 65025;
          struct armada_37xx_pinctrl * info = (struct armada_37xx_pinctrl *) malloc(_len_info0*sizeof(struct armada_37xx_pinctrl));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups0 = 1;
          info[_i0].groups = (struct armada_37xx_pin_group *) malloc(_len_info__i0__groups0*sizeof(struct armada_37xx_pin_group));
          for(int _j0 = 0; _j0 < _len_info__i0__groups0; _j0++) {
            info[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].groups->extra_npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups_pins0 = 1;
          info[_i0].groups->pins = (int *) malloc(_len_info__i0__groups_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__groups_pins0; _j0++) {
            info[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_grp0 = 65025;
          int * grp = (int *) malloc(_len_grp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct armada_37xx_pin_group * benchRet = armada_37xx_find_next_grp_by_pin(info,pin,grp);
          printf("%d\n", (*benchRet).npins);
          printf("%d\n", (*benchRet).extra_npins);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].groups);
          }
          free(info);
          free(grp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pin = 10;
          int _len_info0 = 100;
          struct armada_37xx_pinctrl * info = (struct armada_37xx_pinctrl *) malloc(_len_info0*sizeof(struct armada_37xx_pinctrl));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups0 = 1;
          info[_i0].groups = (struct armada_37xx_pin_group *) malloc(_len_info__i0__groups0*sizeof(struct armada_37xx_pin_group));
          for(int _j0 = 0; _j0 < _len_info__i0__groups0; _j0++) {
            info[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].groups->extra_npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__groups_pins0 = 1;
          info[_i0].groups->pins = (int *) malloc(_len_info__i0__groups_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__groups_pins0; _j0++) {
            info[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_grp0 = 100;
          int * grp = (int *) malloc(_len_grp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct armada_37xx_pin_group * benchRet = armada_37xx_find_next_grp_by_pin(info,pin,grp);
          printf("%d\n", (*benchRet).npins);
          printf("%d\n", (*benchRet).extra_npins);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].groups);
          }
          free(info);
          free(grp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

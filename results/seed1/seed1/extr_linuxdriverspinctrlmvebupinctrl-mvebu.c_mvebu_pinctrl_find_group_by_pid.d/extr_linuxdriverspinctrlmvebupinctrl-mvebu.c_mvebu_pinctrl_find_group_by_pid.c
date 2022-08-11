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

/* Type definitions */
struct mvebu_pinctrl_group {unsigned int* pins; unsigned int npins; } ;
struct mvebu_pinctrl {unsigned int num_groups; struct mvebu_pinctrl_group* groups; } ;

/* Variables and functions */

__attribute__((used)) static struct mvebu_pinctrl_group *mvebu_pinctrl_find_group_by_pid(
	struct mvebu_pinctrl *pctl, unsigned pid)
{
	unsigned n;
	for (n = 0; n < pctl->num_groups; n++) {
		if (pid >= pctl->groups[n].pins[0] &&
		    pid < pctl->groups[n].pins[0] +
			pctl->groups[n].npins)
			return &pctl->groups[n];
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
          unsigned int pid = 100;
          int _len_pctl0 = 1;
          struct mvebu_pinctrl * pctl = (struct mvebu_pinctrl *) malloc(_len_pctl0*sizeof(struct mvebu_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].num_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mvebu_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mvebu_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
              int _len_pctl__i0__groups_pins0 = 1;
          pctl[_i0].groups->pins = (unsigned int *) malloc(_len_pctl__i0__groups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups_pins0; _j0++) {
            pctl[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pctl[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvebu_pinctrl_group * benchRet = mvebu_pinctrl_find_group_by_pid(pctl,pid);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pid = 255;
          int _len_pctl0 = 65025;
          struct mvebu_pinctrl * pctl = (struct mvebu_pinctrl *) malloc(_len_pctl0*sizeof(struct mvebu_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].num_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mvebu_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mvebu_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
              int _len_pctl__i0__groups_pins0 = 1;
          pctl[_i0].groups->pins = (unsigned int *) malloc(_len_pctl__i0__groups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups_pins0; _j0++) {
            pctl[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pctl[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvebu_pinctrl_group * benchRet = mvebu_pinctrl_find_group_by_pid(pctl,pid);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pid = 10;
          int _len_pctl0 = 100;
          struct mvebu_pinctrl * pctl = (struct mvebu_pinctrl *) malloc(_len_pctl0*sizeof(struct mvebu_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].num_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mvebu_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mvebu_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
              int _len_pctl__i0__groups_pins0 = 1;
          pctl[_i0].groups->pins = (unsigned int *) malloc(_len_pctl__i0__groups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups_pins0; _j0++) {
            pctl[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pctl[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvebu_pinctrl_group * benchRet = mvebu_pinctrl_find_group_by_pid(pctl,pid);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned int pid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl0 = 1;
          struct mvebu_pinctrl * pctl = (struct mvebu_pinctrl *) malloc(_len_pctl0*sizeof(struct mvebu_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].num_groups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mvebu_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mvebu_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
              int _len_pctl__i0__groups_pins0 = 1;
          pctl[_i0].groups->pins = (unsigned int *) malloc(_len_pctl__i0__groups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups_pins0; _j0++) {
            pctl[_i0].groups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pctl[_i0].groups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mvebu_pinctrl_group * benchRet = mvebu_pinctrl_find_group_by_pid(pctl,pid);
          printf("%u\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

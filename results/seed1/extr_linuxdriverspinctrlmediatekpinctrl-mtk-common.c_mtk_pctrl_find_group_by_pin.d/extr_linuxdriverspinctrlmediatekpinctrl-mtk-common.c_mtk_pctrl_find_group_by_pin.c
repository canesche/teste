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
typedef  scalar_t__ u32 ;
struct mtk_pinctrl_group {scalar_t__ pin; } ;
struct mtk_pinctrl {int ngroups; struct mtk_pinctrl_group* groups; } ;

/* Variables and functions */

__attribute__((used)) static struct mtk_pinctrl_group *
mtk_pctrl_find_group_by_pin(struct mtk_pinctrl *pctl, u32 pin)
{
	int i;

	for (i = 0; i < pctl->ngroups; i++) {
		struct mtk_pinctrl_group *grp = pctl->groups + i;

		if (grp->pin == pin)
			return grp;
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
          long pin = 100;
          int _len_pctl0 = 1;
          struct mtk_pinctrl * pctl = (struct mtk_pinctrl *) malloc(_len_pctl0*sizeof(struct mtk_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mtk_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mtk_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
            pctl[_i0].groups->pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mtk_pinctrl_group * benchRet = mtk_pctrl_find_group_by_pin(pctl,pin);
          printf("%ld\n", (*benchRet).pin);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pin = 255;
          int _len_pctl0 = 65025;
          struct mtk_pinctrl * pctl = (struct mtk_pinctrl *) malloc(_len_pctl0*sizeof(struct mtk_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mtk_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mtk_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
            pctl[_i0].groups->pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mtk_pinctrl_group * benchRet = mtk_pctrl_find_group_by_pin(pctl,pin);
          printf("%ld\n", (*benchRet).pin);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pin = 10;
          int _len_pctl0 = 100;
          struct mtk_pinctrl * pctl = (struct mtk_pinctrl *) malloc(_len_pctl0*sizeof(struct mtk_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mtk_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mtk_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
            pctl[_i0].groups->pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mtk_pinctrl_group * benchRet = mtk_pctrl_find_group_by_pin(pctl,pin);
          printf("%ld\n", (*benchRet).pin);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].groups);
          }
          free(pctl);
        
        break;
    }
    // linked
    case 3:
    {
          long pin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl0 = 1;
          struct mtk_pinctrl * pctl = (struct mtk_pinctrl *) malloc(_len_pctl0*sizeof(struct mtk_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
            pctl[_i0].ngroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__groups0 = 1;
          pctl[_i0].groups = (struct mtk_pinctrl_group *) malloc(_len_pctl__i0__groups0*sizeof(struct mtk_pinctrl_group));
          for(int _j0 = 0; _j0 < _len_pctl__i0__groups0; _j0++) {
            pctl[_i0].groups->pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mtk_pinctrl_group * benchRet = mtk_pctrl_find_group_by_pin(pctl,pin);
          printf("%ld\n", (*benchRet).pin);
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

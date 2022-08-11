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
struct TYPE_2__ {struct ff_condition_effect* condition; } ;
struct ff_effect {TYPE_1__ u; } ;
struct ff_condition_effect {scalar_t__ center; scalar_t__ right_coeff; scalar_t__ left_coeff; scalar_t__ right_saturation; scalar_t__ left_saturation; scalar_t__ deadband; } ;

/* Variables and functions */

__attribute__((used)) static int pidff_needs_set_condition(struct ff_effect *effect,
				     struct ff_effect *old)
{
	int i;
	int ret = 0;

	for (i = 0; i < 2; i++) {
		struct ff_condition_effect *cond = &effect->u.condition[i];
		struct ff_condition_effect *old_cond = &old->u.condition[i];

		ret |= cond->center != old_cond->center ||
		       cond->right_coeff != old_cond->right_coeff ||
		       cond->left_coeff != old_cond->left_coeff ||
		       cond->right_saturation != old_cond->right_saturation ||
		       cond->left_saturation != old_cond->left_saturation ||
		       cond->deadband != old_cond->deadband;
	}

	return ret;
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
          int _len_effect0 = 1;
          struct ff_effect * effect = (struct ff_effect *) malloc(_len_effect0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_effect0; _i0++) {
              int _len_effect__i0__u_condition0 = 1;
          effect[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_effect__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_effect__i0__u_condition0; _j0++) {
            effect[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old0 = 1;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
              int _len_old__i0__u_condition0 = 1;
          old[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_old__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_old__i0__u_condition0; _j0++) {
            old[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pidff_needs_set_condition(effect,old);
          printf("%d\n", benchRet); 
          free(effect);
          free(old);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_effect0 = 65025;
          struct ff_effect * effect = (struct ff_effect *) malloc(_len_effect0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_effect0; _i0++) {
              int _len_effect__i0__u_condition0 = 1;
          effect[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_effect__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_effect__i0__u_condition0; _j0++) {
            effect[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old0 = 65025;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
              int _len_old__i0__u_condition0 = 1;
          old[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_old__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_old__i0__u_condition0; _j0++) {
            old[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pidff_needs_set_condition(effect,old);
          printf("%d\n", benchRet); 
          free(effect);
          free(old);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_effect0 = 100;
          struct ff_effect * effect = (struct ff_effect *) malloc(_len_effect0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_effect0; _i0++) {
              int _len_effect__i0__u_condition0 = 1;
          effect[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_effect__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_effect__i0__u_condition0; _j0++) {
            effect[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        effect[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_old0 = 100;
          struct ff_effect * old = (struct ff_effect *) malloc(_len_old0*sizeof(struct ff_effect));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
              int _len_old__i0__u_condition0 = 1;
          old[_i0].u.condition = (struct ff_condition_effect *) malloc(_len_old__i0__u_condition0*sizeof(struct ff_condition_effect));
          for(int _j0 = 0; _j0 < _len_old__i0__u_condition0; _j0++) {
            old[_i0].u.condition->center = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_coeff = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->right_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->left_saturation = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].u.condition->deadband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pidff_needs_set_condition(effect,old);
          printf("%d\n", benchRet); 
          free(effect);
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

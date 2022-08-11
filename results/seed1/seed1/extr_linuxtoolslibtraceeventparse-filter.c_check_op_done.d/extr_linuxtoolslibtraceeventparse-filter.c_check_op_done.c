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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/ * right; } ;
struct TYPE_5__ {int /*<<< orphan*/ * right; } ;
struct TYPE_4__ {int /*<<< orphan*/ * right; } ;
struct filter_arg {int type; TYPE_3__ num; TYPE_2__ op; TYPE_1__ exp; } ;

/* Variables and functions */
#define  FILTER_ARG_BOOLEAN 132 
#define  FILTER_ARG_EXP 131 
#define  FILTER_ARG_NUM 130 
#define  FILTER_ARG_OP 129 
#define  FILTER_ARG_STR 128 

__attribute__((used)) static int check_op_done(struct filter_arg *arg)
{
	switch (arg->type) {
	case FILTER_ARG_EXP:
		return arg->exp.right != NULL;

	case FILTER_ARG_OP:
		return arg->op.right != NULL;

	case FILTER_ARG_NUM:
		return arg->num.right != NULL;

	case FILTER_ARG_STR:
		/* A string conversion is always done */
		return 1;

	case FILTER_ARG_BOOLEAN:
		/* field not found, is ok */
		return 1;

	default:
		return 0;
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
          int _len_arg0 = 1;
          struct filter_arg * arg = (struct filter_arg *) malloc(_len_arg0*sizeof(struct filter_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__num_right0 = 1;
          arg[_i0].num.right = (int *) malloc(_len_arg__i0__num_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__num_right0; _j0++) {
            arg[_i0].num.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__op_right0 = 1;
          arg[_i0].op.right = (int *) malloc(_len_arg__i0__op_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__op_right0; _j0++) {
            arg[_i0].op.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__exp_right0 = 1;
          arg[_i0].exp.right = (int *) malloc(_len_arg__i0__exp_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__exp_right0; _j0++) {
            arg[_i0].exp.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_op_done(arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_arg0 = 65025;
          struct filter_arg * arg = (struct filter_arg *) malloc(_len_arg0*sizeof(struct filter_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__num_right0 = 1;
          arg[_i0].num.right = (int *) malloc(_len_arg__i0__num_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__num_right0; _j0++) {
            arg[_i0].num.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__op_right0 = 1;
          arg[_i0].op.right = (int *) malloc(_len_arg__i0__op_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__op_right0; _j0++) {
            arg[_i0].op.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__exp_right0 = 1;
          arg[_i0].exp.right = (int *) malloc(_len_arg__i0__exp_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__exp_right0; _j0++) {
            arg[_i0].exp.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_op_done(arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_arg0 = 100;
          struct filter_arg * arg = (struct filter_arg *) malloc(_len_arg0*sizeof(struct filter_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__num_right0 = 1;
          arg[_i0].num.right = (int *) malloc(_len_arg__i0__num_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__num_right0; _j0++) {
            arg[_i0].num.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__op_right0 = 1;
          arg[_i0].op.right = (int *) malloc(_len_arg__i0__op_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__op_right0; _j0++) {
            arg[_i0].op.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg__i0__exp_right0 = 1;
          arg[_i0].exp.right = (int *) malloc(_len_arg__i0__exp_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_arg__i0__exp_right0; _j0++) {
            arg[_i0].exp.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_op_done(arg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

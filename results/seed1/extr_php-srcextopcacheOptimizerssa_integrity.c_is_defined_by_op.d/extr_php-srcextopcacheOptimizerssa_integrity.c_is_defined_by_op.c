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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int op1_def; int op2_def; int result_def; } ;
typedef  TYPE_1__ zend_ssa_op ;
struct TYPE_5__ {TYPE_1__* ops; } ;
typedef  TYPE_2__ zend_ssa ;
typedef  int zend_bool ;

/* Variables and functions */

__attribute__((used)) static inline zend_bool is_defined_by_op(zend_ssa *ssa, int op, int check) {
	zend_ssa_op *ssa_op = &ssa->ops[op];
	return (ssa_op->op1_def == check)
		|| (ssa_op->op2_def == check)
		|| (ssa_op->result_def == check);
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
          int op = 100;
          int check = 100;
          int _len_ssa0 = 1;
          struct TYPE_5__ * ssa = (struct TYPE_5__ *) malloc(_len_ssa0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ssa0; _i0++) {
              int _len_ssa__i0__ops0 = 1;
          ssa[_i0].ops = (struct TYPE_4__ *) malloc(_len_ssa__i0__ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ssa__i0__ops0; _j0++) {
            ssa[_i0].ops->op1_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->op2_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_defined_by_op(ssa,op,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ssa0; _aux++) {
          free(ssa[_aux].ops);
          }
          free(ssa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int op = 255;
          int check = 255;
          int _len_ssa0 = 65025;
          struct TYPE_5__ * ssa = (struct TYPE_5__ *) malloc(_len_ssa0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ssa0; _i0++) {
              int _len_ssa__i0__ops0 = 1;
          ssa[_i0].ops = (struct TYPE_4__ *) malloc(_len_ssa__i0__ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ssa__i0__ops0; _j0++) {
            ssa[_i0].ops->op1_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->op2_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_defined_by_op(ssa,op,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ssa0; _aux++) {
          free(ssa[_aux].ops);
          }
          free(ssa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int op = 10;
          int check = 10;
          int _len_ssa0 = 100;
          struct TYPE_5__ * ssa = (struct TYPE_5__ *) malloc(_len_ssa0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ssa0; _i0++) {
              int _len_ssa__i0__ops0 = 1;
          ssa[_i0].ops = (struct TYPE_4__ *) malloc(_len_ssa__i0__ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ssa__i0__ops0; _j0++) {
            ssa[_i0].ops->op1_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->op2_def = ((-2 * (next_i()%2)) + 1) * next_i();
        ssa[_i0].ops->result_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_defined_by_op(ssa,op,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ssa0; _aux++) {
          free(ssa[_aux].ops);
          }
          free(ssa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

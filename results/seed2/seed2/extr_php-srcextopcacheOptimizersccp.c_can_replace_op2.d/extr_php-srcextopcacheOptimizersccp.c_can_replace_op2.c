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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  zend_ssa_op ;
typedef  int /*<<< orphan*/  zend_op_array ;
struct TYPE_3__ {int opcode; } ;
typedef  TYPE_1__ zend_op ;
typedef  int zend_bool ;

/* Variables and functions */
#define  ZEND_BIND_LEXICAL 133 
#define  ZEND_DECLARE_ANON_INHERITED_CLASS 132 
#define  ZEND_DECLARE_INHERITED_CLASS 131 
#define  ZEND_DECLARE_INHERITED_CLASS_DELAYED 130 
#define  ZEND_FE_FETCH_R 129 
#define  ZEND_FE_FETCH_RW 128 

__attribute__((used)) static zend_bool can_replace_op2(
		const zend_op_array *op_array, zend_op *opline, zend_ssa_op *ssa_op) {
	switch (opline->opcode) {
		/* Do not accept CONST */
		case ZEND_DECLARE_INHERITED_CLASS:
		case ZEND_DECLARE_INHERITED_CLASS_DELAYED:
		case ZEND_DECLARE_ANON_INHERITED_CLASS:
		case ZEND_BIND_LEXICAL:
		case ZEND_FE_FETCH_R:
		case ZEND_FE_FETCH_RW:
			return 0;
	}
	return 1;
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
          int _len_op_array0 = 1;
          const int * op_array = (const int *) malloc(_len_op_array0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opline0 = 1;
          struct TYPE_3__ * opline = (struct TYPE_3__ *) malloc(_len_opline0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssa_op0 = 1;
          int * ssa_op = (int *) malloc(_len_ssa_op0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ssa_op0; _i0++) {
            ssa_op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_replace_op2(op_array,opline,ssa_op);
          printf("%d\n", benchRet); 
          free(op_array);
          free(opline);
          free(ssa_op);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_op_array0 = 65025;
          const int * op_array = (const int *) malloc(_len_op_array0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opline0 = 65025;
          struct TYPE_3__ * opline = (struct TYPE_3__ *) malloc(_len_opline0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssa_op0 = 65025;
          int * ssa_op = (int *) malloc(_len_ssa_op0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ssa_op0; _i0++) {
            ssa_op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_replace_op2(op_array,opline,ssa_op);
          printf("%d\n", benchRet); 
          free(op_array);
          free(opline);
          free(ssa_op);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_op_array0 = 100;
          const int * op_array = (const int *) malloc(_len_op_array0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opline0 = 100;
          struct TYPE_3__ * opline = (struct TYPE_3__ *) malloc(_len_opline0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_opline0; _i0++) {
            opline[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ssa_op0 = 100;
          int * ssa_op = (int *) malloc(_len_ssa_op0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ssa_op0; _i0++) {
            ssa_op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_replace_op2(op_array,opline,ssa_op);
          printf("%d\n", benchRet); 
          free(op_array);
          free(opline);
          free(ssa_op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

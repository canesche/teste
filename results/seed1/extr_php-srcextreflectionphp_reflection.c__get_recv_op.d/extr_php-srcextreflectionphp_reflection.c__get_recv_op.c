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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int last; TYPE_3__* opcodes; } ;
typedef  TYPE_2__ zend_op_array ;
struct TYPE_6__ {scalar_t__ num; } ;
struct TYPE_8__ {scalar_t__ opcode; TYPE_1__ op1; } ;
typedef  TYPE_3__ zend_op ;
typedef  scalar_t__ uint32_t ;

/* Variables and functions */
 scalar_t__ ZEND_RECV ; 
 scalar_t__ ZEND_RECV_INIT ; 
 scalar_t__ ZEND_RECV_VARIADIC ; 

__attribute__((used)) static zend_op* _get_recv_op(zend_op_array *op_array, uint32_t offset)
{
	zend_op *op = op_array->opcodes;
	zend_op *end = op + op_array->last;

	++offset;
	while (op < end) {
		if ((op->opcode == ZEND_RECV || op->opcode == ZEND_RECV_INIT
		    || op->opcode == ZEND_RECV_VARIADIC) && op->op1.num == offset)
		{
			return op;
		}
		++op;
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
          long offset = 100;
          int _len_op_array0 = 1;
          struct TYPE_7__ * op_array = (struct TYPE_7__ *) malloc(_len_op_array0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_8__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
            op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        op_array[_i0].opcodes->op1.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_8__ * benchRet = _get_recv_op(op_array,offset);
          printf("%ld\n", (*benchRet).opcode);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }
    // big-arr
    case 1:
    {
          long offset = 255;
          int _len_op_array0 = 65025;
          struct TYPE_7__ * op_array = (struct TYPE_7__ *) malloc(_len_op_array0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_8__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
            op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        op_array[_i0].opcodes->op1.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_8__ * benchRet = _get_recv_op(op_array,offset);
          printf("%ld\n", (*benchRet).opcode);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long offset = 10;
          int _len_op_array0 = 100;
          struct TYPE_7__ * op_array = (struct TYPE_7__ *) malloc(_len_op_array0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_op_array0; _i0++) {
            op_array[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_op_array__i0__opcodes0 = 1;
          op_array[_i0].opcodes = (struct TYPE_8__ *) malloc(_len_op_array__i0__opcodes0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_op_array__i0__opcodes0; _j0++) {
            op_array[_i0].opcodes->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        op_array[_i0].opcodes->op1.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_8__ * benchRet = _get_recv_op(op_array,offset);
          printf("%ld\n", (*benchRet).opcode);
          for(int _aux = 0; _aux < _len_op_array0; _aux++) {
          free(op_array[_aux].opcodes);
          }
          free(op_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* operands; } ;
typedef  TYPE_3__ aarch64_inst ;
struct TYPE_5__ {scalar_t__ regno; } ;
struct TYPE_6__ {int /*<<< orphan*/  type; TYPE_1__ reg; } ;

/* Variables and functions */
 int /*<<< orphan*/  AARCH64_OPND_NIL ; 

__attribute__((used)) static int
convert_orr_to_mov (aarch64_inst *inst)
{
  /* MOV <Vd>.<T>, <Vn>.<T>
     is equivalent to:
     ORR <Vd>.<T>, <Vn>.<T>, <Vn>.<T>.  */
  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno)
    {
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
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
          int _len_inst0 = 1;
          struct TYPE_7__ * inst = (struct TYPE_7__ *) malloc(_len_inst0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
              int _len_inst__i0__operands0 = 1;
          inst[_i0].operands = (struct TYPE_6__ *) malloc(_len_inst__i0__operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inst__i0__operands0; _j0++) {
            inst[_i0].operands->type = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].operands->reg.regno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = convert_orr_to_mov(inst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].operands);
          }
          free(inst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inst0 = 65025;
          struct TYPE_7__ * inst = (struct TYPE_7__ *) malloc(_len_inst0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
              int _len_inst__i0__operands0 = 1;
          inst[_i0].operands = (struct TYPE_6__ *) malloc(_len_inst__i0__operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inst__i0__operands0; _j0++) {
            inst[_i0].operands->type = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].operands->reg.regno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = convert_orr_to_mov(inst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].operands);
          }
          free(inst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inst0 = 100;
          struct TYPE_7__ * inst = (struct TYPE_7__ *) malloc(_len_inst0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
              int _len_inst__i0__operands0 = 1;
          inst[_i0].operands = (struct TYPE_6__ *) malloc(_len_inst__i0__operands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inst__i0__operands0; _j0++) {
            inst[_i0].operands->type = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].operands->reg.regno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = convert_orr_to_mov(inst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].operands);
          }
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

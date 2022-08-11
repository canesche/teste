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
typedef  enum aarch64_opnd { ____Placeholder_aarch64_opnd } aarch64_opnd ;

/* Variables and functions */
 int AARCH64_MAX_OPND_NUM ; 
 int const AARCH64_OPND_NIL ; 

int
aarch64_operand_index (const enum aarch64_opnd *operands, enum aarch64_opnd operand)
{
  int i;
  for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
    if (operands[i] == operand)
      return i;
    else if (operands[i] == AARCH64_OPND_NIL)
      break;
  return -1;
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
          enum aarch64_opnd operand = 0;
          int _len_operands0 = 1;
          const enum aarch64_opnd * operands = (const enum aarch64_opnd *) malloc(_len_operands0*sizeof(const enum aarch64_opnd));
          for(int _i0 = 0; _i0 < _len_operands0; _i0++) {
            operands[_i0] = 0;
          }
          int benchRet = aarch64_operand_index(operands,operand);
          printf("%d\n", benchRet); 
          free(operands);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum aarch64_opnd operand = 0;
          int _len_operands0 = 65025;
          const enum aarch64_opnd * operands = (const enum aarch64_opnd *) malloc(_len_operands0*sizeof(const enum aarch64_opnd));
          for(int _i0 = 0; _i0 < _len_operands0; _i0++) {
            operands[_i0] = 0;
          }
          int benchRet = aarch64_operand_index(operands,operand);
          printf("%d\n", benchRet); 
          free(operands);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum aarch64_opnd operand = 0;
          int _len_operands0 = 100;
          const enum aarch64_opnd * operands = (const enum aarch64_opnd *) malloc(_len_operands0*sizeof(const enum aarch64_opnd));
          for(int _i0 = 0; _i0 < _len_operands0; _i0++) {
            operands[_i0] = 0;
          }
          int benchRet = aarch64_operand_index(operands,operand);
          printf("%d\n", benchRet); 
          free(operands);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

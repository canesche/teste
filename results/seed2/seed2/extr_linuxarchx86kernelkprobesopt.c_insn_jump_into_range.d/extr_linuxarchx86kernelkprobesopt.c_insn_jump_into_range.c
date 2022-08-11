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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long value; } ;
struct TYPE_4__ {int* bytes; } ;
struct insn {TYPE_1__ immediate; scalar_t__ next_byte; TYPE_2__ opcode; } ;

/* Variables and functions */

__attribute__((used)) static int insn_jump_into_range(struct insn *insn, unsigned long start, int len)
{
	unsigned long target = 0;

	switch (insn->opcode.bytes[0]) {
	case 0xe0:	/* loopne */
	case 0xe1:	/* loope */
	case 0xe2:	/* loop */
	case 0xe3:	/* jcxz */
	case 0xe9:	/* near relative jump */
	case 0xeb:	/* short relative jump */
		break;
	case 0x0f:
		if ((insn->opcode.bytes[1] & 0xf0) == 0x80) /* jcc near */
			break;
		return 0;
	default:
		if ((insn->opcode.bytes[0] & 0xf0) == 0x70) /* jcc short */
			break;
		return 0;
	}
	target = (unsigned long)insn->next_byte + insn->immediate.value;

	return (start <= target && target <= start + len);
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
          unsigned long start = 100;
          int len = 100;
          int _len_insn0 = 1;
          struct insn * insn = (struct insn *) malloc(_len_insn0*sizeof(struct insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].immediate.value = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].next_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_insn__i0__opcode_bytes0 = 1;
          insn[_i0].opcode.bytes = (int *) malloc(_len_insn__i0__opcode_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_insn__i0__opcode_bytes0; _j0++) {
            insn[_i0].opcode.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = insn_jump_into_range(insn,start,len);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long start = 255;
          int len = 255;
          int _len_insn0 = 65025;
          struct insn * insn = (struct insn *) malloc(_len_insn0*sizeof(struct insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].immediate.value = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].next_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_insn__i0__opcode_bytes0 = 1;
          insn[_i0].opcode.bytes = (int *) malloc(_len_insn__i0__opcode_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_insn__i0__opcode_bytes0; _j0++) {
            insn[_i0].opcode.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = insn_jump_into_range(insn,start,len);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long start = 10;
          int len = 10;
          int _len_insn0 = 100;
          struct insn * insn = (struct insn *) malloc(_len_insn0*sizeof(struct insn));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].immediate.value = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].next_byte = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_insn__i0__opcode_bytes0 = 1;
          insn[_i0].opcode.bytes = (int *) malloc(_len_insn__i0__opcode_bytes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_insn__i0__opcode_bytes0; _j0++) {
            insn[_i0].opcode.bytes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = insn_jump_into_range(insn,start,len);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct vie {size_t reg; int /*<<< orphan*/  rex_present; } ;
typedef  enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;

/* Variables and functions */
 int* gpr_map ; 

__attribute__((used)) static void
vie_calc_bytereg(struct vie *vie, enum vm_reg_name *reg, int *lhbr)
{
	*lhbr = 0;
	*reg = gpr_map[vie->reg];

	/*
	 * 64-bit mode imposes limitations on accessing legacy high byte
	 * registers (lhbr).
	 *
	 * The legacy high-byte registers cannot be addressed if the REX
	 * prefix is present. In this case the values 4, 5, 6 and 7 of the
	 * 'ModRM:reg' field address %spl, %bpl, %sil and %dil respectively.
	 *
	 * If the REX prefix is not present then the values 4, 5, 6 and 7
	 * of the 'ModRM:reg' field address the legacy high-byte registers,
	 * %ah, %ch, %dh and %bh respectively.
	 */
	if (!vie->rex_present) {
		if (vie->reg & 0x4) {
			*lhbr = 1;
			*reg = gpr_map[vie->reg & 0x3];
		}
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
          int _len_vie0 = 1;
          struct vie * vie = (struct vie *) malloc(_len_vie0*sizeof(struct vie));
          for(int _i0 = 0; _i0 < _len_vie0; _i0++) {
            vie[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        vie[_i0].rex_present = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          enum vm_reg_name * reg = (enum vm_reg_name *) malloc(_len_reg0*sizeof(enum vm_reg_name));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = 0;
          }
          int _len_lhbr0 = 1;
          int * lhbr = (int *) malloc(_len_lhbr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lhbr0; _i0++) {
            lhbr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vie_calc_bytereg(vie,reg,lhbr);
          free(vie);
          free(reg);
          free(lhbr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vie0 = 65025;
          struct vie * vie = (struct vie *) malloc(_len_vie0*sizeof(struct vie));
          for(int _i0 = 0; _i0 < _len_vie0; _i0++) {
            vie[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        vie[_i0].rex_present = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 65025;
          enum vm_reg_name * reg = (enum vm_reg_name *) malloc(_len_reg0*sizeof(enum vm_reg_name));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = 0;
          }
          int _len_lhbr0 = 65025;
          int * lhbr = (int *) malloc(_len_lhbr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lhbr0; _i0++) {
            lhbr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vie_calc_bytereg(vie,reg,lhbr);
          free(vie);
          free(reg);
          free(lhbr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vie0 = 100;
          struct vie * vie = (struct vie *) malloc(_len_vie0*sizeof(struct vie));
          for(int _i0 = 0; _i0 < _len_vie0; _i0++) {
            vie[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        vie[_i0].rex_present = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 100;
          enum vm_reg_name * reg = (enum vm_reg_name *) malloc(_len_reg0*sizeof(enum vm_reg_name));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = 0;
          }
          int _len_lhbr0 = 100;
          int * lhbr = (int *) malloc(_len_lhbr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lhbr0; _i0++) {
            lhbr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vie_calc_bytereg(vie,reg,lhbr);
          free(vie);
          free(reg);
          free(lhbr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ u8 ;
struct reg_pair_t {scalar_t__ reg; scalar_t__ val; } ;

/* Variables and functions */

__attribute__((used)) static void set_reg_bits(struct reg_pair_t *reg_pair, u8 reg, u8 mask, u8 val)
{
	unsigned int i = 0;

	while (reg_pair[i].reg || reg_pair[i].val) {
		if (reg_pair[i].reg == reg) {
			reg_pair[i].val &= ~mask;
			reg_pair[i].val |= val;
		}
		i++;

	}
	return;
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
          long reg = 100;
          long mask = 100;
          long val = 100;
          int _len_reg_pair0 = 1;
          struct reg_pair_t * reg_pair = (struct reg_pair_t *) malloc(_len_reg_pair0*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair0; _i0++) {
            reg_pair[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_reg_bits(reg_pair,reg,mask,val);
          free(reg_pair);
        
        break;
    }
    // big-arr
    case 1:
    {
          long reg = 255;
          long mask = 255;
          long val = 255;
          int _len_reg_pair0 = 65025;
          struct reg_pair_t * reg_pair = (struct reg_pair_t *) malloc(_len_reg_pair0*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair0; _i0++) {
            reg_pair[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_reg_bits(reg_pair,reg,mask,val);
          free(reg_pair);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long reg = 10;
          long mask = 10;
          long val = 10;
          int _len_reg_pair0 = 100;
          struct reg_pair_t * reg_pair = (struct reg_pair_t *) malloc(_len_reg_pair0*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair0; _i0++) {
            reg_pair[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_reg_bits(reg_pair,reg,mask,val);
          free(reg_pair);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct reg_pair_t {scalar_t__ reg; scalar_t__ val; } ;

/* Variables and functions */

__attribute__((used)) static void copy_reg_bits(struct reg_pair_t *reg_pair1,
			  struct reg_pair_t *reg_pair2)
{
	unsigned int i, j;

	i = j = 0;

	while (reg_pair1[i].reg || reg_pair1[i].val) {
		while (reg_pair2[j].reg || reg_pair2[j].val) {
			if (reg_pair1[i].reg != reg_pair2[j].reg) {
				j++;
				continue;
			}
			reg_pair2[j].val = reg_pair1[i].val;
			break;
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
          int _len_reg_pair10 = 1;
          struct reg_pair_t * reg_pair1 = (struct reg_pair_t *) malloc(_len_reg_pair10*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair10; _i0++) {
            reg_pair1[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair1[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg_pair20 = 1;
          struct reg_pair_t * reg_pair2 = (struct reg_pair_t *) malloc(_len_reg_pair20*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair20; _i0++) {
            reg_pair2[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair2[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg_bits(reg_pair1,reg_pair2);
          free(reg_pair1);
          free(reg_pair2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_reg_pair10 = 65025;
          struct reg_pair_t * reg_pair1 = (struct reg_pair_t *) malloc(_len_reg_pair10*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair10; _i0++) {
            reg_pair1[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair1[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg_pair20 = 65025;
          struct reg_pair_t * reg_pair2 = (struct reg_pair_t *) malloc(_len_reg_pair20*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair20; _i0++) {
            reg_pair2[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair2[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg_bits(reg_pair1,reg_pair2);
          free(reg_pair1);
          free(reg_pair2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_reg_pair10 = 100;
          struct reg_pair_t * reg_pair1 = (struct reg_pair_t *) malloc(_len_reg_pair10*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair10; _i0++) {
            reg_pair1[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair1[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg_pair20 = 100;
          struct reg_pair_t * reg_pair2 = (struct reg_pair_t *) malloc(_len_reg_pair20*sizeof(struct reg_pair_t));
          for(int _i0 = 0; _i0 < _len_reg_pair20; _i0++) {
            reg_pair2[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        reg_pair2[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_reg_bits(reg_pair1,reg_pair2);
          free(reg_pair1);
          free(reg_pair2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

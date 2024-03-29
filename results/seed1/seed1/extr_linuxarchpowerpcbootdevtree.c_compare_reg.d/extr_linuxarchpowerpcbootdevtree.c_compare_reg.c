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
typedef  scalar_t__ u32 ;

/* Variables and functions */
 int MAX_ADDR_CELLS ; 

__attribute__((used)) static int compare_reg(u32 *reg, u32 *range, u32 *rangesize)
{
	int i;
	u32 end;

	for (i = 0; i < MAX_ADDR_CELLS; i++) {
		if (reg[i] < range[i])
			return 0;
		if (reg[i] > range[i])
			break;
	}

	for (i = 0; i < MAX_ADDR_CELLS; i++) {
		end = range[i] + rangesize[i];

		if (reg[i] < end)
			break;
		if (reg[i] > end)
			return 0;
	}

	return reg[i] != end;
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
          int _len_reg0 = 1;
          long * reg = (long *) malloc(_len_reg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 1;
          long * range = (long *) malloc(_len_range0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rangesize0 = 1;
          long * rangesize = (long *) malloc(_len_rangesize0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rangesize0; _i0++) {
            rangesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_reg(reg,range,rangesize);
          printf("%d\n", benchRet); 
          free(reg);
          free(range);
          free(rangesize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_reg0 = 65025;
          long * reg = (long *) malloc(_len_reg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 65025;
          long * range = (long *) malloc(_len_range0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rangesize0 = 65025;
          long * rangesize = (long *) malloc(_len_rangesize0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rangesize0; _i0++) {
            rangesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_reg(reg,range,rangesize);
          printf("%d\n", benchRet); 
          free(reg);
          free(range);
          free(rangesize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_reg0 = 100;
          long * reg = (long *) malloc(_len_reg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 100;
          long * range = (long *) malloc(_len_range0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rangesize0 = 100;
          long * rangesize = (long *) malloc(_len_rangesize0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rangesize0; _i0++) {
            rangesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compare_reg(reg,range,rangesize);
          printf("%d\n", benchRet); 
          free(reg);
          free(range);
          free(rangesize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

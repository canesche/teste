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
struct pmic_table {int address; int reg; int bit; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int pmic_get_reg_bit(int address, struct pmic_table *table,
			    int count, int *reg, int *bit)
{
	int i;

	for (i = 0; i < count; i++) {
		if (table[i].address == address) {
			*reg = table[i].reg;
			if (bit)
				*bit = table[i].bit;
			return 0;
		}
	}
	return -ENOENT;
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
          int address = 100;
          int count = 100;
          int _len_table0 = 1;
          struct pmic_table * table = (struct pmic_table *) malloc(_len_table0*sizeof(struct pmic_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 1;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmic_get_reg_bit(address,table,count,reg,bit);
          printf("%d\n", benchRet); 
          free(table);
          free(reg);
          free(bit);
        
        break;
    }
    // big-arr
    case 1:
    {
          int address = 255;
          int count = 255;
          int _len_table0 = 65025;
          struct pmic_table * table = (struct pmic_table *) malloc(_len_table0*sizeof(struct pmic_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 65025;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 65025;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmic_get_reg_bit(address,table,count,reg,bit);
          printf("%d\n", benchRet); 
          free(table);
          free(reg);
          free(bit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int address = 10;
          int count = 10;
          int _len_table0 = 100;
          struct pmic_table * table = (struct pmic_table *) malloc(_len_table0*sizeof(struct pmic_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 100;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 100;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmic_get_reg_bit(address,table,count,reg,bit);
          printf("%d\n", benchRet); 
          free(table);
          free(reg);
          free(bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

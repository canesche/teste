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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static u8 *to_sas_gpio_gp_bit(unsigned int od, u8 *data, u8 index, u8 count, u8 *bit)
{
	unsigned int reg;
	u8 byte;

	/* gp registers start at index 1 */
	if (index == 0)
		return NULL;

	index--; /* make index 0-based */
	if (od < index * 32)
		return NULL;

	od -= index * 32;
	reg = od >> 5;

	if (reg >= count)
		return NULL;

	od &= (1 << 5) - 1;
	byte = 3 - (od >> 3);
	*bit = od & ((1 << 3) - 1);

	return &data[reg * 4 + byte];
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
          unsigned int od = 100;
          int index = 100;
          int count = 100;
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 1;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = to_sas_gpio_gp_bit(od,data,index,count,bit);
          printf("%d\n", (*benchRet)); 
          free(data);
          free(bit);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int od = 255;
          int index = 255;
          int count = 255;
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 65025;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = to_sas_gpio_gp_bit(od,data,index,count,bit);
          printf("%d\n", (*benchRet)); 
          free(data);
          free(bit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int od = 10;
          int index = 10;
          int count = 10;
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 100;
          int * bit = (int *) malloc(_len_bit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = to_sas_gpio_gp_bit(od,data,index,count,bit);
          printf("%d\n", (*benchRet)); 
          free(data);
          free(bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  int u32 ;
typedef  int u16 ;
struct TYPE_2__ {int mta_reg_count; int mc_filter_type; } ;
struct e1000_hw {TYPE_1__ mac; } ;

/* Variables and functions */

__attribute__((used)) static u32 e1000_hash_mc_addr(struct e1000_hw *hw, u8 *mc_addr)
{
	u32 hash_value, hash_mask;
	u8 bit_shift = 0;

	/* Register count multiplied by bits per register */
	hash_mask = (hw->mac.mta_reg_count * 32) - 1;

	/* For a mc_filter_type of 0, bit_shift is the number of left-shifts
	 * where 0xFF would still fall within the hash mask.
	 */
	while (hash_mask >> bit_shift != 0xFF)
		bit_shift++;

	/* The portion of the address that is used for the hash table
	 * is determined by the mc_filter_type setting.
	 * The algorithm is such that there is a total of 8 bits of shifting.
	 * The bit_shift for a mc_filter_type of 0 represents the number of
	 * left-shifts where the MSB of mc_addr[5] would still fall within
	 * the hash_mask.  Case 0 does this exactly.  Since there are a total
	 * of 8 bits of shifting, then mc_addr[4] will shift right the
	 * remaining number of bits. Thus 8 - bit_shift.  The rest of the
	 * cases are a variation of this algorithm...essentially raising the
	 * number of bits to shift mc_addr[5] left, while still keeping the
	 * 8-bit shifting total.
	 *
	 * For example, given the following Destination MAC Address and an
	 * mta register count of 128 (thus a 4096-bit vector and 0xFFF mask),
	 * we can see that the bit_shift for case 0 is 4.  These are the hash
	 * values resulting from each mc_filter_type...
	 * [0] [1] [2] [3] [4] [5]
	 * 01  AA  00  12  34  56
	 * LSB           MSB
	 *
	 * case 0: hash_value = ((0x34 >> 4) | (0x56 << 4)) & 0xFFF = 0x563
	 * case 1: hash_value = ((0x34 >> 3) | (0x56 << 5)) & 0xFFF = 0xAC6
	 * case 2: hash_value = ((0x34 >> 2) | (0x56 << 6)) & 0xFFF = 0x163
	 * case 3: hash_value = ((0x34 >> 0) | (0x56 << 8)) & 0xFFF = 0x634
	 */
	switch (hw->mac.mc_filter_type) {
	default:
	case 0:
		break;
	case 1:
		bit_shift += 1;
		break;
	case 2:
		bit_shift += 2;
		break;
	case 3:
		bit_shift += 4;
		break;
	}

	hash_value = hash_mask & (((mc_addr[4] >> (8 - bit_shift)) |
				   (((u16)mc_addr[5]) << bit_shift)));

	return hash_value;
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
          int _len_hw0 = 1;
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mac.mta_reg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.mc_filter_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mc_addr0 = 1;
          int * mc_addr = (int *) malloc(_len_mc_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mc_addr0; _i0++) {
            mc_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_hash_mc_addr(hw,mc_addr);
          printf("%d\n", benchRet); 
          free(hw);
          free(mc_addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mac.mta_reg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.mc_filter_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mc_addr0 = 65025;
          int * mc_addr = (int *) malloc(_len_mc_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mc_addr0; _i0++) {
            mc_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_hash_mc_addr(hw,mc_addr);
          printf("%d\n", benchRet); 
          free(hw);
          free(mc_addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mac.mta_reg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.mc_filter_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mc_addr0 = 100;
          int * mc_addr = (int *) malloc(_len_mc_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mc_addr0; _i0++) {
            mc_addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_hash_mc_addr(hw,mc_addr);
          printf("%d\n", benchRet); 
          free(hw);
          free(mc_addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

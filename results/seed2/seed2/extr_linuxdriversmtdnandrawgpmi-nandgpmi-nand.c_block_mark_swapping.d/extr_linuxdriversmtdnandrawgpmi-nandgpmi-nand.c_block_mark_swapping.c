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
struct bch_geometry {unsigned int block_mark_bit_offset; int block_mark_byte_offset; } ;
struct gpmi_nand_data {int /*<<< orphan*/  swap_block_mark; struct bch_geometry bch_geometry; } ;

/* Variables and functions */

__attribute__((used)) static void block_mark_swapping(struct gpmi_nand_data *this,
				void *payload, void *auxiliary)
{
	struct bch_geometry *nfc_geo = &this->bch_geometry;
	unsigned char *p;
	unsigned char *a;
	unsigned int  bit;
	unsigned char mask;
	unsigned char from_data;
	unsigned char from_oob;

	if (!this->swap_block_mark)
		return;

	/*
	 * If control arrives here, we're swapping. Make some convenience
	 * variables.
	 */
	bit = nfc_geo->block_mark_bit_offset;
	p   = payload + nfc_geo->block_mark_byte_offset;
	a   = auxiliary;

	/*
	 * Get the byte from the data area that overlays the block mark. Since
	 * the ECC engine applies its own view to the bits in the page, the
	 * physical block mark won't (in general) appear on a byte boundary in
	 * the data.
	 */
	from_data = (p[0] >> bit) | (p[1] << (8 - bit));

	/* Get the byte from the OOB. */
	from_oob = a[0];

	/* Swap them. */
	a[0] = from_data;

	mask = (0x1 << bit) - 1;
	p[0] = (p[0] & mask) | (from_oob << bit);

	mask = ~0 << bit;
	p[1] = (p[1] & mask) | (from_oob >> (8 - bit));
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
          int _len_this0 = 1;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].swap_block_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_bit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_byte_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * payload;
          void * auxiliary;
          block_mark_swapping(this,payload,auxiliary);
          free(this);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_this0 = 65025;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].swap_block_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_bit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_byte_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * payload;
          void * auxiliary;
          block_mark_swapping(this,payload,auxiliary);
          free(this);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_this0 = 100;
          struct gpmi_nand_data * this = (struct gpmi_nand_data *) malloc(_len_this0*sizeof(struct gpmi_nand_data));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].swap_block_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_bit_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].bch_geometry.block_mark_byte_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * payload;
          void * auxiliary;
          block_mark_swapping(this,payload,auxiliary);
          free(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

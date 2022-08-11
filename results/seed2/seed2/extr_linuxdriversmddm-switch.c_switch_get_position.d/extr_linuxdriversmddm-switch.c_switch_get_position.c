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
struct switch_ctx {unsigned long region_entries_per_slot_bits; int region_entries_per_slot; unsigned int region_table_entry_bits; } ;

/* Variables and functions */

__attribute__((used)) static void switch_get_position(struct switch_ctx *sctx, unsigned long region_nr,
				unsigned long *region_index, unsigned *bit)
{
	if (sctx->region_entries_per_slot_bits >= 0) {
		*region_index = region_nr >> sctx->region_entries_per_slot_bits;
		*bit = region_nr & (sctx->region_entries_per_slot - 1);
	} else {
		*region_index = region_nr / sctx->region_entries_per_slot;
		*bit = region_nr % sctx->region_entries_per_slot;
	}

	*bit *= sctx->region_table_entry_bits;
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
          unsigned long region_nr = 100;
          int _len_sctx0 = 1;
          struct switch_ctx * sctx = (struct switch_ctx *) malloc(_len_sctx0*sizeof(struct switch_ctx));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].region_entries_per_slot_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_entries_per_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_table_entry_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region_index0 = 1;
          unsigned long * region_index = (unsigned long *) malloc(_len_region_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_region_index0; _i0++) {
            region_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 1;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          switch_get_position(sctx,region_nr,region_index,bit);
          free(sctx);
          free(region_index);
          free(bit);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long region_nr = 255;
          int _len_sctx0 = 65025;
          struct switch_ctx * sctx = (struct switch_ctx *) malloc(_len_sctx0*sizeof(struct switch_ctx));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].region_entries_per_slot_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_entries_per_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_table_entry_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region_index0 = 65025;
          unsigned long * region_index = (unsigned long *) malloc(_len_region_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_region_index0; _i0++) {
            region_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 65025;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          switch_get_position(sctx,region_nr,region_index,bit);
          free(sctx);
          free(region_index);
          free(bit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long region_nr = 10;
          int _len_sctx0 = 100;
          struct switch_ctx * sctx = (struct switch_ctx *) malloc(_len_sctx0*sizeof(struct switch_ctx));
          for(int _i0 = 0; _i0 < _len_sctx0; _i0++) {
            sctx[_i0].region_entries_per_slot_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_entries_per_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        sctx[_i0].region_table_entry_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region_index0 = 100;
          unsigned long * region_index = (unsigned long *) malloc(_len_region_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_region_index0; _i0++) {
            region_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bit0 = 100;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          switch_get_position(sctx,region_nr,region_index,bit);
          free(sctx);
          free(region_index);
          free(bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

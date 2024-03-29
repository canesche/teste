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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
typedef  scalar_t__ ppnum_t ;
struct TYPE_3__ {scalar_t__ alloc_up; scalar_t__ alloc_down; } ;
typedef  TYPE_1__ pmap_memory_region_t ;
typedef  int /*<<< orphan*/  boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 int /*<<< orphan*/  avail_remaining ; 
 scalar_t__ lowest_lo ; 
 scalar_t__ max_ppnum ; 
 size_t pmap_last_reserved_range_index ; 
 TYPE_1__* pmap_memory_regions ; 
 int /*<<< orphan*/  pmap_reserved_pages_allocated ; 
 size_t* pmap_reserved_range_indices ; 
 scalar_t__ pmap_reserved_ranges ; 

boolean_t
pmap_next_page_reserved(ppnum_t *pn) {
	if (pmap_reserved_ranges) {
		uint32_t n;
		pmap_memory_region_t *region;
		for (n = 0; n < pmap_last_reserved_range_index; n++) {
			uint32_t reserved_index = pmap_reserved_range_indices[n];
			region = &pmap_memory_regions[reserved_index];
			if (region->alloc_up <= region->alloc_down) {
				*pn = region->alloc_up++;
				avail_remaining--;

				if (*pn > max_ppnum)
					max_ppnum = *pn;

				if (lowest_lo == 0 || *pn < lowest_lo)
					lowest_lo = *pn;

				pmap_reserved_pages_allocated++;
#if DEBUG
				if (region->alloc_up > region->alloc_down) {
					kprintf("Exhausted reserved range index: %u, base: 0x%x end: 0x%x, type: 0x%x, attribute: 0x%llx\n", reserved_index, region->base, region->end, region->type, region->attribute);
				}
#endif
				return TRUE;
			}
		}
	}
	return FALSE;
}


// ------------------------------------------------------------------------- //




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
          int _len_pn0 = 1;
          long * pn = (long *) malloc(_len_pn0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmap_next_page_reserved(pn);
          printf("%d\n", benchRet); 
          free(pn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pn0 = 65025;
          long * pn = (long *) malloc(_len_pn0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmap_next_page_reserved(pn);
          printf("%d\n", benchRet); 
          free(pn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pn0 = 100;
          long * pn = (long *) malloc(_len_pn0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pmap_next_page_reserved(pn);
          printf("%d\n", benchRet); 
          free(pn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

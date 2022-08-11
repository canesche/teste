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

/* Variables and functions */

__attribute__((used)) static void sh2a__flush_wback_region(void *start, int size)
{
#ifdef CONFIG_CACHE_WRITEBACK
	unsigned long v;
	unsigned long begin, end;
	unsigned long flags;
	int nr_ways;

	begin = (unsigned long)start & ~(L1_CACHE_BYTES-1);
	end = ((unsigned long)start + size + L1_CACHE_BYTES-1)
		& ~(L1_CACHE_BYTES-1);
	nr_ways = current_cpu_data.dcache.ways;

	local_irq_save(flags);
	jump_to_uncached();

	/* If there are too many pages then flush the entire cache */
	if (((end - begin) >> PAGE_SHIFT) >= MAX_OCACHE_PAGES) {
		begin = CACHE_OC_ADDRESS_ARRAY;
		end = begin + (nr_ways * current_cpu_data.dcache.way_size);

		for (v = begin; v < end; v += L1_CACHE_BYTES) {
			unsigned long data = __raw_readl(v);
			if (data & SH_CACHE_UPDATED)
				__raw_writel(data & ~SH_CACHE_UPDATED, v);
		}
	} else {
		int way;
		for (way = 0; way < nr_ways; way++) {
			for (v = begin; v < end; v += L1_CACHE_BYTES)
				sh2a_flush_oc_line(v, way);
		}
	}

	back_to_cached();
	local_irq_restore(flags);
#endif
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
          int size = 100;
          void * start;
          sh2a__flush_wback_region(start,size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          void * start;
          sh2a__flush_wback_region(start,size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          void * start;
          sh2a__flush_wback_region(start,size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

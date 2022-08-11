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
typedef  scalar_t__ u64 ;
struct e820_entry {int type; scalar_t__ addr; scalar_t__ size; } ;
typedef  enum e820_type { ____Placeholder_e820_type } e820_type ;
struct TYPE_2__ {int nr_entries; struct e820_entry* entries; } ;

/* Variables and functions */
 TYPE_1__* e820_table ; 

__attribute__((used)) static struct e820_entry *__e820__mapped_all(u64 start, u64 end,
					     enum e820_type type)
{
	int i;

	for (i = 0; i < e820_table->nr_entries; i++) {
		struct e820_entry *entry = &e820_table->entries[i];

		if (type && entry->type != type)
			continue;

		/* Is the region (part) in overlap with the current region? */
		if (entry->addr >= end || entry->addr + entry->size <= start)
			continue;

		/*
		 * If the region is at the beginning of <start,end> we move
		 * 'start' to the end of the region since it's ok until there
		 */
		if (entry->addr <= start)
			start = entry->addr + entry->size;

		/*
		 * If 'start' is now at or beyond 'end', we're done, full
		 * coverage of the desired range exists:
		 */
		if (start >= end)
			return entry;
	}

	return NULL;
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
          long start = 100;
          long end = 100;
          enum e820_type type = 0;
          struct e820_entry * benchRet = __e820__mapped_all(start,end,type);
          printf("%d\n", (*benchRet).type);
          printf("%ld\n", (*benchRet).addr);
          printf("%ld\n", (*benchRet).size);
        
        break;
    }
    // big-arr
    case 1:
    {
          long start = 255;
          long end = 255;
          enum e820_type type = 0;
          struct e820_entry * benchRet = __e820__mapped_all(start,end,type);
          printf("%d\n", (*benchRet).type);
          printf("%ld\n", (*benchRet).addr);
          printf("%ld\n", (*benchRet).size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long start = 10;
          long end = 10;
          enum e820_type type = 0;
          struct e820_entry * benchRet = __e820__mapped_all(start,end,type);
          printf("%d\n", (*benchRet).type);
          printf("%ld\n", (*benchRet).addr);
          printf("%ld\n", (*benchRet).size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct stmmac_tc_entry {scalar_t__ prio; scalar_t__ is_frag; scalar_t__ is_last; scalar_t__ in_hw; int /*<<< orphan*/  in_use; } ;

/* Variables and functions */

__attribute__((used)) static struct stmmac_tc_entry *
dwmac5_rxp_get_next_entry(struct stmmac_tc_entry *entries, unsigned int count,
			  u32 curr_prio)
{
	struct stmmac_tc_entry *entry;
	u32 min_prio = ~0x0;
	int i, min_prio_idx;
	bool found = false;

	for (i = count - 1; i >= 0; i--) {
		entry = &entries[i];

		/* Do not update unused entries */
		if (!entry->in_use)
			continue;
		/* Do not update already updated entries (i.e. fragments) */
		if (entry->in_hw)
			continue;
		/* Let last entry be updated last */
		if (entry->is_last)
			continue;
		/* Do not return fragments */
		if (entry->is_frag)
			continue;
		/* Check if we already checked this prio */
		if (entry->prio < curr_prio)
			continue;
		/* Check if this is the minimum prio */
		if (entry->prio < min_prio) {
			min_prio = entry->prio;
			min_prio_idx = i;
			found = true;
		}
	}

	if (found)
		return &entries[min_prio_idx];
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
          unsigned int count = 100;
          long curr_prio = 100;
          int _len_entries0 = 1;
          struct stmmac_tc_entry * entries = (struct stmmac_tc_entry *) malloc(_len_entries0*sizeof(struct stmmac_tc_entry));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_frag = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_last = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_hw = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct stmmac_tc_entry * benchRet = dwmac5_rxp_get_next_entry(entries,count,curr_prio);
          printf("%ld\n", (*benchRet).prio);
          printf("%ld\n", (*benchRet).is_frag);
          printf("%ld\n", (*benchRet).is_last);
          printf("%ld\n", (*benchRet).in_hw);
          printf("%d\n", (*benchRet).in_use);
          free(entries);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int count = 255;
          long curr_prio = 255;
          int _len_entries0 = 65025;
          struct stmmac_tc_entry * entries = (struct stmmac_tc_entry *) malloc(_len_entries0*sizeof(struct stmmac_tc_entry));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_frag = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_last = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_hw = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct stmmac_tc_entry * benchRet = dwmac5_rxp_get_next_entry(entries,count,curr_prio);
          printf("%ld\n", (*benchRet).prio);
          printf("%ld\n", (*benchRet).is_frag);
          printf("%ld\n", (*benchRet).is_last);
          printf("%ld\n", (*benchRet).in_hw);
          printf("%d\n", (*benchRet).in_use);
          free(entries);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int count = 10;
          long curr_prio = 10;
          int _len_entries0 = 100;
          struct stmmac_tc_entry * entries = (struct stmmac_tc_entry *) malloc(_len_entries0*sizeof(struct stmmac_tc_entry));
          for(int _i0 = 0; _i0 < _len_entries0; _i0++) {
            entries[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_frag = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].is_last = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_hw = ((-2 * (next_i()%2)) + 1) * next_i();
        entries[_i0].in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct stmmac_tc_entry * benchRet = dwmac5_rxp_get_next_entry(entries,count,curr_prio);
          printf("%ld\n", (*benchRet).prio);
          printf("%ld\n", (*benchRet).is_frag);
          printf("%ld\n", (*benchRet).is_last);
          printf("%ld\n", (*benchRet).in_hw);
          printf("%d\n", (*benchRet).in_use);
          free(entries);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

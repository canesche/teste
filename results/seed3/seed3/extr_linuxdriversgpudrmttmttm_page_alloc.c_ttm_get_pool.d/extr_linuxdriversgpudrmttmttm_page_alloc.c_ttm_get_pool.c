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
struct ttm_page_pool {int dummy; } ;
typedef  enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;

/* Variables and functions */
 int TTM_PAGE_FLAG_DMA32 ; 
 TYPE_1__* _manager ; 
 int tt_cached ; 
 int tt_wc ; 

__attribute__((used)) static struct ttm_page_pool *ttm_get_pool(int flags, bool huge,
					  enum ttm_caching_state cstate)
{
	int pool_index;

	if (cstate == tt_cached)
		return NULL;

	if (cstate == tt_wc)
		pool_index = 0x0;
	else
		pool_index = 0x1;

	if (flags & TTM_PAGE_FLAG_DMA32) {
		if (huge)
			return NULL;
		pool_index |= 0x2;

	} else if (huge) {
		pool_index |= 0x4;
	}

	return &_manager->pools[pool_index];
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
          int flags = 100;
          int huge = 100;
          enum ttm_caching_state cstate = 0;
          struct ttm_page_pool * benchRet = ttm_get_pool(flags,huge,cstate);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int huge = 255;
          enum ttm_caching_state cstate = 0;
          struct ttm_page_pool * benchRet = ttm_get_pool(flags,huge,cstate);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int huge = 10;
          enum ttm_caching_state cstate = 0;
          struct ttm_page_pool * benchRet = ttm_get_pool(flags,huge,cstate);
          printf("%d\n", (*benchRet).dummy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

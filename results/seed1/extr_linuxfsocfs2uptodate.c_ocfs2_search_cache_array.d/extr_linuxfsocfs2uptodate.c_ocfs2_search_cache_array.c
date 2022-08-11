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
struct TYPE_2__ {scalar_t__* ci_array; } ;
struct ocfs2_caching_info {int ci_num_cached; TYPE_1__ ci_cache; } ;
typedef  scalar_t__ sector_t ;

/* Variables and functions */

__attribute__((used)) static int ocfs2_search_cache_array(struct ocfs2_caching_info *ci,
				    sector_t item)
{
	int i;

	for (i = 0; i < ci->ci_num_cached; i++) {
		if (item == ci->ci_cache.ci_array[i])
			return i;
	}

	return -1;
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
          long item = 100;
          int _len_ci0 = 1;
          struct ocfs2_caching_info * ci = (struct ocfs2_caching_info *) malloc(_len_ci0*sizeof(struct ocfs2_caching_info));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
            ci[_i0].ci_num_cached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ci__i0__ci_cache_ci_array0 = 1;
          ci[_i0].ci_cache.ci_array = (long *) malloc(_len_ci__i0__ci_cache_ci_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ci__i0__ci_cache_ci_array0; _j0++) {
            ci[_i0].ci_cache.ci_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ocfs2_search_cache_array(ci,item);
          printf("%d\n", benchRet); 
          free(ci);
        
        break;
    }
    // big-arr
    case 1:
    {
          long item = 255;
          int _len_ci0 = 65025;
          struct ocfs2_caching_info * ci = (struct ocfs2_caching_info *) malloc(_len_ci0*sizeof(struct ocfs2_caching_info));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
            ci[_i0].ci_num_cached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ci__i0__ci_cache_ci_array0 = 1;
          ci[_i0].ci_cache.ci_array = (long *) malloc(_len_ci__i0__ci_cache_ci_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ci__i0__ci_cache_ci_array0; _j0++) {
            ci[_i0].ci_cache.ci_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ocfs2_search_cache_array(ci,item);
          printf("%d\n", benchRet); 
          free(ci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long item = 10;
          int _len_ci0 = 100;
          struct ocfs2_caching_info * ci = (struct ocfs2_caching_info *) malloc(_len_ci0*sizeof(struct ocfs2_caching_info));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
            ci[_i0].ci_num_cached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ci__i0__ci_cache_ci_array0 = 1;
          ci[_i0].ci_cache.ci_array = (long *) malloc(_len_ci__i0__ci_cache_ci_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ci__i0__ci_cache_ci_array0; _j0++) {
            ci[_i0].ci_cache.ci_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ocfs2_search_cache_array(ci,item);
          printf("%d\n", benchRet); 
          free(ci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

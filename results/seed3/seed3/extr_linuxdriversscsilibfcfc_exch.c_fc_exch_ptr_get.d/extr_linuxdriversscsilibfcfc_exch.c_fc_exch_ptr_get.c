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
typedef  size_t u16 ;
struct fc_exch_pool {int dummy; } ;
struct fc_exch {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct fc_exch *fc_exch_ptr_get(struct fc_exch_pool *pool,
					      u16 index)
{
	struct fc_exch **exches = (struct fc_exch **)(pool + 1);
	return exches[index];
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
          unsigned long index = 100;
          int _len_pool0 = 1;
          struct fc_exch_pool * pool = (struct fc_exch_pool *) malloc(_len_pool0*sizeof(struct fc_exch_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fc_exch * benchRet = fc_exch_ptr_get(pool,index);
          printf("%d\n", (*benchRet).dummy);
          free(pool);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          int _len_pool0 = 65025;
          struct fc_exch_pool * pool = (struct fc_exch_pool *) malloc(_len_pool0*sizeof(struct fc_exch_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fc_exch * benchRet = fc_exch_ptr_get(pool,index);
          printf("%d\n", (*benchRet).dummy);
          free(pool);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          int _len_pool0 = 100;
          struct fc_exch_pool * pool = (struct fc_exch_pool *) malloc(_len_pool0*sizeof(struct fc_exch_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fc_exch * benchRet = fc_exch_ptr_get(pool,index);
          printf("%d\n", (*benchRet).dummy);
          free(pool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u64 ;
struct rds_iovec {int addr; int bytes; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 
 int PAGE_SIZE ; 
 scalar_t__ UINT_MAX ; 

__attribute__((used)) static unsigned int rds_pages_in_vec(struct rds_iovec *vec)
{
	if ((vec->addr + vec->bytes <= vec->addr) ||
	    (vec->bytes > (u64)UINT_MAX))
		return 0;

	return ((vec->addr + vec->bytes + PAGE_SIZE - 1) >> PAGE_SHIFT) -
		(vec->addr >> PAGE_SHIFT);
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
          int _len_vec0 = 1;
          struct rds_iovec * vec = (struct rds_iovec *) malloc(_len_vec0*sizeof(struct rds_iovec));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rds_pages_in_vec(vec);
          printf("%u\n", benchRet); 
          free(vec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vec0 = 65025;
          struct rds_iovec * vec = (struct rds_iovec *) malloc(_len_vec0*sizeof(struct rds_iovec));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rds_pages_in_vec(vec);
          printf("%u\n", benchRet); 
          free(vec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vec0 = 100;
          struct rds_iovec * vec = (struct rds_iovec *) malloc(_len_vec0*sizeof(struct rds_iovec));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vec[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rds_pages_in_vec(vec);
          printf("%u\n", benchRet); 
          free(vec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

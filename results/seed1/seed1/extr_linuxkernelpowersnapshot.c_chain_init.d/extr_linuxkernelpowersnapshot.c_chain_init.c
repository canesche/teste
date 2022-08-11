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
struct chain_allocator {int safe_needed; int /*<<< orphan*/  gfp_mask; int /*<<< orphan*/  used_space; int /*<<< orphan*/ * chain; } ;
typedef  int /*<<< orphan*/  gfp_t ;

/* Variables and functions */
 int /*<<< orphan*/  LINKED_PAGE_DATA_SIZE ; 

__attribute__((used)) static void chain_init(struct chain_allocator *ca, gfp_t gfp_mask,
		       int safe_needed)
{
	ca->chain = NULL;
	ca->used_space = LINKED_PAGE_DATA_SIZE;
	ca->gfp_mask = gfp_mask;
	ca->safe_needed = safe_needed;
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
          int gfp_mask = 100;
          int safe_needed = 100;
          int _len_ca0 = 1;
          struct chain_allocator * ca = (struct chain_allocator *) malloc(_len_ca0*sizeof(struct chain_allocator));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].safe_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].gfp_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].used_space = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca__i0__chain0 = 1;
          ca[_i0].chain = (int *) malloc(_len_ca__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca__i0__chain0; _j0++) {
            ca[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chain_init(ca,gfp_mask,safe_needed);
          for(int _aux = 0; _aux < _len_ca0; _aux++) {
          free(ca[_aux].chain);
          }
          free(ca);
        
        break;
    }
    // big-arr
    case 1:
    {
          int gfp_mask = 255;
          int safe_needed = 255;
          int _len_ca0 = 65025;
          struct chain_allocator * ca = (struct chain_allocator *) malloc(_len_ca0*sizeof(struct chain_allocator));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].safe_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].gfp_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].used_space = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca__i0__chain0 = 1;
          ca[_i0].chain = (int *) malloc(_len_ca__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca__i0__chain0; _j0++) {
            ca[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chain_init(ca,gfp_mask,safe_needed);
          for(int _aux = 0; _aux < _len_ca0; _aux++) {
          free(ca[_aux].chain);
          }
          free(ca);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int gfp_mask = 10;
          int safe_needed = 10;
          int _len_ca0 = 100;
          struct chain_allocator * ca = (struct chain_allocator *) malloc(_len_ca0*sizeof(struct chain_allocator));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].safe_needed = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].gfp_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].used_space = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca__i0__chain0 = 1;
          ca[_i0].chain = (int *) malloc(_len_ca__i0__chain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ca__i0__chain0; _j0++) {
            ca[_i0].chain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          chain_init(ca,gfp_mask,safe_needed);
          for(int _aux = 0; _aux < _len_ca0; _aux++) {
          free(ca[_aux].chain);
          }
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

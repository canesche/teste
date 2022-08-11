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
struct page {int dummy; } ;
struct hstate {int dummy; } ;
typedef  int /*<<< orphan*/  nodemask_t ;
typedef  int /*<<< orphan*/  gfp_t ;

/* Variables and functions */

__attribute__((used)) static struct page *alloc_gigantic_page(struct hstate *h, gfp_t gfp_mask,
		int nid, nodemask_t *nodemask) { return NULL; }


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
          int nid = 100;
          int _len_h0 = 1;
          struct hstate * h = (struct hstate *) malloc(_len_h0*sizeof(struct hstate));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nodemask0 = 1;
          int * nodemask = (int *) malloc(_len_nodemask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nodemask0; _i0++) {
            nodemask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct page * benchRet = alloc_gigantic_page(h,gfp_mask,nid,nodemask);
          printf("%d\n", (*benchRet).dummy);
          free(h);
          free(nodemask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int gfp_mask = 255;
          int nid = 255;
          int _len_h0 = 65025;
          struct hstate * h = (struct hstate *) malloc(_len_h0*sizeof(struct hstate));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nodemask0 = 65025;
          int * nodemask = (int *) malloc(_len_nodemask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nodemask0; _i0++) {
            nodemask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct page * benchRet = alloc_gigantic_page(h,gfp_mask,nid,nodemask);
          printf("%d\n", (*benchRet).dummy);
          free(h);
          free(nodemask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int gfp_mask = 10;
          int nid = 10;
          int _len_h0 = 100;
          struct hstate * h = (struct hstate *) malloc(_len_h0*sizeof(struct hstate));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nodemask0 = 100;
          int * nodemask = (int *) malloc(_len_nodemask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nodemask0; _i0++) {
            nodemask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct page * benchRet = alloc_gigantic_page(h,gfp_mask,nid,nodemask);
          printf("%d\n", (*benchRet).dummy);
          free(h);
          free(nodemask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

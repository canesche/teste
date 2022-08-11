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
typedef  int /*<<< orphan*/  u64 ;
struct vmballoon_batch_page {int /*<<< orphan*/ * pages; } ;

/* Variables and functions */

__attribute__((used)) static void vmballoon_batch_set_pa(struct vmballoon_batch_page *batch, int idx,
				u64 pa)
{
	batch->pages[idx] = pa;
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
          int idx = 100;
          int pa = 100;
          int _len_batch0 = 1;
          struct vmballoon_batch_page * batch = (struct vmballoon_batch_page *) malloc(_len_batch0*sizeof(struct vmballoon_batch_page));
          for(int _i0 = 0; _i0 < _len_batch0; _i0++) {
              int _len_batch__i0__pages0 = 1;
          batch[_i0].pages = (int *) malloc(_len_batch__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_batch__i0__pages0; _j0++) {
            batch[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmballoon_batch_set_pa(batch,idx,pa);
          for(int _aux = 0; _aux < _len_batch0; _aux++) {
          free(batch[_aux].pages);
          }
          free(batch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int pa = 255;
          int _len_batch0 = 65025;
          struct vmballoon_batch_page * batch = (struct vmballoon_batch_page *) malloc(_len_batch0*sizeof(struct vmballoon_batch_page));
          for(int _i0 = 0; _i0 < _len_batch0; _i0++) {
              int _len_batch__i0__pages0 = 1;
          batch[_i0].pages = (int *) malloc(_len_batch__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_batch__i0__pages0; _j0++) {
            batch[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmballoon_batch_set_pa(batch,idx,pa);
          for(int _aux = 0; _aux < _len_batch0; _aux++) {
          free(batch[_aux].pages);
          }
          free(batch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int pa = 10;
          int _len_batch0 = 100;
          struct vmballoon_batch_page * batch = (struct vmballoon_batch_page *) malloc(_len_batch0*sizeof(struct vmballoon_batch_page));
          for(int _i0 = 0; _i0 < _len_batch0; _i0++) {
              int _len_batch__i0__pages0 = 1;
          batch[_i0].pages = (int *) malloc(_len_batch__i0__pages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_batch__i0__pages0; _j0++) {
            batch[_i0].pages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmballoon_batch_set_pa(batch,idx,pa);
          for(int _aux = 0; _aux < _len_batch0; _aux++) {
          free(batch[_aux].pages);
          }
          free(batch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

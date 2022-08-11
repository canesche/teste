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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * vaddr; } ;
struct falcon {TYPE_2__ firmware; TYPE_1__* ops; } ;
struct TYPE_3__ {int /*<<< orphan*/  free; int /*<<< orphan*/  alloc; } ;

/* Variables and functions */
 int EINVAL ; 

int falcon_init(struct falcon *falcon)
{
	/* check mandatory ops */
	if (!falcon->ops || !falcon->ops->alloc || !falcon->ops->free)
		return -EINVAL;

	falcon->firmware.vaddr = NULL;

	return 0;
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
          int _len_falcon0 = 1;
          struct falcon * falcon = (struct falcon *) malloc(_len_falcon0*sizeof(struct falcon));
          for(int _i0 = 0; _i0 < _len_falcon0; _i0++) {
              int _len_falcon__i0__firmware_vaddr0 = 1;
          falcon[_i0].firmware.vaddr = (int *) malloc(_len_falcon__i0__firmware_vaddr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_falcon__i0__firmware_vaddr0; _j0++) {
            falcon[_i0].firmware.vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_falcon__i0__ops0 = 1;
          falcon[_i0].ops = (struct TYPE_3__ *) malloc(_len_falcon__i0__ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_falcon__i0__ops0; _j0++) {
            falcon[_i0].ops->free = ((-2 * (next_i()%2)) + 1) * next_i();
        falcon[_i0].ops->alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = falcon_init(falcon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_falcon0; _aux++) {
          free(falcon[_aux].ops);
          }
          free(falcon);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_falcon0 = 65025;
          struct falcon * falcon = (struct falcon *) malloc(_len_falcon0*sizeof(struct falcon));
          for(int _i0 = 0; _i0 < _len_falcon0; _i0++) {
              int _len_falcon__i0__firmware_vaddr0 = 1;
          falcon[_i0].firmware.vaddr = (int *) malloc(_len_falcon__i0__firmware_vaddr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_falcon__i0__firmware_vaddr0; _j0++) {
            falcon[_i0].firmware.vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_falcon__i0__ops0 = 1;
          falcon[_i0].ops = (struct TYPE_3__ *) malloc(_len_falcon__i0__ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_falcon__i0__ops0; _j0++) {
            falcon[_i0].ops->free = ((-2 * (next_i()%2)) + 1) * next_i();
        falcon[_i0].ops->alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = falcon_init(falcon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_falcon0; _aux++) {
          free(falcon[_aux].ops);
          }
          free(falcon);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_falcon0 = 100;
          struct falcon * falcon = (struct falcon *) malloc(_len_falcon0*sizeof(struct falcon));
          for(int _i0 = 0; _i0 < _len_falcon0; _i0++) {
              int _len_falcon__i0__firmware_vaddr0 = 1;
          falcon[_i0].firmware.vaddr = (int *) malloc(_len_falcon__i0__firmware_vaddr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_falcon__i0__firmware_vaddr0; _j0++) {
            falcon[_i0].firmware.vaddr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_falcon__i0__ops0 = 1;
          falcon[_i0].ops = (struct TYPE_3__ *) malloc(_len_falcon__i0__ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_falcon__i0__ops0; _j0++) {
            falcon[_i0].ops->free = ((-2 * (next_i()%2)) + 1) * next_i();
        falcon[_i0].ops->alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = falcon_init(falcon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_falcon0; _aux++) {
          free(falcon[_aux].ops);
          }
          free(falcon);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_3__ {int page_alignment; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct radeon_bo {TYPE_2__ tbo; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 
 int RADEON_GPU_PAGE_SIZE ; 

__attribute__((used)) static inline unsigned radeon_bo_gpu_page_alignment(struct radeon_bo *bo)
{
	return (bo->tbo.mem.page_alignment << PAGE_SHIFT) / RADEON_GPU_PAGE_SIZE;
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
          int _len_bo0 = 1;
          struct radeon_bo * bo = (struct radeon_bo *) malloc(_len_bo0*sizeof(struct radeon_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].tbo.mem.page_alignment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = radeon_bo_gpu_page_alignment(bo);
          printf("%u\n", benchRet); 
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bo0 = 65025;
          struct radeon_bo * bo = (struct radeon_bo *) malloc(_len_bo0*sizeof(struct radeon_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].tbo.mem.page_alignment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = radeon_bo_gpu_page_alignment(bo);
          printf("%u\n", benchRet); 
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bo0 = 100;
          struct radeon_bo * bo = (struct radeon_bo *) malloc(_len_bo0*sizeof(struct radeon_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].tbo.mem.page_alignment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = radeon_bo_gpu_page_alignment(bo);
          printf("%u\n", benchRet); 
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

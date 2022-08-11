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
struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; int placement; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;

/* Variables and functions */
 int TTM_MEMTYPE_FLAG_CMA ; 
 int TTM_MEMTYPE_FLAG_FIXED ; 
 int TTM_PL_FLAG_CACHED ; 
 size_t TTM_PL_SYSTEM ; 

bool ttm_mem_reg_is_pci(struct ttm_bo_device *bdev, struct ttm_mem_reg *mem)
{
	struct ttm_mem_type_manager *man = &bdev->man[mem->mem_type];

	if (!(man->flags & TTM_MEMTYPE_FLAG_FIXED)) {
		if (mem->mem_type == TTM_PL_SYSTEM)
			return false;

		if (man->flags & TTM_MEMTYPE_FLAG_CMA)
			return false;

		if (mem->placement & TTM_PL_FLAG_CACHED)
			return false;
	}
	return true;
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
          int _len_bdev0 = 1;
          struct ttm_bo_device * bdev = (struct ttm_bo_device *) malloc(_len_bdev0*sizeof(struct ttm_bo_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__man0 = 1;
          bdev[_i0].man = (struct ttm_mem_type_manager *) malloc(_len_bdev__i0__man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_bdev__i0__man0; _j0++) {
            bdev[_i0].man->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mem0 = 1;
          struct ttm_mem_reg * mem = (struct ttm_mem_reg *) malloc(_len_mem0*sizeof(struct ttm_mem_reg));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].placement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ttm_mem_reg_is_pci(bdev,mem);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].man);
          }
          free(bdev);
          free(mem);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bdev0 = 65025;
          struct ttm_bo_device * bdev = (struct ttm_bo_device *) malloc(_len_bdev0*sizeof(struct ttm_bo_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__man0 = 1;
          bdev[_i0].man = (struct ttm_mem_type_manager *) malloc(_len_bdev__i0__man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_bdev__i0__man0; _j0++) {
            bdev[_i0].man->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mem0 = 65025;
          struct ttm_mem_reg * mem = (struct ttm_mem_reg *) malloc(_len_mem0*sizeof(struct ttm_mem_reg));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].placement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ttm_mem_reg_is_pci(bdev,mem);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].man);
          }
          free(bdev);
          free(mem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bdev0 = 100;
          struct ttm_bo_device * bdev = (struct ttm_bo_device *) malloc(_len_bdev0*sizeof(struct ttm_bo_device));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
              int _len_bdev__i0__man0 = 1;
          bdev[_i0].man = (struct ttm_mem_type_manager *) malloc(_len_bdev__i0__man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_bdev__i0__man0; _j0++) {
            bdev[_i0].man->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mem0 = 100;
          struct ttm_mem_reg * mem = (struct ttm_mem_reg *) malloc(_len_mem0*sizeof(struct ttm_mem_reg));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].placement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ttm_mem_reg_is_pci(bdev,mem);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bdev0; _aux++) {
          free(bdev[_aux].man);
          }
          free(bdev);
          free(mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

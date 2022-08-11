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
typedef  unsigned long uint64_t ;
struct qxl_memslot {unsigned long high_bits; } ;
struct qxl_device {int main_mem_slot; int surfaces_mem_slot; struct qxl_memslot* mem_slots; } ;
struct TYPE_2__ {unsigned long offset; } ;
struct qxl_bo {scalar_t__ type; TYPE_1__ tbo; } ;

/* Variables and functions */
 scalar_t__ QXL_GEM_DOMAIN_VRAM ; 

__attribute__((used)) static inline uint64_t
qxl_bo_physical_address(struct qxl_device *qdev, struct qxl_bo *bo,
			unsigned long offset)
{
	int slot_id = bo->type == QXL_GEM_DOMAIN_VRAM ? qdev->main_mem_slot : qdev->surfaces_mem_slot;
	struct qxl_memslot *slot = &(qdev->mem_slots[slot_id]);

	/* TODO - need to hold one of the locks to read tbo.offset */
	return slot->high_bits | (bo->tbo.offset + offset);
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
          unsigned long offset = 100;
          int _len_qdev0 = 1;
          struct qxl_device * qdev = (struct qxl_device *) malloc(_len_qdev0*sizeof(struct qxl_device));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].main_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].surfaces_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qdev__i0__mem_slots0 = 1;
          qdev[_i0].mem_slots = (struct qxl_memslot *) malloc(_len_qdev__i0__mem_slots0*sizeof(struct qxl_memslot));
          for(int _j0 = 0; _j0 < _len_qdev__i0__mem_slots0; _j0++) {
            qdev[_i0].mem_slots->high_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bo0 = 1;
          struct qxl_bo * bo = (struct qxl_bo *) malloc(_len_bo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].tbo.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = qxl_bo_physical_address(qdev,bo,offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].mem_slots);
          }
          free(qdev);
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int _len_qdev0 = 65025;
          struct qxl_device * qdev = (struct qxl_device *) malloc(_len_qdev0*sizeof(struct qxl_device));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].main_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].surfaces_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qdev__i0__mem_slots0 = 1;
          qdev[_i0].mem_slots = (struct qxl_memslot *) malloc(_len_qdev__i0__mem_slots0*sizeof(struct qxl_memslot));
          for(int _j0 = 0; _j0 < _len_qdev__i0__mem_slots0; _j0++) {
            qdev[_i0].mem_slots->high_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bo0 = 65025;
          struct qxl_bo * bo = (struct qxl_bo *) malloc(_len_bo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].tbo.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = qxl_bo_physical_address(qdev,bo,offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].mem_slots);
          }
          free(qdev);
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int _len_qdev0 = 100;
          struct qxl_device * qdev = (struct qxl_device *) malloc(_len_qdev0*sizeof(struct qxl_device));
          for(int _i0 = 0; _i0 < _len_qdev0; _i0++) {
            qdev[_i0].main_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        qdev[_i0].surfaces_mem_slot = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qdev__i0__mem_slots0 = 1;
          qdev[_i0].mem_slots = (struct qxl_memslot *) malloc(_len_qdev__i0__mem_slots0*sizeof(struct qxl_memslot));
          for(int _j0 = 0; _j0 < _len_qdev__i0__mem_slots0; _j0++) {
            qdev[_i0].mem_slots->high_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bo0 = 100;
          struct qxl_bo * bo = (struct qxl_bo *) malloc(_len_bo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].tbo.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = qxl_bo_physical_address(qdev,bo,offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdev0; _aux++) {
          free(qdev[_aux].mem_slots);
          }
          free(qdev);
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

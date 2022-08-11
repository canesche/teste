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
struct mmu_page_path {unsigned int* idx; struct kvm_mmu_page** parent; } ;
struct kvm_mmu_pages {int nr; TYPE_2__* page; } ;
struct TYPE_3__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_4__ {unsigned int idx; struct kvm_mmu_page* sp; } ;

/* Variables and functions */
 int PT_PAGE_TABLE_LEVEL ; 

__attribute__((used)) static int mmu_pages_next(struct kvm_mmu_pages *pvec,
			  struct mmu_page_path *parents,
			  int i)
{
	int n;

	for (n = i+1; n < pvec->nr; n++) {
		struct kvm_mmu_page *sp = pvec->page[n].sp;
		unsigned idx = pvec->page[n].idx;
		int level = sp->role.level;

		parents->idx[level-1] = idx;
		if (level == PT_PAGE_TABLE_LEVEL)
			break;

		parents->parent[level-2] = sp;
	}

	return n;
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
          int i = 100;
          int _len_pvec0 = 1;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_4__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_parents0 = 1;
          struct mmu_page_path * parents = (struct mmu_page_path *) malloc(_len_parents0*sizeof(struct mmu_page_path));
          for(int _i0 = 0; _i0 < _len_parents0; _i0++) {
              int _len_parents__i0__idx0 = 1;
          parents[_i0].idx = (unsigned int *) malloc(_len_parents__i0__idx0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parents__i0__idx0; _j0++) {
            parents[_i0].idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parents__i0__parent0 = 1;
          parents[_i0].parent = (struct kvm_mmu_page **) malloc(_len_parents__i0__parent0*sizeof(struct kvm_mmu_page *));
          for(int _j0 = 0; _j0 < _len_parents__i0__parent0; _j0++) {
            int _len_parents__i0__parent1 = 1;
            parents[_i0].parent[_j0] = (struct kvm_mmu_page *) malloc(_len_parents__i0__parent1*sizeof(struct kvm_mmu_page));
            for(int _j1 = 0; _j1 < _len_parents__i0__parent1; _j1++) {
              parents[_i0].parent[_j0]->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mmu_pages_next(pvec,parents,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(parents[_aux].idx);
          }
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(*(parents[_aux].parent));
        free(parents[_aux].parent);
          }
          free(parents);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_pvec0 = 65025;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_4__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_parents0 = 65025;
          struct mmu_page_path * parents = (struct mmu_page_path *) malloc(_len_parents0*sizeof(struct mmu_page_path));
          for(int _i0 = 0; _i0 < _len_parents0; _i0++) {
              int _len_parents__i0__idx0 = 1;
          parents[_i0].idx = (unsigned int *) malloc(_len_parents__i0__idx0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parents__i0__idx0; _j0++) {
            parents[_i0].idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parents__i0__parent0 = 1;
          parents[_i0].parent = (struct kvm_mmu_page **) malloc(_len_parents__i0__parent0*sizeof(struct kvm_mmu_page *));
          for(int _j0 = 0; _j0 < _len_parents__i0__parent0; _j0++) {
            int _len_parents__i0__parent1 = 1;
            parents[_i0].parent[_j0] = (struct kvm_mmu_page *) malloc(_len_parents__i0__parent1*sizeof(struct kvm_mmu_page));
            for(int _j1 = 0; _j1 < _len_parents__i0__parent1; _j1++) {
              parents[_i0].parent[_j0]->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mmu_pages_next(pvec,parents,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(parents[_aux].idx);
          }
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(*(parents[_aux].parent));
        free(parents[_aux].parent);
          }
          free(parents);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_pvec0 = 100;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_4__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_parents0 = 100;
          struct mmu_page_path * parents = (struct mmu_page_path *) malloc(_len_parents0*sizeof(struct mmu_page_path));
          for(int _i0 = 0; _i0 < _len_parents0; _i0++) {
              int _len_parents__i0__idx0 = 1;
          parents[_i0].idx = (unsigned int *) malloc(_len_parents__i0__idx0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_parents__i0__idx0; _j0++) {
            parents[_i0].idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parents__i0__parent0 = 1;
          parents[_i0].parent = (struct kvm_mmu_page **) malloc(_len_parents__i0__parent0*sizeof(struct kvm_mmu_page *));
          for(int _j0 = 0; _j0 < _len_parents__i0__parent0; _j0++) {
            int _len_parents__i0__parent1 = 1;
            parents[_i0].parent[_j0] = (struct kvm_mmu_page *) malloc(_len_parents__i0__parent1*sizeof(struct kvm_mmu_page));
            for(int _j1 = 0; _j1 < _len_parents__i0__parent1; _j1++) {
              parents[_i0].parent[_j0]->role.level = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = mmu_pages_next(pvec,parents,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(parents[_aux].idx);
          }
          for(int _aux = 0; _aux < _len_parents0; _aux++) {
          free(*(parents[_aux].parent));
        free(parents[_aux].parent);
          }
          free(parents);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

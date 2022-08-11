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
struct kvm_mmu_pages {int nr; TYPE_1__* page; } ;
struct kvm_mmu_page {scalar_t__ unsync; } ;
struct TYPE_2__ {int idx; struct kvm_mmu_page* sp; } ;

/* Variables and functions */
 size_t KVM_PAGE_ARRAY_NR ; 

__attribute__((used)) static int mmu_pages_add(struct kvm_mmu_pages *pvec, struct kvm_mmu_page *sp,
			 int idx)
{
	int i;

	if (sp->unsync)
		for (i=0; i < pvec->nr; i++)
			if (pvec->page[i].sp == sp)
				return 0;

	pvec->page[pvec->nr].sp = sp;
	pvec->page[pvec->nr].idx = idx;
	pvec->nr++;
	return (pvec->nr == KVM_PAGE_ARRAY_NR);
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
          int _len_pvec0 = 1;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_2__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_sp0 = 1;
          struct kvm_mmu_page * sp = (struct kvm_mmu_page *) malloc(_len_sp0*sizeof(struct kvm_mmu_page));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmu_pages_add(pvec,sp,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_pvec0 = 65025;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_2__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_sp0 = 65025;
          struct kvm_mmu_page * sp = (struct kvm_mmu_page *) malloc(_len_sp0*sizeof(struct kvm_mmu_page));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmu_pages_add(pvec,sp,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_pvec0 = 100;
          struct kvm_mmu_pages * pvec = (struct kvm_mmu_pages *) malloc(_len_pvec0*sizeof(struct kvm_mmu_pages));
          for(int _i0 = 0; _i0 < _len_pvec0; _i0++) {
            pvec[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page0 = 1;
          pvec[_i0].page = (struct TYPE_2__ *) malloc(_len_pvec__i0__page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page0; _j0++) {
            pvec[_i0].page->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pvec__i0__page_sp0 = 1;
          pvec[_i0].page->sp = (struct kvm_mmu_page *) malloc(_len_pvec__i0__page_sp0*sizeof(struct kvm_mmu_page));
          for(int _j0 = 0; _j0 < _len_pvec__i0__page_sp0; _j0++) {
            pvec[_i0].page->sp->unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_sp0 = 100;
          struct kvm_mmu_page * sp = (struct kvm_mmu_page *) malloc(_len_sp0*sizeof(struct kvm_mmu_page));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].unsync = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmu_pages_add(pvec,sp,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvec0; _aux++) {
          free(pvec[_aux].page);
          }
          free(pvec);
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

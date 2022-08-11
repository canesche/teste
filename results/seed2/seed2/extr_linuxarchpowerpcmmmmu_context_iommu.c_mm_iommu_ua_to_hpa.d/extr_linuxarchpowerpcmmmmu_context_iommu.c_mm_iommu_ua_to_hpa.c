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
typedef  unsigned long u64 ;
struct mm_iommu_table_group_mem_t {unsigned long ua; unsigned long* hpas; long const entries; unsigned int pageshift; } ;

/* Variables and functions */
 long EFAULT ; 
 unsigned long MM_IOMMU_TABLE_GROUP_PAGE_MASK ; 
 unsigned long PAGE_MASK ; 
 unsigned long PAGE_SHIFT ; 

long mm_iommu_ua_to_hpa(struct mm_iommu_table_group_mem_t *mem,
		unsigned long ua, unsigned int pageshift, unsigned long *hpa)
{
	const long entry = (ua - mem->ua) >> PAGE_SHIFT;
	u64 *va = &mem->hpas[entry];

	if (entry >= mem->entries)
		return -EFAULT;

	if (pageshift > mem->pageshift)
		return -EFAULT;

	*hpa = (*va & MM_IOMMU_TABLE_GROUP_PAGE_MASK) | (ua & ~PAGE_MASK);

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
          unsigned long ua = 100;
          unsigned int pageshift = 100;
          int _len_mem0 = 1;
          struct mm_iommu_table_group_mem_t * mem = (struct mm_iommu_table_group_mem_t *) malloc(_len_mem0*sizeof(struct mm_iommu_table_group_mem_t));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].ua = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__hpas0 = 1;
          mem[_i0].hpas = (unsigned long *) malloc(_len_mem__i0__hpas0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_mem__i0__hpas0; _j0++) {
            mem[_i0].hpas[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mem[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].pageshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hpa0 = 1;
          unsigned long * hpa = (unsigned long *) malloc(_len_hpa0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hpa0; _i0++) {
            hpa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = mm_iommu_ua_to_hpa(mem,ua,pageshift,hpa);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].hpas);
          }
          free(mem);
          free(hpa);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ua = 255;
          unsigned int pageshift = 255;
          int _len_mem0 = 65025;
          struct mm_iommu_table_group_mem_t * mem = (struct mm_iommu_table_group_mem_t *) malloc(_len_mem0*sizeof(struct mm_iommu_table_group_mem_t));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].ua = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__hpas0 = 1;
          mem[_i0].hpas = (unsigned long *) malloc(_len_mem__i0__hpas0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_mem__i0__hpas0; _j0++) {
            mem[_i0].hpas[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mem[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].pageshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hpa0 = 65025;
          unsigned long * hpa = (unsigned long *) malloc(_len_hpa0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hpa0; _i0++) {
            hpa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = mm_iommu_ua_to_hpa(mem,ua,pageshift,hpa);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].hpas);
          }
          free(mem);
          free(hpa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ua = 10;
          unsigned int pageshift = 10;
          int _len_mem0 = 100;
          struct mm_iommu_table_group_mem_t * mem = (struct mm_iommu_table_group_mem_t *) malloc(_len_mem0*sizeof(struct mm_iommu_table_group_mem_t));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].ua = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mem__i0__hpas0 = 1;
          mem[_i0].hpas = (unsigned long *) malloc(_len_mem__i0__hpas0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_mem__i0__hpas0; _j0++) {
            mem[_i0].hpas[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mem[_i0].entries = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].pageshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hpa0 = 100;
          unsigned long * hpa = (unsigned long *) malloc(_len_hpa0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hpa0; _i0++) {
            hpa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = mm_iommu_ua_to_hpa(mem,ua,pageshift,hpa);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_mem0; _aux++) {
          free(mem[_aux].hpas);
          }
          free(mem);
          free(hpa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

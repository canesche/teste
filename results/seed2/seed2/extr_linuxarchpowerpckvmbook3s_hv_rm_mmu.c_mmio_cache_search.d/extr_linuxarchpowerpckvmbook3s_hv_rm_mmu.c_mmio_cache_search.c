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
struct mmio_hpte_cache_entry {long mmio_update; unsigned int slb_base_pshift; unsigned int eaddr; unsigned long slb_v; } ;
struct TYPE_3__ {struct mmio_hpte_cache_entry* entry; } ;
struct TYPE_4__ {TYPE_1__ mmio_cache; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;

/* Variables and functions */
 unsigned int MMIO_HPTE_CACHE_SIZE ; 

__attribute__((used)) static struct mmio_hpte_cache_entry *mmio_cache_search(struct kvm_vcpu *vcpu,
		unsigned long eaddr, unsigned long slb_v, long mmio_update)
{
	struct mmio_hpte_cache_entry *entry = NULL;
	unsigned int pshift;
	unsigned int i;

	for (i = 0; i < MMIO_HPTE_CACHE_SIZE; i++) {
		entry = &vcpu->arch.mmio_cache.entry[i];
		if (entry->mmio_update == mmio_update) {
			pshift = entry->slb_base_pshift;
			if ((entry->eaddr >> pshift) == (eaddr >> pshift) &&
			    entry->slb_v == slb_v)
				return entry;
		}
	}
	return NULL;
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
          unsigned long eaddr = 100;
          unsigned long slb_v = 100;
          long mmio_update = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_mmio_cache_entry0 = 1;
          vcpu[_i0].arch.mmio_cache.entry = (struct mmio_hpte_cache_entry *) malloc(_len_vcpu__i0__arch_mmio_cache_entry0*sizeof(struct mmio_hpte_cache_entry));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmio_cache_entry0; _j0++) {
            vcpu[_i0].arch.mmio_cache.entry->mmio_update = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_base_pshift = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->eaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmio_hpte_cache_entry * benchRet = mmio_cache_search(vcpu,eaddr,slb_v,mmio_update);
          printf("%ld\n", (*benchRet).mmio_update);
          printf("%u\n", (*benchRet).slb_base_pshift);
          printf("%u\n", (*benchRet).eaddr);
          printf("%lu\n", (*benchRet).slb_v);
          free(vcpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long eaddr = 255;
          unsigned long slb_v = 255;
          long mmio_update = 255;
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_mmio_cache_entry0 = 1;
          vcpu[_i0].arch.mmio_cache.entry = (struct mmio_hpte_cache_entry *) malloc(_len_vcpu__i0__arch_mmio_cache_entry0*sizeof(struct mmio_hpte_cache_entry));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmio_cache_entry0; _j0++) {
            vcpu[_i0].arch.mmio_cache.entry->mmio_update = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_base_pshift = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->eaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmio_hpte_cache_entry * benchRet = mmio_cache_search(vcpu,eaddr,slb_v,mmio_update);
          printf("%ld\n", (*benchRet).mmio_update);
          printf("%u\n", (*benchRet).slb_base_pshift);
          printf("%u\n", (*benchRet).eaddr);
          printf("%lu\n", (*benchRet).slb_v);
          free(vcpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long eaddr = 10;
          unsigned long slb_v = 10;
          long mmio_update = 10;
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_mmio_cache_entry0 = 1;
          vcpu[_i0].arch.mmio_cache.entry = (struct mmio_hpte_cache_entry *) malloc(_len_vcpu__i0__arch_mmio_cache_entry0*sizeof(struct mmio_hpte_cache_entry));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmio_cache_entry0; _j0++) {
            vcpu[_i0].arch.mmio_cache.entry->mmio_update = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_base_pshift = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->eaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmio_cache.entry->slb_v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmio_hpte_cache_entry * benchRet = mmio_cache_search(vcpu,eaddr,slb_v,mmio_update);
          printf("%ld\n", (*benchRet).mmio_update);
          printf("%u\n", (*benchRet).slb_base_pshift);
          printf("%u\n", (*benchRet).eaddr);
          printf("%lu\n", (*benchRet).slb_v);
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

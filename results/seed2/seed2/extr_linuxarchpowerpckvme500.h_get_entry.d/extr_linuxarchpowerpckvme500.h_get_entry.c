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
struct kvmppc_vcpu_e500 {int* gtlb_offset; struct kvm_book3e_206_tlb_entry* gtlb_arch; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct kvm_book3e_206_tlb_entry *get_entry(
	struct kvmppc_vcpu_e500 *vcpu_e500, int tlbsel, int entry)
{
	int offset = vcpu_e500->gtlb_offset[tlbsel];
	return &vcpu_e500->gtlb_arch[offset + entry];
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
          int tlbsel = 100;
          int entry = 100;
          int _len_vcpu_e5000 = 1;
          struct kvmppc_vcpu_e500 * vcpu_e500 = (struct kvmppc_vcpu_e500 *) malloc(_len_vcpu_e5000*sizeof(struct kvmppc_vcpu_e500));
          for(int _i0 = 0; _i0 < _len_vcpu_e5000; _i0++) {
              int _len_vcpu_e500__i0__gtlb_offset0 = 1;
          vcpu_e500[_i0].gtlb_offset = (int *) malloc(_len_vcpu_e500__i0__gtlb_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_offset0; _j0++) {
            vcpu_e500[_i0].gtlb_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vcpu_e500__i0__gtlb_arch0 = 1;
          vcpu_e500[_i0].gtlb_arch = (struct kvm_book3e_206_tlb_entry *) malloc(_len_vcpu_e500__i0__gtlb_arch0*sizeof(struct kvm_book3e_206_tlb_entry));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_arch0; _j0++) {
            vcpu_e500[_i0].gtlb_arch->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_book3e_206_tlb_entry * benchRet = get_entry(vcpu_e500,tlbsel,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_offset);
          }
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_arch);
          }
          free(vcpu_e500);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tlbsel = 255;
          int entry = 255;
          int _len_vcpu_e5000 = 65025;
          struct kvmppc_vcpu_e500 * vcpu_e500 = (struct kvmppc_vcpu_e500 *) malloc(_len_vcpu_e5000*sizeof(struct kvmppc_vcpu_e500));
          for(int _i0 = 0; _i0 < _len_vcpu_e5000; _i0++) {
              int _len_vcpu_e500__i0__gtlb_offset0 = 1;
          vcpu_e500[_i0].gtlb_offset = (int *) malloc(_len_vcpu_e500__i0__gtlb_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_offset0; _j0++) {
            vcpu_e500[_i0].gtlb_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vcpu_e500__i0__gtlb_arch0 = 1;
          vcpu_e500[_i0].gtlb_arch = (struct kvm_book3e_206_tlb_entry *) malloc(_len_vcpu_e500__i0__gtlb_arch0*sizeof(struct kvm_book3e_206_tlb_entry));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_arch0; _j0++) {
            vcpu_e500[_i0].gtlb_arch->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_book3e_206_tlb_entry * benchRet = get_entry(vcpu_e500,tlbsel,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_offset);
          }
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_arch);
          }
          free(vcpu_e500);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tlbsel = 10;
          int entry = 10;
          int _len_vcpu_e5000 = 100;
          struct kvmppc_vcpu_e500 * vcpu_e500 = (struct kvmppc_vcpu_e500 *) malloc(_len_vcpu_e5000*sizeof(struct kvmppc_vcpu_e500));
          for(int _i0 = 0; _i0 < _len_vcpu_e5000; _i0++) {
              int _len_vcpu_e500__i0__gtlb_offset0 = 1;
          vcpu_e500[_i0].gtlb_offset = (int *) malloc(_len_vcpu_e500__i0__gtlb_offset0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_offset0; _j0++) {
            vcpu_e500[_i0].gtlb_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vcpu_e500__i0__gtlb_arch0 = 1;
          vcpu_e500[_i0].gtlb_arch = (struct kvm_book3e_206_tlb_entry *) malloc(_len_vcpu_e500__i0__gtlb_arch0*sizeof(struct kvm_book3e_206_tlb_entry));
          for(int _j0 = 0; _j0 < _len_vcpu_e500__i0__gtlb_arch0; _j0++) {
            vcpu_e500[_i0].gtlb_arch->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_book3e_206_tlb_entry * benchRet = get_entry(vcpu_e500,tlbsel,entry);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_offset);
          }
          for(int _aux = 0; _aux < _len_vcpu_e5000; _aux++) {
          free(vcpu_e500[_aux].gtlb_arch);
          }
          free(vcpu_e500);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

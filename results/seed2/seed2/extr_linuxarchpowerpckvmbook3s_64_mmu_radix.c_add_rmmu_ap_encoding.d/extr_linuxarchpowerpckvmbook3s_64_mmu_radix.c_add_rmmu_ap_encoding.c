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
struct kvm_ppc_rmmu_info {int* ap_encodings; } ;
struct TYPE_2__ {int shift; int ap; } ;

/* Variables and functions */
 TYPE_1__* mmu_psize_defs ; 

__attribute__((used)) static void add_rmmu_ap_encoding(struct kvm_ppc_rmmu_info *info,
				 int psize, int *indexp)
{
	if (!mmu_psize_defs[psize].shift)
		return;
	info->ap_encodings[*indexp] = mmu_psize_defs[psize].shift |
		(mmu_psize_defs[psize].ap << 29);
	++(*indexp);
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
          int psize = 100;
          int _len_info0 = 1;
          struct kvm_ppc_rmmu_info * info = (struct kvm_ppc_rmmu_info *) malloc(_len_info0*sizeof(struct kvm_ppc_rmmu_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__ap_encodings0 = 1;
          info[_i0].ap_encodings = (int *) malloc(_len_info__i0__ap_encodings0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__ap_encodings0; _j0++) {
            info[_i0].ap_encodings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indexp0 = 1;
          int * indexp = (int *) malloc(_len_indexp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexp0; _i0++) {
            indexp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_rmmu_ap_encoding(info,psize,indexp);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ap_encodings);
          }
          free(info);
          free(indexp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int psize = 255;
          int _len_info0 = 65025;
          struct kvm_ppc_rmmu_info * info = (struct kvm_ppc_rmmu_info *) malloc(_len_info0*sizeof(struct kvm_ppc_rmmu_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__ap_encodings0 = 1;
          info[_i0].ap_encodings = (int *) malloc(_len_info__i0__ap_encodings0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__ap_encodings0; _j0++) {
            info[_i0].ap_encodings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indexp0 = 65025;
          int * indexp = (int *) malloc(_len_indexp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexp0; _i0++) {
            indexp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_rmmu_ap_encoding(info,psize,indexp);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ap_encodings);
          }
          free(info);
          free(indexp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int psize = 10;
          int _len_info0 = 100;
          struct kvm_ppc_rmmu_info * info = (struct kvm_ppc_rmmu_info *) malloc(_len_info0*sizeof(struct kvm_ppc_rmmu_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__ap_encodings0 = 1;
          info[_i0].ap_encodings = (int *) malloc(_len_info__i0__ap_encodings0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__ap_encodings0; _j0++) {
            info[_i0].ap_encodings[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_indexp0 = 100;
          int * indexp = (int *) malloc(_len_indexp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indexp0; _i0++) {
            indexp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_rmmu_ap_encoding(info,psize,indexp);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ap_encodings);
          }
          free(info);
          free(indexp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

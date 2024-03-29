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
struct s390_io_adapter {int dummy; } ;
struct TYPE_2__ {struct s390_io_adapter** adapters; } ;
struct kvm {TYPE_1__ arch; } ;

/* Variables and functions */
 unsigned int MAX_S390_IO_ADAPTERS ; 

__attribute__((used)) static struct s390_io_adapter *get_io_adapter(struct kvm *kvm, unsigned int id)
{
	if (id >= MAX_S390_IO_ADAPTERS)
		return NULL;
	return kvm->arch.adapters[id];
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
          unsigned int id = 100;
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_adapters0 = 1;
          kvm[_i0].arch.adapters = (struct s390_io_adapter **) malloc(_len_kvm__i0__arch_adapters0*sizeof(struct s390_io_adapter *));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_adapters0; _j0++) {
            int _len_kvm__i0__arch_adapters1 = 1;
            kvm[_i0].arch.adapters[_j0] = (struct s390_io_adapter *) malloc(_len_kvm__i0__arch_adapters1*sizeof(struct s390_io_adapter));
            for(int _j1 = 0; _j1 < _len_kvm__i0__arch_adapters1; _j1++) {
              kvm[_i0].arch.adapters[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct s390_io_adapter * benchRet = get_io_adapter(kvm,id);
          printf("%d\n", (*benchRet).dummy);
          free(kvm);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int id = 255;
          int _len_kvm0 = 65025;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_adapters0 = 1;
          kvm[_i0].arch.adapters = (struct s390_io_adapter **) malloc(_len_kvm__i0__arch_adapters0*sizeof(struct s390_io_adapter *));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_adapters0; _j0++) {
            int _len_kvm__i0__arch_adapters1 = 1;
            kvm[_i0].arch.adapters[_j0] = (struct s390_io_adapter *) malloc(_len_kvm__i0__arch_adapters1*sizeof(struct s390_io_adapter));
            for(int _j1 = 0; _j1 < _len_kvm__i0__arch_adapters1; _j1++) {
              kvm[_i0].arch.adapters[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct s390_io_adapter * benchRet = get_io_adapter(kvm,id);
          printf("%d\n", (*benchRet).dummy);
          free(kvm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int id = 10;
          int _len_kvm0 = 100;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_adapters0 = 1;
          kvm[_i0].arch.adapters = (struct s390_io_adapter **) malloc(_len_kvm__i0__arch_adapters0*sizeof(struct s390_io_adapter *));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_adapters0; _j0++) {
            int _len_kvm__i0__arch_adapters1 = 1;
            kvm[_i0].arch.adapters[_j0] = (struct s390_io_adapter *) malloc(_len_kvm__i0__arch_adapters1*sizeof(struct s390_io_adapter));
            for(int _j1 = 0; _j1 < _len_kvm__i0__arch_adapters1; _j1++) {
              kvm[_i0].arch.adapters[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct s390_io_adapter * benchRet = get_io_adapter(kvm,id);
          printf("%d\n", (*benchRet).dummy);
          free(kvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

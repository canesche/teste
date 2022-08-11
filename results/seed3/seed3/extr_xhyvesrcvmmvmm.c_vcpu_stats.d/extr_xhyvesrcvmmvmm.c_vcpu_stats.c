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
struct vm {TYPE_1__* vcpu; } ;
struct TYPE_2__ {void* stats; } ;

/* Variables and functions */

void *
vcpu_stats(struct vm *vm, int vcpuid)
{

	return (vm->vcpu[vcpuid].stats);
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
          int vcpuid = 100;
          int _len_vm0 = 1;
          struct vm * vm = (struct vm *) malloc(_len_vm0*sizeof(struct vm));
          for(int _i0 = 0; _i0 < _len_vm0; _i0++) {
              int _len_vm__i0__vcpu0 = 1;
          vm[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_vm__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vm__i0__vcpu0; _j0++) {
              }
          }
          void * benchRet = vcpu_stats(vm,vcpuid);
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].vcpu);
          }
          free(vm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vcpuid = 255;
          int _len_vm0 = 65025;
          struct vm * vm = (struct vm *) malloc(_len_vm0*sizeof(struct vm));
          for(int _i0 = 0; _i0 < _len_vm0; _i0++) {
              int _len_vm__i0__vcpu0 = 1;
          vm[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_vm__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vm__i0__vcpu0; _j0++) {
              }
          }
          void * benchRet = vcpu_stats(vm,vcpuid);
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].vcpu);
          }
          free(vm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vcpuid = 10;
          int _len_vm0 = 100;
          struct vm * vm = (struct vm *) malloc(_len_vm0*sizeof(struct vm));
          for(int _i0 = 0; _i0 < _len_vm0; _i0++) {
              int _len_vm__i0__vcpu0 = 1;
          vm[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_vm__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vm__i0__vcpu0; _j0++) {
              }
          }
          void * benchRet = vcpu_stats(vm,vcpuid);
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].vcpu);
          }
          free(vm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_3__ {int apic_base; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;

/* Variables and functions */
 int X2APIC_ENABLE ; 

__attribute__((used)) static inline int apic_x2apic_mode(struct kvm_lapic *apic)
{
	return apic->vcpu->arch.apic_base & X2APIC_ENABLE;
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
          int _len_apic0 = 1;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_4__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->arch.apic_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = apic_x2apic_mode(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_apic0 = 65025;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_4__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->arch.apic_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = apic_x2apic_mode(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_apic0 = 100;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_4__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->arch.apic_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = apic_x2apic_mode(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint64_t ;
struct vcpu {int exc_vector; scalar_t__ exc_errcode; scalar_t__ exc_errcode_valid; scalar_t__ exception_pending; } ;

/* Variables and functions */
 int VM_INTINFO_DEL_ERRCODE ; 
 int VM_INTINFO_HWEXCEPTION ; 
 int VM_INTINFO_VALID ; 

__attribute__((used)) static uint64_t
vcpu_exception_intinfo(struct vcpu *vcpu)
{
	uint64_t info = 0;

	if (vcpu->exception_pending) {
		info = vcpu->exc_vector & 0xff;
		info |= VM_INTINFO_VALID | VM_INTINFO_HWEXCEPTION;
		if (vcpu->exc_errcode_valid) {
			info |= VM_INTINFO_DEL_ERRCODE;
			info |= (uint64_t)vcpu->exc_errcode << 32;
		}
	}
	return (info);
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
          int _len_vcpu0 = 1;
          struct vcpu * vcpu = (struct vcpu *) malloc(_len_vcpu0*sizeof(struct vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].exc_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exception_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vcpu_exception_intinfo(vcpu);
          printf("%d\n", benchRet); 
          free(vcpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct vcpu * vcpu = (struct vcpu *) malloc(_len_vcpu0*sizeof(struct vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].exc_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exception_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vcpu_exception_intinfo(vcpu);
          printf("%d\n", benchRet); 
          free(vcpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct vcpu * vcpu = (struct vcpu *) malloc(_len_vcpu0*sizeof(struct vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].exc_vector = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exc_errcode_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].exception_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vcpu_exception_intinfo(vcpu);
          printf("%d\n", benchRet); 
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

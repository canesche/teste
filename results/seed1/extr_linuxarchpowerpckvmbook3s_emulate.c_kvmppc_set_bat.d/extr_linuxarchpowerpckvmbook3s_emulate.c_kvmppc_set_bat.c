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
typedef  int u64 ;
typedef  int u32 ;
struct kvmppc_bat {int bepi_mask; int bepi; int vs; int vp; int raw; int brpn; int wimg; int pp; } ;
struct kvm_vcpu {int dummy; } ;

/* Variables and functions */

void kvmppc_set_bat(struct kvm_vcpu *vcpu, struct kvmppc_bat *bat, bool upper,
                    u32 val)
{
	if (upper) {
		/* Upper BAT */
		u32 bl = (val >> 2) & 0x7ff;
		bat->bepi_mask = (~bl << 17);
		bat->bepi = val & 0xfffe0000;
		bat->vs = (val & 2) ? 1 : 0;
		bat->vp = (val & 1) ? 1 : 0;
		bat->raw = (bat->raw & 0xffffffff00000000ULL) | val;
	} else {
		/* Lower BAT */
		bat->brpn = val & 0xfffe0000;
		bat->wimg = (val >> 3) & 0xf;
		bat->pp = val & 3;
		bat->raw = (bat->raw & 0x00000000ffffffffULL) | ((u64)val << 32);
	}
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
          int upper = 100;
          int val = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bat0 = 1;
          struct kvmppc_bat * bat = (struct kvmppc_bat *) malloc(_len_bat0*sizeof(struct kvmppc_bat));
          for(int _i0 = 0; _i0 < _len_bat0; _i0++) {
            bat[_i0].bepi_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].bepi = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vs = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vp = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].raw = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].brpn = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].wimg = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].pp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvmppc_set_bat(vcpu,bat,upper,val);
          free(vcpu);
          free(bat);
        
        break;
    }
    // big-arr
    case 1:
    {
          int upper = 255;
          int val = 255;
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bat0 = 65025;
          struct kvmppc_bat * bat = (struct kvmppc_bat *) malloc(_len_bat0*sizeof(struct kvmppc_bat));
          for(int _i0 = 0; _i0 < _len_bat0; _i0++) {
            bat[_i0].bepi_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].bepi = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vs = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vp = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].raw = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].brpn = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].wimg = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].pp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvmppc_set_bat(vcpu,bat,upper,val);
          free(vcpu);
          free(bat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int upper = 10;
          int val = 10;
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bat0 = 100;
          struct kvmppc_bat * bat = (struct kvmppc_bat *) malloc(_len_bat0*sizeof(struct kvmppc_bat));
          for(int _i0 = 0; _i0 < _len_bat0; _i0++) {
            bat[_i0].bepi_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].bepi = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vs = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].vp = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].raw = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].brpn = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].wimg = ((-2 * (next_i()%2)) + 1) * next_i();
        bat[_i0].pp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvmppc_set_bat(vcpu,bat,upper,val);
          free(vcpu);
          free(bat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

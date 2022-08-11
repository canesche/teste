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
typedef  int u64 ;
typedef  size_t u32 ;
struct kvm_ioapic {int ioregsel; int id; TYPE_1__* redirtbl; } ;
struct TYPE_2__ {int bits; } ;

/* Variables and functions */
 size_t IOAPIC_NUM_PINS ; 
#define  IOAPIC_REG_APIC_ID 130 
#define  IOAPIC_REG_ARB_ID 129 
#define  IOAPIC_REG_VERSION 128 
 int IOAPIC_VERSION_ID ; 

__attribute__((used)) static unsigned long ioapic_read_indirect(struct kvm_ioapic *ioapic,
					  unsigned long addr,
					  unsigned long length)
{
	unsigned long result = 0;

	switch (ioapic->ioregsel) {
	case IOAPIC_REG_VERSION:
		result = ((((IOAPIC_NUM_PINS - 1) & 0xff) << 16)
			  | (IOAPIC_VERSION_ID & 0xff));
		break;

	case IOAPIC_REG_APIC_ID:
	case IOAPIC_REG_ARB_ID:
		result = ((ioapic->id & 0xf) << 24);
		break;

	default:
		{
			u32 redir_index = (ioapic->ioregsel - 0x10) >> 1;
			u64 redir_content;

			if (redir_index < IOAPIC_NUM_PINS)
				redir_content =
					ioapic->redirtbl[redir_index].bits;
			else
				redir_content = ~0ULL;

			result = (ioapic->ioregsel & 0x1) ?
			    (redir_content >> 32) & 0xffffffff :
			    redir_content & 0xffffffff;
			break;
		}
	}

	return result;
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
          unsigned long addr = 100;
          unsigned long length = 100;
          int _len_ioapic0 = 1;
          struct kvm_ioapic * ioapic = (struct kvm_ioapic *) malloc(_len_ioapic0*sizeof(struct kvm_ioapic));
          for(int _i0 = 0; _i0 < _len_ioapic0; _i0++) {
            ioapic[_i0].ioregsel = ((-2 * (next_i()%2)) + 1) * next_i();
        ioapic[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioapic__i0__redirtbl0 = 1;
          ioapic[_i0].redirtbl = (struct TYPE_2__ *) malloc(_len_ioapic__i0__redirtbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioapic__i0__redirtbl0; _j0++) {
            ioapic[_i0].redirtbl->bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = ioapic_read_indirect(ioapic,addr,length);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ioapic0; _aux++) {
          free(ioapic[_aux].redirtbl);
          }
          free(ioapic);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long addr = 255;
          unsigned long length = 255;
          int _len_ioapic0 = 65025;
          struct kvm_ioapic * ioapic = (struct kvm_ioapic *) malloc(_len_ioapic0*sizeof(struct kvm_ioapic));
          for(int _i0 = 0; _i0 < _len_ioapic0; _i0++) {
            ioapic[_i0].ioregsel = ((-2 * (next_i()%2)) + 1) * next_i();
        ioapic[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioapic__i0__redirtbl0 = 1;
          ioapic[_i0].redirtbl = (struct TYPE_2__ *) malloc(_len_ioapic__i0__redirtbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioapic__i0__redirtbl0; _j0++) {
            ioapic[_i0].redirtbl->bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = ioapic_read_indirect(ioapic,addr,length);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ioapic0; _aux++) {
          free(ioapic[_aux].redirtbl);
          }
          free(ioapic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long addr = 10;
          unsigned long length = 10;
          int _len_ioapic0 = 100;
          struct kvm_ioapic * ioapic = (struct kvm_ioapic *) malloc(_len_ioapic0*sizeof(struct kvm_ioapic));
          for(int _i0 = 0; _i0 < _len_ioapic0; _i0++) {
            ioapic[_i0].ioregsel = ((-2 * (next_i()%2)) + 1) * next_i();
        ioapic[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioapic__i0__redirtbl0 = 1;
          ioapic[_i0].redirtbl = (struct TYPE_2__ *) malloc(_len_ioapic__i0__redirtbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioapic__i0__redirtbl0; _j0++) {
            ioapic[_i0].redirtbl->bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = ioapic_read_indirect(ioapic,addr,length);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ioapic0; _aux++) {
          free(ioapic[_aux].redirtbl);
          }
          free(ioapic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

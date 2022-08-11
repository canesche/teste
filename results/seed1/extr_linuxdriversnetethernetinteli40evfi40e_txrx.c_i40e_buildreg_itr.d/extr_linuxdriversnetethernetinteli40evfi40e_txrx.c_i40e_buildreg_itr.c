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
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */
 int I40E_ITR_MASK ; 
 int const I40E_VFINT_DYN_CTLN1_INTENA_MASK ; 
 int I40E_VFINT_DYN_CTLN1_INTERVAL_SHIFT ; 
 int const I40E_VFINT_DYN_CTLN1_ITR_INDX_SHIFT ; 

__attribute__((used)) static inline u32 i40e_buildreg_itr(const int type, u16 itr)
{
	u32 val;

	/* We don't bother with setting the CLEARPBA bit as the data sheet
	 * points out doing so is "meaningless since it was already
	 * auto-cleared". The auto-clearing happens when the interrupt is
	 * asserted.
	 *
	 * Hardware errata 28 for also indicates that writing to a
	 * xxINT_DYN_CTLx CSR with INTENA_MSK (bit 31) set to 0 will clear
	 * an event in the PBA anyway so we need to rely on the automask
	 * to hold pending events for us until the interrupt is re-enabled
	 *
	 * The itr value is reported in microseconds, and the register
	 * value is recorded in 2 microsecond units. For this reason we
	 * only need to shift by the interval shift - 1 instead of the
	 * full value.
	 */
	itr &= I40E_ITR_MASK;

	val = I40E_VFINT_DYN_CTLN1_INTENA_MASK |
	      (type << I40E_VFINT_DYN_CTLN1_ITR_INDX_SHIFT) |
	      (itr << (I40E_VFINT_DYN_CTLN1_INTERVAL_SHIFT - 1));

	return val;
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
          const int type = 100;
          int itr = 100;
          int benchRet = i40e_buildreg_itr(type,itr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int type = 255;
          int itr = 255;
          int benchRet = i40e_buildreg_itr(type,itr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int type = 10;
          int itr = 10;
          int benchRet = i40e_buildreg_itr(type,itr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

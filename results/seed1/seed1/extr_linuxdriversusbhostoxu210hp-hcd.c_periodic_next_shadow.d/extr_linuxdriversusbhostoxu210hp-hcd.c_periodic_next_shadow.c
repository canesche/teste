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
union ehci_shadow {TYPE_1__* qh; } ;
typedef  int __le32 ;
struct TYPE_2__ {union ehci_shadow qh_next; } ;

/* Variables and functions */
#define  Q_TYPE_QH 128 

__attribute__((used)) static union ehci_shadow *periodic_next_shadow(union ehci_shadow *periodic,
						__le32 tag)
{
	switch (tag) {
	default:
	case Q_TYPE_QH:
		return &periodic->qh->qh_next;
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
          int tag = 100;
          int _len_periodic0 = 1;
          union ehci_shadow * periodic = (union ehci_shadow *) malloc(_len_periodic0*sizeof(union ehci_shadow));
          for(int _i0 = 0; _i0 < _len_periodic0; _i0++) {
            periodic[_i0] = 0;
          }
          union ehci_shadow * benchRet = periodic_next_shadow(periodic,tag);
          free(periodic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int _len_periodic0 = 65025;
          union ehci_shadow * periodic = (union ehci_shadow *) malloc(_len_periodic0*sizeof(union ehci_shadow));
          for(int _i0 = 0; _i0 < _len_periodic0; _i0++) {
            periodic[_i0] = 0;
          }
          union ehci_shadow * benchRet = periodic_next_shadow(periodic,tag);
          free(periodic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int _len_periodic0 = 100;
          union ehci_shadow * periodic = (union ehci_shadow *) malloc(_len_periodic0*sizeof(union ehci_shadow));
          for(int _i0 = 0; _i0 < _len_periodic0; _i0++) {
            periodic[_i0] = 0;
          }
          union ehci_shadow * benchRet = periodic_next_shadow(periodic,tag);
          free(periodic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

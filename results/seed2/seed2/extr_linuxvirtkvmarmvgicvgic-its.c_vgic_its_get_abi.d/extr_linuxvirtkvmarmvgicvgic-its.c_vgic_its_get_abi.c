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
struct vgic_its_abi {int dummy; } ;
struct vgic_its {size_t abi_rev; } ;

/* Variables and functions */
 struct vgic_its_abi const* its_table_abi_versions ; 

inline const struct vgic_its_abi *vgic_its_get_abi(struct vgic_its *its)
{
	return &its_table_abi_versions[its->abi_rev];
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
          int _len_its0 = 1;
          struct vgic_its * its = (struct vgic_its *) malloc(_len_its0*sizeof(struct vgic_its));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
            its[_i0].abi_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct vgic_its_abi * benchRet = vgic_its_get_abi(its);
          free(its);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_its0 = 65025;
          struct vgic_its * its = (struct vgic_its *) malloc(_len_its0*sizeof(struct vgic_its));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
            its[_i0].abi_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct vgic_its_abi * benchRet = vgic_its_get_abi(its);
          free(its);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_its0 = 100;
          struct vgic_its * its = (struct vgic_its *) malloc(_len_its0*sizeof(struct vgic_its));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
            its[_i0].abi_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct vgic_its_abi * benchRet = vgic_its_get_abi(its);
          free(its);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

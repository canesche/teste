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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vfs_attr {int f_supported; } ;
struct getvolattrlist_attrtab {scalar_t__ attr; int bits; } ;
struct TYPE_3__ {int commonattr; int volattr; } ;
typedef  TYPE_1__ attribute_set_t ;

/* Variables and functions */
 struct getvolattrlist_attrtab* getvolattrlist_common_tab ; 
 struct getvolattrlist_attrtab* getvolattrlist_vol_tab ; 

__attribute__((used)) static void
getvolattrlist_fixupattrs(attribute_set_t *asp, struct vfs_attr *vsp)
{
	struct getvolattrlist_attrtab *tab;

	if (asp->commonattr) {
		tab = getvolattrlist_common_tab;
		do {
			if ((tab->attr & asp->commonattr) &&
			    (tab->bits != 0) &&
			    ((tab->bits & vsp->f_supported) == 0)) {
				asp->commonattr &= ~tab->attr;
			}
		} while ((++tab)->attr != 0);
	}
	if (asp->volattr) {
		tab = getvolattrlist_vol_tab;
		do {
			if ((tab->attr & asp->volattr) &&
			    (tab->bits != 0) &&
			    ((tab->bits & vsp->f_supported) == 0)) {
				asp->volattr &= ~tab->attr;
			}
		} while ((++tab)->attr != 0);
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
          int _len_asp0 = 1;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].volattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsp0 = 1;
          struct vfs_attr * vsp = (struct vfs_attr *) malloc(_len_vsp0*sizeof(struct vfs_attr));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
            vsp[_i0].f_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getvolattrlist_fixupattrs(asp,vsp);
          free(asp);
          free(vsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_asp0 = 65025;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].volattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsp0 = 65025;
          struct vfs_attr * vsp = (struct vfs_attr *) malloc(_len_vsp0*sizeof(struct vfs_attr));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
            vsp[_i0].f_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getvolattrlist_fixupattrs(asp,vsp);
          free(asp);
          free(vsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_asp0 = 100;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].volattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsp0 = 100;
          struct vfs_attr * vsp = (struct vfs_attr *) malloc(_len_vsp0*sizeof(struct vfs_attr));
          for(int _i0 = 0; _i0 < _len_vsp0; _i0++) {
            vsp[_i0].f_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getvolattrlist_fixupattrs(asp,vsp);
          free(asp);
          free(vsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

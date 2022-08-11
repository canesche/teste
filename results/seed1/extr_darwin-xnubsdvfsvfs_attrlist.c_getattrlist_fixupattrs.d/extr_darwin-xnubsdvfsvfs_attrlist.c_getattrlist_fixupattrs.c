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
struct vnode_attr {int va_active; int va_supported; } ;
struct getattrlist_attrtab {scalar_t__ attr; int bits; } ;
struct TYPE_3__ {int commonattr; int dirattr; int fileattr; int forkattr; } ;
typedef  TYPE_1__ attribute_set_t ;

/* Variables and functions */
 struct getattrlist_attrtab* getattrlist_common_extended_tab ; 
 struct getattrlist_attrtab* getattrlist_common_tab ; 
 struct getattrlist_attrtab* getattrlist_dir_tab ; 
 struct getattrlist_attrtab* getattrlist_file_tab ; 

__attribute__((used)) static void
getattrlist_fixupattrs(attribute_set_t *asp, struct vnode_attr *vap, int use_fork)
{
	struct getattrlist_attrtab *tab;

	if (asp->commonattr) {
		tab = getattrlist_common_tab;
		do {
            /* 
			 * This if() statement is slightly confusing. We're trying to
			 * iterate through all of the bits listed in the array 
			 * getattr_common_tab, and see if the filesystem was expected
			 * to support it, and whether or not we need to do anything about this.
			 * 
			 * This array is full of structs that have 4 fields (attr, bits, size, action).
			 * The first is used to store the ATTR_CMN_* bit that was being requested 
			 * from userland.  The second stores the VATTR_BIT corresponding to the field
			 * filled in vnode_attr struct.  If it is 0, then we don't typically expect
			 * the filesystem to fill in this field.  The third is the size of the field,
			 * and the fourth is the type of kauth actions needed.
			 *
			 * So, for all of the ATTR_CMN bits listed in this array, we iterate through 
			 * them, and check to see if it was both passed down to the filesystem via the
			 * va_active bitfield, and whether or not we expect it to be emitted from
			 * the filesystem.  If it wasn't supported, then we un-twiddle the bit and move
			 * on.  This is done so that we can uncheck those bits and re-request
			 * a vnode_getattr from the filesystem again.
			 */
			if ((tab->attr & asp->commonattr) &&
			    (tab->bits & vap->va_active) &&
			    (tab->bits & vap->va_supported) == 0) {
				asp->commonattr &= ~tab->attr;
			}
		} while ((++tab)->attr != 0);
	}
	if (asp->dirattr) {
		tab = getattrlist_dir_tab;
		do {
			if ((tab->attr & asp->dirattr) &&
			    (tab->bits & vap->va_active) &&
			    (vap->va_supported & tab->bits) == 0) {
				asp->dirattr &= ~tab->attr;
			}
		} while ((++tab)->attr != 0);
	}
	if (asp->fileattr) {
		tab = getattrlist_file_tab;
		do {
			if ((tab->attr & asp->fileattr) &&
			    (tab->bits & vap->va_active) &&
			    (vap->va_supported & tab->bits) == 0) {
				asp->fileattr &= ~tab->attr;
			}
		} while ((++tab)->attr != 0);
	}
	if (use_fork && asp->forkattr) {
		tab = getattrlist_common_extended_tab;
		do {
			if ((tab->attr & asp->forkattr) &&
			    (tab->bits & vap->va_active) &&
			    (vap->va_supported & tab->bits) == 0) {
				asp->forkattr &= ~tab->attr;
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
          int use_fork = 100;
          int _len_asp0 = 1;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].dirattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].fileattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].forkattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vap0 = 1;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
            vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        vap[_i0].va_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_fixupattrs(asp,vap,use_fork);
          free(asp);
          free(vap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int use_fork = 255;
          int _len_asp0 = 65025;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].dirattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].fileattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].forkattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vap0 = 65025;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
            vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        vap[_i0].va_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_fixupattrs(asp,vap,use_fork);
          free(asp);
          free(vap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int use_fork = 10;
          int _len_asp0 = 100;
          struct TYPE_3__ * asp = (struct TYPE_3__ *) malloc(_len_asp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_asp0; _i0++) {
            asp[_i0].commonattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].dirattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].fileattr = ((-2 * (next_i()%2)) + 1) * next_i();
        asp[_i0].forkattr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vap0 = 100;
          struct vnode_attr * vap = (struct vnode_attr *) malloc(_len_vap0*sizeof(struct vnode_attr));
          for(int _i0 = 0; _i0 < _len_vap0; _i0++) {
            vap[_i0].va_active = ((-2 * (next_i()%2)) + 1) * next_i();
        vap[_i0].va_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          getattrlist_fixupattrs(asp,vap,use_fork);
          free(asp);
          free(vap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

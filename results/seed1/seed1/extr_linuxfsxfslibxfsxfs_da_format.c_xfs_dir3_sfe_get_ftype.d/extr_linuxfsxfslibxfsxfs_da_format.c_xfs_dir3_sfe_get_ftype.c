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
typedef  scalar_t__ uint8_t ;
struct xfs_dir2_sf_entry {scalar_t__* name; size_t namelen; } ;

/* Variables and functions */
 scalar_t__ XFS_DIR3_FT_MAX ; 
 scalar_t__ XFS_DIR3_FT_UNKNOWN ; 

__attribute__((used)) static uint8_t
xfs_dir3_sfe_get_ftype(
	struct xfs_dir2_sf_entry *sfep)
{
	uint8_t		ftype;

	ftype = sfep->name[sfep->namelen];
	if (ftype >= XFS_DIR3_FT_MAX)
		return XFS_DIR3_FT_UNKNOWN;
	return ftype;
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
          int _len_sfep0 = 1;
          struct xfs_dir2_sf_entry * sfep = (struct xfs_dir2_sf_entry *) malloc(_len_sfep0*sizeof(struct xfs_dir2_sf_entry));
          for(int _i0 = 0; _i0 < _len_sfep0; _i0++) {
              int _len_sfep__i0__name0 = 1;
          sfep[_i0].name = (long *) malloc(_len_sfep__i0__name0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sfep__i0__name0; _j0++) {
            sfep[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sfep[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = xfs_dir3_sfe_get_ftype(sfep);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sfep0; _aux++) {
          free(sfep[_aux].name);
          }
          free(sfep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sfep0 = 65025;
          struct xfs_dir2_sf_entry * sfep = (struct xfs_dir2_sf_entry *) malloc(_len_sfep0*sizeof(struct xfs_dir2_sf_entry));
          for(int _i0 = 0; _i0 < _len_sfep0; _i0++) {
              int _len_sfep__i0__name0 = 1;
          sfep[_i0].name = (long *) malloc(_len_sfep__i0__name0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sfep__i0__name0; _j0++) {
            sfep[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sfep[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = xfs_dir3_sfe_get_ftype(sfep);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sfep0; _aux++) {
          free(sfep[_aux].name);
          }
          free(sfep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sfep0 = 100;
          struct xfs_dir2_sf_entry * sfep = (struct xfs_dir2_sf_entry *) malloc(_len_sfep0*sizeof(struct xfs_dir2_sf_entry));
          for(int _i0 = 0; _i0 < _len_sfep0; _i0++) {
              int _len_sfep__i0__name0 = 1;
          sfep[_i0].name = (long *) malloc(_len_sfep__i0__name0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sfep__i0__name0; _j0++) {
            sfep[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sfep[_i0].namelen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = xfs_dir3_sfe_get_ftype(sfep);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sfep0; _aux++) {
          free(sfep[_aux].name);
          }
          free(sfep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

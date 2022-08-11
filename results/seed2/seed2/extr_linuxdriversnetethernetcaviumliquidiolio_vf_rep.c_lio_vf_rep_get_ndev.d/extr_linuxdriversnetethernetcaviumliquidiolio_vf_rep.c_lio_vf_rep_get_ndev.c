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
struct TYPE_2__ {struct net_device** ndev; } ;
struct octeon_device {int pf_num; TYPE_1__ vf_rep_list; } ;
struct net_device {int dummy; } ;

/* Variables and functions */
 int CN23XX_MAX_VFS_PER_PF ; 

__attribute__((used)) static struct net_device *
lio_vf_rep_get_ndev(struct octeon_device *oct, int ifidx)
{
	int vf_id, max_vfs = CN23XX_MAX_VFS_PER_PF + 1;
	int vfid_mask = max_vfs - 1;

	if (ifidx <= oct->pf_num * max_vfs ||
	    ifidx >= oct->pf_num * max_vfs + max_vfs)
		return NULL;

	/* ifidx 1-63 for PF0 VFs
	 * ifidx 65-127 for PF1 VFs
	 */
	vf_id = (ifidx & vfid_mask) - 1;

	return oct->vf_rep_list.ndev[vf_id];
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
          int ifidx = 100;
          int _len_oct0 = 1;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_oct__i0__vf_rep_list_ndev0 = 1;
          oct[_i0].vf_rep_list.ndev = (struct net_device **) malloc(_len_oct__i0__vf_rep_list_ndev0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_oct__i0__vf_rep_list_ndev0; _j0++) {
            int _len_oct__i0__vf_rep_list_ndev1 = 1;
            oct[_i0].vf_rep_list.ndev[_j0] = (struct net_device *) malloc(_len_oct__i0__vf_rep_list_ndev1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_oct__i0__vf_rep_list_ndev1; _j1++) {
              oct[_i0].vf_rep_list.ndev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct net_device * benchRet = lio_vf_rep_get_ndev(oct,ifidx);
          printf("%d\n", (*benchRet).dummy);
          free(oct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ifidx = 255;
          int _len_oct0 = 65025;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_oct__i0__vf_rep_list_ndev0 = 1;
          oct[_i0].vf_rep_list.ndev = (struct net_device **) malloc(_len_oct__i0__vf_rep_list_ndev0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_oct__i0__vf_rep_list_ndev0; _j0++) {
            int _len_oct__i0__vf_rep_list_ndev1 = 1;
            oct[_i0].vf_rep_list.ndev[_j0] = (struct net_device *) malloc(_len_oct__i0__vf_rep_list_ndev1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_oct__i0__vf_rep_list_ndev1; _j1++) {
              oct[_i0].vf_rep_list.ndev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct net_device * benchRet = lio_vf_rep_get_ndev(oct,ifidx);
          printf("%d\n", (*benchRet).dummy);
          free(oct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ifidx = 10;
          int _len_oct0 = 100;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_oct__i0__vf_rep_list_ndev0 = 1;
          oct[_i0].vf_rep_list.ndev = (struct net_device **) malloc(_len_oct__i0__vf_rep_list_ndev0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_oct__i0__vf_rep_list_ndev0; _j0++) {
            int _len_oct__i0__vf_rep_list_ndev1 = 1;
            oct[_i0].vf_rep_list.ndev[_j0] = (struct net_device *) malloc(_len_oct__i0__vf_rep_list_ndev1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_oct__i0__vf_rep_list_ndev1; _j1++) {
              oct[_i0].vf_rep_list.ndev[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct net_device * benchRet = lio_vf_rep_get_ndev(oct,ifidx);
          printf("%d\n", (*benchRet).dummy);
          free(oct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

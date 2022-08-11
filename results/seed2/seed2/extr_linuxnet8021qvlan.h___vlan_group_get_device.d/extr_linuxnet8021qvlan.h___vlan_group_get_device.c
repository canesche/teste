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
typedef  size_t u16 ;
struct vlan_group {struct net_device**** vlan_devices_arrays; } ;
struct net_device {int dummy; } ;

/* Variables and functions */
 size_t VLAN_GROUP_ARRAY_PART_LEN ; 

__attribute__((used)) static inline struct net_device *__vlan_group_get_device(struct vlan_group *vg,
							 unsigned int pidx,
							 u16 vlan_id)
{
	struct net_device **array;

	array = vg->vlan_devices_arrays[pidx]
				       [vlan_id / VLAN_GROUP_ARRAY_PART_LEN];
	return array ? array[vlan_id % VLAN_GROUP_ARRAY_PART_LEN] : NULL;
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
          unsigned int pidx = 100;
          unsigned long vlan_id = 100;
          int _len_vg0 = 1;
          struct vlan_group * vg = (struct vlan_group *) malloc(_len_vg0*sizeof(struct vlan_group));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__vlan_devices_arrays0 = 1;
          vg[_i0].vlan_devices_arrays = (struct net_device ****) malloc(_len_vg__i0__vlan_devices_arrays0*sizeof(struct net_device ***));
          for(int _j0 = 0; _j0 < _len_vg__i0__vlan_devices_arrays0; _j0++) {
            int _len_vg__i0__vlan_devices_arrays1 = 1;
            vg[_i0].vlan_devices_arrays[_j0] = (struct net_device ***) malloc(_len_vg__i0__vlan_devices_arrays1*sizeof(struct net_device **));
            for(int _j1 = 0; _j1 < _len_vg__i0__vlan_devices_arrays1; _j1++) {
              int _len_vg__i0__vlan_devices_arrays2 = 1;
              vg[_i0].vlan_devices_arrays[_j0][_j1] = (struct net_device **) malloc(_len_vg__i0__vlan_devices_arrays2*sizeof(struct net_device *));
              for(int _j2 = 0; _j2 < _len_vg__i0__vlan_devices_arrays2; _j2++) {
                int _len_vg__i0__vlan_devices_arrays3 = 1;
                vg[_i0].vlan_devices_arrays[_j0][_j1][_j2] = (struct net_device *) malloc(_len_vg__i0__vlan_devices_arrays3*sizeof(struct net_device));
                for(int _j3 = 0; _j3 < _len_vg__i0__vlan_devices_arrays3; _j3++) {
                  vg[_i0].vlan_devices_arrays[_j0][_j1][_j2]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          }
          struct net_device * benchRet = __vlan_group_get_device(vg,pidx,vlan_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          }
          free(vg);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pidx = 255;
          unsigned long vlan_id = 255;
          int _len_vg0 = 65025;
          struct vlan_group * vg = (struct vlan_group *) malloc(_len_vg0*sizeof(struct vlan_group));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__vlan_devices_arrays0 = 1;
          vg[_i0].vlan_devices_arrays = (struct net_device ****) malloc(_len_vg__i0__vlan_devices_arrays0*sizeof(struct net_device ***));
          for(int _j0 = 0; _j0 < _len_vg__i0__vlan_devices_arrays0; _j0++) {
            int _len_vg__i0__vlan_devices_arrays1 = 1;
            vg[_i0].vlan_devices_arrays[_j0] = (struct net_device ***) malloc(_len_vg__i0__vlan_devices_arrays1*sizeof(struct net_device **));
            for(int _j1 = 0; _j1 < _len_vg__i0__vlan_devices_arrays1; _j1++) {
              int _len_vg__i0__vlan_devices_arrays2 = 1;
              vg[_i0].vlan_devices_arrays[_j0][_j1] = (struct net_device **) malloc(_len_vg__i0__vlan_devices_arrays2*sizeof(struct net_device *));
              for(int _j2 = 0; _j2 < _len_vg__i0__vlan_devices_arrays2; _j2++) {
                int _len_vg__i0__vlan_devices_arrays3 = 1;
                vg[_i0].vlan_devices_arrays[_j0][_j1][_j2] = (struct net_device *) malloc(_len_vg__i0__vlan_devices_arrays3*sizeof(struct net_device));
                for(int _j3 = 0; _j3 < _len_vg__i0__vlan_devices_arrays3; _j3++) {
                  vg[_i0].vlan_devices_arrays[_j0][_j1][_j2]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          }
          struct net_device * benchRet = __vlan_group_get_device(vg,pidx,vlan_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          }
          free(vg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pidx = 10;
          unsigned long vlan_id = 10;
          int _len_vg0 = 100;
          struct vlan_group * vg = (struct vlan_group *) malloc(_len_vg0*sizeof(struct vlan_group));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__vlan_devices_arrays0 = 1;
          vg[_i0].vlan_devices_arrays = (struct net_device ****) malloc(_len_vg__i0__vlan_devices_arrays0*sizeof(struct net_device ***));
          for(int _j0 = 0; _j0 < _len_vg__i0__vlan_devices_arrays0; _j0++) {
            int _len_vg__i0__vlan_devices_arrays1 = 1;
            vg[_i0].vlan_devices_arrays[_j0] = (struct net_device ***) malloc(_len_vg__i0__vlan_devices_arrays1*sizeof(struct net_device **));
            for(int _j1 = 0; _j1 < _len_vg__i0__vlan_devices_arrays1; _j1++) {
              int _len_vg__i0__vlan_devices_arrays2 = 1;
              vg[_i0].vlan_devices_arrays[_j0][_j1] = (struct net_device **) malloc(_len_vg__i0__vlan_devices_arrays2*sizeof(struct net_device *));
              for(int _j2 = 0; _j2 < _len_vg__i0__vlan_devices_arrays2; _j2++) {
                int _len_vg__i0__vlan_devices_arrays3 = 1;
                vg[_i0].vlan_devices_arrays[_j0][_j1][_j2] = (struct net_device *) malloc(_len_vg__i0__vlan_devices_arrays3*sizeof(struct net_device));
                for(int _j3 = 0; _j3 < _len_vg__i0__vlan_devices_arrays3; _j3++) {
                  vg[_i0].vlan_devices_arrays[_j0][_j1][_j2]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          }
          struct net_device * benchRet = __vlan_group_get_device(vg,pidx,vlan_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vg0; _aux++) {
          }
          free(vg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t vifi_t ;
struct net_device {int dummy; } ;
struct mlxsw_sp_mr_vif {struct net_device const* dev; } ;
struct mlxsw_sp_mr_table {struct mlxsw_sp_mr_vif* vifs; } ;

/* Variables and functions */
 size_t MAXVIFS ; 

__attribute__((used)) static struct mlxsw_sp_mr_vif *
mlxsw_sp_mr_dev_vif_lookup(struct mlxsw_sp_mr_table *mr_table,
			   const struct net_device *dev)
{
	vifi_t vif_index;

	for (vif_index = 0; vif_index < MAXVIFS; vif_index++)
		if (mr_table->vifs[vif_index].dev == dev)
			return &mr_table->vifs[vif_index];
	return NULL;
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
          int _len_mr_table0 = 1;
          struct mlxsw_sp_mr_table * mr_table = (struct mlxsw_sp_mr_table *) malloc(_len_mr_table0*sizeof(struct mlxsw_sp_mr_table));
          for(int _i0 = 0; _i0 < _len_mr_table0; _i0++) {
              int _len_mr_table__i0__vifs0 = 1;
          mr_table[_i0].vifs = (struct mlxsw_sp_mr_vif *) malloc(_len_mr_table__i0__vifs0*sizeof(struct mlxsw_sp_mr_vif));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs0; _j0++) {
              int _len_mr_table__i0__vifs_dev0 = 1;
          mr_table[_i0].vifs->dev = (const struct net_device *) malloc(_len_mr_table__i0__vifs_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs_dev0; _j0++) {
              }
          }
          }
          int _len_dev0 = 1;
          const struct net_device * dev = (const struct net_device *) malloc(_len_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              }
          struct mlxsw_sp_mr_vif * benchRet = mlxsw_sp_mr_dev_vif_lookup(mr_table,dev);
          for(int _aux = 0; _aux < _len_mr_table0; _aux++) {
          free(mr_table[_aux].vifs);
          }
          free(mr_table);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mr_table0 = 65025;
          struct mlxsw_sp_mr_table * mr_table = (struct mlxsw_sp_mr_table *) malloc(_len_mr_table0*sizeof(struct mlxsw_sp_mr_table));
          for(int _i0 = 0; _i0 < _len_mr_table0; _i0++) {
              int _len_mr_table__i0__vifs0 = 1;
          mr_table[_i0].vifs = (struct mlxsw_sp_mr_vif *) malloc(_len_mr_table__i0__vifs0*sizeof(struct mlxsw_sp_mr_vif));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs0; _j0++) {
              int _len_mr_table__i0__vifs_dev0 = 1;
          mr_table[_i0].vifs->dev = (const struct net_device *) malloc(_len_mr_table__i0__vifs_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs_dev0; _j0++) {
              }
          }
          }
          int _len_dev0 = 65025;
          const struct net_device * dev = (const struct net_device *) malloc(_len_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              }
          struct mlxsw_sp_mr_vif * benchRet = mlxsw_sp_mr_dev_vif_lookup(mr_table,dev);
          for(int _aux = 0; _aux < _len_mr_table0; _aux++) {
          free(mr_table[_aux].vifs);
          }
          free(mr_table);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mr_table0 = 100;
          struct mlxsw_sp_mr_table * mr_table = (struct mlxsw_sp_mr_table *) malloc(_len_mr_table0*sizeof(struct mlxsw_sp_mr_table));
          for(int _i0 = 0; _i0 < _len_mr_table0; _i0++) {
              int _len_mr_table__i0__vifs0 = 1;
          mr_table[_i0].vifs = (struct mlxsw_sp_mr_vif *) malloc(_len_mr_table__i0__vifs0*sizeof(struct mlxsw_sp_mr_vif));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs0; _j0++) {
              int _len_mr_table__i0__vifs_dev0 = 1;
          mr_table[_i0].vifs->dev = (const struct net_device *) malloc(_len_mr_table__i0__vifs_dev0*sizeof(const struct net_device));
          for(int _j0 = 0; _j0 < _len_mr_table__i0__vifs_dev0; _j0++) {
              }
          }
          }
          int _len_dev0 = 100;
          const struct net_device * dev = (const struct net_device *) malloc(_len_dev0*sizeof(const struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              }
          struct mlxsw_sp_mr_vif * benchRet = mlxsw_sp_mr_dev_vif_lookup(mr_table,dev);
          for(int _aux = 0; _aux < _len_mr_table0; _aux++) {
          free(mr_table[_aux].vifs);
          }
          free(mr_table);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

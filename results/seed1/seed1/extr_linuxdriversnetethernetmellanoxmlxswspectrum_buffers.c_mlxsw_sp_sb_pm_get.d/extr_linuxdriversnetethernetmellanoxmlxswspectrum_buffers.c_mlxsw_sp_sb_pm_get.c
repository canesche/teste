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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct mlxsw_sp_sb_pm {int dummy; } ;
struct mlxsw_sp {TYPE_2__* sb; } ;
typedef  enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
struct TYPE_4__ {TYPE_1__* ports; } ;
struct TYPE_3__ {struct mlxsw_sp_sb_pm** pms; } ;

/* Variables and functions */

__attribute__((used)) static struct mlxsw_sp_sb_pm *mlxsw_sp_sb_pm_get(struct mlxsw_sp *mlxsw_sp,
						 u8 local_port, u8 pool,
						 enum mlxsw_reg_sbxx_dir dir)
{
	return &mlxsw_sp->sb->ports[local_port].pms[dir][pool];
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
          unsigned long local_port = 100;
          unsigned long pool = 100;
          enum mlxsw_reg_sbxx_dir dir = 0;
          int _len_mlxsw_sp0 = 1;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__sb0 = 1;
          mlxsw_sp[_i0].sb = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__sb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports0 = 1;
          mlxsw_sp[_i0].sb->ports = (struct TYPE_3__ *) malloc(_len_mlxsw_sp__i0__sb_ports0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports_pms0 = 1;
          mlxsw_sp[_i0].sb->ports->pms = (struct mlxsw_sp_sb_pm **) malloc(_len_mlxsw_sp__i0__sb_ports_pms0*sizeof(struct mlxsw_sp_sb_pm *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports_pms0; _j0++) {
            int _len_mlxsw_sp__i0__sb_ports_pms1 = 1;
            mlxsw_sp[_i0].sb->ports->pms[_j0] = (struct mlxsw_sp_sb_pm *) malloc(_len_mlxsw_sp__i0__sb_ports_pms1*sizeof(struct mlxsw_sp_sb_pm));
            for(int _j1 = 0; _j1 < _len_mlxsw_sp__i0__sb_ports_pms1; _j1++) {
              mlxsw_sp[_i0].sb->ports->pms[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          struct mlxsw_sp_sb_pm * benchRet = mlxsw_sp_sb_pm_get(mlxsw_sp,local_port,pool,dir);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].sb);
          }
          free(mlxsw_sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long local_port = 255;
          unsigned long pool = 255;
          enum mlxsw_reg_sbxx_dir dir = 0;
          int _len_mlxsw_sp0 = 65025;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__sb0 = 1;
          mlxsw_sp[_i0].sb = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__sb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports0 = 1;
          mlxsw_sp[_i0].sb->ports = (struct TYPE_3__ *) malloc(_len_mlxsw_sp__i0__sb_ports0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports_pms0 = 1;
          mlxsw_sp[_i0].sb->ports->pms = (struct mlxsw_sp_sb_pm **) malloc(_len_mlxsw_sp__i0__sb_ports_pms0*sizeof(struct mlxsw_sp_sb_pm *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports_pms0; _j0++) {
            int _len_mlxsw_sp__i0__sb_ports_pms1 = 1;
            mlxsw_sp[_i0].sb->ports->pms[_j0] = (struct mlxsw_sp_sb_pm *) malloc(_len_mlxsw_sp__i0__sb_ports_pms1*sizeof(struct mlxsw_sp_sb_pm));
            for(int _j1 = 0; _j1 < _len_mlxsw_sp__i0__sb_ports_pms1; _j1++) {
              mlxsw_sp[_i0].sb->ports->pms[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          struct mlxsw_sp_sb_pm * benchRet = mlxsw_sp_sb_pm_get(mlxsw_sp,local_port,pool,dir);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].sb);
          }
          free(mlxsw_sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long local_port = 10;
          unsigned long pool = 10;
          enum mlxsw_reg_sbxx_dir dir = 0;
          int _len_mlxsw_sp0 = 100;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__sb0 = 1;
          mlxsw_sp[_i0].sb = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__sb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports0 = 1;
          mlxsw_sp[_i0].sb->ports = (struct TYPE_3__ *) malloc(_len_mlxsw_sp__i0__sb_ports0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports0; _j0++) {
              int _len_mlxsw_sp__i0__sb_ports_pms0 = 1;
          mlxsw_sp[_i0].sb->ports->pms = (struct mlxsw_sp_sb_pm **) malloc(_len_mlxsw_sp__i0__sb_ports_pms0*sizeof(struct mlxsw_sp_sb_pm *));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__sb_ports_pms0; _j0++) {
            int _len_mlxsw_sp__i0__sb_ports_pms1 = 1;
            mlxsw_sp[_i0].sb->ports->pms[_j0] = (struct mlxsw_sp_sb_pm *) malloc(_len_mlxsw_sp__i0__sb_ports_pms1*sizeof(struct mlxsw_sp_sb_pm));
            for(int _j1 = 0; _j1 < _len_mlxsw_sp__i0__sb_ports_pms1; _j1++) {
              mlxsw_sp[_i0].sb->ports->pms[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          struct mlxsw_sp_sb_pm * benchRet = mlxsw_sp_sb_pm_get(mlxsw_sp,local_port,pool,dir);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].sb);
          }
          free(mlxsw_sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

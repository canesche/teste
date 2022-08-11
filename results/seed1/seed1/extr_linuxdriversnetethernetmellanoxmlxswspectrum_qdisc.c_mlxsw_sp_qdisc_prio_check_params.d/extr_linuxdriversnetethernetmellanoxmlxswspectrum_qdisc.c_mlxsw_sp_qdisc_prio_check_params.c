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
struct tc_prio_qopt_offload_params {scalar_t__ bands; } ;
struct mlxsw_sp_qdisc {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 scalar_t__ IEEE_8021QAZ_MAX_TCS ; 

__attribute__((used)) static int
mlxsw_sp_qdisc_prio_check_params(struct mlxsw_sp_port *mlxsw_sp_port,
				 struct mlxsw_sp_qdisc *mlxsw_sp_qdisc,
				 void *params)
{
	struct tc_prio_qopt_offload_params *p = params;

	if (p->bands > IEEE_8021QAZ_MAX_TCS)
		return -EOPNOTSUPP;

	return 0;
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
          int _len_mlxsw_sp_port0 = 1;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_qdisc0 = 1;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * params;
          int benchRet = mlxsw_sp_qdisc_prio_check_params(mlxsw_sp_port,mlxsw_sp_qdisc,params);
          printf("%d\n", benchRet); 
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mlxsw_sp_port0 = 65025;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_qdisc0 = 65025;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * params;
          int benchRet = mlxsw_sp_qdisc_prio_check_params(mlxsw_sp_port,mlxsw_sp_qdisc,params);
          printf("%d\n", benchRet); 
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mlxsw_sp_port0 = 100;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_qdisc0 = 100;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * params;
          int benchRet = mlxsw_sp_qdisc_prio_check_params(mlxsw_sp_port,mlxsw_sp_qdisc,params);
          printf("%d\n", benchRet); 
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

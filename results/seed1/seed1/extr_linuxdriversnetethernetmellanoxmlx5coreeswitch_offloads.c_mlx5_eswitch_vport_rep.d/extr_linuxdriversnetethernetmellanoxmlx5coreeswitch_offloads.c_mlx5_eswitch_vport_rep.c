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
struct mlx5_eswitch_rep {int dummy; } ;
struct TYPE_2__ {struct mlx5_eswitch_rep* vport_reps; } ;
struct mlx5_eswitch {TYPE_1__ offloads; } ;

/* Variables and functions */

struct mlx5_eswitch_rep *mlx5_eswitch_vport_rep(struct mlx5_eswitch *esw,
						int vport)
{
	return &esw->offloads.vport_reps[vport];
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
          int vport = 100;
          int _len_esw0 = 1;
          struct mlx5_eswitch * esw = (struct mlx5_eswitch *) malloc(_len_esw0*sizeof(struct mlx5_eswitch));
          for(int _i0 = 0; _i0 < _len_esw0; _i0++) {
              int _len_esw__i0__offloads_vport_reps0 = 1;
          esw[_i0].offloads.vport_reps = (struct mlx5_eswitch_rep *) malloc(_len_esw__i0__offloads_vport_reps0*sizeof(struct mlx5_eswitch_rep));
          for(int _j0 = 0; _j0 < _len_esw__i0__offloads_vport_reps0; _j0++) {
            esw[_i0].offloads.vport_reps->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5_eswitch_rep * benchRet = mlx5_eswitch_vport_rep(esw,vport);
          printf("%d\n", (*benchRet).dummy);
          free(esw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vport = 255;
          int _len_esw0 = 65025;
          struct mlx5_eswitch * esw = (struct mlx5_eswitch *) malloc(_len_esw0*sizeof(struct mlx5_eswitch));
          for(int _i0 = 0; _i0 < _len_esw0; _i0++) {
              int _len_esw__i0__offloads_vport_reps0 = 1;
          esw[_i0].offloads.vport_reps = (struct mlx5_eswitch_rep *) malloc(_len_esw__i0__offloads_vport_reps0*sizeof(struct mlx5_eswitch_rep));
          for(int _j0 = 0; _j0 < _len_esw__i0__offloads_vport_reps0; _j0++) {
            esw[_i0].offloads.vport_reps->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5_eswitch_rep * benchRet = mlx5_eswitch_vport_rep(esw,vport);
          printf("%d\n", (*benchRet).dummy);
          free(esw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vport = 10;
          int _len_esw0 = 100;
          struct mlx5_eswitch * esw = (struct mlx5_eswitch *) malloc(_len_esw0*sizeof(struct mlx5_eswitch));
          for(int _i0 = 0; _i0 < _len_esw0; _i0++) {
              int _len_esw__i0__offloads_vport_reps0 = 1;
          esw[_i0].offloads.vport_reps = (struct mlx5_eswitch_rep *) malloc(_len_esw__i0__offloads_vport_reps0*sizeof(struct mlx5_eswitch_rep));
          for(int _j0 = 0; _j0 < _len_esw__i0__offloads_vport_reps0; _j0++) {
            esw[_i0].offloads.vport_reps->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5_eswitch_rep * benchRet = mlx5_eswitch_vport_rep(esw,vport);
          printf("%d\n", (*benchRet).dummy);
          free(esw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct ttc_params {int /*<<< orphan*/ * inner_ttc; int /*<<< orphan*/  any_tt_tirn; } ;
struct TYPE_4__ {int /*<<< orphan*/  inner_ttc; } ;
struct mlx5e_priv {TYPE_2__ fs; TYPE_1__* direct_tir; } ;
struct TYPE_3__ {int /*<<< orphan*/  tirn; } ;

/* Variables and functions */

void mlx5e_set_ttc_basic_params(struct mlx5e_priv *priv,
				struct ttc_params *ttc_params)
{
	ttc_params->any_tt_tirn = priv->direct_tir[0].tirn;
	ttc_params->inner_ttc = &priv->fs.inner_ttc;
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
          int _len_priv0 = 1;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fs.inner_ttc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__direct_tir0 = 1;
          priv[_i0].direct_tir = (struct TYPE_3__ *) malloc(_len_priv__i0__direct_tir0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__direct_tir0; _j0++) {
            priv[_i0].direct_tir->tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ttc_params0 = 1;
          struct ttc_params * ttc_params = (struct ttc_params *) malloc(_len_ttc_params0*sizeof(struct ttc_params));
          for(int _i0 = 0; _i0 < _len_ttc_params0; _i0++) {
              int _len_ttc_params__i0__inner_ttc0 = 1;
          ttc_params[_i0].inner_ttc = (int *) malloc(_len_ttc_params__i0__inner_ttc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttc_params__i0__inner_ttc0; _j0++) {
            ttc_params[_i0].inner_ttc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttc_params[_i0].any_tt_tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_set_ttc_basic_params(priv,ttc_params);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].direct_tir);
          }
          free(priv);
          for(int _aux = 0; _aux < _len_ttc_params0; _aux++) {
          free(ttc_params[_aux].inner_ttc);
          }
          free(ttc_params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fs.inner_ttc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__direct_tir0 = 1;
          priv[_i0].direct_tir = (struct TYPE_3__ *) malloc(_len_priv__i0__direct_tir0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__direct_tir0; _j0++) {
            priv[_i0].direct_tir->tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ttc_params0 = 65025;
          struct ttc_params * ttc_params = (struct ttc_params *) malloc(_len_ttc_params0*sizeof(struct ttc_params));
          for(int _i0 = 0; _i0 < _len_ttc_params0; _i0++) {
              int _len_ttc_params__i0__inner_ttc0 = 1;
          ttc_params[_i0].inner_ttc = (int *) malloc(_len_ttc_params__i0__inner_ttc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttc_params__i0__inner_ttc0; _j0++) {
            ttc_params[_i0].inner_ttc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttc_params[_i0].any_tt_tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_set_ttc_basic_params(priv,ttc_params);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].direct_tir);
          }
          free(priv);
          for(int _aux = 0; _aux < _len_ttc_params0; _aux++) {
          free(ttc_params[_aux].inner_ttc);
          }
          free(ttc_params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].fs.inner_ttc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__direct_tir0 = 1;
          priv[_i0].direct_tir = (struct TYPE_3__ *) malloc(_len_priv__i0__direct_tir0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__direct_tir0; _j0++) {
            priv[_i0].direct_tir->tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ttc_params0 = 100;
          struct ttc_params * ttc_params = (struct ttc_params *) malloc(_len_ttc_params0*sizeof(struct ttc_params));
          for(int _i0 = 0; _i0 < _len_ttc_params0; _i0++) {
              int _len_ttc_params__i0__inner_ttc0 = 1;
          ttc_params[_i0].inner_ttc = (int *) malloc(_len_ttc_params__i0__inner_ttc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ttc_params__i0__inner_ttc0; _j0++) {
            ttc_params[_i0].inner_ttc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ttc_params[_i0].any_tt_tirn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_set_ttc_basic_params(priv,ttc_params);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].direct_tir);
          }
          free(priv);
          for(int _aux = 0; _aux < _len_ttc_params0; _aux++) {
          free(ttc_params[_aux].inner_ttc);
          }
          free(ttc_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

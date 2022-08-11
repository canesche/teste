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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_10__ {TYPE_4__* channels; } ;
struct mlx5e_redirect_rqt_param {TYPE_5__ rss; int /*<<< orphan*/  rqn; int /*<<< orphan*/  is_rss; } ;
struct TYPE_6__ {int /*<<< orphan*/  rqn; } ;
struct mlx5e_priv {TYPE_1__ drop_rq; } ;
struct TYPE_9__ {int num; TYPE_3__** c; } ;
struct TYPE_7__ {int /*<<< orphan*/  rqn; } ;
struct TYPE_8__ {TYPE_2__ rq; } ;

/* Variables and functions */

__attribute__((used)) static u32 mlx5e_get_direct_rqn(struct mlx5e_priv *priv, int ix,
				struct mlx5e_redirect_rqt_param rrp)
{
	if (!rrp.is_rss)
		return rrp.rqn;

	if (ix >= rrp.rss.channels->num)
		return priv->drop_rq.rqn;

	return rrp.rss.channels->c[ix]->rq.rqn;
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
          int ix = 100;
          int _len_priv0 = 1;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].drop_rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mlx5e_redirect_rqt_param rrp;
          int _len_rrp_rss_channels0 = 1;
          rrp.rss.channels = (struct TYPE_9__ *) malloc(_len_rrp_rss_channels0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels0; _j0++) {
            rrp.rss.channels->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rrp_rss_channels_c0 = 1;
          rrp.rss.channels->c = (struct TYPE_8__ **) malloc(_len_rrp_rss_channels_c0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels_c0; _j0++) {
            int _len_rrp_rss_channels_c1 = 1;
            rrp.rss.channels->c[_j0] = (struct TYPE_8__ *) malloc(_len_rrp_rss_channels_c1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_rrp_rss_channels_c1; _j1++) {
              rrp.rss.channels->c[_j0]->rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        rrp.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
        rrp.is_rss = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mlx5e_get_direct_rqn(priv,ix,rrp);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ix = 255;
          int _len_priv0 = 65025;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].drop_rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mlx5e_redirect_rqt_param rrp;
          int _len_rrp_rss_channels0 = 1;
          rrp.rss.channels = (struct TYPE_9__ *) malloc(_len_rrp_rss_channels0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels0; _j0++) {
            rrp.rss.channels->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rrp_rss_channels_c0 = 1;
          rrp.rss.channels->c = (struct TYPE_8__ **) malloc(_len_rrp_rss_channels_c0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels_c0; _j0++) {
            int _len_rrp_rss_channels_c1 = 1;
            rrp.rss.channels->c[_j0] = (struct TYPE_8__ *) malloc(_len_rrp_rss_channels_c1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_rrp_rss_channels_c1; _j1++) {
              rrp.rss.channels->c[_j0]->rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        rrp.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
        rrp.is_rss = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mlx5e_get_direct_rqn(priv,ix,rrp);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ix = 10;
          int _len_priv0 = 100;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].drop_rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mlx5e_redirect_rqt_param rrp;
          int _len_rrp_rss_channels0 = 1;
          rrp.rss.channels = (struct TYPE_9__ *) malloc(_len_rrp_rss_channels0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels0; _j0++) {
            rrp.rss.channels->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rrp_rss_channels_c0 = 1;
          rrp.rss.channels->c = (struct TYPE_8__ **) malloc(_len_rrp_rss_channels_c0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_rrp_rss_channels_c0; _j0++) {
            int _len_rrp_rss_channels_c1 = 1;
            rrp.rss.channels->c[_j0] = (struct TYPE_8__ *) malloc(_len_rrp_rss_channels_c1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_rrp_rss_channels_c1; _j1++) {
              rrp.rss.channels->c[_j0]->rq.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
        rrp.rqn = ((-2 * (next_i()%2)) + 1) * next_i();
        rrp.is_rss = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mlx5e_get_direct_rqn(priv,ix,rrp);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

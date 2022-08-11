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
struct TYPE_4__ {int log_rq_mtu_frames; int log_sq_size; } ;
struct TYPE_3__ {TYPE_2__ params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int rx_pending; int tx_pending; } ;

/* Variables and functions */
 int MLX5E_PARAMS_MAXIMUM_LOG_RQ_SIZE ; 
 int MLX5E_PARAMS_MAXIMUM_LOG_SQ_SIZE ; 

void mlx5e_ethtool_get_ringparam(struct mlx5e_priv *priv,
				 struct ethtool_ringparam *param)
{
	param->rx_max_pending = 1 << MLX5E_PARAMS_MAXIMUM_LOG_RQ_SIZE;
	param->tx_max_pending = 1 << MLX5E_PARAMS_MAXIMUM_LOG_SQ_SIZE;
	param->rx_pending     = 1 << priv->channels.params.log_rq_mtu_frames;
	param->tx_pending     = 1 << priv->channels.params.log_sq_size;
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
            priv[_i0].channels.params.log_rq_mtu_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].channels.params.log_sq_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 1;
          struct ethtool_ringparam * param = (struct ethtool_ringparam *) malloc(_len_param0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].rx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].rx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_ethtool_get_ringparam(priv,param);
          free(priv);
          free(param);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].channels.params.log_rq_mtu_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].channels.params.log_sq_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 65025;
          struct ethtool_ringparam * param = (struct ethtool_ringparam *) malloc(_len_param0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].rx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].rx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_ethtool_get_ringparam(priv,param);
          free(priv);
          free(param);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mlx5e_priv * priv = (struct mlx5e_priv *) malloc(_len_priv0*sizeof(struct mlx5e_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].channels.params.log_rq_mtu_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].channels.params.log_sq_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 100;
          struct ethtool_ringparam * param = (struct ethtool_ringparam *) malloc(_len_param0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].rx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].rx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].tx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_ethtool_get_ringparam(priv,param);
          free(priv);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

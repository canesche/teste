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
struct mlx5_core_dev {int dummy; } ;
struct mlx5_accel_esp_xfrm {int dummy; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */

__attribute__((used)) static inline void *
mlx5_fpga_ipsec_create_sa_ctx(struct mlx5_core_dev *mdev,
			      struct mlx5_accel_esp_xfrm *accel_xfrm,
			      const __be32 saddr[4],
			      const __be32 daddr[4],
			      const __be32 spi, bool is_ipv6)
{
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
          const int spi = 100;
          int is_ipv6 = 100;
          int _len_mdev0 = 1;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_accel_xfrm0 = 1;
          struct mlx5_accel_esp_xfrm * accel_xfrm = (struct mlx5_accel_esp_xfrm *) malloc(_len_accel_xfrm0*sizeof(struct mlx5_accel_esp_xfrm));
          for(int _i0 = 0; _i0 < _len_accel_xfrm0; _i0++) {
            accel_xfrm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saddr0 = 4;
          int const* saddr = (int const*) malloc(_len_saddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_saddr0; _i0++) {
            saddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_daddr0 = 4;
          int const* daddr = (int const*) malloc(_len_daddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_daddr0; _i0++) {
            daddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = mlx5_fpga_ipsec_create_sa_ctx(mdev,accel_xfrm,saddr,daddr,spi,is_ipv6);
          free(mdev);
          free(accel_xfrm);
          free(saddr);
          free(daddr);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int spi = 255;
          int is_ipv6 = 255;
          int _len_mdev0 = 65025;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_accel_xfrm0 = 65025;
          struct mlx5_accel_esp_xfrm * accel_xfrm = (struct mlx5_accel_esp_xfrm *) malloc(_len_accel_xfrm0*sizeof(struct mlx5_accel_esp_xfrm));
          for(int _i0 = 0; _i0 < _len_accel_xfrm0; _i0++) {
            accel_xfrm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saddr0 = 65025;
          int const* saddr = (int const*) malloc(_len_saddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_saddr0; _i0++) {
            saddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_daddr0 = 65025;
          int const* daddr = (int const*) malloc(_len_daddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_daddr0; _i0++) {
            daddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = mlx5_fpga_ipsec_create_sa_ctx(mdev,accel_xfrm,saddr,daddr,spi,is_ipv6);
          free(mdev);
          free(accel_xfrm);
          free(saddr);
          free(daddr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int spi = 10;
          int is_ipv6 = 10;
          int _len_mdev0 = 100;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_accel_xfrm0 = 100;
          struct mlx5_accel_esp_xfrm * accel_xfrm = (struct mlx5_accel_esp_xfrm *) malloc(_len_accel_xfrm0*sizeof(struct mlx5_accel_esp_xfrm));
          for(int _i0 = 0; _i0 < _len_accel_xfrm0; _i0++) {
            accel_xfrm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_saddr0 = 100;
          int const* saddr = (int const*) malloc(_len_saddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_saddr0; _i0++) {
            saddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_daddr0 = 100;
          int const* daddr = (int const*) malloc(_len_daddr0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_daddr0; _i0++) {
            daddr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = mlx5_fpga_ipsec_create_sa_ctx(mdev,accel_xfrm,saddr,daddr,spi,is_ipv6);
          free(mdev);
          free(accel_xfrm);
          free(saddr);
          free(daddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

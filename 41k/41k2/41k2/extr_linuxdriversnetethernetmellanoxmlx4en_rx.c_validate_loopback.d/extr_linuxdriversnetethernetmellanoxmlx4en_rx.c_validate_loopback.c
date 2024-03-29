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
struct mlx4_en_priv {int loopback_ok; } ;

/* Variables and functions */
 int ETH_HLEN ; 
 int MLX4_LOOPBACK_TEST_PAYLOAD ; 

__attribute__((used)) static void validate_loopback(struct mlx4_en_priv *priv, void *va)
{
	const unsigned char *data = va + ETH_HLEN;
	int i;

	for (i = 0; i < MLX4_LOOPBACK_TEST_PAYLOAD; i++) {
		if (data[i] != (unsigned char)i)
			return;
	}
	/* Loopback found */
	priv->loopback_ok = 1;
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
          struct mlx4_en_priv * priv = (struct mlx4_en_priv *) malloc(_len_priv0*sizeof(struct mlx4_en_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].loopback_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * va;
          validate_loopback(priv,va);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mlx4_en_priv * priv = (struct mlx4_en_priv *) malloc(_len_priv0*sizeof(struct mlx4_en_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].loopback_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * va;
          validate_loopback(priv,va);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mlx4_en_priv * priv = (struct mlx4_en_priv *) malloc(_len_priv0*sizeof(struct mlx4_en_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].loopback_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * va;
          validate_loopback(priv,va);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

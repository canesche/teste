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
struct safexcel_desc_ring {int read; int base; int offset; } ;
struct safexcel_crypto_priv {TYPE_1__* ring; } ;
struct TYPE_2__ {struct safexcel_desc_ring rdr; } ;

/* Variables and functions */

inline int safexcel_ring_first_rdr_index(struct safexcel_crypto_priv *priv,
					 int ring)
{
	struct safexcel_desc_ring *rdr = &priv->ring[ring].rdr;

	return (rdr->read - rdr->base) / rdr->offset;
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
          int ring = 100;
          int _len_priv0 = 1;
          struct safexcel_crypto_priv * priv = (struct safexcel_crypto_priv *) malloc(_len_priv0*sizeof(struct safexcel_crypto_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ring0 = 1;
          priv[_i0].ring = (struct TYPE_2__ *) malloc(_len_priv__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__ring0; _j0++) {
            priv[_i0].ring->rdr.read = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.base = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = safexcel_ring_first_rdr_index(priv,ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ring);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ring = 255;
          int _len_priv0 = 65025;
          struct safexcel_crypto_priv * priv = (struct safexcel_crypto_priv *) malloc(_len_priv0*sizeof(struct safexcel_crypto_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ring0 = 1;
          priv[_i0].ring = (struct TYPE_2__ *) malloc(_len_priv__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__ring0; _j0++) {
            priv[_i0].ring->rdr.read = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.base = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = safexcel_ring_first_rdr_index(priv,ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ring);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ring = 10;
          int _len_priv0 = 100;
          struct safexcel_crypto_priv * priv = (struct safexcel_crypto_priv *) malloc(_len_priv0*sizeof(struct safexcel_crypto_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__ring0 = 1;
          priv[_i0].ring = (struct TYPE_2__ *) malloc(_len_priv__i0__ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__ring0; _j0++) {
            priv[_i0].ring->rdr.read = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.base = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].ring->rdr.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = safexcel_ring_first_rdr_index(priv,ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ring);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

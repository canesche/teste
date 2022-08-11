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
struct md4_ctx {int* hash; scalar_t__ byte_count; } ;

/* Variables and functions */

__attribute__((used)) static void md4_init(struct md4_ctx *mctx)
{
	mctx->hash[0] = 0x67452301;
	mctx->hash[1] = 0xefcdab89;
	mctx->hash[2] = 0x98badcfe;
	mctx->hash[3] = 0x10325476;
	mctx->byte_count = 0;
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
          int _len_mctx0 = 1;
          struct md4_ctx * mctx = (struct md4_ctx *) malloc(_len_mctx0*sizeof(struct md4_ctx));
          for(int _i0 = 0; _i0 < _len_mctx0; _i0++) {
              int _len_mctx__i0__hash0 = 1;
          mctx[_i0].hash = (int *) malloc(_len_mctx__i0__hash0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mctx__i0__hash0; _j0++) {
            mctx[_i0].hash[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mctx[_i0].byte_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          md4_init(mctx);
          for(int _aux = 0; _aux < _len_mctx0; _aux++) {
          free(mctx[_aux].hash);
          }
          free(mctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mctx0 = 65025;
          struct md4_ctx * mctx = (struct md4_ctx *) malloc(_len_mctx0*sizeof(struct md4_ctx));
          for(int _i0 = 0; _i0 < _len_mctx0; _i0++) {
              int _len_mctx__i0__hash0 = 1;
          mctx[_i0].hash = (int *) malloc(_len_mctx__i0__hash0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mctx__i0__hash0; _j0++) {
            mctx[_i0].hash[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mctx[_i0].byte_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          md4_init(mctx);
          for(int _aux = 0; _aux < _len_mctx0; _aux++) {
          free(mctx[_aux].hash);
          }
          free(mctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mctx0 = 100;
          struct md4_ctx * mctx = (struct md4_ctx *) malloc(_len_mctx0*sizeof(struct md4_ctx));
          for(int _i0 = 0; _i0 < _len_mctx0; _i0++) {
              int _len_mctx__i0__hash0 = 1;
          mctx[_i0].hash = (int *) malloc(_len_mctx__i0__hash0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mctx__i0__hash0; _j0++) {
            mctx[_i0].hash[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mctx[_i0].byte_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          md4_init(mctx);
          for(int _aux = 0; _aux < _len_mctx0; _aux++) {
          free(mctx[_aux].hash);
          }
          free(mctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

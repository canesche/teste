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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  size_t uint64_t ;
struct TYPE_5__ {int* static_iv; TYPE_1__* algo; } ;
typedef  TYPE_2__ ptls_aead_context_t ;
struct TYPE_4__ {size_t iv_size; } ;

/* Variables and functions */

void ptls_aead__build_iv(ptls_aead_context_t *ctx, uint8_t *iv, uint64_t seq)
{
    size_t iv_size = ctx->algo->iv_size, i;
    const uint8_t *s = ctx->static_iv;
    uint8_t *d = iv;

    /* build iv */
    for (i = iv_size - 8; i != 0; --i)
        *d++ = *s++;
    i = 64;
    do {
        i -= 8;
        *d++ = *s++ ^ (uint8_t)(seq >> i);
    } while (i != 0);
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
          unsigned long seq = 100;
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__static_iv0 = 1;
          ctx[_i0].static_iv = (int *) malloc(_len_ctx__i0__static_iv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__static_iv0; _j0++) {
            ctx[_i0].static_iv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__algo0 = 1;
          ctx[_i0].algo = (struct TYPE_4__ *) malloc(_len_ctx__i0__algo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__algo0; _j0++) {
            ctx[_i0].algo->iv_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 1;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ptls_aead__build_iv(ctx,iv,seq);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].static_iv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].algo);
          }
          free(ctx);
          free(iv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long seq = 255;
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__static_iv0 = 1;
          ctx[_i0].static_iv = (int *) malloc(_len_ctx__i0__static_iv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__static_iv0; _j0++) {
            ctx[_i0].static_iv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__algo0 = 1;
          ctx[_i0].algo = (struct TYPE_4__ *) malloc(_len_ctx__i0__algo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__algo0; _j0++) {
            ctx[_i0].algo->iv_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 65025;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ptls_aead__build_iv(ctx,iv,seq);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].static_iv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].algo);
          }
          free(ctx);
          free(iv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long seq = 10;
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__static_iv0 = 1;
          ctx[_i0].static_iv = (int *) malloc(_len_ctx__i0__static_iv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__static_iv0; _j0++) {
            ctx[_i0].static_iv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__algo0 = 1;
          ctx[_i0].algo = (struct TYPE_4__ *) malloc(_len_ctx__i0__algo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__algo0; _j0++) {
            ctx[_i0].algo->iv_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iv0 = 100;
          int * iv = (int *) malloc(_len_iv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iv0; _i0++) {
            iv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ptls_aead__build_iv(ctx,iv,seq);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].static_iv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].algo);
          }
          free(ctx);
          free(iv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

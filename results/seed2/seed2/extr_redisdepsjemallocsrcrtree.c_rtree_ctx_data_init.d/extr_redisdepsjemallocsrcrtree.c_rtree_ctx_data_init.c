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
struct TYPE_4__ {TYPE_2__* l2_cache; TYPE_2__* cache; } ;
typedef  TYPE_1__ rtree_ctx_t ;
struct TYPE_5__ {int /*<<< orphan*/ * leaf; void* leafkey; } ;
typedef  TYPE_2__ rtree_ctx_cache_elm_t ;

/* Variables and functions */
 unsigned int RTREE_CTX_NCACHE ; 
 unsigned int RTREE_CTX_NCACHE_L2 ; 
 void* RTREE_LEAFKEY_INVALID ; 

void
rtree_ctx_data_init(rtree_ctx_t *ctx) {
	for (unsigned i = 0; i < RTREE_CTX_NCACHE; i++) {
		rtree_ctx_cache_elm_t *cache = &ctx->cache[i];
		cache->leafkey = RTREE_LEAFKEY_INVALID;
		cache->leaf = NULL;
	}
	for (unsigned i = 0; i < RTREE_CTX_NCACHE_L2; i++) {
		rtree_ctx_cache_elm_t *cache = &ctx->l2_cache[i];
		cache->leafkey = RTREE_LEAFKEY_INVALID;
		cache->leaf = NULL;
	}
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
          int _len_ctx0 = 1;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__l2_cache0 = 1;
          ctx[_i0].l2_cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__l2_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache0; _j0++) {
              int _len_ctx__i0__l2_cache_leaf0 = 1;
          ctx[_i0].l2_cache->leaf = (int *) malloc(_len_ctx__i0__l2_cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache_leaf0; _j0++) {
            ctx[_i0].l2_cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__cache0 = 1;
          ctx[_i0].cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache0; _j0++) {
              int _len_ctx__i0__cache_leaf0 = 1;
          ctx[_i0].cache->leaf = (int *) malloc(_len_ctx__i0__cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache_leaf0; _j0++) {
            ctx[_i0].cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtree_ctx_data_init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].l2_cache);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cache);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__l2_cache0 = 1;
          ctx[_i0].l2_cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__l2_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache0; _j0++) {
              int _len_ctx__i0__l2_cache_leaf0 = 1;
          ctx[_i0].l2_cache->leaf = (int *) malloc(_len_ctx__i0__l2_cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache_leaf0; _j0++) {
            ctx[_i0].l2_cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__cache0 = 1;
          ctx[_i0].cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache0; _j0++) {
              int _len_ctx__i0__cache_leaf0 = 1;
          ctx[_i0].cache->leaf = (int *) malloc(_len_ctx__i0__cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache_leaf0; _j0++) {
            ctx[_i0].cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtree_ctx_data_init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].l2_cache);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cache);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__l2_cache0 = 1;
          ctx[_i0].l2_cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__l2_cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache0; _j0++) {
              int _len_ctx__i0__l2_cache_leaf0 = 1;
          ctx[_i0].l2_cache->leaf = (int *) malloc(_len_ctx__i0__l2_cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__l2_cache_leaf0; _j0++) {
            ctx[_i0].l2_cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx__i0__cache0 = 1;
          ctx[_i0].cache = (struct TYPE_5__ *) malloc(_len_ctx__i0__cache0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache0; _j0++) {
              int _len_ctx__i0__cache_leaf0 = 1;
          ctx[_i0].cache->leaf = (int *) malloc(_len_ctx__i0__cache_leaf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cache_leaf0; _j0++) {
            ctx[_i0].cache->leaf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtree_ctx_data_init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].l2_cache);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cache);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

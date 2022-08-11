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
struct iova_domain {scalar_t__ dma_32bit_pfn; int /*<<< orphan*/ * cached_node; int /*<<< orphan*/ * cached32_node; } ;
struct iova {scalar_t__ pfn_hi; int /*<<< orphan*/  node; } ;

/* Variables and functions */

__attribute__((used)) static void
__cached_rbnode_insert_update(struct iova_domain *iovad, struct iova *new)
{
	if (new->pfn_hi < iovad->dma_32bit_pfn)
		iovad->cached32_node = &new->node;
	else
		iovad->cached_node = &new->node;
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
          int _len_iovad0 = 1;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
            iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (int *) malloc(_len_iovad__i0__cached_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
            iovad[_i0].cached_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (int *) malloc(_len_iovad__i0__cached32_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
            iovad[_i0].cached32_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_new0 = 1;
          struct iova * new = (struct iova *) malloc(_len_new0*sizeof(struct iova));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].pfn_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __cached_rbnode_insert_update(iovad,new);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
          free(new);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iovad0 = 65025;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
            iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (int *) malloc(_len_iovad__i0__cached_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
            iovad[_i0].cached_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (int *) malloc(_len_iovad__i0__cached32_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
            iovad[_i0].cached32_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_new0 = 65025;
          struct iova * new = (struct iova *) malloc(_len_new0*sizeof(struct iova));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].pfn_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __cached_rbnode_insert_update(iovad,new);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
          free(new);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iovad0 = 100;
          struct iova_domain * iovad = (struct iova_domain *) malloc(_len_iovad0*sizeof(struct iova_domain));
          for(int _i0 = 0; _i0 < _len_iovad0; _i0++) {
            iovad[_i0].dma_32bit_pfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iovad__i0__cached_node0 = 1;
          iovad[_i0].cached_node = (int *) malloc(_len_iovad__i0__cached_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached_node0; _j0++) {
            iovad[_i0].cached_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iovad__i0__cached32_node0 = 1;
          iovad[_i0].cached32_node = (int *) malloc(_len_iovad__i0__cached32_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iovad__i0__cached32_node0; _j0++) {
            iovad[_i0].cached32_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_new0 = 100;
          struct iova * new = (struct iova *) malloc(_len_new0*sizeof(struct iova));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].pfn_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __cached_rbnode_insert_update(iovad,new);
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached_node);
          }
          for(int _aux = 0; _aux < _len_iovad0; _aux++) {
          free(iovad[_aux].cached32_node);
          }
          free(iovad);
          free(new);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

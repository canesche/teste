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
struct mtk_ring {scalar_t__ cmd_next; scalar_t__ cmd_base; scalar_t__ res_base; scalar_t__ res_next; } ;
struct mtk_desc {int dummy; } ;

/* Variables and functions */
 scalar_t__ MTK_DESC_NUM ; 

__attribute__((used)) static inline void mtk_sha_ring_shift(struct mtk_ring *ring,
				      struct mtk_desc **cmd_curr,
				      struct mtk_desc **res_curr,
				      int *count)
{
	*cmd_curr = ring->cmd_next++;
	*res_curr = ring->res_next++;
	(*count)++;

	if (ring->cmd_next == ring->cmd_base + MTK_DESC_NUM) {
		ring->cmd_next = ring->cmd_base;
		ring->res_next = ring->res_base;
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
          int _len_ring0 = 1;
          struct mtk_ring * ring = (struct mtk_ring *) malloc(_len_ring0*sizeof(struct mtk_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].cmd_next = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cmd_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_curr0 = 1;
          struct mtk_desc ** cmd_curr = (struct mtk_desc **) malloc(_len_cmd_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_cmd_curr0; _i0++) {
            int _len_cmd_curr1 = 1;
            cmd_curr[_i0] = (struct mtk_desc *) malloc(_len_cmd_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_cmd_curr1; _i1++) {
              cmd_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_res_curr0 = 1;
          struct mtk_desc ** res_curr = (struct mtk_desc **) malloc(_len_res_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_res_curr0; _i0++) {
            int _len_res_curr1 = 1;
            res_curr[_i0] = (struct mtk_desc *) malloc(_len_res_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_res_curr1; _i1++) {
              res_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_sha_ring_shift(ring,cmd_curr,res_curr,count);
          free(ring);
          for(int i1 = 0; i1 < _len_cmd_curr0; i1++) {
            int _len_cmd_curr1 = 1;
              free(cmd_curr[i1]);
          }
          free(cmd_curr);
          for(int i1 = 0; i1 < _len_res_curr0; i1++) {
            int _len_res_curr1 = 1;
              free(res_curr[i1]);
          }
          free(res_curr);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct mtk_ring * ring = (struct mtk_ring *) malloc(_len_ring0*sizeof(struct mtk_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].cmd_next = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cmd_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_curr0 = 65025;
          struct mtk_desc ** cmd_curr = (struct mtk_desc **) malloc(_len_cmd_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_cmd_curr0; _i0++) {
            int _len_cmd_curr1 = 1;
            cmd_curr[_i0] = (struct mtk_desc *) malloc(_len_cmd_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_cmd_curr1; _i1++) {
              cmd_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_res_curr0 = 65025;
          struct mtk_desc ** res_curr = (struct mtk_desc **) malloc(_len_res_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_res_curr0; _i0++) {
            int _len_res_curr1 = 1;
            res_curr[_i0] = (struct mtk_desc *) malloc(_len_res_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_res_curr1; _i1++) {
              res_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 65025;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_sha_ring_shift(ring,cmd_curr,res_curr,count);
          free(ring);
          for(int i1 = 0; i1 < _len_cmd_curr0; i1++) {
            int _len_cmd_curr1 = 1;
              free(cmd_curr[i1]);
          }
          free(cmd_curr);
          for(int i1 = 0; i1 < _len_res_curr0; i1++) {
            int _len_res_curr1 = 1;
              free(res_curr[i1]);
          }
          free(res_curr);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct mtk_ring * ring = (struct mtk_ring *) malloc(_len_ring0*sizeof(struct mtk_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].cmd_next = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cmd_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].res_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd_curr0 = 100;
          struct mtk_desc ** cmd_curr = (struct mtk_desc **) malloc(_len_cmd_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_cmd_curr0; _i0++) {
            int _len_cmd_curr1 = 1;
            cmd_curr[_i0] = (struct mtk_desc *) malloc(_len_cmd_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_cmd_curr1; _i1++) {
              cmd_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_res_curr0 = 100;
          struct mtk_desc ** res_curr = (struct mtk_desc **) malloc(_len_res_curr0*sizeof(struct mtk_desc *));
          for(int _i0 = 0; _i0 < _len_res_curr0; _i0++) {
            int _len_res_curr1 = 1;
            res_curr[_i0] = (struct mtk_desc *) malloc(_len_res_curr1*sizeof(struct mtk_desc));
            for(int _i1 = 0; _i1 < _len_res_curr1; _i1++) {
              res_curr[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_count0 = 100;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_sha_ring_shift(ring,cmd_curr,res_curr,count);
          free(ring);
          for(int i1 = 0; i1 < _len_cmd_curr0; i1++) {
            int _len_cmd_curr1 = 1;
              free(cmd_curr[i1]);
          }
          free(cmd_curr);
          for(int i1 = 0; i1 < _len_res_curr0; i1++) {
            int _len_res_curr1 = 1;
              free(res_curr[i1]);
          }
          free(res_curr);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

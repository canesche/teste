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
struct btree_head {scalar_t__ height; int /*<<< orphan*/ * node; } ;

/* Variables and functions */

__attribute__((used)) static inline void __btree_init(struct btree_head *head)
{
	head->node = NULL;
	head->height = 0;
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
          int _len_head0 = 1;
          struct btree_head * head = (struct btree_head *) malloc(_len_head0*sizeof(struct btree_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_head__i0__node0 = 1;
          head[_i0].node = (int *) malloc(_len_head__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_head__i0__node0; _j0++) {
            head[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __btree_init(head);
          for(int _aux = 0; _aux < _len_head0; _aux++) {
          free(head[_aux].node);
          }
          free(head);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_head0 = 65025;
          struct btree_head * head = (struct btree_head *) malloc(_len_head0*sizeof(struct btree_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_head__i0__node0 = 1;
          head[_i0].node = (int *) malloc(_len_head__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_head__i0__node0; _j0++) {
            head[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __btree_init(head);
          for(int _aux = 0; _aux < _len_head0; _aux++) {
          free(head[_aux].node);
          }
          free(head);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_head0 = 100;
          struct btree_head * head = (struct btree_head *) malloc(_len_head0*sizeof(struct btree_head));
          for(int _i0 = 0; _i0 < _len_head0; _i0++) {
            head[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_head__i0__node0 = 1;
          head[_i0].node = (int *) malloc(_len_head__i0__node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_head__i0__node0; _j0++) {
            head[_i0].node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          __btree_init(head);
          for(int _aux = 0; _aux < _len_head0; _aux++) {
          free(head[_aux].node);
          }
          free(head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

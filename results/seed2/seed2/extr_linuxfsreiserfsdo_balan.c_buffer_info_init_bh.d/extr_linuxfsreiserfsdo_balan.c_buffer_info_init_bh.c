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
struct tree_balance {int dummy; } ;
struct buffer_info {scalar_t__ bi_position; int /*<<< orphan*/ * bi_parent; struct buffer_head* bi_bh; struct tree_balance* tb; } ;
struct buffer_head {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void buffer_info_init_bh(struct tree_balance *tb,
                                       struct buffer_info *bi,
                                       struct buffer_head *bh)
{
	bi->tb          = tb;
	bi->bi_bh       = bh;
	bi->bi_parent   = NULL;
	bi->bi_position = 0;
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
          int _len_tb0 = 1;
          struct tree_balance * tb = (struct tree_balance *) malloc(_len_tb0*sizeof(struct tree_balance));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi0 = 1;
          struct buffer_info * bi = (struct buffer_info *) malloc(_len_bi0*sizeof(struct buffer_info));
          for(int _i0 = 0; _i0 < _len_bi0; _i0++) {
            bi[_i0].bi_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bi__i0__bi_parent0 = 1;
          bi[_i0].bi_parent = (int *) malloc(_len_bi__i0__bi_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_parent0; _j0++) {
            bi[_i0].bi_parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__bi_bh0 = 1;
          bi[_i0].bi_bh = (struct buffer_head *) malloc(_len_bi__i0__bi_bh0*sizeof(struct buffer_head));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_bh0; _j0++) {
            bi[_i0].bi_bh->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__tb0 = 1;
          bi[_i0].tb = (struct tree_balance *) malloc(_len_bi__i0__tb0*sizeof(struct tree_balance));
          for(int _j0 = 0; _j0 < _len_bi__i0__tb0; _j0++) {
            bi[_i0].tb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bh0 = 1;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          buffer_info_init_bh(tb,bi,bh);
          free(tb);
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_parent);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_bh);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].tb);
          }
          free(bi);
          free(bh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tb0 = 65025;
          struct tree_balance * tb = (struct tree_balance *) malloc(_len_tb0*sizeof(struct tree_balance));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi0 = 65025;
          struct buffer_info * bi = (struct buffer_info *) malloc(_len_bi0*sizeof(struct buffer_info));
          for(int _i0 = 0; _i0 < _len_bi0; _i0++) {
            bi[_i0].bi_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bi__i0__bi_parent0 = 1;
          bi[_i0].bi_parent = (int *) malloc(_len_bi__i0__bi_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_parent0; _j0++) {
            bi[_i0].bi_parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__bi_bh0 = 1;
          bi[_i0].bi_bh = (struct buffer_head *) malloc(_len_bi__i0__bi_bh0*sizeof(struct buffer_head));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_bh0; _j0++) {
            bi[_i0].bi_bh->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__tb0 = 1;
          bi[_i0].tb = (struct tree_balance *) malloc(_len_bi__i0__tb0*sizeof(struct tree_balance));
          for(int _j0 = 0; _j0 < _len_bi__i0__tb0; _j0++) {
            bi[_i0].tb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bh0 = 65025;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          buffer_info_init_bh(tb,bi,bh);
          free(tb);
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_parent);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_bh);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].tb);
          }
          free(bi);
          free(bh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tb0 = 100;
          struct tree_balance * tb = (struct tree_balance *) malloc(_len_tb0*sizeof(struct tree_balance));
          for(int _i0 = 0; _i0 < _len_tb0; _i0++) {
            tb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi0 = 100;
          struct buffer_info * bi = (struct buffer_info *) malloc(_len_bi0*sizeof(struct buffer_info));
          for(int _i0 = 0; _i0 < _len_bi0; _i0++) {
            bi[_i0].bi_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bi__i0__bi_parent0 = 1;
          bi[_i0].bi_parent = (int *) malloc(_len_bi__i0__bi_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_parent0; _j0++) {
            bi[_i0].bi_parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__bi_bh0 = 1;
          bi[_i0].bi_bh = (struct buffer_head *) malloc(_len_bi__i0__bi_bh0*sizeof(struct buffer_head));
          for(int _j0 = 0; _j0 < _len_bi__i0__bi_bh0; _j0++) {
            bi[_i0].bi_bh->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bi__i0__tb0 = 1;
          bi[_i0].tb = (struct tree_balance *) malloc(_len_bi__i0__tb0*sizeof(struct tree_balance));
          for(int _j0 = 0; _j0 < _len_bi__i0__tb0; _j0++) {
            bi[_i0].tb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bh0 = 100;
          struct buffer_head * bh = (struct buffer_head *) malloc(_len_bh0*sizeof(struct buffer_head));
          for(int _i0 = 0; _i0 < _len_bh0; _i0++) {
            bh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          buffer_info_init_bh(tb,bi,bh);
          free(tb);
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_parent);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].bi_bh);
          }
          for(int _aux = 0; _aux < _len_bi0; _aux++) {
          free(bi[_aux].tb);
          }
          free(bi);
          free(bh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

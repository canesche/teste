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
struct jffs2_sb_info {int inocache_hashsize; struct jffs2_inode_cache** inocache_list; } ;
struct jffs2_inode_cache {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct jffs2_inode_cache *
first_inode_chain(int *i, struct jffs2_sb_info *c)
{
	for (; *i < c->inocache_hashsize; (*i)++) {
		if (c->inocache_list[*i])
			return c->inocache_list[*i];
	}
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
          int _len_i0 = 1;
          int * i = (int *) malloc(_len_i0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct jffs2_sb_info * c = (struct jffs2_sb_info *) malloc(_len_c0*sizeof(struct jffs2_sb_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].inocache_hashsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__inocache_list0 = 1;
          c[_i0].inocache_list = (struct jffs2_inode_cache **) malloc(_len_c__i0__inocache_list0*sizeof(struct jffs2_inode_cache *));
          for(int _j0 = 0; _j0 < _len_c__i0__inocache_list0; _j0++) {
            int _len_c__i0__inocache_list1 = 1;
            c[_i0].inocache_list[_j0] = (struct jffs2_inode_cache *) malloc(_len_c__i0__inocache_list1*sizeof(struct jffs2_inode_cache));
            for(int _j1 = 0; _j1 < _len_c__i0__inocache_list1; _j1++) {
              c[_i0].inocache_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct jffs2_inode_cache * benchRet = first_inode_chain(i,c);
          printf("%d\n", (*benchRet).dummy);
          free(i);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].inocache_list));
        free(c[_aux].inocache_list);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_i0 = 65025;
          int * i = (int *) malloc(_len_i0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 65025;
          struct jffs2_sb_info * c = (struct jffs2_sb_info *) malloc(_len_c0*sizeof(struct jffs2_sb_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].inocache_hashsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__inocache_list0 = 1;
          c[_i0].inocache_list = (struct jffs2_inode_cache **) malloc(_len_c__i0__inocache_list0*sizeof(struct jffs2_inode_cache *));
          for(int _j0 = 0; _j0 < _len_c__i0__inocache_list0; _j0++) {
            int _len_c__i0__inocache_list1 = 1;
            c[_i0].inocache_list[_j0] = (struct jffs2_inode_cache *) malloc(_len_c__i0__inocache_list1*sizeof(struct jffs2_inode_cache));
            for(int _j1 = 0; _j1 < _len_c__i0__inocache_list1; _j1++) {
              c[_i0].inocache_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct jffs2_inode_cache * benchRet = first_inode_chain(i,c);
          printf("%d\n", (*benchRet).dummy);
          free(i);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].inocache_list));
        free(c[_aux].inocache_list);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_i0 = 100;
          int * i = (int *) malloc(_len_i0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 100;
          struct jffs2_sb_info * c = (struct jffs2_sb_info *) malloc(_len_c0*sizeof(struct jffs2_sb_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].inocache_hashsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__inocache_list0 = 1;
          c[_i0].inocache_list = (struct jffs2_inode_cache **) malloc(_len_c__i0__inocache_list0*sizeof(struct jffs2_inode_cache *));
          for(int _j0 = 0; _j0 < _len_c__i0__inocache_list0; _j0++) {
            int _len_c__i0__inocache_list1 = 1;
            c[_i0].inocache_list[_j0] = (struct jffs2_inode_cache *) malloc(_len_c__i0__inocache_list1*sizeof(struct jffs2_inode_cache));
            for(int _j1 = 0; _j1 < _len_c__i0__inocache_list1; _j1++) {
              c[_i0].inocache_list[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct jffs2_inode_cache * benchRet = first_inode_chain(i,c);
          printf("%d\n", (*benchRet).dummy);
          free(i);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].inocache_list));
        free(c[_aux].inocache_list);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct shadow_spine {scalar_t__ count; struct dm_btree_info* info; } ;
struct dm_btree_info {int dummy; } ;

/* Variables and functions */

void init_shadow_spine(struct shadow_spine *s, struct dm_btree_info *info)
{
	s->info = info;
	s->count = 0;
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
          int _len_s0 = 1;
          struct shadow_spine * s = (struct shadow_spine *) malloc(_len_s0*sizeof(struct shadow_spine));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__info0 = 1;
          s[_i0].info = (struct dm_btree_info *) malloc(_len_s__i0__info0*sizeof(struct dm_btree_info));
          for(int _j0 = 0; _j0 < _len_s__i0__info0; _j0++) {
            s[_i0].info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 1;
          struct dm_btree_info * info = (struct dm_btree_info *) malloc(_len_info0*sizeof(struct dm_btree_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_shadow_spine(s,info);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].info);
          }
          free(s);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct shadow_spine * s = (struct shadow_spine *) malloc(_len_s0*sizeof(struct shadow_spine));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__info0 = 1;
          s[_i0].info = (struct dm_btree_info *) malloc(_len_s__i0__info0*sizeof(struct dm_btree_info));
          for(int _j0 = 0; _j0 < _len_s__i0__info0; _j0++) {
            s[_i0].info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 65025;
          struct dm_btree_info * info = (struct dm_btree_info *) malloc(_len_info0*sizeof(struct dm_btree_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_shadow_spine(s,info);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].info);
          }
          free(s);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct shadow_spine * s = (struct shadow_spine *) malloc(_len_s0*sizeof(struct shadow_spine));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__info0 = 1;
          s[_i0].info = (struct dm_btree_info *) malloc(_len_s__i0__info0*sizeof(struct dm_btree_info));
          for(int _j0 = 0; _j0 < _len_s__i0__info0; _j0++) {
            s[_i0].info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 100;
          struct dm_btree_info * info = (struct dm_btree_info *) malloc(_len_info0*sizeof(struct dm_btree_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_shadow_spine(s,info);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].info);
          }
          free(s);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

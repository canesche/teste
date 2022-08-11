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
typedef  scalar_t__ u16 ;
struct et8ek8_reglist {scalar_t__ type; } ;
struct et8ek8_meta_reglist {TYPE_1__* reglist; } ;
struct TYPE_2__ {struct et8ek8_reglist* ptr; } ;

/* Variables and functions */

__attribute__((used)) static struct et8ek8_reglist *et8ek8_reglist_find_type(
		struct et8ek8_meta_reglist *meta,
		u16 type)
{
	struct et8ek8_reglist **next = &meta->reglist[0].ptr;

	while (*next) {
		if ((*next)->type == type)
			return *next;

		next++;
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
          long type = 100;
          int _len_meta0 = 1;
          struct et8ek8_meta_reglist * meta = (struct et8ek8_meta_reglist *) malloc(_len_meta0*sizeof(struct et8ek8_meta_reglist));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__reglist0 = 1;
          meta[_i0].reglist = (struct TYPE_2__ *) malloc(_len_meta__i0__reglist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist0; _j0++) {
              int _len_meta__i0__reglist_ptr0 = 1;
          meta[_i0].reglist->ptr = (struct et8ek8_reglist *) malloc(_len_meta__i0__reglist_ptr0*sizeof(struct et8ek8_reglist));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist_ptr0; _j0++) {
            meta[_i0].reglist->ptr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct et8ek8_reglist * benchRet = et8ek8_reglist_find_type(meta,type);
          printf("%ld\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].reglist);
          }
          free(meta);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          int _len_meta0 = 65025;
          struct et8ek8_meta_reglist * meta = (struct et8ek8_meta_reglist *) malloc(_len_meta0*sizeof(struct et8ek8_meta_reglist));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__reglist0 = 1;
          meta[_i0].reglist = (struct TYPE_2__ *) malloc(_len_meta__i0__reglist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist0; _j0++) {
              int _len_meta__i0__reglist_ptr0 = 1;
          meta[_i0].reglist->ptr = (struct et8ek8_reglist *) malloc(_len_meta__i0__reglist_ptr0*sizeof(struct et8ek8_reglist));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist_ptr0; _j0++) {
            meta[_i0].reglist->ptr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct et8ek8_reglist * benchRet = et8ek8_reglist_find_type(meta,type);
          printf("%ld\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].reglist);
          }
          free(meta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          int _len_meta0 = 100;
          struct et8ek8_meta_reglist * meta = (struct et8ek8_meta_reglist *) malloc(_len_meta0*sizeof(struct et8ek8_meta_reglist));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__reglist0 = 1;
          meta[_i0].reglist = (struct TYPE_2__ *) malloc(_len_meta__i0__reglist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist0; _j0++) {
              int _len_meta__i0__reglist_ptr0 = 1;
          meta[_i0].reglist->ptr = (struct et8ek8_reglist *) malloc(_len_meta__i0__reglist_ptr0*sizeof(struct et8ek8_reglist));
          for(int _j0 = 0; _j0 < _len_meta__i0__reglist_ptr0; _j0++) {
            meta[_i0].reglist->ptr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct et8ek8_reglist * benchRet = et8ek8_reglist_find_type(meta,type);
          printf("%ld\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_meta0; _aux++) {
          free(meta[_aux].reglist);
          }
          free(meta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

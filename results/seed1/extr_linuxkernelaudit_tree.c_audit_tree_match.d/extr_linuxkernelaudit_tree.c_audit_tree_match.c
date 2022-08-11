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
struct audit_tree {int dummy; } ;
struct audit_chunk {int count; TYPE_1__* owners; } ;
struct TYPE_2__ {struct audit_tree* owner; } ;

/* Variables and functions */

bool audit_tree_match(struct audit_chunk *chunk, struct audit_tree *tree)
{
	int n;
	for (n = 0; n < chunk->count; n++)
		if (chunk->owners[n].owner == tree)
			return true;
	return false;
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
          int _len_chunk0 = 1;
          struct audit_chunk * chunk = (struct audit_chunk *) malloc(_len_chunk0*sizeof(struct audit_chunk));
          for(int _i0 = 0; _i0 < _len_chunk0; _i0++) {
            chunk[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chunk__i0__owners0 = 1;
          chunk[_i0].owners = (struct TYPE_2__ *) malloc(_len_chunk__i0__owners0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners0; _j0++) {
              int _len_chunk__i0__owners_owner0 = 1;
          chunk[_i0].owners->owner = (struct audit_tree *) malloc(_len_chunk__i0__owners_owner0*sizeof(struct audit_tree));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners_owner0; _j0++) {
            chunk[_i0].owners->owner->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tree0 = 1;
          struct audit_tree * tree = (struct audit_tree *) malloc(_len_tree0*sizeof(struct audit_tree));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audit_tree_match(chunk,tree);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chunk0; _aux++) {
          free(chunk[_aux].owners);
          }
          free(chunk);
          free(tree);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chunk0 = 65025;
          struct audit_chunk * chunk = (struct audit_chunk *) malloc(_len_chunk0*sizeof(struct audit_chunk));
          for(int _i0 = 0; _i0 < _len_chunk0; _i0++) {
            chunk[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chunk__i0__owners0 = 1;
          chunk[_i0].owners = (struct TYPE_2__ *) malloc(_len_chunk__i0__owners0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners0; _j0++) {
              int _len_chunk__i0__owners_owner0 = 1;
          chunk[_i0].owners->owner = (struct audit_tree *) malloc(_len_chunk__i0__owners_owner0*sizeof(struct audit_tree));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners_owner0; _j0++) {
            chunk[_i0].owners->owner->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tree0 = 65025;
          struct audit_tree * tree = (struct audit_tree *) malloc(_len_tree0*sizeof(struct audit_tree));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audit_tree_match(chunk,tree);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chunk0; _aux++) {
          free(chunk[_aux].owners);
          }
          free(chunk);
          free(tree);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chunk0 = 100;
          struct audit_chunk * chunk = (struct audit_chunk *) malloc(_len_chunk0*sizeof(struct audit_chunk));
          for(int _i0 = 0; _i0 < _len_chunk0; _i0++) {
            chunk[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chunk__i0__owners0 = 1;
          chunk[_i0].owners = (struct TYPE_2__ *) malloc(_len_chunk__i0__owners0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners0; _j0++) {
              int _len_chunk__i0__owners_owner0 = 1;
          chunk[_i0].owners->owner = (struct audit_tree *) malloc(_len_chunk__i0__owners_owner0*sizeof(struct audit_tree));
          for(int _j0 = 0; _j0 < _len_chunk__i0__owners_owner0; _j0++) {
            chunk[_i0].owners->owner->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tree0 = 100;
          struct audit_tree * tree = (struct audit_tree *) malloc(_len_tree0*sizeof(struct audit_tree));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audit_tree_match(chunk,tree);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chunk0; _aux++) {
          free(chunk[_aux].owners);
          }
          free(chunk);
          free(tree);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

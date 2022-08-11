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
typedef  int uint64_t ;
struct xfs_iext_leaf {TYPE_1__* recs; } ;
struct TYPE_2__ {int lo; } ;

/* Variables and functions */
 int XFS_IEXT_STARTOFF_MASK ; 

__attribute__((used)) static inline uint64_t
xfs_iext_leaf_key(
	struct xfs_iext_leaf	*leaf,
	int			n)
{
	return leaf->recs[n].lo & XFS_IEXT_STARTOFF_MASK;
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
          int n = 100;
          int _len_leaf0 = 1;
          struct xfs_iext_leaf * leaf = (struct xfs_iext_leaf *) malloc(_len_leaf0*sizeof(struct xfs_iext_leaf));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
              int _len_leaf__i0__recs0 = 1;
          leaf[_i0].recs = (struct TYPE_2__ *) malloc(_len_leaf__i0__recs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_leaf__i0__recs0; _j0++) {
            leaf[_i0].recs->lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xfs_iext_leaf_key(leaf,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_leaf0; _aux++) {
          free(leaf[_aux].recs);
          }
          free(leaf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_leaf0 = 65025;
          struct xfs_iext_leaf * leaf = (struct xfs_iext_leaf *) malloc(_len_leaf0*sizeof(struct xfs_iext_leaf));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
              int _len_leaf__i0__recs0 = 1;
          leaf[_i0].recs = (struct TYPE_2__ *) malloc(_len_leaf__i0__recs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_leaf__i0__recs0; _j0++) {
            leaf[_i0].recs->lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xfs_iext_leaf_key(leaf,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_leaf0; _aux++) {
          free(leaf[_aux].recs);
          }
          free(leaf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_leaf0 = 100;
          struct xfs_iext_leaf * leaf = (struct xfs_iext_leaf *) malloc(_len_leaf0*sizeof(struct xfs_iext_leaf));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
              int _len_leaf__i0__recs0 = 1;
          leaf[_i0].recs = (struct TYPE_2__ *) malloc(_len_leaf__i0__recs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_leaf__i0__recs0; _j0++) {
            leaf[_i0].recs->lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xfs_iext_leaf_key(leaf,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_leaf0; _aux++) {
          free(leaf[_aux].recs);
          }
          free(leaf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

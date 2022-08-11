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
struct xfs_ag_resv {int dummy; } ;
struct xfs_perag {struct xfs_ag_resv pag_rmapbt_resv; struct xfs_ag_resv pag_meta_resv; } ;
typedef  enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;

/* Variables and functions */
#define  XFS_AG_RESV_METADATA 129 
#define  XFS_AG_RESV_RMAPBT 128 

__attribute__((used)) static inline struct xfs_ag_resv *
xfs_perag_resv(
	struct xfs_perag	*pag,
	enum xfs_ag_resv_type	type)
{
	switch (type) {
	case XFS_AG_RESV_METADATA:
		return &pag->pag_meta_resv;
	case XFS_AG_RESV_RMAPBT:
		return &pag->pag_rmapbt_resv;
	default:
		return NULL;
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
          enum xfs_ag_resv_type type = 0;
          int _len_pag0 = 1;
          struct xfs_perag * pag = (struct xfs_perag *) malloc(_len_pag0*sizeof(struct xfs_perag));
          for(int _i0 = 0; _i0 < _len_pag0; _i0++) {
            pag[_i0].pag_rmapbt_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        pag[_i0].pag_meta_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct xfs_ag_resv * benchRet = xfs_perag_resv(pag,type);
          printf("%d\n", (*benchRet).dummy);
          free(pag);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum xfs_ag_resv_type type = 0;
          int _len_pag0 = 65025;
          struct xfs_perag * pag = (struct xfs_perag *) malloc(_len_pag0*sizeof(struct xfs_perag));
          for(int _i0 = 0; _i0 < _len_pag0; _i0++) {
            pag[_i0].pag_rmapbt_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        pag[_i0].pag_meta_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct xfs_ag_resv * benchRet = xfs_perag_resv(pag,type);
          printf("%d\n", (*benchRet).dummy);
          free(pag);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum xfs_ag_resv_type type = 0;
          int _len_pag0 = 100;
          struct xfs_perag * pag = (struct xfs_perag *) malloc(_len_pag0*sizeof(struct xfs_perag));
          for(int _i0 = 0; _i0 < _len_pag0; _i0++) {
            pag[_i0].pag_rmapbt_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        pag[_i0].pag_meta_resv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct xfs_ag_resv * benchRet = xfs_perag_resv(pag,type);
          printf("%d\n", (*benchRet).dummy);
          free(pag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

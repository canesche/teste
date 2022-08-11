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
struct nfs_direct_req {int /*<<< orphan*/  ds_cinfo; int /*<<< orphan*/  mds_cinfo; int /*<<< orphan*/  inode; } ;
struct nfs_commit_info {int /*<<< orphan*/ * completion_ops; struct nfs_direct_req* dreq; int /*<<< orphan*/ * ds; int /*<<< orphan*/ * mds; int /*<<< orphan*/  inode; } ;

/* Variables and functions */
 int /*<<< orphan*/  nfs_direct_commit_completion_ops ; 

void nfs_init_cinfo_from_dreq(struct nfs_commit_info *cinfo,
			      struct nfs_direct_req *dreq)
{
	cinfo->inode = dreq->inode;
	cinfo->mds = &dreq->mds_cinfo;
	cinfo->ds = &dreq->ds_cinfo;
	cinfo->dreq = dreq;
	cinfo->completion_ops = &nfs_direct_commit_completion_ops;
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
          int _len_cinfo0 = 1;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              int _len_cinfo__i0__completion_ops0 = 1;
          cinfo[_i0].completion_ops = (int *) malloc(_len_cinfo__i0__completion_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__completion_ops0; _j0++) {
            cinfo[_i0].completion_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__dreq0 = 1;
          cinfo[_i0].dreq = (struct nfs_direct_req *) malloc(_len_cinfo__i0__dreq0*sizeof(struct nfs_direct_req));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__dreq0; _j0++) {
            cinfo[_i0].dreq->ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__ds0 = 1;
          cinfo[_i0].ds = (int *) malloc(_len_cinfo__i0__ds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__ds0; _j0++) {
            cinfo[_i0].ds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__mds0 = 1;
          cinfo[_i0].mds = (int *) malloc(_len_cinfo__i0__mds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__mds0; _j0++) {
            cinfo[_i0].mds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cinfo[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq0 = 1;
          struct nfs_direct_req * dreq = (struct nfs_direct_req *) malloc(_len_dreq0*sizeof(struct nfs_direct_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
            dreq[_i0].ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_init_cinfo_from_dreq(cinfo,dreq);
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].completion_ops);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].dreq);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].ds);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].mds);
          }
          free(cinfo);
          free(dreq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cinfo0 = 65025;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              int _len_cinfo__i0__completion_ops0 = 1;
          cinfo[_i0].completion_ops = (int *) malloc(_len_cinfo__i0__completion_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__completion_ops0; _j0++) {
            cinfo[_i0].completion_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__dreq0 = 1;
          cinfo[_i0].dreq = (struct nfs_direct_req *) malloc(_len_cinfo__i0__dreq0*sizeof(struct nfs_direct_req));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__dreq0; _j0++) {
            cinfo[_i0].dreq->ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__ds0 = 1;
          cinfo[_i0].ds = (int *) malloc(_len_cinfo__i0__ds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__ds0; _j0++) {
            cinfo[_i0].ds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__mds0 = 1;
          cinfo[_i0].mds = (int *) malloc(_len_cinfo__i0__mds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__mds0; _j0++) {
            cinfo[_i0].mds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cinfo[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq0 = 65025;
          struct nfs_direct_req * dreq = (struct nfs_direct_req *) malloc(_len_dreq0*sizeof(struct nfs_direct_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
            dreq[_i0].ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_init_cinfo_from_dreq(cinfo,dreq);
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].completion_ops);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].dreq);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].ds);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].mds);
          }
          free(cinfo);
          free(dreq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cinfo0 = 100;
          struct nfs_commit_info * cinfo = (struct nfs_commit_info *) malloc(_len_cinfo0*sizeof(struct nfs_commit_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
              int _len_cinfo__i0__completion_ops0 = 1;
          cinfo[_i0].completion_ops = (int *) malloc(_len_cinfo__i0__completion_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__completion_ops0; _j0++) {
            cinfo[_i0].completion_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__dreq0 = 1;
          cinfo[_i0].dreq = (struct nfs_direct_req *) malloc(_len_cinfo__i0__dreq0*sizeof(struct nfs_direct_req));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__dreq0; _j0++) {
            cinfo[_i0].dreq->ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].dreq->inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__ds0 = 1;
          cinfo[_i0].ds = (int *) malloc(_len_cinfo__i0__ds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__ds0; _j0++) {
            cinfo[_i0].ds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cinfo__i0__mds0 = 1;
          cinfo[_i0].mds = (int *) malloc(_len_cinfo__i0__mds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cinfo__i0__mds0; _j0++) {
            cinfo[_i0].mds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cinfo[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq0 = 100;
          struct nfs_direct_req * dreq = (struct nfs_direct_req *) malloc(_len_dreq0*sizeof(struct nfs_direct_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
            dreq[_i0].ds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].mds_cinfo = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_init_cinfo_from_dreq(cinfo,dreq);
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].completion_ops);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].dreq);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].ds);
          }
          for(int _aux = 0; _aux < _len_cinfo0; _aux++) {
          free(cinfo[_aux].mds);
          }
          free(cinfo);
          free(dreq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

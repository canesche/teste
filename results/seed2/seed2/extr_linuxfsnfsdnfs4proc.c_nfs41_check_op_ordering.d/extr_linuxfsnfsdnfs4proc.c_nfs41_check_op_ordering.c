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
struct nfsd4_op {scalar_t__ status; size_t opnum; } ;
struct nfsd4_compoundargs {scalar_t__ minorversion; int opcnt; struct nfsd4_op* ops; } ;
typedef  int /*<<< orphan*/  __be32 ;
struct TYPE_2__ {int op_flags; } ;

/* Variables and functions */
 int ALLOWED_AS_FIRST_OP ; 
 size_t OP_SEQUENCE ; 
 int /*<<< orphan*/  nfs_ok ; 
 TYPE_1__* nfsd4_ops ; 
 int /*<<< orphan*/  nfserr_not_only_op ; 
 scalar_t__ nfserr_op_illegal ; 
 int /*<<< orphan*/  nfserr_op_not_in_session ; 

__attribute__((used)) static __be32 nfs41_check_op_ordering(struct nfsd4_compoundargs *args)
{
	struct nfsd4_op *first_op = &args->ops[0];

	/* These ordering requirements don't apply to NFSv4.0: */
	if (args->minorversion == 0)
		return nfs_ok;
	/* This is weird, but OK, not our problem: */
	if (args->opcnt == 0)
		return nfs_ok;
	if (first_op->status == nfserr_op_illegal)
		return nfs_ok;
	if (!(nfsd4_ops[first_op->opnum].op_flags & ALLOWED_AS_FIRST_OP))
		return nfserr_op_not_in_session;
	if (first_op->opnum == OP_SEQUENCE)
		return nfs_ok;
	/*
	 * So first_op is something allowed outside a session, like
	 * EXCHANGE_ID; but then it has to be the only op in the
	 * compound:
	 */
	if (args->opcnt != 1)
		return nfserr_not_only_op;
	return nfs_ok;
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
          int _len_args0 = 1;
          struct nfsd4_compoundargs * args = (struct nfsd4_compoundargs *) malloc(_len_args0*sizeof(struct nfsd4_compoundargs));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].minorversion = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__ops0 = 1;
          args[_i0].ops = (struct nfsd4_op *) malloc(_len_args__i0__ops0*sizeof(struct nfsd4_op));
          for(int _j0 = 0; _j0 < _len_args__i0__ops0; _j0++) {
            args[_i0].ops->status = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs41_check_op_ordering(args);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].ops);
          }
          free(args);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_args0 = 65025;
          struct nfsd4_compoundargs * args = (struct nfsd4_compoundargs *) malloc(_len_args0*sizeof(struct nfsd4_compoundargs));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].minorversion = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__ops0 = 1;
          args[_i0].ops = (struct nfsd4_op *) malloc(_len_args__i0__ops0*sizeof(struct nfsd4_op));
          for(int _j0 = 0; _j0 < _len_args__i0__ops0; _j0++) {
            args[_i0].ops->status = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs41_check_op_ordering(args);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].ops);
          }
          free(args);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_args0 = 100;
          struct nfsd4_compoundargs * args = (struct nfsd4_compoundargs *) malloc(_len_args0*sizeof(struct nfsd4_compoundargs));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].minorversion = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__ops0 = 1;
          args[_i0].ops = (struct nfsd4_op *) malloc(_len_args__i0__ops0*sizeof(struct nfsd4_op));
          for(int _j0 = 0; _j0 < _len_args__i0__ops0; _j0++) {
            args[_i0].ops->status = ((-2 * (next_i()%2)) + 1) * next_i();
        args[_i0].ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfs41_check_op_ordering(args);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_args0; _aux++) {
          free(args[_aux].ops);
          }
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

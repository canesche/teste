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
union nfsd4_op_u {int /*<<< orphan*/ * getfh; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int /*<<< orphan*/  current_fh; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 int /*<<< orphan*/  nfs_ok ; 

__attribute__((used)) static __be32
nfsd4_getfh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
	    union nfsd4_op_u *u)
{
	u->getfh = &cstate->current_fh;
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
          int _len_rqstp0 = 1;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cstate0 = 1;
          struct nfsd4_compound_state * cstate = (struct nfsd4_compound_state *) malloc(_len_cstate0*sizeof(struct nfsd4_compound_state));
          for(int _i0 = 0; _i0 < _len_cstate0; _i0++) {
            cstate[_i0].current_fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 1;
          union nfsd4_op_u * u = (union nfsd4_op_u *) malloc(_len_u0*sizeof(union nfsd4_op_u));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = 0;
          }
          int benchRet = nfsd4_getfh(rqstp,cstate,u);
          printf("%d\n", benchRet); 
          free(rqstp);
          free(cstate);
          free(u);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cstate0 = 65025;
          struct nfsd4_compound_state * cstate = (struct nfsd4_compound_state *) malloc(_len_cstate0*sizeof(struct nfsd4_compound_state));
          for(int _i0 = 0; _i0 < _len_cstate0; _i0++) {
            cstate[_i0].current_fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 65025;
          union nfsd4_op_u * u = (union nfsd4_op_u *) malloc(_len_u0*sizeof(union nfsd4_op_u));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = 0;
          }
          int benchRet = nfsd4_getfh(rqstp,cstate,u);
          printf("%d\n", benchRet); 
          free(rqstp);
          free(cstate);
          free(u);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cstate0 = 100;
          struct nfsd4_compound_state * cstate = (struct nfsd4_compound_state *) malloc(_len_cstate0*sizeof(struct nfsd4_compound_state));
          for(int _i0 = 0; _i0 < _len_cstate0; _i0++) {
            cstate[_i0].current_fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_u0 = 100;
          union nfsd4_op_u * u = (union nfsd4_op_u *) malloc(_len_u0*sizeof(union nfsd4_op_u));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = 0;
          }
          int benchRet = nfsd4_getfh(rqstp,cstate,u);
          printf("%d\n", benchRet); 
          free(rqstp);
          free(cstate);
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct nfs_client {TYPE_2__* cl_rpcclient; } ;
typedef  scalar_t__ rpc_authflavor_t ;
struct TYPE_4__ {TYPE_1__* cl_auth; } ;
struct TYPE_3__ {scalar_t__ au_flavor; } ;

/* Variables and functions */
 scalar_t__ RPC_AUTH_GSS_KRB5I ; 
 scalar_t__ RPC_AUTH_GSS_KRB5P ; 

__attribute__((used)) static bool _nfs4_is_integrity_protected(struct nfs_client *clp)
{
	rpc_authflavor_t flavor = clp->cl_rpcclient->cl_auth->au_flavor;
	return (flavor == RPC_AUTH_GSS_KRB5I) || (flavor == RPC_AUTH_GSS_KRB5P);
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
          int _len_clp0 = 1;
          struct nfs_client * clp = (struct nfs_client *) malloc(_len_clp0*sizeof(struct nfs_client));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
              int _len_clp__i0__cl_rpcclient0 = 1;
          clp[_i0].cl_rpcclient = (struct TYPE_4__ *) malloc(_len_clp__i0__cl_rpcclient0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient0; _j0++) {
              int _len_clp__i0__cl_rpcclient_cl_auth0 = 1;
          clp[_i0].cl_rpcclient->cl_auth = (struct TYPE_3__ *) malloc(_len_clp__i0__cl_rpcclient_cl_auth0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient_cl_auth0; _j0++) {
            clp[_i0].cl_rpcclient->cl_auth->au_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = _nfs4_is_integrity_protected(clp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].cl_rpcclient);
          }
          free(clp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clp0 = 65025;
          struct nfs_client * clp = (struct nfs_client *) malloc(_len_clp0*sizeof(struct nfs_client));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
              int _len_clp__i0__cl_rpcclient0 = 1;
          clp[_i0].cl_rpcclient = (struct TYPE_4__ *) malloc(_len_clp__i0__cl_rpcclient0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient0; _j0++) {
              int _len_clp__i0__cl_rpcclient_cl_auth0 = 1;
          clp[_i0].cl_rpcclient->cl_auth = (struct TYPE_3__ *) malloc(_len_clp__i0__cl_rpcclient_cl_auth0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient_cl_auth0; _j0++) {
            clp[_i0].cl_rpcclient->cl_auth->au_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = _nfs4_is_integrity_protected(clp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].cl_rpcclient);
          }
          free(clp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clp0 = 100;
          struct nfs_client * clp = (struct nfs_client *) malloc(_len_clp0*sizeof(struct nfs_client));
          for(int _i0 = 0; _i0 < _len_clp0; _i0++) {
              int _len_clp__i0__cl_rpcclient0 = 1;
          clp[_i0].cl_rpcclient = (struct TYPE_4__ *) malloc(_len_clp__i0__cl_rpcclient0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient0; _j0++) {
              int _len_clp__i0__cl_rpcclient_cl_auth0 = 1;
          clp[_i0].cl_rpcclient->cl_auth = (struct TYPE_3__ *) malloc(_len_clp__i0__cl_rpcclient_cl_auth0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_clp__i0__cl_rpcclient_cl_auth0; _j0++) {
            clp[_i0].cl_rpcclient->cl_auth->au_flavor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = _nfs4_is_integrity_protected(clp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_clp0; _aux++) {
          free(clp[_aux].cl_rpcclient);
          }
          free(clp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

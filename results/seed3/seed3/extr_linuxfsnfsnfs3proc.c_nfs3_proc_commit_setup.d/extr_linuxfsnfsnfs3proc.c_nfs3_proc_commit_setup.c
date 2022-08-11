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
struct rpc_message {int /*<<< orphan*/ * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_commit_data {int dummy; } ;

/* Variables and functions */
 size_t NFS3PROC_COMMIT ; 
 int /*<<< orphan*/ * nfs3_procedures ; 

__attribute__((used)) static void nfs3_proc_commit_setup(struct nfs_commit_data *data, struct rpc_message *msg,
				   struct rpc_clnt **clnt)
{
	msg->rpc_proc = &nfs3_procedures[NFS3PROC_COMMIT];
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
          int _len_data0 = 1;
          struct nfs_commit_data * data = (struct nfs_commit_data *) malloc(_len_data0*sizeof(struct nfs_commit_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          struct rpc_message * msg = (struct rpc_message *) malloc(_len_msg0*sizeof(struct rpc_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__rpc_proc0 = 1;
          msg[_i0].rpc_proc = (int *) malloc(_len_msg__i0__rpc_proc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__rpc_proc0; _j0++) {
            msg[_i0].rpc_proc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clnt0 = 1;
          struct rpc_clnt ** clnt = (struct rpc_clnt **) malloc(_len_clnt0*sizeof(struct rpc_clnt *));
          for(int _i0 = 0; _i0 < _len_clnt0; _i0++) {
            int _len_clnt1 = 1;
            clnt[_i0] = (struct rpc_clnt *) malloc(_len_clnt1*sizeof(struct rpc_clnt));
            for(int _i1 = 0; _i1 < _len_clnt1; _i1++) {
              clnt[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          nfs3_proc_commit_setup(data,msg,clnt);
          free(data);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].rpc_proc);
          }
          free(msg);
          for(int i1 = 0; i1 < _len_clnt0; i1++) {
            int _len_clnt1 = 1;
              free(clnt[i1]);
          }
          free(clnt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct nfs_commit_data * data = (struct nfs_commit_data *) malloc(_len_data0*sizeof(struct nfs_commit_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 65025;
          struct rpc_message * msg = (struct rpc_message *) malloc(_len_msg0*sizeof(struct rpc_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__rpc_proc0 = 1;
          msg[_i0].rpc_proc = (int *) malloc(_len_msg__i0__rpc_proc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__rpc_proc0; _j0++) {
            msg[_i0].rpc_proc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clnt0 = 65025;
          struct rpc_clnt ** clnt = (struct rpc_clnt **) malloc(_len_clnt0*sizeof(struct rpc_clnt *));
          for(int _i0 = 0; _i0 < _len_clnt0; _i0++) {
            int _len_clnt1 = 1;
            clnt[_i0] = (struct rpc_clnt *) malloc(_len_clnt1*sizeof(struct rpc_clnt));
            for(int _i1 = 0; _i1 < _len_clnt1; _i1++) {
              clnt[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          nfs3_proc_commit_setup(data,msg,clnt);
          free(data);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].rpc_proc);
          }
          free(msg);
          for(int i1 = 0; i1 < _len_clnt0; i1++) {
            int _len_clnt1 = 1;
              free(clnt[i1]);
          }
          free(clnt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct nfs_commit_data * data = (struct nfs_commit_data *) malloc(_len_data0*sizeof(struct nfs_commit_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 100;
          struct rpc_message * msg = (struct rpc_message *) malloc(_len_msg0*sizeof(struct rpc_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__rpc_proc0 = 1;
          msg[_i0].rpc_proc = (int *) malloc(_len_msg__i0__rpc_proc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__rpc_proc0; _j0++) {
            msg[_i0].rpc_proc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_clnt0 = 100;
          struct rpc_clnt ** clnt = (struct rpc_clnt **) malloc(_len_clnt0*sizeof(struct rpc_clnt *));
          for(int _i0 = 0; _i0 < _len_clnt0; _i0++) {
            int _len_clnt1 = 1;
            clnt[_i0] = (struct rpc_clnt *) malloc(_len_clnt1*sizeof(struct rpc_clnt));
            for(int _i1 = 0; _i1 < _len_clnt1; _i1++) {
              clnt[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          nfs3_proc_commit_setup(data,msg,clnt);
          free(data);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].rpc_proc);
          }
          free(msg);
          for(int i1 = 0; i1 < _len_clnt0; i1++) {
            int _len_clnt1 = 1;
              free(clnt[i1]);
          }
          free(clnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

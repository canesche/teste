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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  cl_id; int /*<<< orphan*/  cl_boot; } ;
struct nfsd4_sessionid {TYPE_2__ clientid; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct nfsd4_session {TYPE_1__ se_sessionid; } ;
struct TYPE_7__ {int /*<<< orphan*/  cl_id; int /*<<< orphan*/  cl_boot; } ;
typedef  TYPE_3__ clientid_t ;

/* Variables and functions */

__attribute__((used)) static void
copy_clientid(clientid_t *clid, struct nfsd4_session *session)
{
	struct nfsd4_sessionid *sid =
			(struct nfsd4_sessionid *)session->se_sessionid.data;

	clid->cl_boot = sid->clientid.cl_boot;
	clid->cl_id = sid->clientid.cl_id;
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
          int _len_clid0 = 1;
          struct TYPE_7__ * clid = (struct TYPE_7__ *) malloc(_len_clid0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_clid0; _i0++) {
            clid[_i0].cl_id = ((-2 * (next_i()%2)) + 1) * next_i();
        clid[_i0].cl_boot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_session0 = 1;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_sessionid.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_clientid(clid,session);
          free(clid);
          free(session);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_clid0 = 65025;
          struct TYPE_7__ * clid = (struct TYPE_7__ *) malloc(_len_clid0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_clid0; _i0++) {
            clid[_i0].cl_id = ((-2 * (next_i()%2)) + 1) * next_i();
        clid[_i0].cl_boot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_session0 = 65025;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_sessionid.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_clientid(clid,session);
          free(clid);
          free(session);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_clid0 = 100;
          struct TYPE_7__ * clid = (struct TYPE_7__ *) malloc(_len_clid0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_clid0; _i0++) {
            clid[_i0].cl_id = ((-2 * (next_i()%2)) + 1) * next_i();
        clid[_i0].cl_boot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_session0 = 100;
          struct nfsd4_session * session = (struct nfsd4_session *) malloc(_len_session0*sizeof(struct nfsd4_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session[_i0].se_sessionid.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_clientid(clid,session);
          free(clid);
          free(session);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

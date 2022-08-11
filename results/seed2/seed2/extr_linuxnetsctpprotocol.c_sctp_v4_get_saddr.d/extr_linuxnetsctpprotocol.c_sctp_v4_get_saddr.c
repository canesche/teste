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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; int /*<<< orphan*/  sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sctp_transport {scalar_t__ dst; union sctp_addr saddr; } ;
struct sctp_sock {int dummy; } ;
struct rtable {int dummy; } ;
struct TYPE_7__ {int /*<<< orphan*/  saddr; } ;
struct TYPE_8__ {TYPE_3__ ip4; } ;
struct flowi {TYPE_4__ u; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET ; 

__attribute__((used)) static void sctp_v4_get_saddr(struct sctp_sock *sk,
			      struct sctp_transport *t,
			      struct flowi *fl)
{
	union sctp_addr *saddr = &t->saddr;
	struct rtable *rt = (struct rtable *)t->dst;

	if (rt) {
		saddr->v4.sin_family = AF_INET;
		saddr->v4.sin_addr.s_addr = fl->u.ip4.saddr;
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
          int _len_sk0 = 1;
          struct sctp_sock * sk = (struct sctp_sock *) malloc(_len_sk0*sizeof(struct sctp_sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          struct sctp_transport * t = (struct sctp_transport *) malloc(_len_t0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dst = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].saddr = 0;
          }
          int _len_fl0 = 1;
          struct flowi * fl = (struct flowi *) malloc(_len_fl0*sizeof(struct flowi));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
            fl[_i0].u.ip4.saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v4_get_saddr(sk,t,fl);
          free(sk);
          free(t);
          free(fl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sk0 = 65025;
          struct sctp_sock * sk = (struct sctp_sock *) malloc(_len_sk0*sizeof(struct sctp_sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 65025;
          struct sctp_transport * t = (struct sctp_transport *) malloc(_len_t0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dst = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].saddr = 0;
          }
          int _len_fl0 = 65025;
          struct flowi * fl = (struct flowi *) malloc(_len_fl0*sizeof(struct flowi));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
            fl[_i0].u.ip4.saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v4_get_saddr(sk,t,fl);
          free(sk);
          free(t);
          free(fl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sk0 = 100;
          struct sctp_sock * sk = (struct sctp_sock *) malloc(_len_sk0*sizeof(struct sctp_sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 100;
          struct sctp_transport * t = (struct sctp_transport *) malloc(_len_t0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dst = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].saddr = 0;
          }
          int _len_fl0 = 100;
          struct flowi * fl = (struct flowi *) malloc(_len_fl0*sizeof(struct flowi));
          for(int _i0 = 0; _i0 < _len_fl0; _i0++) {
            fl[_i0].u.ip4.saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v4_get_saddr(sk,t,fl);
          free(sk);
          free(t);
          free(fl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

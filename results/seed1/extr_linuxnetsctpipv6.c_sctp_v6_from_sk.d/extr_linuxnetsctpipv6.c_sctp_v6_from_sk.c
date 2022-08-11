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
struct TYPE_2__ {int /*<<< orphan*/  sin6_addr; scalar_t__ sin6_port; int /*<<< orphan*/  sin6_family; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sock {int /*<<< orphan*/  sk_v6_rcv_saddr; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET6 ; 

__attribute__((used)) static void sctp_v6_from_sk(union sctp_addr *addr, struct sock *sk)
{
	addr->v6.sin6_family = AF_INET6;
	addr->v6.sin6_port = 0;
	addr->v6.sin6_addr = sk->sk_v6_rcv_saddr;
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
          int _len_addr0 = 1;
          union sctp_addr * addr = (union sctp_addr *) malloc(_len_addr0*sizeof(union sctp_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_v6_rcv_saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v6_from_sk(addr,sk);
          free(addr);
          free(sk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_addr0 = 65025;
          union sctp_addr * addr = (union sctp_addr *) malloc(_len_addr0*sizeof(union sctp_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_v6_rcv_saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v6_from_sk(addr,sk);
          free(addr);
          free(sk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_addr0 = 100;
          union sctp_addr * addr = (union sctp_addr *) malloc(_len_addr0*sizeof(union sctp_addr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = 0;
          }
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_v6_rcv_saddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_v6_from_sk(addr,sk);
          free(addr);
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

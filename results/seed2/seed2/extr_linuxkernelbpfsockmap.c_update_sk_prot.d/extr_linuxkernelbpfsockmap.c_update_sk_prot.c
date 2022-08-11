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
struct sock {scalar_t__ sk_family; int /*<<< orphan*/ * sk_prot; } ;
struct smap_psock {scalar_t__ bpf_tx_msg; } ;

/* Variables and functions */
 scalar_t__ AF_INET6 ; 
 int SOCKMAP_BASE ; 
 int SOCKMAP_IPV4 ; 
 int SOCKMAP_IPV6 ; 
 int SOCKMAP_TX ; 
 int /*<<< orphan*/ ** bpf_tcp_prots ; 

__attribute__((used)) static void update_sk_prot(struct sock *sk, struct smap_psock *psock)
{
	int family = sk->sk_family == AF_INET6 ? SOCKMAP_IPV6 : SOCKMAP_IPV4;
	int conf = psock->bpf_tx_msg ? SOCKMAP_TX : SOCKMAP_BASE;

	sk->sk_prot = &bpf_tcp_prots[family][conf];
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
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sk__i0__sk_prot0 = 1;
          sk[_i0].sk_prot = (int *) malloc(_len_sk__i0__sk_prot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_prot0; _j0++) {
            sk[_i0].sk_prot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psock0 = 1;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
            psock[_i0].bpf_tx_msg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sk_prot(sk,psock);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_prot);
          }
          free(sk);
          free(psock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sk__i0__sk_prot0 = 1;
          sk[_i0].sk_prot = (int *) malloc(_len_sk__i0__sk_prot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_prot0; _j0++) {
            sk[_i0].sk_prot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psock0 = 65025;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
            psock[_i0].bpf_tx_msg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sk_prot(sk,psock);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_prot);
          }
          free(sk);
          free(psock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sk__i0__sk_prot0 = 1;
          sk[_i0].sk_prot = (int *) malloc(_len_sk__i0__sk_prot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_prot0; _j0++) {
            sk[_i0].sk_prot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psock0 = 100;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
            psock[_i0].bpf_tx_msg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_sk_prot(sk,psock);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_prot);
          }
          free(sk);
          free(psock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

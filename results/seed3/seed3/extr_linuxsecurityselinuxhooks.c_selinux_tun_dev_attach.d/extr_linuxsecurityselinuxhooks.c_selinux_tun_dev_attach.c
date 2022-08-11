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
struct tun_security_struct {int /*<<< orphan*/  sid; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int /*<<< orphan*/  sclass; int /*<<< orphan*/  sid; } ;

/* Variables and functions */
 int /*<<< orphan*/  SECCLASS_TUN_SOCKET ; 

__attribute__((used)) static int selinux_tun_dev_attach(struct sock *sk, void *security)
{
	struct tun_security_struct *tunsec = security;
	struct sk_security_struct *sksec = sk->sk_security;

	/* we don't currently perform any NetLabel based labeling here and it
	 * isn't clear that we would want to do so anyway; while we could apply
	 * labeling without the support of the TUN user the resulting labeled
	 * traffic from the other end of the connection would almost certainly
	 * cause confusion to the TUN user that had no idea network labeling
	 * protocols were being used */

	sksec->sid = tunsec->sid;
	sksec->sclass = SECCLASS_TUN_SOCKET;

	return 0;
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
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
            sk[_i0].sk_security->sclass = ((-2 * (next_i()%2)) + 1) * next_i();
        sk[_i0].sk_security->sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * security;
          int benchRet = selinux_tun_dev_attach(sk,security);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
            sk[_i0].sk_security->sclass = ((-2 * (next_i()%2)) + 1) * next_i();
        sk[_i0].sk_security->sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * security;
          int benchRet = selinux_tun_dev_attach(sk,security);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_security0 = 1;
          sk[_i0].sk_security = (struct sk_security_struct *) malloc(_len_sk__i0__sk_security0*sizeof(struct sk_security_struct));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_security0; _j0++) {
            sk[_i0].sk_security->sclass = ((-2 * (next_i()%2)) + 1) * next_i();
        sk[_i0].sk_security->sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * security;
          int benchRet = selinux_tun_dev_attach(sk,security);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_security);
          }
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

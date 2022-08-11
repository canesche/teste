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
struct socket {struct sock* sk; } ;
struct sock {int /*<<< orphan*/  sk_state_change; int /*<<< orphan*/  sk_write_space; int /*<<< orphan*/  sk_data_ready; struct ceph_connection* sk_user_data; } ;
struct ceph_connection {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ceph_sock_data_ready ; 
 int /*<<< orphan*/  ceph_sock_state_change ; 
 int /*<<< orphan*/  ceph_sock_write_space ; 

__attribute__((used)) static void set_sock_callbacks(struct socket *sock,
			       struct ceph_connection *con)
{
	struct sock *sk = sock->sk;
	sk->sk_user_data = con;
	sk->sk_data_ready = ceph_sock_data_ready;
	sk->sk_write_space = ceph_sock_write_space;
	sk->sk_state_change = ceph_sock_state_change;
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
          int _len_sock0 = 1;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__sk0 = 1;
          sock[_i0].sk = (struct sock *) malloc(_len_sock__i0__sk0*sizeof(struct sock));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk0; _j0++) {
            sock[_i0].sk->sk_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__sk_sk_user_data0 = 1;
          sock[_i0].sk->sk_user_data = (struct ceph_connection *) malloc(_len_sock__i0__sk_sk_user_data0*sizeof(struct ceph_connection));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk_sk_user_data0; _j0++) {
            sock[_i0].sk->sk_user_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_con0 = 1;
          struct ceph_connection * con = (struct ceph_connection *) malloc(_len_con0*sizeof(struct ceph_connection));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_sock_callbacks(sock,con);
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].sk);
          }
          free(sock);
          free(con);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sock0 = 65025;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__sk0 = 1;
          sock[_i0].sk = (struct sock *) malloc(_len_sock__i0__sk0*sizeof(struct sock));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk0; _j0++) {
            sock[_i0].sk->sk_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__sk_sk_user_data0 = 1;
          sock[_i0].sk->sk_user_data = (struct ceph_connection *) malloc(_len_sock__i0__sk_sk_user_data0*sizeof(struct ceph_connection));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk_sk_user_data0; _j0++) {
            sock[_i0].sk->sk_user_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_con0 = 65025;
          struct ceph_connection * con = (struct ceph_connection *) malloc(_len_con0*sizeof(struct ceph_connection));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_sock_callbacks(sock,con);
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].sk);
          }
          free(sock);
          free(con);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sock0 = 100;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__sk0 = 1;
          sock[_i0].sk = (struct sock *) malloc(_len_sock__i0__sk0*sizeof(struct sock));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk0; _j0++) {
            sock[_i0].sk->sk_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__sk_sk_user_data0 = 1;
          sock[_i0].sk->sk_user_data = (struct ceph_connection *) malloc(_len_sock__i0__sk_sk_user_data0*sizeof(struct ceph_connection));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk_sk_user_data0; _j0++) {
            sock[_i0].sk->sk_user_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_con0 = 100;
          struct ceph_connection * con = (struct ceph_connection *) malloc(_len_con0*sizeof(struct ceph_connection));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
            con[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_sock_callbacks(sock,con);
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].sk);
          }
          free(sock);
          free(con);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

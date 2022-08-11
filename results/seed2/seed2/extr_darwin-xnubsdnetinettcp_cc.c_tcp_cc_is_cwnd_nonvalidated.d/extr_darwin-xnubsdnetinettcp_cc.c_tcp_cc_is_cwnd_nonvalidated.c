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
typedef  int uint32_t ;
struct tcpcb {int t_pipeack; int t_flagsext; int snd_cwnd; TYPE_2__* t_inpcb; } ;
struct TYPE_3__ {scalar_t__ sb_cc; } ;
struct socket {TYPE_1__ so_snd; } ;
struct TYPE_4__ {struct socket* inp_socket; } ;

/* Variables and functions */
 int TF_CWND_NONVALIDATED ; 
 scalar_t__ tcp_check_cwnd_nonvalidated ; 

inline uint32_t
tcp_cc_is_cwnd_nonvalidated(struct tcpcb *tp)
{
	struct socket *so = tp->t_inpcb->inp_socket;
	if (tp->t_pipeack == 0 || tcp_check_cwnd_nonvalidated == 0) {
		tp->t_flagsext &= ~TF_CWND_NONVALIDATED;
		return (0);
	}

	/*
	 * The congestion window is validated if the number of bytes acked
	 * is more than half of the current window or if there is more
	 * data to send in the send socket buffer
	 */
	if (tp->t_pipeack >= (tp->snd_cwnd >> 1) ||
	    (so != NULL && so->so_snd.sb_cc > tp->snd_cwnd))
		tp->t_flagsext &= ~TF_CWND_NONVALIDATED;
	else
		tp->t_flagsext |= TF_CWND_NONVALIDATED;
	return (tp->t_flagsext & TF_CWND_NONVALIDATED);
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_pipeack = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].snd_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tp__i0__t_inpcb0 = 1;
          tp[_i0].t_inpcb = (struct TYPE_4__ *) malloc(_len_tp__i0__t_inpcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb0; _j0++) {
              int _len_tp__i0__t_inpcb_inp_socket0 = 1;
          tp[_i0].t_inpcb->inp_socket = (struct socket *) malloc(_len_tp__i0__t_inpcb_inp_socket0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb_inp_socket0; _j0++) {
            tp[_i0].t_inpcb->inp_socket->so_snd.sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tcp_cc_is_cwnd_nonvalidated(tp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].t_inpcb);
          }
          free(tp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tp0 = 65025;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_pipeack = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].snd_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tp__i0__t_inpcb0 = 1;
          tp[_i0].t_inpcb = (struct TYPE_4__ *) malloc(_len_tp__i0__t_inpcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb0; _j0++) {
              int _len_tp__i0__t_inpcb_inp_socket0 = 1;
          tp[_i0].t_inpcb->inp_socket = (struct socket *) malloc(_len_tp__i0__t_inpcb_inp_socket0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb_inp_socket0; _j0++) {
            tp[_i0].t_inpcb->inp_socket->so_snd.sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tcp_cc_is_cwnd_nonvalidated(tp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].t_inpcb);
          }
          free(tp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tp0 = 100;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_pipeack = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].snd_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tp__i0__t_inpcb0 = 1;
          tp[_i0].t_inpcb = (struct TYPE_4__ *) malloc(_len_tp__i0__t_inpcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb0; _j0++) {
              int _len_tp__i0__t_inpcb_inp_socket0 = 1;
          tp[_i0].t_inpcb->inp_socket = (struct socket *) malloc(_len_tp__i0__t_inpcb_inp_socket0*sizeof(struct socket));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_inpcb_inp_socket0; _j0++) {
            tp[_i0].t_inpcb->inp_socket->so_snd.sb_cc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tcp_cc_is_cwnd_nonvalidated(tp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].t_inpcb);
          }
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

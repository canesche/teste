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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ t_maxopd; scalar_t__ t_maxseg; scalar_t__ t_cached_maxopd; } ;
struct ifnet {TYPE_4__* if_link_status; } ;
struct if_cellular_status_v1 {int valid_bitmask; scalar_t__ mss_recommended; } ;
struct TYPE_10__ {int /*<<< orphan*/  tcps_mss_to_low; int /*<<< orphan*/  tcps_mss_to_medium; int /*<<< orphan*/  tcps_mss_to_default; } ;
struct TYPE_6__ {struct if_cellular_status_v1 if_status_v1; } ;
struct TYPE_7__ {TYPE_1__ if_cell_u; } ;
struct TYPE_8__ {TYPE_2__ ifsr_cell; } ;
struct TYPE_9__ {TYPE_3__ ifsr_u; } ;

/* Variables and functions */
 scalar_t__ IF_CELL_UL_MSS_RECOMMENDED_LOW ; 
 scalar_t__ IF_CELL_UL_MSS_RECOMMENDED_MEDIUM ; 
 scalar_t__ IF_CELL_UL_MSS_RECOMMENDED_NONE ; 
 int IF_CELL_UL_MSS_RECOMMENDED_VALID ; 
 scalar_t__ tcp_mss_rec_low ; 
 scalar_t__ tcp_mss_rec_medium ; 
 TYPE_5__ tcpstat ; 

inline void
tcp_update_mss_core(struct tcpcb *tp, struct ifnet *ifp)
{
	struct if_cellular_status_v1 *ifsr;
	u_int32_t optlen;
	ifsr = &ifp->if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1;
	if (ifsr->valid_bitmask & IF_CELL_UL_MSS_RECOMMENDED_VALID) {
		optlen = tp->t_maxopd - tp->t_maxseg;

		if (ifsr->mss_recommended ==
		    IF_CELL_UL_MSS_RECOMMENDED_NONE &&
		    tp->t_cached_maxopd > 0 &&
		    tp->t_maxopd < tp->t_cached_maxopd) {
			tp->t_maxopd = tp->t_cached_maxopd;
			tcpstat.tcps_mss_to_default++;
		} else if (ifsr->mss_recommended ==
		    IF_CELL_UL_MSS_RECOMMENDED_MEDIUM &&
		    tp->t_maxopd > tcp_mss_rec_medium) {
			tp->t_cached_maxopd = tp->t_maxopd;
			tp->t_maxopd = tcp_mss_rec_medium;
			tcpstat.tcps_mss_to_medium++;
		} else if (ifsr->mss_recommended ==
		    IF_CELL_UL_MSS_RECOMMENDED_LOW &&
		    tp->t_maxopd > tcp_mss_rec_low) {
			tp->t_cached_maxopd = tp->t_maxopd;
			tp->t_maxopd = tcp_mss_rec_low;
			tcpstat.tcps_mss_to_low++;
		}
		tp->t_maxseg = tp->t_maxopd - optlen;

		/*
		 * clear the cached value if it is same as the current
		 */
		if (tp->t_maxopd == tp->t_cached_maxopd)
			tp->t_cached_maxopd = 0;
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_maxseg = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_cached_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
              int _len_ifp__i0__if_link_status0 = 1;
          ifp[_i0].if_link_status = (struct TYPE_9__ *) malloc(_len_ifp__i0__if_link_status0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ifp__i0__if_link_status0; _j0++) {
            ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.mss_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tcp_update_mss_core(tp,ifp);
          free(tp);
          for(int _aux = 0; _aux < _len_ifp0; _aux++) {
          free(ifp[_aux].if_link_status);
          }
          free(ifp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tp0 = 65025;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_maxseg = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_cached_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 65025;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
              int _len_ifp__i0__if_link_status0 = 1;
          ifp[_i0].if_link_status = (struct TYPE_9__ *) malloc(_len_ifp__i0__if_link_status0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ifp__i0__if_link_status0; _j0++) {
            ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.mss_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tcp_update_mss_core(tp,ifp);
          free(tp);
          for(int _aux = 0; _aux < _len_ifp0; _aux++) {
          free(ifp[_aux].if_link_status);
          }
          free(ifp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tp0 = 100;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_maxseg = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_cached_maxopd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 100;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
              int _len_ifp__i0__if_link_status0 = 1;
          ifp[_i0].if_link_status = (struct TYPE_9__ *) malloc(_len_ifp__i0__if_link_status0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ifp__i0__if_link_status0; _j0++) {
            ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_link_status->ifsr_u.ifsr_cell.if_cell_u.if_status_v1.mss_recommended = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tcp_update_mss_core(tp,ifp);
          free(tp);
          for(int _aux = 0; _aux < _len_ifp0; _aux++) {
          free(ifp[_aux].if_link_status);
          }
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

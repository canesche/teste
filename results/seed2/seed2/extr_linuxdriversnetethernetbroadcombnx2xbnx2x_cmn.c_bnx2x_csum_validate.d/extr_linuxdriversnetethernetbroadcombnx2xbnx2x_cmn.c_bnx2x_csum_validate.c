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
struct TYPE_2__ {int status_flags; int type_error_flags; } ;
union eth_rx_cqe {TYPE_1__ fast_path_cqe; } ;
struct sk_buff {int /*<<< orphan*/  ip_summed; } ;
struct bnx2x_fastpath {int dummy; } ;
struct bnx2x_eth_q_stats {int /*<<< orphan*/  hw_csum_err; } ;

/* Variables and functions */
 int /*<<< orphan*/  CHECKSUM_UNNECESSARY ; 
 int ETH_FAST_PATH_RX_CQE_IP_BAD_XSUM_FLG ; 
 int ETH_FAST_PATH_RX_CQE_L4_BAD_XSUM_FLG ; 
 int ETH_FAST_PATH_RX_CQE_L4_XSUM_NO_VALIDATION_FLG ; 

__attribute__((used)) static
void bnx2x_csum_validate(struct sk_buff *skb, union eth_rx_cqe *cqe,
				 struct bnx2x_fastpath *fp,
				 struct bnx2x_eth_q_stats *qstats)
{
	/* Do nothing if no L4 csum validation was done.
	 * We do not check whether IP csum was validated. For IPv4 we assume
	 * that if the card got as far as validating the L4 csum, it also
	 * validated the IP csum. IPv6 has no IP csum.
	 */
	if (cqe->fast_path_cqe.status_flags &
	    ETH_FAST_PATH_RX_CQE_L4_XSUM_NO_VALIDATION_FLG)
		return;

	/* If L4 validation was done, check if an error was found. */

	if (cqe->fast_path_cqe.type_error_flags &
	    (ETH_FAST_PATH_RX_CQE_IP_BAD_XSUM_FLG |
	     ETH_FAST_PATH_RX_CQE_L4_BAD_XSUM_FLG))
		qstats->hw_csum_err++;
	else
		skb->ip_summed = CHECKSUM_UNNECESSARY;
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].ip_summed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 1;
          union eth_rx_cqe * cqe = (union eth_rx_cqe *) malloc(_len_cqe0*sizeof(union eth_rx_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int _len_fp0 = 1;
          struct bnx2x_fastpath * fp = (struct bnx2x_fastpath *) malloc(_len_fp0*sizeof(struct bnx2x_fastpath));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qstats0 = 1;
          struct bnx2x_eth_q_stats * qstats = (struct bnx2x_eth_q_stats *) malloc(_len_qstats0*sizeof(struct bnx2x_eth_q_stats));
          for(int _i0 = 0; _i0 < _len_qstats0; _i0++) {
            qstats[_i0].hw_csum_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_csum_validate(skb,cqe,fp,qstats);
          free(skb);
          free(cqe);
          free(fp);
          free(qstats);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].ip_summed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 65025;
          union eth_rx_cqe * cqe = (union eth_rx_cqe *) malloc(_len_cqe0*sizeof(union eth_rx_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int _len_fp0 = 65025;
          struct bnx2x_fastpath * fp = (struct bnx2x_fastpath *) malloc(_len_fp0*sizeof(struct bnx2x_fastpath));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qstats0 = 65025;
          struct bnx2x_eth_q_stats * qstats = (struct bnx2x_eth_q_stats *) malloc(_len_qstats0*sizeof(struct bnx2x_eth_q_stats));
          for(int _i0 = 0; _i0 < _len_qstats0; _i0++) {
            qstats[_i0].hw_csum_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_csum_validate(skb,cqe,fp,qstats);
          free(skb);
          free(cqe);
          free(fp);
          free(qstats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].ip_summed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 100;
          union eth_rx_cqe * cqe = (union eth_rx_cqe *) malloc(_len_cqe0*sizeof(union eth_rx_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0] = 0;
          }
          int _len_fp0 = 100;
          struct bnx2x_fastpath * fp = (struct bnx2x_fastpath *) malloc(_len_fp0*sizeof(struct bnx2x_fastpath));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qstats0 = 100;
          struct bnx2x_eth_q_stats * qstats = (struct bnx2x_eth_q_stats *) malloc(_len_qstats0*sizeof(struct bnx2x_eth_q_stats));
          for(int _i0 = 0; _i0 < _len_qstats0; _i0++) {
            qstats[_i0].hw_csum_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_csum_validate(skb,cqe,fp,qstats);
          free(skb);
          free(cqe);
          free(fp);
          free(qstats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

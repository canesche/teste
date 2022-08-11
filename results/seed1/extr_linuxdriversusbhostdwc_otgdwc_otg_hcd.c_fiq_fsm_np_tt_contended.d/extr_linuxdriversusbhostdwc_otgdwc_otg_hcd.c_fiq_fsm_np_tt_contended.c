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
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {int devaddr; int epnum; } ;
struct TYPE_15__ {TYPE_4__ b; } ;
struct fiq_channel_state {int fsm; TYPE_5__ hcchar_copy; } ;
struct TYPE_17__ {TYPE_6__* channel; } ;
typedef  TYPE_7__ dwc_otg_qh_t ;
struct TYPE_18__ {TYPE_3__* fiq_state; TYPE_2__* core_if; } ;
typedef  TYPE_8__ dwc_otg_hcd_t ;
struct TYPE_16__ {int dev_addr; int ep_num; int hc_num; } ;
struct TYPE_13__ {struct fiq_channel_state* channel; } ;
struct TYPE_12__ {TYPE_1__* core_params; } ;
struct TYPE_11__ {int host_channels; } ;

/* Variables and functions */
#define  FIQ_NP_IN_CSPLIT_RETRY 132 
#define  FIQ_NP_OUT_CSPLIT_RETRY 131 
#define  FIQ_NP_SSPLIT_PENDING 130 
#define  FIQ_NP_SSPLIT_RETRY 129 
#define  FIQ_NP_SSPLIT_STARTED 128 

int fiq_fsm_np_tt_contended(dwc_otg_hcd_t *hcd, dwc_otg_qh_t *qh)
{
	int i;
	struct fiq_channel_state *st;
	int dev_addr = qh->channel->dev_addr;
	int ep_num = qh->channel->ep_num;
	for (i = 0; i < hcd->core_if->core_params->host_channels; i++) {
		if (i == qh->channel->hc_num)
			continue;
		st = &hcd->fiq_state->channel[i];
		switch (st->fsm) {
		case FIQ_NP_SSPLIT_STARTED:
		case FIQ_NP_SSPLIT_RETRY:
		case FIQ_NP_SSPLIT_PENDING:
		case FIQ_NP_OUT_CSPLIT_RETRY:
		case FIQ_NP_IN_CSPLIT_RETRY:
			if (st->hcchar_copy.b.devaddr == dev_addr &&
				st->hcchar_copy.b.epnum == ep_num)
				return 1;
			break;
		default:
			break;
		}
	}
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
          int _len_hcd0 = 1;
          struct TYPE_18__ * hcd = (struct TYPE_18__ *) malloc(_len_hcd0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
              int _len_hcd__i0__fiq_state0 = 1;
          hcd[_i0].fiq_state = (struct TYPE_13__ *) malloc(_len_hcd__i0__fiq_state0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state0; _j0++) {
              int _len_hcd__i0__fiq_state_channel0 = 1;
          hcd[_i0].fiq_state->channel = (struct fiq_channel_state *) malloc(_len_hcd__i0__fiq_state_channel0*sizeof(struct fiq_channel_state));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state_channel0; _j0++) {
            hcd[_i0].fiq_state->channel->fsm = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.devaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.epnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hcd__i0__core_if0 = 1;
          hcd[_i0].core_if = (struct TYPE_12__ *) malloc(_len_hcd__i0__core_if0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if0; _j0++) {
              int _len_hcd__i0__core_if_core_params0 = 1;
          hcd[_i0].core_if->core_params = (struct TYPE_11__ *) malloc(_len_hcd__i0__core_if_core_params0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if_core_params0; _j0++) {
            hcd[_i0].core_if->core_params->host_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_qh0 = 1;
          struct TYPE_17__ * qh = (struct TYPE_17__ *) malloc(_len_qh0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
              int _len_qh__i0__channel0 = 1;
          qh[_i0].channel = (struct TYPE_16__ *) malloc(_len_qh__i0__channel0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_qh__i0__channel0; _j0++) {
            qh[_i0].channel->dev_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->ep_num = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->hc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fiq_fsm_np_tt_contended(hcd,qh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].fiq_state);
          }
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].core_if);
          }
          free(hcd);
          for(int _aux = 0; _aux < _len_qh0; _aux++) {
          free(qh[_aux].channel);
          }
          free(qh);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hcd0 = 65025;
          struct TYPE_18__ * hcd = (struct TYPE_18__ *) malloc(_len_hcd0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
              int _len_hcd__i0__fiq_state0 = 1;
          hcd[_i0].fiq_state = (struct TYPE_13__ *) malloc(_len_hcd__i0__fiq_state0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state0; _j0++) {
              int _len_hcd__i0__fiq_state_channel0 = 1;
          hcd[_i0].fiq_state->channel = (struct fiq_channel_state *) malloc(_len_hcd__i0__fiq_state_channel0*sizeof(struct fiq_channel_state));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state_channel0; _j0++) {
            hcd[_i0].fiq_state->channel->fsm = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.devaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.epnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hcd__i0__core_if0 = 1;
          hcd[_i0].core_if = (struct TYPE_12__ *) malloc(_len_hcd__i0__core_if0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if0; _j0++) {
              int _len_hcd__i0__core_if_core_params0 = 1;
          hcd[_i0].core_if->core_params = (struct TYPE_11__ *) malloc(_len_hcd__i0__core_if_core_params0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if_core_params0; _j0++) {
            hcd[_i0].core_if->core_params->host_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_qh0 = 65025;
          struct TYPE_17__ * qh = (struct TYPE_17__ *) malloc(_len_qh0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
              int _len_qh__i0__channel0 = 1;
          qh[_i0].channel = (struct TYPE_16__ *) malloc(_len_qh__i0__channel0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_qh__i0__channel0; _j0++) {
            qh[_i0].channel->dev_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->ep_num = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->hc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fiq_fsm_np_tt_contended(hcd,qh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].fiq_state);
          }
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].core_if);
          }
          free(hcd);
          for(int _aux = 0; _aux < _len_qh0; _aux++) {
          free(qh[_aux].channel);
          }
          free(qh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hcd0 = 100;
          struct TYPE_18__ * hcd = (struct TYPE_18__ *) malloc(_len_hcd0*sizeof(struct TYPE_18__));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
              int _len_hcd__i0__fiq_state0 = 1;
          hcd[_i0].fiq_state = (struct TYPE_13__ *) malloc(_len_hcd__i0__fiq_state0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state0; _j0++) {
              int _len_hcd__i0__fiq_state_channel0 = 1;
          hcd[_i0].fiq_state->channel = (struct fiq_channel_state *) malloc(_len_hcd__i0__fiq_state_channel0*sizeof(struct fiq_channel_state));
          for(int _j0 = 0; _j0 < _len_hcd__i0__fiq_state_channel0; _j0++) {
            hcd[_i0].fiq_state->channel->fsm = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.devaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].fiq_state->channel->hcchar_copy.b.epnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hcd__i0__core_if0 = 1;
          hcd[_i0].core_if = (struct TYPE_12__ *) malloc(_len_hcd__i0__core_if0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if0; _j0++) {
              int _len_hcd__i0__core_if_core_params0 = 1;
          hcd[_i0].core_if->core_params = (struct TYPE_11__ *) malloc(_len_hcd__i0__core_if_core_params0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__core_if_core_params0; _j0++) {
            hcd[_i0].core_if->core_params->host_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_qh0 = 100;
          struct TYPE_17__ * qh = (struct TYPE_17__ *) malloc(_len_qh0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
              int _len_qh__i0__channel0 = 1;
          qh[_i0].channel = (struct TYPE_16__ *) malloc(_len_qh__i0__channel0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_qh__i0__channel0; _j0++) {
            qh[_i0].channel->dev_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->ep_num = ((-2 * (next_i()%2)) + 1) * next_i();
        qh[_i0].channel->hc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fiq_fsm_np_tt_contended(hcd,qh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].fiq_state);
          }
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].core_if);
          }
          free(hcd);
          for(int _aux = 0; _aux < _len_qh0; _aux++) {
          free(qh[_aux].channel);
          }
          free(qh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct tx_servq {int dummy; } ;
struct TYPE_3__ {struct tx_servq be_q; struct tx_servq vo_q; struct tx_servq vi_q; struct tx_servq bk_q; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct hw_xmit {int /*<<< orphan*/  accnt; } ;
struct __queue {int dummy; } ;
struct TYPE_4__ {struct __queue be_pending; struct __queue vo_pending; struct __queue vi_pending; struct __queue bk_pending; struct hw_xmit* hwxmits; } ;
struct _adapter {TYPE_2__ xmitpriv; } ;
typedef  int sint ;

/* Variables and functions */

__attribute__((used)) static inline struct tx_servq *get_sta_pending(struct _adapter *padapter,
					       struct  __queue **ppstapending,
					       struct sta_info *psta, sint up)
{

	struct tx_servq *ptxservq;
	struct hw_xmit *phwxmits =  padapter->xmitpriv.hwxmits;

	switch (up) {
	case 1:
	case 2:
		ptxservq = &(psta->sta_xmitpriv.bk_q);
		*ppstapending = &padapter->xmitpriv.bk_pending;
		(phwxmits + 3)->accnt++;
		break;
	case 4:
	case 5:
		ptxservq = &(psta->sta_xmitpriv.vi_q);
		*ppstapending = &padapter->xmitpriv.vi_pending;
		(phwxmits + 1)->accnt++;
		break;
	case 6:
	case 7:
		ptxservq = &(psta->sta_xmitpriv.vo_q);
		*ppstapending = &padapter->xmitpriv.vo_pending;
		(phwxmits + 0)->accnt++;
		break;
	case 0:
	case 3:
	default:
		ptxservq = &(psta->sta_xmitpriv.be_q);
		*ppstapending = &padapter->xmitpriv.be_pending;
		(phwxmits + 2)->accnt++;
		break;
	}
	return ptxservq;
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
          int up = 100;
          int _len_padapter0 = 1;
          struct _adapter * padapter = (struct _adapter *) malloc(_len_padapter0*sizeof(struct _adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].xmitpriv.be_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vo_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vi_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.bk_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_padapter__i0__xmitpriv_hwxmits0 = 1;
          padapter[_i0].xmitpriv.hwxmits = (struct hw_xmit *) malloc(_len_padapter__i0__xmitpriv_hwxmits0*sizeof(struct hw_xmit));
          for(int _j0 = 0; _j0 < _len_padapter__i0__xmitpriv_hwxmits0; _j0++) {
            padapter[_i0].xmitpriv.hwxmits->accnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ppstapending0 = 1;
          struct __queue ** ppstapending = (struct __queue **) malloc(_len_ppstapending0*sizeof(struct __queue *));
          for(int _i0 = 0; _i0 < _len_ppstapending0; _i0++) {
            int _len_ppstapending1 = 1;
            ppstapending[_i0] = (struct __queue *) malloc(_len_ppstapending1*sizeof(struct __queue));
            for(int _i1 = 0; _i1 < _len_ppstapending1; _i1++) {
              ppstapending[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_psta0 = 1;
          struct sta_info * psta = (struct sta_info *) malloc(_len_psta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_psta0; _i0++) {
            psta[_i0].sta_xmitpriv.be_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vo_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vi_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.bk_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tx_servq * benchRet = get_sta_pending(padapter,ppstapending,psta,up);
          printf("%d\n", (*benchRet).dummy);
          free(padapter);
          for(int i1 = 0; i1 < _len_ppstapending0; i1++) {
            int _len_ppstapending1 = 1;
              free(ppstapending[i1]);
          }
          free(ppstapending);
          free(psta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int up = 255;
          int _len_padapter0 = 65025;
          struct _adapter * padapter = (struct _adapter *) malloc(_len_padapter0*sizeof(struct _adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].xmitpriv.be_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vo_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vi_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.bk_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_padapter__i0__xmitpriv_hwxmits0 = 1;
          padapter[_i0].xmitpriv.hwxmits = (struct hw_xmit *) malloc(_len_padapter__i0__xmitpriv_hwxmits0*sizeof(struct hw_xmit));
          for(int _j0 = 0; _j0 < _len_padapter__i0__xmitpriv_hwxmits0; _j0++) {
            padapter[_i0].xmitpriv.hwxmits->accnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ppstapending0 = 65025;
          struct __queue ** ppstapending = (struct __queue **) malloc(_len_ppstapending0*sizeof(struct __queue *));
          for(int _i0 = 0; _i0 < _len_ppstapending0; _i0++) {
            int _len_ppstapending1 = 1;
            ppstapending[_i0] = (struct __queue *) malloc(_len_ppstapending1*sizeof(struct __queue));
            for(int _i1 = 0; _i1 < _len_ppstapending1; _i1++) {
              ppstapending[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_psta0 = 65025;
          struct sta_info * psta = (struct sta_info *) malloc(_len_psta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_psta0; _i0++) {
            psta[_i0].sta_xmitpriv.be_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vo_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vi_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.bk_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tx_servq * benchRet = get_sta_pending(padapter,ppstapending,psta,up);
          printf("%d\n", (*benchRet).dummy);
          free(padapter);
          for(int i1 = 0; i1 < _len_ppstapending0; i1++) {
            int _len_ppstapending1 = 1;
              free(ppstapending[i1]);
          }
          free(ppstapending);
          free(psta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int up = 10;
          int _len_padapter0 = 100;
          struct _adapter * padapter = (struct _adapter *) malloc(_len_padapter0*sizeof(struct _adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].xmitpriv.be_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vo_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.vi_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.bk_pending.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_padapter__i0__xmitpriv_hwxmits0 = 1;
          padapter[_i0].xmitpriv.hwxmits = (struct hw_xmit *) malloc(_len_padapter__i0__xmitpriv_hwxmits0*sizeof(struct hw_xmit));
          for(int _j0 = 0; _j0 < _len_padapter__i0__xmitpriv_hwxmits0; _j0++) {
            padapter[_i0].xmitpriv.hwxmits->accnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ppstapending0 = 100;
          struct __queue ** ppstapending = (struct __queue **) malloc(_len_ppstapending0*sizeof(struct __queue *));
          for(int _i0 = 0; _i0 < _len_ppstapending0; _i0++) {
            int _len_ppstapending1 = 1;
            ppstapending[_i0] = (struct __queue *) malloc(_len_ppstapending1*sizeof(struct __queue));
            for(int _i1 = 0; _i1 < _len_ppstapending1; _i1++) {
              ppstapending[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_psta0 = 100;
          struct sta_info * psta = (struct sta_info *) malloc(_len_psta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_psta0; _i0++) {
            psta[_i0].sta_xmitpriv.be_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vo_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.vi_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].sta_xmitpriv.bk_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct tx_servq * benchRet = get_sta_pending(padapter,ppstapending,psta,up);
          printf("%d\n", (*benchRet).dummy);
          free(padapter);
          for(int i1 = 0; i1 < _len_ppstapending0; i1++) {
            int _len_ppstapending1 = 1;
              free(ppstapending[i1]);
          }
          free(ppstapending);
          free(psta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

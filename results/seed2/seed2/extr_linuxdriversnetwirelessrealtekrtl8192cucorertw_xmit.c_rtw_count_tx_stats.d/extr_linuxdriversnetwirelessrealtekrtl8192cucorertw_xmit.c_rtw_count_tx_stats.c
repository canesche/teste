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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct xmit_priv {int tx_bytes; } ;
struct TYPE_6__ {struct sta_info* psta; } ;
struct xmit_frame {int frame_tag; TYPE_2__ attrib; } ;
struct stainfo_stats {int tx_bytes; int /*<<< orphan*/  tx_pkts; } ;
struct sta_info {struct stainfo_stats sta_stats; } ;
struct TYPE_5__ {int /*<<< orphan*/  NumTxOkInPeriod; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct TYPE_7__ {struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; } ;
typedef  TYPE_3__ _adapter ;

/* Variables and functions */
 int DATA_FRAMETAG ; 

void rtw_count_tx_stats(_adapter *padapter, struct xmit_frame *pxmitframe, int sz)
{
	struct sta_info *psta = NULL;
	struct stainfo_stats *pstats = NULL;
	struct xmit_priv	*pxmitpriv = &padapter->xmitpriv;
	struct mlme_priv	*pmlmepriv = &(padapter->mlmepriv);

	if((pxmitframe->frame_tag&0x0f) == DATA_FRAMETAG)
	{
		pxmitpriv->tx_bytes += sz;
#ifdef CONFIG_USB_TX_AGGREGATION
		pmlmepriv->LinkDetectInfo.NumTxOkInPeriod += pxmitframe->agg_num;
#else
		pmlmepriv->LinkDetectInfo.NumTxOkInPeriod++;
#endif

		psta = pxmitframe->attrib.psta;

		if(psta)
		{
			pstats = &psta->sta_stats;
#ifdef CONFIG_USB_TX_AGGREGATION
			pstats->tx_pkts += pxmitframe->agg_num;
#else
			pstats->tx_pkts++;
#endif
			pstats->tx_bytes += sz;
		}
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
          int sz = 100;
          int _len_padapter0 = 1;
          struct TYPE_7__ * padapter = (struct TYPE_7__ *) malloc(_len_padapter0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.LinkDetectInfo.NumTxOkInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pxmitframe0 = 1;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].frame_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pxmitframe__i0__attrib_psta0 = 1;
          pxmitframe[_i0].attrib.psta = (struct sta_info *) malloc(_len_pxmitframe__i0__attrib_psta0*sizeof(struct sta_info));
          for(int _j0 = 0; _j0 < _len_pxmitframe__i0__attrib_psta0; _j0++) {
            pxmitframe[_i0].attrib.psta->sta_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.psta->sta_stats.tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_count_tx_stats(padapter,pxmitframe,sz);
          free(padapter);
          free(pxmitframe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sz = 255;
          int _len_padapter0 = 65025;
          struct TYPE_7__ * padapter = (struct TYPE_7__ *) malloc(_len_padapter0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.LinkDetectInfo.NumTxOkInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pxmitframe0 = 65025;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].frame_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pxmitframe__i0__attrib_psta0 = 1;
          pxmitframe[_i0].attrib.psta = (struct sta_info *) malloc(_len_pxmitframe__i0__attrib_psta0*sizeof(struct sta_info));
          for(int _j0 = 0; _j0 < _len_pxmitframe__i0__attrib_psta0; _j0++) {
            pxmitframe[_i0].attrib.psta->sta_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.psta->sta_stats.tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_count_tx_stats(padapter,pxmitframe,sz);
          free(padapter);
          free(pxmitframe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sz = 10;
          int _len_padapter0 = 100;
          struct TYPE_7__ * padapter = (struct TYPE_7__ *) malloc(_len_padapter0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmepriv.LinkDetectInfo.NumTxOkInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        padapter[_i0].xmitpriv.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pxmitframe0 = 100;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].frame_tag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pxmitframe__i0__attrib_psta0 = 1;
          pxmitframe[_i0].attrib.psta = (struct sta_info *) malloc(_len_pxmitframe__i0__attrib_psta0*sizeof(struct sta_info));
          for(int _j0 = 0; _j0 < _len_pxmitframe__i0__attrib_psta0; _j0++) {
            pxmitframe[_i0].attrib.psta->sta_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        pxmitframe[_i0].attrib.psta->sta_stats.tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_count_tx_stats(padapter,pxmitframe,sz);
          free(padapter);
          free(pxmitframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

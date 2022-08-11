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
typedef  size_t u8 ;
typedef  scalar_t__ u32 ;
typedef  size_t u16 ;
struct r8192_priv {TYPE_2__* rtllib; } ;
struct TYPE_3__ {size_t SlotNum; scalar_t__* RxDataNum; scalar_t__* RxBcnNum; scalar_t__ NumRecvDataInPeriod; scalar_t__ NumRecvBcnInPeriod; int /*<<< orphan*/  SlotIndex; } ;
struct TYPE_4__ {TYPE_1__ LinkDetectInfo; } ;

/* Variables and functions */

__attribute__((used)) static void _rtl92e_update_rxcounts(struct r8192_priv *priv, u32 *TotalRxBcnNum,
				    u32 *TotalRxDataNum)
{
	u16	SlotIndex;
	u8	i;

	*TotalRxBcnNum = 0;
	*TotalRxDataNum = 0;

	SlotIndex = (priv->rtllib->LinkDetectInfo.SlotIndex++) %
			(priv->rtllib->LinkDetectInfo.SlotNum);
	priv->rtllib->LinkDetectInfo.RxBcnNum[SlotIndex] =
			priv->rtllib->LinkDetectInfo.NumRecvBcnInPeriod;
	priv->rtllib->LinkDetectInfo.RxDataNum[SlotIndex] =
			priv->rtllib->LinkDetectInfo.NumRecvDataInPeriod;
	for (i = 0; i < priv->rtllib->LinkDetectInfo.SlotNum; i++) {
		*TotalRxBcnNum += priv->rtllib->LinkDetectInfo.RxBcnNum[i];
		*TotalRxDataNum += priv->rtllib->LinkDetectInfo.RxDataNum[i];
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
          int _len_priv0 = 1;
          struct r8192_priv * priv = (struct r8192_priv *) malloc(_len_priv0*sizeof(struct r8192_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__rtllib0 = 1;
          priv[_i0].rtllib = (struct TYPE_4__ *) malloc(_len_priv__i0__rtllib0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.SlotNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxDataNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxDataNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxBcnNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxBcnNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].rtllib->LinkDetectInfo.NumRecvDataInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.NumRecvBcnInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.SlotIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_TotalRxBcnNum0 = 1;
          long * TotalRxBcnNum = (long *) malloc(_len_TotalRxBcnNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxBcnNum0; _i0++) {
            TotalRxBcnNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TotalRxDataNum0 = 1;
          long * TotalRxDataNum = (long *) malloc(_len_TotalRxDataNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxDataNum0; _i0++) {
            TotalRxDataNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _rtl92e_update_rxcounts(priv,TotalRxBcnNum,TotalRxDataNum);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rtllib);
          }
          free(priv);
          free(TotalRxBcnNum);
          free(TotalRxDataNum);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct r8192_priv * priv = (struct r8192_priv *) malloc(_len_priv0*sizeof(struct r8192_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__rtllib0 = 1;
          priv[_i0].rtllib = (struct TYPE_4__ *) malloc(_len_priv__i0__rtllib0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.SlotNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxDataNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxDataNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxBcnNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxBcnNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].rtllib->LinkDetectInfo.NumRecvDataInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.NumRecvBcnInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.SlotIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_TotalRxBcnNum0 = 65025;
          long * TotalRxBcnNum = (long *) malloc(_len_TotalRxBcnNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxBcnNum0; _i0++) {
            TotalRxBcnNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TotalRxDataNum0 = 65025;
          long * TotalRxDataNum = (long *) malloc(_len_TotalRxDataNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxDataNum0; _i0++) {
            TotalRxDataNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _rtl92e_update_rxcounts(priv,TotalRxBcnNum,TotalRxDataNum);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rtllib);
          }
          free(priv);
          free(TotalRxBcnNum);
          free(TotalRxDataNum);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct r8192_priv * priv = (struct r8192_priv *) malloc(_len_priv0*sizeof(struct r8192_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__rtllib0 = 1;
          priv[_i0].rtllib = (struct TYPE_4__ *) malloc(_len_priv__i0__rtllib0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.SlotNum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxDataNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxDataNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxDataNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0 = 1;
          priv[_i0].rtllib->LinkDetectInfo.RxBcnNum = (long *) malloc(_len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_priv__i0__rtllib_LinkDetectInfo_RxBcnNum0; _j0++) {
            priv[_i0].rtllib->LinkDetectInfo.RxBcnNum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].rtllib->LinkDetectInfo.NumRecvDataInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.NumRecvBcnInPeriod = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rtllib->LinkDetectInfo.SlotIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_TotalRxBcnNum0 = 100;
          long * TotalRxBcnNum = (long *) malloc(_len_TotalRxBcnNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxBcnNum0; _i0++) {
            TotalRxBcnNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_TotalRxDataNum0 = 100;
          long * TotalRxDataNum = (long *) malloc(_len_TotalRxDataNum0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_TotalRxDataNum0; _i0++) {
            TotalRxDataNum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _rtl92e_update_rxcounts(priv,TotalRxBcnNum,TotalRxDataNum);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rtllib);
          }
          free(priv);
          free(TotalRxBcnNum);
          free(TotalRxDataNum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct rtllib_device {struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {scalar_t__ bCurShortGI20MHz; scalar_t__ bCurShortGI40MHz; scalar_t__ bCurBW40MHz; } ;

/* Variables and functions */
 int /*<<< orphan*/ *** MCS_DATA_RATE ; 

__attribute__((used)) static u16 HTMcsToDataRate(struct rtllib_device *ieee, u8 nMcsRate)
{
	struct rt_hi_throughput *pHTInfo = ieee->pHTInfo;

	u8	is40MHz = (pHTInfo->bCurBW40MHz) ? 1 : 0;
	u8	isShortGI = (pHTInfo->bCurBW40MHz) ?
			    ((pHTInfo->bCurShortGI40MHz) ? 1 : 0) :
			    ((pHTInfo->bCurShortGI20MHz) ? 1 : 0);
	return MCS_DATA_RATE[is40MHz][isShortGI][(nMcsRate & 0x7f)];
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
          unsigned long nMcsRate = 100;
          int _len_ieee0 = 1;
          struct rtllib_device * ieee = (struct rtllib_device *) malloc(_len_ieee0*sizeof(struct rtllib_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct rt_hi_throughput *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct rt_hi_throughput));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->bCurShortGI20MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurShortGI40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = HTMcsToDataRate(ieee,nMcsRate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long nMcsRate = 255;
          int _len_ieee0 = 65025;
          struct rtllib_device * ieee = (struct rtllib_device *) malloc(_len_ieee0*sizeof(struct rtllib_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct rt_hi_throughput *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct rt_hi_throughput));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->bCurShortGI20MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurShortGI40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = HTMcsToDataRate(ieee,nMcsRate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long nMcsRate = 10;
          int _len_ieee0 = 100;
          struct rtllib_device * ieee = (struct rtllib_device *) malloc(_len_ieee0*sizeof(struct rtllib_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct rt_hi_throughput *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct rt_hi_throughput));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->bCurShortGI20MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurShortGI40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = HTMcsToDataRate(ieee,nMcsRate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

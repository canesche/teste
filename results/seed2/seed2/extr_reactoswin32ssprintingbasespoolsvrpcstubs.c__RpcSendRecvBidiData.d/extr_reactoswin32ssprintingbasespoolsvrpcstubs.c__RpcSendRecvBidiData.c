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
typedef  int /*<<< orphan*/  WINSPOOL_PRINTER_HANDLE ;
typedef  int /*<<< orphan*/  WINSPOOL_BIDI_RESPONSE_CONTAINER ;
typedef  int /*<<< orphan*/  WINSPOOL_BIDI_REQUEST_CONTAINER ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcSendRecvBidiData(WINSPOOL_PRINTER_HANDLE hPrinter, const WCHAR* pAction, WINSPOOL_BIDI_REQUEST_CONTAINER* pReqData, WINSPOOL_BIDI_RESPONSE_CONTAINER** ppRespData)
{
    UNIMPLEMENTED;
    return ERROR_INVALID_FUNCTION;
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
          int hPrinter = 100;
          int _len_pAction0 = 1;
          const int * pAction = (const int *) malloc(_len_pAction0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pAction0; _i0++) {
            pAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReqData0 = 1;
          int * pReqData = (int *) malloc(_len_pReqData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pReqData0; _i0++) {
            pReqData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppRespData0 = 1;
          int ** ppRespData = (int **) malloc(_len_ppRespData0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppRespData0; _i0++) {
            int _len_ppRespData1 = 1;
            ppRespData[_i0] = (int *) malloc(_len_ppRespData1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppRespData1; _i1++) {
              ppRespData[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _RpcSendRecvBidiData(hPrinter,pAction,pReqData,ppRespData);
          printf("%d\n", benchRet); 
          free(pAction);
          free(pReqData);
          for(int i1 = 0; i1 < _len_ppRespData0; i1++) {
            int _len_ppRespData1 = 1;
              free(ppRespData[i1]);
          }
          free(ppRespData);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hPrinter = 255;
          int _len_pAction0 = 65025;
          const int * pAction = (const int *) malloc(_len_pAction0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pAction0; _i0++) {
            pAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReqData0 = 65025;
          int * pReqData = (int *) malloc(_len_pReqData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pReqData0; _i0++) {
            pReqData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppRespData0 = 65025;
          int ** ppRespData = (int **) malloc(_len_ppRespData0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppRespData0; _i0++) {
            int _len_ppRespData1 = 1;
            ppRespData[_i0] = (int *) malloc(_len_ppRespData1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppRespData1; _i1++) {
              ppRespData[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _RpcSendRecvBidiData(hPrinter,pAction,pReqData,ppRespData);
          printf("%d\n", benchRet); 
          free(pAction);
          free(pReqData);
          for(int i1 = 0; i1 < _len_ppRespData0; i1++) {
            int _len_ppRespData1 = 1;
              free(ppRespData[i1]);
          }
          free(ppRespData);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hPrinter = 10;
          int _len_pAction0 = 100;
          const int * pAction = (const int *) malloc(_len_pAction0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pAction0; _i0++) {
            pAction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReqData0 = 100;
          int * pReqData = (int *) malloc(_len_pReqData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pReqData0; _i0++) {
            pReqData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppRespData0 = 100;
          int ** ppRespData = (int **) malloc(_len_ppRespData0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_ppRespData0; _i0++) {
            int _len_ppRespData1 = 1;
            ppRespData[_i0] = (int *) malloc(_len_ppRespData1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_ppRespData1; _i1++) {
              ppRespData[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _RpcSendRecvBidiData(hPrinter,pAction,pReqData,ppRespData);
          printf("%d\n", benchRet); 
          free(pAction);
          free(pReqData);
          for(int i1 = 0; i1 < _len_ppRespData0; i1++) {
            int _len_ppRespData1 = 1;
              free(ppRespData[i1]);
          }
          free(ppRespData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  WCHAR ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 int /*<<< orphan*/  ERROR_INVALID_FUNCTION ; 
 int /*<<< orphan*/  UNIMPLEMENTED ; 

DWORD
_RpcXcvData(WINSPOOL_PRINTER_HANDLE hXcv, const WCHAR* pszDataName, BYTE* pInputData, DWORD cbInputData, BYTE* pOutputData, DWORD cbOutputData, DWORD* pcbOutputNeeded, DWORD* pdwStatus)
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
          int hXcv = 100;
          int cbInputData = 100;
          int cbOutputData = 100;
          int _len_pszDataName0 = 1;
          const int * pszDataName = (const int *) malloc(_len_pszDataName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pszDataName0; _i0++) {
            pszDataName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pInputData0 = 1;
          int * pInputData = (int *) malloc(_len_pInputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pInputData0; _i0++) {
            pInputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pOutputData0 = 1;
          int * pOutputData = (int *) malloc(_len_pOutputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOutputData0; _i0++) {
            pOutputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbOutputNeeded0 = 1;
          int * pcbOutputNeeded = (int *) malloc(_len_pcbOutputNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbOutputNeeded0; _i0++) {
            pcbOutputNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdwStatus0 = 1;
          int * pdwStatus = (int *) malloc(_len_pdwStatus0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwStatus0; _i0++) {
            pdwStatus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcXcvData(hXcv,pszDataName,pInputData,cbInputData,pOutputData,cbOutputData,pcbOutputNeeded,pdwStatus);
          printf("%d\n", benchRet); 
          free(pszDataName);
          free(pInputData);
          free(pOutputData);
          free(pcbOutputNeeded);
          free(pdwStatus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hXcv = 255;
          int cbInputData = 255;
          int cbOutputData = 255;
          int _len_pszDataName0 = 65025;
          const int * pszDataName = (const int *) malloc(_len_pszDataName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pszDataName0; _i0++) {
            pszDataName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pInputData0 = 65025;
          int * pInputData = (int *) malloc(_len_pInputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pInputData0; _i0++) {
            pInputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pOutputData0 = 65025;
          int * pOutputData = (int *) malloc(_len_pOutputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOutputData0; _i0++) {
            pOutputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbOutputNeeded0 = 65025;
          int * pcbOutputNeeded = (int *) malloc(_len_pcbOutputNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbOutputNeeded0; _i0++) {
            pcbOutputNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdwStatus0 = 65025;
          int * pdwStatus = (int *) malloc(_len_pdwStatus0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwStatus0; _i0++) {
            pdwStatus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcXcvData(hXcv,pszDataName,pInputData,cbInputData,pOutputData,cbOutputData,pcbOutputNeeded,pdwStatus);
          printf("%d\n", benchRet); 
          free(pszDataName);
          free(pInputData);
          free(pOutputData);
          free(pcbOutputNeeded);
          free(pdwStatus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hXcv = 10;
          int cbInputData = 10;
          int cbOutputData = 10;
          int _len_pszDataName0 = 100;
          const int * pszDataName = (const int *) malloc(_len_pszDataName0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pszDataName0; _i0++) {
            pszDataName[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pInputData0 = 100;
          int * pInputData = (int *) malloc(_len_pInputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pInputData0; _i0++) {
            pInputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pOutputData0 = 100;
          int * pOutputData = (int *) malloc(_len_pOutputData0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOutputData0; _i0++) {
            pOutputData[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcbOutputNeeded0 = 100;
          int * pcbOutputNeeded = (int *) malloc(_len_pcbOutputNeeded0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcbOutputNeeded0; _i0++) {
            pcbOutputNeeded[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdwStatus0 = 100;
          int * pdwStatus = (int *) malloc(_len_pdwStatus0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdwStatus0; _i0++) {
            pdwStatus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _RpcXcvData(hXcv,pszDataName,pInputData,cbInputData,pOutputData,cbOutputData,pcbOutputNeeded,pdwStatus);
          printf("%d\n", benchRet); 
          free(pszDataName);
          free(pInputData);
          free(pOutputData);
          free(pcbOutputNeeded);
          free(pdwStatus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct lsapi_header_offset {int nameOff; int nameLen; int valueOff; int valueLen; } ;
struct TYPE_7__ {TYPE_2__* m_pHeader; struct lsapi_header_offset* m_pUnknownHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_6__ {int m_httpHeaderLen; scalar_t__ m_cntUnknownHeaders; } ;
struct TYPE_5__ {int* m_headerOff; int* m_headerLen; } ;
typedef  TYPE_3__ LSAPI_Request ;

/* Variables and functions */
 int H_TRANSFER_ENCODING ; 

__attribute__((used)) static int validateHeaders( LSAPI_Request * pReq )
{
    int totalLen = pReq->m_pHeader->m_httpHeaderLen;
    int i;
    for(i = 0; i < H_TRANSFER_ENCODING; ++i)
    {
        if ( pReq->m_pHeaderIndex->m_headerOff[i] )
        {
            if (pReq->m_pHeaderIndex->m_headerOff[i] > totalLen
                || pReq->m_pHeaderIndex->m_headerLen[i]
                    + pReq->m_pHeaderIndex->m_headerOff[i] > totalLen)
                return -1;
        }
    }
    if (pReq->m_pHeader->m_cntUnknownHeaders > 0)
    {
        struct lsapi_header_offset * pCur, *pEnd;
        pCur = pReq->m_pUnknownHeader;
        pEnd = pCur + pReq->m_pHeader->m_cntUnknownHeaders;
        while( pCur < pEnd )
        {
            if (pCur->nameOff > totalLen
                || pCur->nameOff + pCur->nameLen > totalLen
                || pCur->valueOff > totalLen
                || pCur->valueOff + pCur->valueLen > totalLen)
                return -1;
            ++pCur;
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
          int _len_pReq0 = 1;
          struct TYPE_7__ * pReq = (struct TYPE_7__ *) malloc(_len_pReq0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHeader0 = 1;
          pReq[_i0].m_pHeader = (struct TYPE_6__ *) malloc(_len_pReq__i0__m_pHeader0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeader0; _j0++) {
            pReq[_i0].m_pHeader->m_httpHeaderLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pHeader->m_cntUnknownHeaders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pUnknownHeader0 = 1;
          pReq[_i0].m_pUnknownHeader = (struct lsapi_header_offset *) malloc(_len_pReq__i0__m_pUnknownHeader0*sizeof(struct lsapi_header_offset));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pUnknownHeader0; _j0++) {
            pReq[_i0].m_pUnknownHeader->nameOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->nameLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueLen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_5__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex0; _j0++) {
              int _len_pReq__i0__m_pHeaderIndex_m_headerOff0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerOff = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerOff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerOff0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerOff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex_m_headerLen0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerLen = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerLen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerLen0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerLen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = validateHeaders(pReq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pUnknownHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeaderIndex);
          }
          free(pReq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pReq0 = 65025;
          struct TYPE_7__ * pReq = (struct TYPE_7__ *) malloc(_len_pReq0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHeader0 = 1;
          pReq[_i0].m_pHeader = (struct TYPE_6__ *) malloc(_len_pReq__i0__m_pHeader0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeader0; _j0++) {
            pReq[_i0].m_pHeader->m_httpHeaderLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pHeader->m_cntUnknownHeaders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pUnknownHeader0 = 1;
          pReq[_i0].m_pUnknownHeader = (struct lsapi_header_offset *) malloc(_len_pReq__i0__m_pUnknownHeader0*sizeof(struct lsapi_header_offset));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pUnknownHeader0; _j0++) {
            pReq[_i0].m_pUnknownHeader->nameOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->nameLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueLen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_5__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex0; _j0++) {
              int _len_pReq__i0__m_pHeaderIndex_m_headerOff0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerOff = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerOff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerOff0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerOff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex_m_headerLen0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerLen = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerLen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerLen0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerLen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = validateHeaders(pReq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pUnknownHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeaderIndex);
          }
          free(pReq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pReq0 = 100;
          struct TYPE_7__ * pReq = (struct TYPE_7__ *) malloc(_len_pReq0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHeader0 = 1;
          pReq[_i0].m_pHeader = (struct TYPE_6__ *) malloc(_len_pReq__i0__m_pHeader0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeader0; _j0++) {
            pReq[_i0].m_pHeader->m_httpHeaderLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pHeader->m_cntUnknownHeaders = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pUnknownHeader0 = 1;
          pReq[_i0].m_pUnknownHeader = (struct lsapi_header_offset *) malloc(_len_pReq__i0__m_pUnknownHeader0*sizeof(struct lsapi_header_offset));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pUnknownHeader0; _j0++) {
            pReq[_i0].m_pUnknownHeader->nameOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->nameLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueOff = ((-2 * (next_i()%2)) + 1) * next_i();
        pReq[_i0].m_pUnknownHeader->valueLen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_5__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex0; _j0++) {
              int _len_pReq__i0__m_pHeaderIndex_m_headerOff0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerOff = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerOff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerOff0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerOff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex_m_headerLen0 = 1;
          pReq[_i0].m_pHeaderIndex->m_headerLen = (int *) malloc(_len_pReq__i0__m_pHeaderIndex_m_headerLen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHeaderIndex_m_headerLen0; _j0++) {
            pReq[_i0].m_pHeaderIndex->m_headerLen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = validateHeaders(pReq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pUnknownHeader);
          }
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHeaderIndex);
          }
          free(pReq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

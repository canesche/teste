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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {char* m_pHttpHeader; TYPE_1__* m_pHeaderIndex; } ;
struct TYPE_4__ {int* m_headerOff; int* m_headerLen; } ;
typedef  TYPE_2__ LSAPI_Request ;

/* Variables and functions */
 unsigned int H_TRANSFER_ENCODING ; 

char * LSAPI_GetHeader_r( LSAPI_Request * pReq, int headerIndex )
{
    int off;
    if ( !pReq || ((unsigned int)headerIndex > H_TRANSFER_ENCODING) )
        return NULL;
    off = pReq->m_pHeaderIndex->m_headerOff[ headerIndex ];
    if ( !off )
        return NULL;
    if ( *(pReq->m_pHttpHeader + off
        + pReq->m_pHeaderIndex->m_headerLen[ headerIndex ]) )
    {
        *( pReq->m_pHttpHeader + off
            + pReq->m_pHeaderIndex->m_headerLen[ headerIndex ]) = 0;
    }
    return pReq->m_pHttpHeader + off;
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
          int headerIndex = 100;
          int _len_pReq0 = 1;
          struct TYPE_5__ * pReq = (struct TYPE_5__ *) malloc(_len_pReq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHttpHeader0 = 1;
          pReq[_i0].m_pHttpHeader = (char *) malloc(_len_pReq__i0__m_pHttpHeader0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHttpHeader0; _j0++) {
            pReq[_i0].m_pHttpHeader[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_4__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_4__));
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
          char * benchRet = LSAPI_GetHeader_r(pReq,headerIndex);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHttpHeader);
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
          int headerIndex = 255;
          int _len_pReq0 = 65025;
          struct TYPE_5__ * pReq = (struct TYPE_5__ *) malloc(_len_pReq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHttpHeader0 = 1;
          pReq[_i0].m_pHttpHeader = (char *) malloc(_len_pReq__i0__m_pHttpHeader0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHttpHeader0; _j0++) {
            pReq[_i0].m_pHttpHeader[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_4__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_4__));
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
          char * benchRet = LSAPI_GetHeader_r(pReq,headerIndex);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHttpHeader);
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
          int headerIndex = 10;
          int _len_pReq0 = 100;
          struct TYPE_5__ * pReq = (struct TYPE_5__ *) malloc(_len_pReq0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pReq0; _i0++) {
              int _len_pReq__i0__m_pHttpHeader0 = 1;
          pReq[_i0].m_pHttpHeader = (char *) malloc(_len_pReq__i0__m_pHttpHeader0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pReq__i0__m_pHttpHeader0; _j0++) {
            pReq[_i0].m_pHttpHeader[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pReq__i0__m_pHeaderIndex0 = 1;
          pReq[_i0].m_pHeaderIndex = (struct TYPE_4__ *) malloc(_len_pReq__i0__m_pHeaderIndex0*sizeof(struct TYPE_4__));
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
          char * benchRet = LSAPI_GetHeader_r(pReq,headerIndex);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pReq0; _aux++) {
          free(pReq[_aux].m_pHttpHeader);
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

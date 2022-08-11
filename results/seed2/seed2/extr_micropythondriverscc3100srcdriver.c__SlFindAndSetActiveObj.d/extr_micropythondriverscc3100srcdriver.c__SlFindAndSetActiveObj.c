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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t _u8 ;
typedef  int /*<<< orphan*/  _SlReturnVal_t ;
typedef  scalar_t__ _SlOpcode_t ;
struct TYPE_10__ {scalar_t__ ActionAsyncOpcode; int /*<<< orphan*/  AsyncEventHandler; } ;
struct TYPE_6__ {size_t ActionIndex; int /*<<< orphan*/  AsyncEvtHandler; } ;
struct TYPE_7__ {TYPE_1__ AsyncExt; } ;
struct TYPE_9__ {size_t ActivePoolIdx; TYPE_3__* ObjPool; TYPE_2__ FunctionParams; } ;
struct TYPE_8__ {int AdditionalData; scalar_t__ ActionID; size_t NextIndex; } ;

/* Variables and functions */
 size_t BSD_SOCKET_ID_MASK ; 
 size_t MAX_CONCURRENT_ACTIONS ; 
 size_t MAX_SOCKET_ENUM_IDX ; 
 scalar_t__ RECV_ID ; 
 size_t SL_MAX_SOCKETS ; 
 int SL_NETAPP_FAMILY_MASK ; 
 scalar_t__ SL_OPCODE_IPV6 ; 
 scalar_t__ SL_OPCODE_SOCKET_RECVASYNCRESPONSE ; 
 scalar_t__ SL_OPCODE_SOCKET_RECVFROMASYNCRESPONSE ; 
 scalar_t__ SL_OPCODE_SOCKET_RECVFROMASYNCRESPONSE_V6 ; 
 int /*<<< orphan*/  SL_RET_CODE_OK ; 
 int /*<<< orphan*/  SL_RET_CODE_SELF_ERROR ; 
 TYPE_5__* _SlActionLookupTable ; 
 TYPE_4__* g_pCB ; 

_SlReturnVal_t _SlFindAndSetActiveObj(_SlOpcode_t  Opcode, _u8 Sd)
{
    _u8 ActiveIndex;

    ActiveIndex = g_pCB->ActivePoolIdx;
    /* go over the active list if exist to find obj waiting for this Async event */
#ifndef SL_TINY_EXT    
		while (MAX_CONCURRENT_ACTIONS > ActiveIndex)
#else
        /* Only one Active action is availabe in tiny mode, so we can replace the loop with if condition */
        if (MAX_CONCURRENT_ACTIONS > ActiveIndex)
#endif
    {
        /* unset the Ipv4\IPv6 bit in the opcode if family bit was set  */
        if (g_pCB->ObjPool[ActiveIndex].AdditionalData & SL_NETAPP_FAMILY_MASK)
        {
            Opcode &= ~SL_OPCODE_IPV6;
        }

        if ((g_pCB->ObjPool[ActiveIndex].ActionID == RECV_ID) && (Sd == g_pCB->ObjPool[ActiveIndex].AdditionalData) && 
						( (SL_OPCODE_SOCKET_RECVASYNCRESPONSE == Opcode) || (SL_OPCODE_SOCKET_RECVFROMASYNCRESPONSE == Opcode)
#ifndef SL_TINY_EXT
                        || (SL_OPCODE_SOCKET_RECVFROMASYNCRESPONSE_V6 == Opcode) 
#endif
                          ) 

               )
        {
            g_pCB->FunctionParams.AsyncExt.ActionIndex = ActiveIndex;
            return SL_RET_CODE_OK;
        }
        /* In case this action is socket related, SocketID is in use, otherwise will be set to SL_MAX_SOCKETS */
        if ( (_SlActionLookupTable[ g_pCB->ObjPool[ActiveIndex].ActionID - MAX_SOCKET_ENUM_IDX].ActionAsyncOpcode == Opcode) && 
            ( ((Sd == (g_pCB->ObjPool[ActiveIndex].AdditionalData & BSD_SOCKET_ID_MASK) ) && (SL_MAX_SOCKETS > Sd)) || (SL_MAX_SOCKETS == (g_pCB->ObjPool[ActiveIndex].AdditionalData & BSD_SOCKET_ID_MASK)) ) )
        {
            /* set handler */
            g_pCB->FunctionParams.AsyncExt.AsyncEvtHandler = _SlActionLookupTable[ g_pCB->ObjPool[ActiveIndex].ActionID - MAX_SOCKET_ENUM_IDX].AsyncEventHandler;
            g_pCB->FunctionParams.AsyncExt.ActionIndex = ActiveIndex;
            return SL_RET_CODE_OK;
        }
        ActiveIndex = g_pCB->ObjPool[ActiveIndex].NextIndex;
    }

    return SL_RET_CODE_SELF_ERROR;

 

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
          long Opcode = 100;
          unsigned long Sd = 100;
          int benchRet = _SlFindAndSetActiveObj(Opcode,Sd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long Opcode = 255;
          unsigned long Sd = 255;
          int benchRet = _SlFindAndSetActiveObj(Opcode,Sd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long Opcode = 10;
          unsigned long Sd = 10;
          int benchRet = _SlFindAndSetActiveObj(Opcode,Sd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_4__ {int m_pid; } ;
typedef  TYPE_1__ lsapi_child_status ;
struct TYPE_5__ {TYPE_1__* m_pChildrenStatusCur; TYPE_1__* m_pChildrenStatusEnd; TYPE_1__* m_pChildrenStatus; } ;

/* Variables and functions */
 TYPE_2__* g_prefork_server ; 

__attribute__((used)) static lsapi_child_status * find_child_status( int pid )
{
    lsapi_child_status * pStatus = g_prefork_server->m_pChildrenStatus;
    lsapi_child_status * pEnd = g_prefork_server->m_pChildrenStatusEnd;
    while( pStatus < pEnd )
    {
        if ( pStatus->m_pid == pid )
        {
            if ( pStatus + 1 > g_prefork_server->m_pChildrenStatusCur )
                g_prefork_server->m_pChildrenStatusCur = pStatus + 1;
            return pStatus;
        }
        ++pStatus;
    }
    return NULL;
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
          int pid = 100;
          struct TYPE_4__ * benchRet = find_child_status(pid);
          printf("%d\n", (*benchRet).m_pid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pid = 255;
          struct TYPE_4__ * benchRet = find_child_status(pid);
          printf("%d\n", (*benchRet).m_pid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pid = 10;
          struct TYPE_4__ * benchRet = find_child_status(pid);
          printf("%d\n", (*benchRet).m_pid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

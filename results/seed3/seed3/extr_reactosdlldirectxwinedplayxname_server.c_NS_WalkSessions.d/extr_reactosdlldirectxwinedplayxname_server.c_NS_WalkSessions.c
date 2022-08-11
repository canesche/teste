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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_3__* lpNSCache ;
struct TYPE_6__ {TYPE_2__* present; } ;
struct TYPE_4__ {TYPE_2__* lpQNext; } ;
struct TYPE_5__ {TYPE_1__ next; int /*<<< orphan*/ * data; } ;
typedef  int /*<<< orphan*/  LPVOID ;
typedef  int /*<<< orphan*/ * LPDPSESSIONDESC2 ;

/* Variables and functions */

LPDPSESSIONDESC2 NS_WalkSessions( LPVOID lpNSInfo )
{
  LPDPSESSIONDESC2 lpSessionDesc;
  lpNSCache lpCache = (lpNSCache)lpNSInfo;

  /* FIXME: The pointers could disappear when walking if a prune happens */

  /* Test for end of the list */
  if( lpCache->present == NULL )
  {
    return NULL;
  }

  lpSessionDesc = lpCache->present->data;

  /* Advance tracking pointer */
  lpCache->present = lpCache->present->next.lpQNext;

  return lpSessionDesc;
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
          int lpNSInfo = 100;
          int * benchRet = NS_WalkSessions(lpNSInfo);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lpNSInfo = 255;
          int * benchRet = NS_WalkSessions(lpNSInfo);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lpNSInfo = 10;
          int * benchRet = NS_WalkSessions(lpNSInfo);
          printf("%d\n", (*benchRet)); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

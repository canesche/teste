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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ First; } ;
struct TYPE_9__ {TYPE_1__ Menus; } ;
struct TYPE_7__ {scalar_t__ Next; } ;
struct TYPE_8__ {int ID; TYPE_2__ Node; } ;
typedef  TYPE_3__ SFG_Menu ;

/* Variables and functions */
 TYPE_4__ fgStructure ; 

SFG_Menu* fgMenuByID( int menuID )
{
    SFG_Menu *menu = NULL;

    /* It's enough to check all entries in fgStructure.Menus... */
    for( menu = (SFG_Menu *)fgStructure.Menus.First;
         menu;
         menu = (SFG_Menu *)menu->Node.Next )
        if( menu->ID == menuID )
            return menu;
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
          int menuID = 100;
          struct TYPE_8__ * benchRet = fgMenuByID(menuID);
          printf("%d\n", (*benchRet).ID);
        
        break;
    }
    // big-arr
    case 1:
    {
          int menuID = 255;
          struct TYPE_8__ * benchRet = fgMenuByID(menuID);
          printf("%d\n", (*benchRet).ID);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int menuID = 10;
          struct TYPE_8__ * benchRet = fgMenuByID(menuID);
          printf("%d\n", (*benchRet).ID);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

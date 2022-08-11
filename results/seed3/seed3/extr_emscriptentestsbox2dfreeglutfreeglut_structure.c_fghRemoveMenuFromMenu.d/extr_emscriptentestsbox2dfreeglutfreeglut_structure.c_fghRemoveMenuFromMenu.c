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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ First; } ;
struct TYPE_10__ {TYPE_1__ Entries; } ;
struct TYPE_8__ {scalar_t__ Next; } ;
struct TYPE_9__ {TYPE_4__* SubMenu; TYPE_2__ Node; } ;
typedef  TYPE_3__ SFG_MenuEntry ;
typedef  TYPE_4__ SFG_Menu ;

/* Variables and functions */

__attribute__((used)) static void fghRemoveMenuFromMenu( SFG_Menu* from, SFG_Menu* menu )
{
    SFG_MenuEntry *entry;

    for( entry = (SFG_MenuEntry *)from->Entries.First;
         entry;
         entry = ( SFG_MenuEntry * )entry->Node.Next )
        if( entry->SubMenu == menu )
            entry->SubMenu = NULL;
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
          int _len_from0 = 1;
          struct TYPE_10__ * from = (struct TYPE_10__ *) malloc(_len_from0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_menu0 = 1;
          struct TYPE_10__ * menu = (struct TYPE_10__ *) malloc(_len_menu0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
            menu[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fghRemoveMenuFromMenu(from,menu);
          free(from);
          free(menu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_from0 = 65025;
          struct TYPE_10__ * from = (struct TYPE_10__ *) malloc(_len_from0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_menu0 = 65025;
          struct TYPE_10__ * menu = (struct TYPE_10__ *) malloc(_len_menu0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
            menu[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fghRemoveMenuFromMenu(from,menu);
          free(from);
          free(menu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_from0 = 100;
          struct TYPE_10__ * from = (struct TYPE_10__ *) malloc(_len_from0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_from0; _i0++) {
            from[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_menu0 = 100;
          struct TYPE_10__ * menu = (struct TYPE_10__ *) malloc(_len_menu0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_menu0; _i0++) {
            menu[_i0].Entries.First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fghRemoveMenuFromMenu(from,menu);
          free(from);
          free(menu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

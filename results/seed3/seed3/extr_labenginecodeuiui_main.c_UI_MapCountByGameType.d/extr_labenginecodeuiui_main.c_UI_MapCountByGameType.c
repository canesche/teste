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
typedef  scalar_t__ qboolean ;
struct TYPE_10__ {int mapCount; TYPE_2__* mapList; TYPE_1__* gameTypes; } ;
struct TYPE_9__ {size_t integer; } ;
struct TYPE_8__ {size_t integer; } ;
struct TYPE_7__ {int typeBits; int /*<<< orphan*/  active; } ;
struct TYPE_6__ {int gtEnum; } ;

/* Variables and functions */
 int GT_FFA ; 
 int GT_SINGLE_PLAYER ; 
 int GT_TEAM ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 
 TYPE_5__ uiInfo ; 
 TYPE_4__ ui_gameType ; 
 TYPE_3__ ui_netGameType ; 

__attribute__((used)) static int UI_MapCountByGameType(qboolean singlePlayer) {
	int i, c, game;
	c = 0;
	game = singlePlayer ? uiInfo.gameTypes[ui_gameType.integer].gtEnum : uiInfo.gameTypes[ui_netGameType.integer].gtEnum;
	if (game == GT_SINGLE_PLAYER) {
		game++;
	} 
	if (game == GT_TEAM) {
		game = GT_FFA;
	}

	for (i = 0; i < uiInfo.mapCount; i++) {
		uiInfo.mapList[i].active = qfalse;
		if ( uiInfo.mapList[i].typeBits & (1 << game)) {
			if (singlePlayer) {
				if (!(uiInfo.mapList[i].typeBits & (1 << GT_SINGLE_PLAYER))) {
					continue;
				}
			}
			c++;
			uiInfo.mapList[i].active = qtrue;
		}
	}
	return c;
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
          long singlePlayer = 100;
          int benchRet = UI_MapCountByGameType(singlePlayer);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long singlePlayer = 255;
          int benchRet = UI_MapCountByGameType(singlePlayer);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long singlePlayer = 10;
          int benchRet = UI_MapCountByGameType(singlePlayer);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

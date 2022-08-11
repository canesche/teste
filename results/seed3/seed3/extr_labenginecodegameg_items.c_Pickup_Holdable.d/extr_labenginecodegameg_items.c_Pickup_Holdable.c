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
struct TYPE_10__ {TYPE_3__* client; TYPE_1__* item; } ;
typedef  TYPE_4__ gentity_t ;
struct TYPE_8__ {int /*<<< orphan*/  eFlags; TYPE_1__** stats; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_7__ {scalar_t__ giTag; } ;

/* Variables and functions */
 int /*<<< orphan*/  EF_KAMIKAZE ; 
 scalar_t__ HI_KAMIKAZE ; 
 int RESPAWN_HOLDABLE ; 
 size_t STAT_HOLDABLE_ITEM ; 
 int bg_itemlist ; 

int Pickup_Holdable( gentity_t *ent, gentity_t *other ) {

	other->client->ps.stats[STAT_HOLDABLE_ITEM] = ent->item - bg_itemlist;

	if( ent->item->giTag == HI_KAMIKAZE ) {
		other->client->ps.eFlags |= EF_KAMIKAZE;
	}

	return RESPAWN_HOLDABLE;
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
          int _len_ent0 = 1;
          struct TYPE_10__ * ent = (struct TYPE_10__ *) malloc(_len_ent0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
              int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_9__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
            ent[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_ent__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            int _len_ent__i0__client_ps_stats1 = 1;
            ent[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_ent__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ent__i0__client_ps_stats1; _j1++) {
              ent[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_7__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_other0 = 1;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
              int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_9__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
            other[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_other__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            int _len_other__i0__client_ps_stats1 = 1;
            other[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_other__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_other__i0__client_ps_stats1; _j1++) {
              other[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_7__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = Pickup_Holdable(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          free(other);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ent0 = 65025;
          struct TYPE_10__ * ent = (struct TYPE_10__ *) malloc(_len_ent0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
              int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_9__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
            ent[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_ent__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            int _len_ent__i0__client_ps_stats1 = 1;
            ent[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_ent__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ent__i0__client_ps_stats1; _j1++) {
              ent[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_7__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_other0 = 65025;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
              int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_9__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
            other[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_other__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            int _len_other__i0__client_ps_stats1 = 1;
            other[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_other__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_other__i0__client_ps_stats1; _j1++) {
              other[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_7__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = Pickup_Holdable(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          free(other);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ent0 = 100;
          struct TYPE_10__ * ent = (struct TYPE_10__ *) malloc(_len_ent0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
              int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_9__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
            ent[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_ent__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            int _len_ent__i0__client_ps_stats1 = 1;
            ent[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_ent__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ent__i0__client_ps_stats1; _j1++) {
              ent[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_7__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_other0 = 100;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
              int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_9__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
            other[_i0].client->ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (struct TYPE_7__ **) malloc(_len_other__i0__client_ps_stats0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            int _len_other__i0__client_ps_stats1 = 1;
            other[_i0].client->ps.stats[_j0] = (struct TYPE_7__ *) malloc(_len_other__i0__client_ps_stats1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_other__i0__client_ps_stats1; _j1++) {
              other[_i0].client->ps.stats[_j0]->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_7__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->giTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = Pickup_Holdable(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          free(other);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

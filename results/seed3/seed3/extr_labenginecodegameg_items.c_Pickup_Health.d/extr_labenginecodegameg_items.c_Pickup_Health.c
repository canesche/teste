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
struct TYPE_10__ {int count; int health; TYPE_3__* item; TYPE_2__* client; } ;
typedef  TYPE_4__ gentity_t ;
struct TYPE_9__ {int quantity; } ;
struct TYPE_7__ {int* stats; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;

/* Variables and functions */
 int RESPAWN_HEALTH ; 
 int RESPAWN_MEGAHEALTH ; 
 size_t STAT_HEALTH ; 
 size_t STAT_MAX_HEALTH ; 

int Pickup_Health (gentity_t *ent, gentity_t *other) {
	int			max;
	int			quantity;

	// small and mega healths will go over the max
#ifdef MISSIONPACK
	if( bg_itemlist[other->client->ps.stats[STAT_PERSISTANT_POWERUP]].giTag == PW_GUARD ) {
		max = other->client->ps.stats[STAT_MAX_HEALTH];
	}
	else
#endif
	if ( ent->item->quantity != 5 && ent->item->quantity != 100 ) {
		max = other->client->ps.stats[STAT_MAX_HEALTH];
	} else {
		max = other->client->ps.stats[STAT_MAX_HEALTH] * 2;
	}

	if ( ent->count ) {
		quantity = ent->count;
	} else {
		quantity = ent->item->quantity;
	}

	other->health += quantity;

	if (other->health > max ) {
		other->health = max;
	}
	other->client->ps.stats[STAT_HEALTH] = other->health;

	if ( ent->item->quantity == 100 ) {		// mega health respawns slow
		return RESPAWN_MEGAHEALTH;
	}

	return RESPAWN_HEALTH;
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
            ent[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_9__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (int *) malloc(_len_ent__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 1;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_9__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (int *) malloc(_len_other__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = Pickup_Health(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
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
            ent[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_9__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (int *) malloc(_len_ent__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 65025;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_9__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (int *) malloc(_len_other__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = Pickup_Health(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
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
            ent[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__item0 = 1;
          ent[_i0].item = (struct TYPE_9__ *) malloc(_len_ent__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ent__i0__item0; _j0++) {
            ent[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (int *) malloc(_len_ent__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 100;
          struct TYPE_10__ * other = (struct TYPE_10__ *) malloc(_len_other0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].health = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__item0 = 1;
          other[_i0].item = (struct TYPE_9__ *) malloc(_len_other__i0__item0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_other__i0__item0; _j0++) {
            other[_i0].item->quantity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (int *) malloc(_len_other__i0__client_ps_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = Pickup_Health(ent,other);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].item);
          }
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].item);
          }
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
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

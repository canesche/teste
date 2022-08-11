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
typedef  int /*<<< orphan*/  trace_t ;
struct TYPE_9__ {scalar_t__ moverState; scalar_t__ nextthink; TYPE_2__* client; } ;
typedef  TYPE_3__ gentity_t ;
struct TYPE_10__ {scalar_t__ time; } ;
struct TYPE_7__ {scalar_t__* stats; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;

/* Variables and functions */
 scalar_t__ MOVER_POS2 ; 
 size_t STAT_HEALTH ; 
 TYPE_4__ level ; 

void Touch_Plat( gentity_t *ent, gentity_t *other, trace_t *trace ) {
	if ( !other->client || other->client->ps.stats[STAT_HEALTH] <= 0 ) {
		return;
	}

	// delay return-to-pos1 by one second
	if ( ent->moverState == MOVER_POS2 ) {
		ent->nextthink = level.time + 1000;
	}
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
          struct TYPE_9__ * ent = (struct TYPE_9__ *) malloc(_len_ent0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (long *) malloc(_len_ent__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 1;
          struct TYPE_9__ * other = (struct TYPE_9__ *) malloc(_len_other0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (long *) malloc(_len_other__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_trace0 = 1;
          int * trace = (int *) malloc(_len_trace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Touch_Plat(ent,other,trace);
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          free(other);
          free(trace);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ent0 = 65025;
          struct TYPE_9__ * ent = (struct TYPE_9__ *) malloc(_len_ent0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (long *) malloc(_len_ent__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 65025;
          struct TYPE_9__ * other = (struct TYPE_9__ *) malloc(_len_other0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (long *) malloc(_len_other__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_trace0 = 65025;
          int * trace = (int *) malloc(_len_trace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Touch_Plat(ent,other,trace);
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          free(other);
          free(trace);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ent0 = 100;
          struct TYPE_9__ * ent = (struct TYPE_9__ *) malloc(_len_ent0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__client0 = 1;
          ent[_i0].client = (struct TYPE_8__ *) malloc(_len_ent__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent__i0__client0; _j0++) {
              int _len_ent__i0__client_ps_stats0 = 1;
          ent[_i0].client->ps.stats = (long *) malloc(_len_ent__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ent__i0__client_ps_stats0; _j0++) {
            ent[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_other0 = 100;
          struct TYPE_9__ * other = (struct TYPE_9__ *) malloc(_len_other0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_other0; _i0++) {
            other[_i0].moverState = ((-2 * (next_i()%2)) + 1) * next_i();
        other[_i0].nextthink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_other__i0__client0 = 1;
          other[_i0].client = (struct TYPE_8__ *) malloc(_len_other__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_other__i0__client0; _j0++) {
              int _len_other__i0__client_ps_stats0 = 1;
          other[_i0].client->ps.stats = (long *) malloc(_len_other__i0__client_ps_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_other__i0__client_ps_stats0; _j0++) {
            other[_i0].client->ps.stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_trace0 = 100;
          int * trace = (int *) malloc(_len_trace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Touch_Plat(ent,other,trace);
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].client);
          }
          free(ent);
          for(int _aux = 0; _aux < _len_other0; _aux++) {
          free(other[_aux].client);
          }
          free(other);
          free(trace);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

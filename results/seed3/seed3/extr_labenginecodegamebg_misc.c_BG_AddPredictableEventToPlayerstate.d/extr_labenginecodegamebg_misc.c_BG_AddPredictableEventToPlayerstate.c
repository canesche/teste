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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* events; int eventSequence; int* eventParms; } ;
typedef  TYPE_1__ playerState_t ;

/* Variables and functions */
 int MAX_PS_EVENTS ; 

void BG_AddPredictableEventToPlayerstate( int newEvent, int eventParm, playerState_t *ps ) {

#ifdef _DEBUG
	{
		char buf[256];
		trap_Cvar_VariableStringBuffer("showevents", buf, sizeof(buf));
		if ( atof(buf) != 0 ) {
#ifdef QAGAME
			Com_Printf(" game event svt %5d -> %5d: num = %20s parm %d\n", ps->pmove_framecount/*ps->commandTime*/, ps->eventSequence, eventnames[newEvent], eventParm);
#else
			Com_Printf("Cgame event svt %5d -> %5d: num = %20s parm %d\n", ps->pmove_framecount/*ps->commandTime*/, ps->eventSequence, eventnames[newEvent], eventParm);
#endif
		}
	}
#endif
	ps->events[ps->eventSequence & (MAX_PS_EVENTS-1)] = newEvent;
	ps->eventParms[ps->eventSequence & (MAX_PS_EVENTS-1)] = eventParm;
	ps->eventSequence++;
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
          int newEvent = 100;
          int eventParm = 100;
          int _len_ps0 = 1;
          struct TYPE_3__ * ps = (struct TYPE_3__ *) malloc(_len_ps0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
              int _len_ps__i0__events0 = 1;
          ps[_i0].events = (int *) malloc(_len_ps__i0__events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__events0; _j0++) {
            ps[_i0].events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ps[_i0].eventSequence = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__eventParms0 = 1;
          ps[_i0].eventParms = (int *) malloc(_len_ps__i0__eventParms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__eventParms0; _j0++) {
            ps[_i0].eventParms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          BG_AddPredictableEventToPlayerstate(newEvent,eventParm,ps);
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].events);
          }
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].eventParms);
          }
          free(ps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int newEvent = 255;
          int eventParm = 255;
          int _len_ps0 = 65025;
          struct TYPE_3__ * ps = (struct TYPE_3__ *) malloc(_len_ps0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
              int _len_ps__i0__events0 = 1;
          ps[_i0].events = (int *) malloc(_len_ps__i0__events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__events0; _j0++) {
            ps[_i0].events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ps[_i0].eventSequence = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__eventParms0 = 1;
          ps[_i0].eventParms = (int *) malloc(_len_ps__i0__eventParms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__eventParms0; _j0++) {
            ps[_i0].eventParms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          BG_AddPredictableEventToPlayerstate(newEvent,eventParm,ps);
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].events);
          }
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].eventParms);
          }
          free(ps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int newEvent = 10;
          int eventParm = 10;
          int _len_ps0 = 100;
          struct TYPE_3__ * ps = (struct TYPE_3__ *) malloc(_len_ps0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
              int _len_ps__i0__events0 = 1;
          ps[_i0].events = (int *) malloc(_len_ps__i0__events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__events0; _j0++) {
            ps[_i0].events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ps[_i0].eventSequence = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ps__i0__eventParms0 = 1;
          ps[_i0].eventParms = (int *) malloc(_len_ps__i0__eventParms0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ps__i0__eventParms0; _j0++) {
            ps[_i0].eventParms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          BG_AddPredictableEventToPlayerstate(newEvent,eventParm,ps);
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].events);
          }
          for(int _aux = 0; _aux < _len_ps0; _aux++) {
          free(ps[_aux].eventParms);
          }
          free(ps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

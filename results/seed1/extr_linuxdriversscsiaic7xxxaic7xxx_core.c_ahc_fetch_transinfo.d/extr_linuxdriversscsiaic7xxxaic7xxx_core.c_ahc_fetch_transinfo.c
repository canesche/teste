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

/* Type definitions */
typedef  int u_int ;
struct ahc_tmode_tstate {struct ahc_initiator_tinfo* transinfo; } ;
struct ahc_softc {struct ahc_tmode_tstate** enabled_targets; } ;
struct ahc_initiator_tinfo {int dummy; } ;

/* Variables and functions */

struct ahc_initiator_tinfo *
ahc_fetch_transinfo(struct ahc_softc *ahc, char channel, u_int our_id,
		    u_int remote_id, struct ahc_tmode_tstate **tstate)
{
	/*
	 * Transfer data structures are stored from the perspective
	 * of the target role.  Since the parameters for a connection
	 * in the initiator role to a given target are the same as
	 * when the roles are reversed, we pretend we are the target.
	 */
	if (channel == 'B')
		our_id += 8;
	*tstate = ahc->enabled_targets[our_id];
	return (&(*tstate)->transinfo[remote_id]);
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
          char channel = 100;
          int our_id = 100;
          int remote_id = 100;
          int _len_ahc0 = 1;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
              int _len_ahc__i0__enabled_targets0 = 1;
          ahc[_i0].enabled_targets = (struct ahc_tmode_tstate **) malloc(_len_ahc__i0__enabled_targets0*sizeof(struct ahc_tmode_tstate *));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets0; _j0++) {
            int _len_ahc__i0__enabled_targets1 = 1;
            ahc[_i0].enabled_targets[_j0] = (struct ahc_tmode_tstate *) malloc(_len_ahc__i0__enabled_targets1*sizeof(struct ahc_tmode_tstate));
            for(int _j1 = 0; _j1 < _len_ahc__i0__enabled_targets1; _j1++) {
                int _len_ahc__i0__enabled_targets__j0__transinfo0 = 1;
          ahc[_i0].enabled_targets[_j0]->transinfo = (struct ahc_initiator_tinfo *) malloc(_len_ahc__i0__enabled_targets__j0__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets__j0__transinfo0; _j0++) {
            ahc[_i0].enabled_targets[_j0]->transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_tstate0 = 1;
          struct ahc_tmode_tstate ** tstate = (struct ahc_tmode_tstate **) malloc(_len_tstate0*sizeof(struct ahc_tmode_tstate *));
          for(int _i0 = 0; _i0 < _len_tstate0; _i0++) {
            int _len_tstate1 = 1;
            tstate[_i0] = (struct ahc_tmode_tstate *) malloc(_len_tstate1*sizeof(struct ahc_tmode_tstate));
            for(int _i1 = 0; _i1 < _len_tstate1; _i1++) {
                int _len_tstate__i0___i1__transinfo0 = 1;
          tstate[_i0][_i1].transinfo = (struct ahc_initiator_tinfo *) malloc(_len_tstate__i0___i1__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_tstate__i0___i1__transinfo0; _j0++) {
            tstate[_i0][_i1].transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct ahc_initiator_tinfo * benchRet = ahc_fetch_transinfo(ahc,channel,our_id,remote_id,tstate);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(*(ahc[_aux].enabled_targets));
        free(ahc[_aux].enabled_targets);
          }
          free(ahc);
          for(int i1 = 0; i1 < _len_tstate0; i1++) {
            int _len_tstate1 = 1;
              for(int _aux = 0; _aux < _len_tstate1; _aux++) {
          free(tstate[_aux].transinfo);
          }
          free(tstate[i1]);
          }
          free(tstate);
        
        break;
    }
    // big-arr
    case 1:
    {
          char channel = 255;
          int our_id = 255;
          int remote_id = 255;
          int _len_ahc0 = 65025;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
              int _len_ahc__i0__enabled_targets0 = 1;
          ahc[_i0].enabled_targets = (struct ahc_tmode_tstate **) malloc(_len_ahc__i0__enabled_targets0*sizeof(struct ahc_tmode_tstate *));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets0; _j0++) {
            int _len_ahc__i0__enabled_targets1 = 1;
            ahc[_i0].enabled_targets[_j0] = (struct ahc_tmode_tstate *) malloc(_len_ahc__i0__enabled_targets1*sizeof(struct ahc_tmode_tstate));
            for(int _j1 = 0; _j1 < _len_ahc__i0__enabled_targets1; _j1++) {
                int _len_ahc__i0__enabled_targets__j0__transinfo0 = 1;
          ahc[_i0].enabled_targets[_j0]->transinfo = (struct ahc_initiator_tinfo *) malloc(_len_ahc__i0__enabled_targets__j0__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets__j0__transinfo0; _j0++) {
            ahc[_i0].enabled_targets[_j0]->transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_tstate0 = 65025;
          struct ahc_tmode_tstate ** tstate = (struct ahc_tmode_tstate **) malloc(_len_tstate0*sizeof(struct ahc_tmode_tstate *));
          for(int _i0 = 0; _i0 < _len_tstate0; _i0++) {
            int _len_tstate1 = 1;
            tstate[_i0] = (struct ahc_tmode_tstate *) malloc(_len_tstate1*sizeof(struct ahc_tmode_tstate));
            for(int _i1 = 0; _i1 < _len_tstate1; _i1++) {
                int _len_tstate__i0___i1__transinfo0 = 1;
          tstate[_i0][_i1].transinfo = (struct ahc_initiator_tinfo *) malloc(_len_tstate__i0___i1__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_tstate__i0___i1__transinfo0; _j0++) {
            tstate[_i0][_i1].transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct ahc_initiator_tinfo * benchRet = ahc_fetch_transinfo(ahc,channel,our_id,remote_id,tstate);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(*(ahc[_aux].enabled_targets));
        free(ahc[_aux].enabled_targets);
          }
          free(ahc);
          for(int i1 = 0; i1 < _len_tstate0; i1++) {
            int _len_tstate1 = 1;
              for(int _aux = 0; _aux < _len_tstate1; _aux++) {
          free(tstate[_aux].transinfo);
          }
          free(tstate[i1]);
          }
          free(tstate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          char channel = 10;
          int our_id = 10;
          int remote_id = 10;
          int _len_ahc0 = 100;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
              int _len_ahc__i0__enabled_targets0 = 1;
          ahc[_i0].enabled_targets = (struct ahc_tmode_tstate **) malloc(_len_ahc__i0__enabled_targets0*sizeof(struct ahc_tmode_tstate *));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets0; _j0++) {
            int _len_ahc__i0__enabled_targets1 = 1;
            ahc[_i0].enabled_targets[_j0] = (struct ahc_tmode_tstate *) malloc(_len_ahc__i0__enabled_targets1*sizeof(struct ahc_tmode_tstate));
            for(int _j1 = 0; _j1 < _len_ahc__i0__enabled_targets1; _j1++) {
                int _len_ahc__i0__enabled_targets__j0__transinfo0 = 1;
          ahc[_i0].enabled_targets[_j0]->transinfo = (struct ahc_initiator_tinfo *) malloc(_len_ahc__i0__enabled_targets__j0__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_ahc__i0__enabled_targets__j0__transinfo0; _j0++) {
            ahc[_i0].enabled_targets[_j0]->transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_tstate0 = 100;
          struct ahc_tmode_tstate ** tstate = (struct ahc_tmode_tstate **) malloc(_len_tstate0*sizeof(struct ahc_tmode_tstate *));
          for(int _i0 = 0; _i0 < _len_tstate0; _i0++) {
            int _len_tstate1 = 1;
            tstate[_i0] = (struct ahc_tmode_tstate *) malloc(_len_tstate1*sizeof(struct ahc_tmode_tstate));
            for(int _i1 = 0; _i1 < _len_tstate1; _i1++) {
                int _len_tstate__i0___i1__transinfo0 = 1;
          tstate[_i0][_i1].transinfo = (struct ahc_initiator_tinfo *) malloc(_len_tstate__i0___i1__transinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _j0 = 0; _j0 < _len_tstate__i0___i1__transinfo0; _j0++) {
            tstate[_i0][_i1].transinfo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct ahc_initiator_tinfo * benchRet = ahc_fetch_transinfo(ahc,channel,our_id,remote_id,tstate);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ahc0; _aux++) {
          free(*(ahc[_aux].enabled_targets));
        free(ahc[_aux].enabled_targets);
          }
          free(ahc);
          for(int i1 = 0; i1 < _len_tstate0; i1++) {
            int _len_tstate1 = 1;
              for(int _aux = 0; _aux < _len_tstate1; _aux++) {
          free(tstate[_aux].transinfo);
          }
          free(tstate[i1]);
          }
          free(tstate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

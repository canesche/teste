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
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_15__ {TYPE_5__* client; } ;
typedef  TYPE_6__ gentity_t ;
struct TYPE_16__ {int /*<<< orphan*/  time; } ;
struct TYPE_12__ {int /*<<< orphan*/  lasthurtcarrier; } ;
struct TYPE_13__ {TYPE_3__ teamState; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_10__ {scalar_t__ generic1; scalar_t__* powerups; } ;
struct TYPE_14__ {TYPE_4__ pers; TYPE_2__ sess; TYPE_1__ ps; } ;

/* Variables and functions */
 int PW_BLUEFLAG ; 
 int PW_REDFLAG ; 
 scalar_t__ TEAM_RED ; 
 TYPE_7__ level ; 

void Team_CheckHurtCarrier(gentity_t *targ, gentity_t *attacker)
{
	int flag_pw;

	if (!targ->client || !attacker->client)
		return;

	if (targ->client->sess.sessionTeam == TEAM_RED)
		flag_pw = PW_BLUEFLAG;
	else
		flag_pw = PW_REDFLAG;

#ifdef MISSIONPACK
	if (g_gametype.integer == GT_1FCTF) {
		flag_pw = PW_NEUTRALFLAG;
	}
#endif

	// flags
	if (targ->client->ps.powerups[flag_pw] &&
		targ->client->sess.sessionTeam != attacker->client->sess.sessionTeam)
		attacker->client->pers.teamState.lasthurtcarrier = level.time;

	// skulls
	if (targ->client->ps.generic1 &&
		targ->client->sess.sessionTeam != attacker->client->sess.sessionTeam)
		attacker->client->pers.teamState.lasthurtcarrier = level.time;
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
          int _len_targ0 = 1;
          struct TYPE_15__ * targ = (struct TYPE_15__ *) malloc(_len_targ0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
              int _len_targ__i0__client0 = 1;
          targ[_i0].client = (struct TYPE_14__ *) malloc(_len_targ__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_targ__i0__client0; _j0++) {
            targ[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targ__i0__client_ps_powerups0 = 1;
          targ[_i0].client->ps.powerups = (long *) malloc(_len_targ__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_targ__i0__client_ps_powerups0; _j0++) {
            targ[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_attacker0 = 1;
          struct TYPE_15__ * attacker = (struct TYPE_15__ *) malloc(_len_attacker0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_attacker0; _i0++) {
              int _len_attacker__i0__client0 = 1;
          attacker[_i0].client = (struct TYPE_14__ *) malloc(_len_attacker__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client0; _j0++) {
            attacker[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attacker__i0__client_ps_powerups0 = 1;
          attacker[_i0].client->ps.powerups = (long *) malloc(_len_attacker__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client_ps_powerups0; _j0++) {
            attacker[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          Team_CheckHurtCarrier(targ,attacker);
          for(int _aux = 0; _aux < _len_targ0; _aux++) {
          free(targ[_aux].client);
          }
          free(targ);
          for(int _aux = 0; _aux < _len_attacker0; _aux++) {
          free(attacker[_aux].client);
          }
          free(attacker);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_targ0 = 65025;
          struct TYPE_15__ * targ = (struct TYPE_15__ *) malloc(_len_targ0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
              int _len_targ__i0__client0 = 1;
          targ[_i0].client = (struct TYPE_14__ *) malloc(_len_targ__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_targ__i0__client0; _j0++) {
            targ[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targ__i0__client_ps_powerups0 = 1;
          targ[_i0].client->ps.powerups = (long *) malloc(_len_targ__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_targ__i0__client_ps_powerups0; _j0++) {
            targ[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_attacker0 = 65025;
          struct TYPE_15__ * attacker = (struct TYPE_15__ *) malloc(_len_attacker0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_attacker0; _i0++) {
              int _len_attacker__i0__client0 = 1;
          attacker[_i0].client = (struct TYPE_14__ *) malloc(_len_attacker__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client0; _j0++) {
            attacker[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attacker__i0__client_ps_powerups0 = 1;
          attacker[_i0].client->ps.powerups = (long *) malloc(_len_attacker__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client_ps_powerups0; _j0++) {
            attacker[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          Team_CheckHurtCarrier(targ,attacker);
          for(int _aux = 0; _aux < _len_targ0; _aux++) {
          free(targ[_aux].client);
          }
          free(targ);
          for(int _aux = 0; _aux < _len_attacker0; _aux++) {
          free(attacker[_aux].client);
          }
          free(attacker);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_targ0 = 100;
          struct TYPE_15__ * targ = (struct TYPE_15__ *) malloc(_len_targ0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_targ0; _i0++) {
              int _len_targ__i0__client0 = 1;
          targ[_i0].client = (struct TYPE_14__ *) malloc(_len_targ__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_targ__i0__client0; _j0++) {
            targ[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        targ[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_targ__i0__client_ps_powerups0 = 1;
          targ[_i0].client->ps.powerups = (long *) malloc(_len_targ__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_targ__i0__client_ps_powerups0; _j0++) {
            targ[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_attacker0 = 100;
          struct TYPE_15__ * attacker = (struct TYPE_15__ *) malloc(_len_attacker0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_attacker0; _i0++) {
              int _len_attacker__i0__client0 = 1;
          attacker[_i0].client = (struct TYPE_14__ *) malloc(_len_attacker__i0__client0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client0; _j0++) {
            attacker[_i0].client->pers.teamState.lasthurtcarrier = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
        attacker[_i0].client->ps.generic1 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_attacker__i0__client_ps_powerups0 = 1;
          attacker[_i0].client->ps.powerups = (long *) malloc(_len_attacker__i0__client_ps_powerups0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_attacker__i0__client_ps_powerups0; _j0++) {
            attacker[_i0].client->ps.powerups[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          Team_CheckHurtCarrier(targ,attacker);
          for(int _aux = 0; _aux < _len_targ0; _aux++) {
          free(targ[_aux].client);
          }
          free(targ);
          for(int _aux = 0; _aux < _len_attacker0; _aux++) {
          free(attacker[_aux].client);
          }
          free(attacker);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

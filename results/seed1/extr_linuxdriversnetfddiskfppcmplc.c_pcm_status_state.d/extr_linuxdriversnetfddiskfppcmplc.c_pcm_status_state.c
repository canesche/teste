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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct s_smc {struct s_phy* y; } ;
struct s_phy {struct fddi_mib_p* mib; } ;
struct TYPE_2__ {int R_val; } ;
struct fddi_mib_p {int fddiPORTMy_Type; int fddiPORTConnectState; int fddiPORTNeighborType; int fddiPORTPCMState; TYPE_1__ fddiPORTMacIndicated; } ;

/* Variables and functions */
#define  PC8_ACTIVE 128 

void pcm_status_state(struct s_smc *smc, int np, int *type, int *state,
		      int *remote, int *mac)
{
	struct s_phy	*phy = &smc->y[np] ;
	struct fddi_mib_p	*mib ;

	mib = phy->mib ;

	/* remote PHY type and MAC - set only if active */
	*mac = 0 ;
	*type = mib->fddiPORTMy_Type ;		/* our PHY type */
	*state = mib->fddiPORTConnectState ;
	*remote = mib->fddiPORTNeighborType ;

	switch(mib->fddiPORTPCMState) {
	case PC8_ACTIVE :
		*mac = mib->fddiPORTMacIndicated.R_val ;
		break ;
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
          int np = 100;
          int _len_smc0 = 1;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTMy_Type = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTConnectState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTNeighborType = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTMacIndicated.R_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_type0 = 1;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_remote0 = 1;
          int * remote = (int *) malloc(_len_remote0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 1;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcm_status_state(smc,np,type,state,remote,mac);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
          free(type);
          free(state);
          free(remote);
          free(mac);
        
        break;
    }
    // big-arr
    case 1:
    {
          int np = 255;
          int _len_smc0 = 65025;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTMy_Type = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTConnectState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTNeighborType = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTMacIndicated.R_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_type0 = 65025;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_remote0 = 65025;
          int * remote = (int *) malloc(_len_remote0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 65025;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcm_status_state(smc,np,type,state,remote,mac);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
          free(type);
          free(state);
          free(remote);
          free(mac);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int np = 10;
          int _len_smc0 = 100;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->fddiPORTMy_Type = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTConnectState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTNeighborType = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTPCMState = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].y->mib->fddiPORTMacIndicated.R_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_type0 = 100;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          int * state = (int *) malloc(_len_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_remote0 = 100;
          int * remote = (int *) malloc(_len_remote0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_remote0; _i0++) {
            remote[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mac0 = 100;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pcm_status_state(smc,np,type,state,remote,mac);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
          free(type);
          free(state);
          free(remote);
          free(mac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

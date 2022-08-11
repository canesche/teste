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
typedef  int /*<<< orphan*/  u_short ;
struct s_smc {struct s_phy* y; } ;
struct s_phy {struct fddi_mib_p* mib; } ;
struct fddi_mib_p {int dummy; } ;

/* Variables and functions */
 size_t PA ; 
 size_t PB ; 

__attribute__((used)) static void led_indication(struct s_smc *smc, int led_event)
{
	/* use smc->hw.mac_ring_is_up == TRUE 
	 * as indication for Ring Operational
	 */
	u_short			led_state ;
	struct s_phy		*phy ;
	struct fddi_mib_p	*mib_a ;
	struct fddi_mib_p	*mib_b ;

	phy = &smc->y[PA] ;
	mib_a = phy->mib ;
	phy = &smc->y[PB] ;
	mib_b = phy->mib ;

#ifdef	PCI
        led_state = 0 ;
	
	/* Ring up = yellow led OFF*/
	if (led_event == LED_Y_ON) {
		led_state |= LED_MY_ON ;
	}
	else if (led_event == LED_Y_OFF) {
		led_state |= LED_MY_OFF ;
	}
	else {	/* PCM state changed */
		/* Link at Port A/S = green led A ON */
		if (mib_a->fddiPORTPCMState == PC8_ACTIVE) {	
			led_state |= LED_GA_ON ;
		}
		else {
			led_state |= LED_GA_OFF ;
		}
		
		/* Link at Port B = green led B ON */
		if (mib_b->fddiPORTPCMState == PC8_ACTIVE) {
			led_state |= LED_GB_ON ;
		}
		else {
			led_state |= LED_GB_OFF ;
		}
	}

        outp(ADDR(B0_LED), led_state) ;
#endif	/* PCI */

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
          int led_event = 100;
          int _len_smc0 = 1;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_indication(smc,led_event);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int led_event = 255;
          int _len_smc0 = 65025;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_indication(smc,led_event);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int led_event = 10;
          int _len_smc0 = 100;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
              int _len_smc__i0__y0 = 1;
          smc[_i0].y = (struct s_phy *) malloc(_len_smc__i0__y0*sizeof(struct s_phy));
          for(int _j0 = 0; _j0 < _len_smc__i0__y0; _j0++) {
              int _len_smc__i0__y_mib0 = 1;
          smc[_i0].y->mib = (struct fddi_mib_p *) malloc(_len_smc__i0__y_mib0*sizeof(struct fddi_mib_p));
          for(int _j0 = 0; _j0 < _len_smc__i0__y_mib0; _j0++) {
            smc[_i0].y->mib->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_indication(smc,led_event);
          for(int _aux = 0; _aux < _len_smc0; _aux++) {
          free(smc[_aux].y);
          }
          free(smc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

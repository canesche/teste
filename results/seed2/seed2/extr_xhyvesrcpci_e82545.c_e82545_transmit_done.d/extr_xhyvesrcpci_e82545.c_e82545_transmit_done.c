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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  data; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_6__ {TYPE_2__ upper; TYPE_1__ lower; } ;
union e1000_tx_udesc {TYPE_3__ td; } ;
typedef  int uint16_t ;
struct e82545_softc {union e1000_tx_udesc* esc_txdesc; } ;

/* Variables and functions */
 int E1000_TXD_CMD_RS ; 
 int /*<<< orphan*/  E1000_TXD_STAT_DD ; 

__attribute__((used)) static void
e82545_transmit_done(struct e82545_softc *sc, uint16_t head, uint16_t tail,
    uint16_t dsize, int *tdwb)
{
	union e1000_tx_udesc *dsc;

	for ( ; head != tail; head = (head + 1) % dsize) {
		dsc = &sc->esc_txdesc[head];
		if (dsc->td.lower.data & E1000_TXD_CMD_RS) {
			dsc->td.upper.data |= E1000_TXD_STAT_DD;
			*tdwb = 1;
		}
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
          int head = 100;
          int tail = 100;
          int dsize = 100;
          int _len_sc0 = 1;
          struct e82545_softc * sc = (struct e82545_softc *) malloc(_len_sc0*sizeof(struct e82545_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__esc_txdesc0 = 1;
          sc[_i0].esc_txdesc = (union e1000_tx_udesc *) malloc(_len_sc__i0__esc_txdesc0*sizeof(union e1000_tx_udesc));
          for(int _j0 = 0; _j0 < _len_sc__i0__esc_txdesc0; _j0++) {
            sc[_i0].esc_txdesc[_j0] = 0;
          }
          }
          int _len_tdwb0 = 1;
          int * tdwb = (int *) malloc(_len_tdwb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdwb0; _i0++) {
            tdwb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          e82545_transmit_done(sc,head,tail,dsize,tdwb);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].esc_txdesc);
          }
          free(sc);
          free(tdwb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int head = 255;
          int tail = 255;
          int dsize = 255;
          int _len_sc0 = 65025;
          struct e82545_softc * sc = (struct e82545_softc *) malloc(_len_sc0*sizeof(struct e82545_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__esc_txdesc0 = 1;
          sc[_i0].esc_txdesc = (union e1000_tx_udesc *) malloc(_len_sc__i0__esc_txdesc0*sizeof(union e1000_tx_udesc));
          for(int _j0 = 0; _j0 < _len_sc__i0__esc_txdesc0; _j0++) {
            sc[_i0].esc_txdesc[_j0] = 0;
          }
          }
          int _len_tdwb0 = 65025;
          int * tdwb = (int *) malloc(_len_tdwb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdwb0; _i0++) {
            tdwb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          e82545_transmit_done(sc,head,tail,dsize,tdwb);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].esc_txdesc);
          }
          free(sc);
          free(tdwb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int head = 10;
          int tail = 10;
          int dsize = 10;
          int _len_sc0 = 100;
          struct e82545_softc * sc = (struct e82545_softc *) malloc(_len_sc0*sizeof(struct e82545_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
              int _len_sc__i0__esc_txdesc0 = 1;
          sc[_i0].esc_txdesc = (union e1000_tx_udesc *) malloc(_len_sc__i0__esc_txdesc0*sizeof(union e1000_tx_udesc));
          for(int _j0 = 0; _j0 < _len_sc__i0__esc_txdesc0; _j0++) {
            sc[_i0].esc_txdesc[_j0] = 0;
          }
          }
          int _len_tdwb0 = 100;
          int * tdwb = (int *) malloc(_len_tdwb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdwb0; _i0++) {
            tdwb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          e82545_transmit_done(sc,head,tail,dsize,tdwb);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].esc_txdesc);
          }
          free(sc);
          free(tdwb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

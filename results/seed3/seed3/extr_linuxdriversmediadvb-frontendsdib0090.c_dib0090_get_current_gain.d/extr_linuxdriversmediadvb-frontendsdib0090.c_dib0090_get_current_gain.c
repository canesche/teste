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
typedef  int u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int* gain; int rf_gain_limit; int rf_lt_def; } ;

/* Variables and functions */

void dib0090_get_current_gain(struct dvb_frontend *fe, u16 * rf, u16 * bb, u16 * rf_gain_limit, u16 * rflt)
{
	struct dib0090_state *state = fe->tuner_priv;
	if (rf)
		*rf = state->gain[0];
	if (bb)
		*bb = state->gain[1];
	if (rf_gain_limit)
		*rf_gain_limit = state->rf_gain_limit;
	if (rflt)
		*rflt = (state->rf_lt_def >> 10) & 0x7;
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
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0090_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0090_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_gain0 = 1;
          fe[_i0].tuner_priv->gain = (int *) malloc(_len_fe__i0__tuner_priv_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_gain0; _j0++) {
            fe[_i0].tuner_priv->gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].tuner_priv->rf_gain_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->rf_lt_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rf0 = 1;
          int * rf = (int *) malloc(_len_rf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bb0 = 1;
          int * bb = (int *) malloc(_len_bb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rf_gain_limit0 = 1;
          int * rf_gain_limit = (int *) malloc(_len_rf_gain_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf_gain_limit0; _i0++) {
            rf_gain_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rflt0 = 1;
          int * rflt = (int *) malloc(_len_rflt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rflt0; _i0++) {
            rflt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_get_current_gain(fe,rf,bb,rf_gain_limit,rflt);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(rf);
          free(bb);
          free(rf_gain_limit);
          free(rflt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0090_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0090_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_gain0 = 1;
          fe[_i0].tuner_priv->gain = (int *) malloc(_len_fe__i0__tuner_priv_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_gain0; _j0++) {
            fe[_i0].tuner_priv->gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].tuner_priv->rf_gain_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->rf_lt_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rf0 = 65025;
          int * rf = (int *) malloc(_len_rf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bb0 = 65025;
          int * bb = (int *) malloc(_len_bb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rf_gain_limit0 = 65025;
          int * rf_gain_limit = (int *) malloc(_len_rf_gain_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf_gain_limit0; _i0++) {
            rf_gain_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rflt0 = 65025;
          int * rflt = (int *) malloc(_len_rflt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rflt0; _i0++) {
            rflt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_get_current_gain(fe,rf,bb,rf_gain_limit,rflt);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(rf);
          free(bb);
          free(rf_gain_limit);
          free(rflt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0090_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0090_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_gain0 = 1;
          fe[_i0].tuner_priv->gain = (int *) malloc(_len_fe__i0__tuner_priv_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_gain0; _j0++) {
            fe[_i0].tuner_priv->gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].tuner_priv->rf_gain_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->rf_lt_def = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rf0 = 100;
          int * rf = (int *) malloc(_len_rf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bb0 = 100;
          int * bb = (int *) malloc(_len_bb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rf_gain_limit0 = 100;
          int * rf_gain_limit = (int *) malloc(_len_rf_gain_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rf_gain_limit0; _i0++) {
            rf_gain_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rflt0 = 100;
          int * rflt = (int *) malloc(_len_rflt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rflt0; _i0++) {
            rflt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_get_current_gain(fe,rf,bb,rf_gain_limit,rflt);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(rf);
          free(bb);
          free(rf_gain_limit);
          free(rflt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

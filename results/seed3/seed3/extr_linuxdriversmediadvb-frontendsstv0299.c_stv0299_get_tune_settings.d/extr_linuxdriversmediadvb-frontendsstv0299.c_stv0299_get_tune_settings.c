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
struct stv0299_state {TYPE_1__* config; } ;
struct dvb_frontend_tune_settings {int step_size; int max_drift; int /*<<< orphan*/  min_delay_ms; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv0299_state* demodulator_priv; } ;
struct TYPE_2__ {int /*<<< orphan*/  min_delay_ms; } ;

/* Variables and functions */

__attribute__((used)) static int stv0299_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings* fesettings)
{
	struct stv0299_state* state = fe->demodulator_priv;
	struct dtv_frontend_properties *p = &fe->dtv_property_cache;

	fesettings->min_delay_ms = state->config->min_delay_ms;
	if (p->symbol_rate < 10000000) {
		fesettings->step_size = p->symbol_rate / 32000;
		fesettings->max_drift = 5000;
	} else {
		fesettings->step_size = p->symbol_rate / 16000;
		fesettings->max_drift = p->symbol_rate / 2000;
	}
	return 0;
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
            fe[_i0].dtv_property_cache.symbol_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct stv0299_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct stv0299_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_config0 = 1;
          fe[_i0].demodulator_priv->config = (struct TYPE_2__ *) malloc(_len_fe__i0__demodulator_priv_config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_config0; _j0++) {
            fe[_i0].demodulator_priv->config->min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fesettings0 = 1;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
            fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv0299_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(fesettings);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.symbol_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct stv0299_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct stv0299_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_config0 = 1;
          fe[_i0].demodulator_priv->config = (struct TYPE_2__ *) malloc(_len_fe__i0__demodulator_priv_config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_config0; _j0++) {
            fe[_i0].demodulator_priv->config->min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fesettings0 = 65025;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
            fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv0299_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(fesettings);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.symbol_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct stv0299_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct stv0299_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_config0 = 1;
          fe[_i0].demodulator_priv->config = (struct TYPE_2__ *) malloc(_len_fe__i0__demodulator_priv_config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_config0; _j0++) {
            fe[_i0].demodulator_priv->config->min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_fesettings0 = 100;
          struct dvb_frontend_tune_settings * fesettings = (struct dvb_frontend_tune_settings *) malloc(_len_fesettings0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_fesettings0; _i0++) {
            fesettings[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
        fesettings[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv0299_get_tune_settings(fe,fesettings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(fesettings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_4__ {int frequency; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; struct dib0070_state* tuner_priv; } ;
struct dib0070_wbd_gain_cfg {int freq; int wbd_gain_val; } ;
struct dib0070_state {int wbd_gain_current; int /*<<< orphan*/ * wbd_offset_3_3; TYPE_1__* cfg; } ;
struct TYPE_3__ {struct dib0070_wbd_gain_cfg* wbd_gain; } ;

/* Variables and functions */

u16 dib0070_wbd_offset(struct dvb_frontend *fe)
{
	struct dib0070_state *state = fe->tuner_priv;
	const struct dib0070_wbd_gain_cfg *tmp = state->cfg->wbd_gain;
	u32 freq = fe->dtv_property_cache.frequency/1000;

	if (tmp != NULL) {
		while (freq/1000 > tmp->freq) /* find the right one */
			tmp++;
		state->wbd_gain_current = tmp->wbd_gain_val;
	} else
		state->wbd_gain_current = 6;

	return state->wbd_offset_3_3[state->wbd_gain_current - 6];
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
            fe[_i0].dtv_property_cache.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0070_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0070_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->wbd_gain_current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_wbd_offset_3_30 = 1;
          fe[_i0].tuner_priv->wbd_offset_3_3 = (int *) malloc(_len_fe__i0__tuner_priv_wbd_offset_3_30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_wbd_offset_3_30; _j0++) {
            fe[_i0].tuner_priv->wbd_offset_3_3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__tuner_priv_cfg0 = 1;
          fe[_i0].tuner_priv->cfg = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg0; _j0++) {
              int _len_fe__i0__tuner_priv_cfg_wbd_gain0 = 1;
          fe[_i0].tuner_priv->cfg->wbd_gain = (struct dib0070_wbd_gain_cfg *) malloc(_len_fe__i0__tuner_priv_cfg_wbd_gain0*sizeof(struct dib0070_wbd_gain_cfg));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg_wbd_gain0; _j0++) {
            fe[_i0].tuner_priv->cfg->wbd_gain->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->cfg->wbd_gain->wbd_gain_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = dib0070_wbd_offset(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0070_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0070_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->wbd_gain_current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_wbd_offset_3_30 = 1;
          fe[_i0].tuner_priv->wbd_offset_3_3 = (int *) malloc(_len_fe__i0__tuner_priv_wbd_offset_3_30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_wbd_offset_3_30; _j0++) {
            fe[_i0].tuner_priv->wbd_offset_3_3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__tuner_priv_cfg0 = 1;
          fe[_i0].tuner_priv->cfg = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg0; _j0++) {
              int _len_fe__i0__tuner_priv_cfg_wbd_gain0 = 1;
          fe[_i0].tuner_priv->cfg->wbd_gain = (struct dib0070_wbd_gain_cfg *) malloc(_len_fe__i0__tuner_priv_cfg_wbd_gain0*sizeof(struct dib0070_wbd_gain_cfg));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg_wbd_gain0; _j0++) {
            fe[_i0].tuner_priv->cfg->wbd_gain->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->cfg->wbd_gain->wbd_gain_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = dib0070_wbd_offset(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].dtv_property_cache.frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct dib0070_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct dib0070_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->wbd_gain_current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_wbd_offset_3_30 = 1;
          fe[_i0].tuner_priv->wbd_offset_3_3 = (int *) malloc(_len_fe__i0__tuner_priv_wbd_offset_3_30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_wbd_offset_3_30; _j0++) {
            fe[_i0].tuner_priv->wbd_offset_3_3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__tuner_priv_cfg0 = 1;
          fe[_i0].tuner_priv->cfg = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg0; _j0++) {
              int _len_fe__i0__tuner_priv_cfg_wbd_gain0 = 1;
          fe[_i0].tuner_priv->cfg->wbd_gain = (struct dib0070_wbd_gain_cfg *) malloc(_len_fe__i0__tuner_priv_cfg_wbd_gain0*sizeof(struct dib0070_wbd_gain_cfg));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_cfg_wbd_gain0; _j0++) {
            fe[_i0].tuner_priv->cfg->wbd_gain->freq = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->cfg->wbd_gain->wbd_gain_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = dib0070_wbd_offset(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

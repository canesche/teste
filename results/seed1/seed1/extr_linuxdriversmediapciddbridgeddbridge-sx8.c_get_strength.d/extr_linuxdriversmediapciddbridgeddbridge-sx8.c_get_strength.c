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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int channel_power; } ;
struct TYPE_6__ {TYPE_1__ dvbs2_signal_info; } ;
struct sx8 {TYPE_2__ signal_info; } ;
struct TYPE_8__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct sx8* demodulator_priv; } ;
typedef  int s32 ;
struct TYPE_7__ {int svalue; int /*<<< orphan*/  scale; } ;

/* Variables and functions */
 int /*<<< orphan*/  FE_SCALE_DECIBEL ; 

__attribute__((used)) static int get_strength(struct dvb_frontend *fe)
{
	struct sx8 *state = fe->demodulator_priv;
	struct dtv_frontend_properties *p = &fe->dtv_property_cache;
	s32 str;

	str = 100000 -
	      (state->signal_info.dvbs2_signal_info.channel_power
	       * 10 + 108750);
	p->strength.len = 1;
	p->strength.stat[0].scale = FE_SCALE_DECIBEL;
	p->strength.stat[0].svalue = str;
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
            fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_7__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->svalue = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct sx8 *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct sx8));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
            fe[_i0].demodulator_priv->signal_info.dvbs2_signal_info.channel_power = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_strength(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
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
            fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_7__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->svalue = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct sx8 *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct sx8));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
            fe[_i0].demodulator_priv->signal_info.dvbs2_signal_info.channel_power = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_strength(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
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
            fe[_i0].dtv_property_cache.strength.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__dtv_property_cache_strength_stat0 = 1;
          fe[_i0].dtv_property_cache.strength.stat = (struct TYPE_7__ *) malloc(_len_fe__i0__dtv_property_cache_strength_stat0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fe__i0__dtv_property_cache_strength_stat0; _j0++) {
            fe[_i0].dtv_property_cache.strength.stat->svalue = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].dtv_property_cache.strength.stat->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct sx8 *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct sx8));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
            fe[_i0].demodulator_priv->signal_info.dvbs2_signal_info.channel_power = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_strength(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
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

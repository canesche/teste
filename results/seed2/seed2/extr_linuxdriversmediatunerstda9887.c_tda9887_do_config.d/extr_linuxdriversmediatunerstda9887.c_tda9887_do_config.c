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
struct tda9887_priv {char* data; int config; int std; scalar_t__ mode; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;

/* Variables and functions */
 int TDA9887_AUTOMUTE ; 
#define  TDA9887_DEEMPHASIS_50 130 
#define  TDA9887_DEEMPHASIS_75 129 
 int TDA9887_DEEMPHASIS_MASK ; 
#define  TDA9887_DEEMPHASIS_NONE 128 
 int TDA9887_GAIN_NORMAL ; 
 int TDA9887_GATING_18 ; 
 int TDA9887_INTERCARRIER ; 
 int TDA9887_INTERCARRIER_NTSC ; 
 int TDA9887_PORT1_ACTIVE ; 
 int TDA9887_PORT1_INACTIVE ; 
 int TDA9887_PORT2_ACTIVE ; 
 int TDA9887_PORT2_INACTIVE ; 
 int TDA9887_QSS ; 
 int TDA9887_RIF_41_3 ; 
 int TDA9887_TOP_SET ; 
 int V4L2_STD_NTSC ; 
 scalar_t__ V4L2_TUNER_RADIO ; 
 char cAutoMuteFmActive ; 
 char cDeemphasis50 ; 
 char cDeemphasis75 ; 
 char cDeemphasisOFF ; 
 char cDeemphasisON ; 
 char cGating_36 ; 
 char cOutputPort1Inactive ; 
 char cOutputPort2Inactive ; 
 char cQSS ; 
 char cRadioIF_41_30 ; 
 char cTopMask ; 
 char cTunerGainLow ; 
 char cVideoIFMask ; 

__attribute__((used)) static int tda9887_do_config(struct dvb_frontend *fe)
{
	struct tda9887_priv *priv = fe->analog_demod_priv;
	char *buf = priv->data;

	if (priv->config & TDA9887_PORT1_ACTIVE)
		buf[1] &= ~cOutputPort1Inactive;
	if (priv->config & TDA9887_PORT1_INACTIVE)
		buf[1] |= cOutputPort1Inactive;
	if (priv->config & TDA9887_PORT2_ACTIVE)
		buf[1] &= ~cOutputPort2Inactive;
	if (priv->config & TDA9887_PORT2_INACTIVE)
		buf[1] |= cOutputPort2Inactive;

	if (priv->config & TDA9887_QSS)
		buf[1] |= cQSS;
	if (priv->config & TDA9887_INTERCARRIER)
		buf[1] &= ~cQSS;

	if (priv->config & TDA9887_AUTOMUTE)
		buf[1] |= cAutoMuteFmActive;
	if (priv->config & TDA9887_DEEMPHASIS_MASK) {
		buf[2] &= ~0x60;
		switch (priv->config & TDA9887_DEEMPHASIS_MASK) {
		case TDA9887_DEEMPHASIS_NONE:
			buf[2] |= cDeemphasisOFF;
			break;
		case TDA9887_DEEMPHASIS_50:
			buf[2] |= cDeemphasisON | cDeemphasis50;
			break;
		case TDA9887_DEEMPHASIS_75:
			buf[2] |= cDeemphasisON | cDeemphasis75;
			break;
		}
	}
	if (priv->config & TDA9887_TOP_SET) {
		buf[2] &= ~cTopMask;
		buf[2] |= (priv->config >> 8) & cTopMask;
	}
	if ((priv->config & TDA9887_INTERCARRIER_NTSC) &&
	    (priv->std & V4L2_STD_NTSC))
		buf[1] &= ~cQSS;
	if (priv->config & TDA9887_GATING_18)
		buf[3] &= ~cGating_36;

	if (priv->mode == V4L2_TUNER_RADIO) {
		if (priv->config & TDA9887_RIF_41_3) {
			buf[3] &= ~cVideoIFMask;
			buf[3] |= cRadioIF_41_30;
		}
		if (priv->config & TDA9887_GAIN_NORMAL)
			buf[3] &= ~cTunerGainLow;
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
              int _len_fe__i0__analog_demod_priv0 = 1;
          fe[_i0].analog_demod_priv = (struct tda9887_priv *) malloc(_len_fe__i0__analog_demod_priv0*sizeof(struct tda9887_priv));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv0; _j0++) {
              int _len_fe__i0__analog_demod_priv_data0 = 1;
          fe[_i0].analog_demod_priv->data = (char *) malloc(_len_fe__i0__analog_demod_priv_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv_data0; _j0++) {
            fe[_i0].analog_demod_priv->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].analog_demod_priv->config = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->std = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tda9887_do_config(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].analog_demod_priv);
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
              int _len_fe__i0__analog_demod_priv0 = 1;
          fe[_i0].analog_demod_priv = (struct tda9887_priv *) malloc(_len_fe__i0__analog_demod_priv0*sizeof(struct tda9887_priv));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv0; _j0++) {
              int _len_fe__i0__analog_demod_priv_data0 = 1;
          fe[_i0].analog_demod_priv->data = (char *) malloc(_len_fe__i0__analog_demod_priv_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv_data0; _j0++) {
            fe[_i0].analog_demod_priv->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].analog_demod_priv->config = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->std = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tda9887_do_config(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].analog_demod_priv);
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
              int _len_fe__i0__analog_demod_priv0 = 1;
          fe[_i0].analog_demod_priv = (struct tda9887_priv *) malloc(_len_fe__i0__analog_demod_priv0*sizeof(struct tda9887_priv));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv0; _j0++) {
              int _len_fe__i0__analog_demod_priv_data0 = 1;
          fe[_i0].analog_demod_priv->data = (char *) malloc(_len_fe__i0__analog_demod_priv_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_fe__i0__analog_demod_priv_data0; _j0++) {
            fe[_i0].analog_demod_priv->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fe[_i0].analog_demod_priv->config = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->std = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].analog_demod_priv->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tda9887_do_config(fe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].analog_demod_priv);
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

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
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_2__ {struct i2c_adapter* i2c_adap; } ;
struct dib9000_state {TYPE_1__ i2c; } ;

/* Variables and functions */

int dib9000_set_i2c_adapter(struct dvb_frontend *fe, struct i2c_adapter *i2c)
{
	struct dib9000_state *st = fe->demodulator_priv;

	st->i2c.i2c_adap = i2c;
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
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct dib9000_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct dib9000_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_i2c_i2c_adap0 = 1;
          fe[_i0].demodulator_priv->i2c.i2c_adap = (struct i2c_adapter *) malloc(_len_fe__i0__demodulator_priv_i2c_i2c_adap0*sizeof(struct i2c_adapter));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_i2c_i2c_adap0; _j0++) {
            fe[_i0].demodulator_priv->i2c.i2c_adap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_i2c0 = 1;
          struct i2c_adapter * i2c = (struct i2c_adapter *) malloc(_len_i2c0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_i2c0; _i0++) {
            i2c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dib9000_set_i2c_adapter(fe,i2c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(i2c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct dib9000_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct dib9000_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_i2c_i2c_adap0 = 1;
          fe[_i0].demodulator_priv->i2c.i2c_adap = (struct i2c_adapter *) malloc(_len_fe__i0__demodulator_priv_i2c_i2c_adap0*sizeof(struct i2c_adapter));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_i2c_i2c_adap0; _j0++) {
            fe[_i0].demodulator_priv->i2c.i2c_adap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_i2c0 = 65025;
          struct i2c_adapter * i2c = (struct i2c_adapter *) malloc(_len_i2c0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_i2c0; _i0++) {
            i2c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dib9000_set_i2c_adapter(fe,i2c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(i2c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct dib9000_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct dib9000_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              int _len_fe__i0__demodulator_priv_i2c_i2c_adap0 = 1;
          fe[_i0].demodulator_priv->i2c.i2c_adap = (struct i2c_adapter *) malloc(_len_fe__i0__demodulator_priv_i2c_i2c_adap0*sizeof(struct i2c_adapter));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv_i2c_i2c_adap0; _j0++) {
            fe[_i0].demodulator_priv->i2c.i2c_adap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_i2c0 = 100;
          struct i2c_adapter * i2c = (struct i2c_adapter *) malloc(_len_i2c0*sizeof(struct i2c_adapter));
          for(int _i0 = 0; _i0 < _len_i2c0; _i0++) {
            i2c[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dib9000_set_i2c_adapter(fe,i2c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(i2c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

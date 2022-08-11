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
typedef  scalar_t__ u8 ;
typedef  int u16 ;
struct mxl5005s_state {TYPE_1__* TunerRegs; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;
struct TYPE_2__ {scalar_t__ Reg_Num; scalar_t__ Reg_Val; } ;

/* Variables and functions */

__attribute__((used)) static u16 MXL_RegRead(struct dvb_frontend *fe, u8 RegNum, u8 *RegVal)
{
	struct mxl5005s_state *state = fe->tuner_priv;
	int i ;

	for (i = 0; i < 104; i++) {
		if (RegNum == state->TunerRegs[i].Reg_Num) {
			*RegVal = (u8)(state->TunerRegs[i].Reg_Val);
			return 0;
		}
	}

	return 1;
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
          long RegNum = 100;
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_TunerRegs0 = 1;
          fe[_i0].tuner_priv->TunerRegs = (struct TYPE_2__ *) malloc(_len_fe__i0__tuner_priv_TunerRegs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_TunerRegs0; _j0++) {
            fe[_i0].tuner_priv->TunerRegs->Reg_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->TunerRegs->Reg_Val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_RegVal0 = 1;
          long * RegVal = (long *) malloc(_len_RegVal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_RegVal0; _i0++) {
            RegVal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MXL_RegRead(fe,RegNum,RegVal);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(RegVal);
        
        break;
    }
    // big-arr
    case 1:
    {
          long RegNum = 255;
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_TunerRegs0 = 1;
          fe[_i0].tuner_priv->TunerRegs = (struct TYPE_2__ *) malloc(_len_fe__i0__tuner_priv_TunerRegs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_TunerRegs0; _j0++) {
            fe[_i0].tuner_priv->TunerRegs->Reg_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->TunerRegs->Reg_Val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_RegVal0 = 65025;
          long * RegVal = (long *) malloc(_len_RegVal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_RegVal0; _i0++) {
            RegVal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MXL_RegRead(fe,RegNum,RegVal);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(RegVal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long RegNum = 10;
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              int _len_fe__i0__tuner_priv_TunerRegs0 = 1;
          fe[_i0].tuner_priv->TunerRegs = (struct TYPE_2__ *) malloc(_len_fe__i0__tuner_priv_TunerRegs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_TunerRegs0; _j0++) {
            fe[_i0].tuner_priv->TunerRegs->Reg_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->TunerRegs->Reg_Val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_RegVal0 = 100;
          long * RegVal = (long *) malloc(_len_RegVal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_RegVal0; _i0++) {
            RegVal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MXL_RegRead(fe,RegNum,RegVal);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(RegVal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

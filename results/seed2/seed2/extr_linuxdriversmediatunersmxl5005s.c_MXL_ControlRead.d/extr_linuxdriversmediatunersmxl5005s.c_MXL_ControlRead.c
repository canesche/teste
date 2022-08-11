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
typedef  scalar_t__ u32 ;
typedef  size_t u16 ;
struct mxl5005s_state {size_t Init_Ctrl_Num; size_t CH_Ctrl_Num; TYPE_2__* CH_Ctrl; TYPE_1__* Init_Ctrl; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;
struct TYPE_4__ {size_t Ctrl_Num; size_t size; int* val; } ;
struct TYPE_3__ {size_t Ctrl_Num; size_t size; int* val; } ;

/* Variables and functions */

__attribute__((used)) static u16 MXL_ControlRead(struct dvb_frontend *fe, u16 controlNum, u32 *value)
{
	struct mxl5005s_state *state = fe->tuner_priv;
	u32 ctrlVal ;
	u16 i, k ;

	for (i = 0; i < state->Init_Ctrl_Num ; i++) {

		if (controlNum == state->Init_Ctrl[i].Ctrl_Num) {

			ctrlVal = 0;
			for (k = 0; k < state->Init_Ctrl[i].size; k++)
				ctrlVal += state->Init_Ctrl[i].val[k] * (1<<k);
			*value = ctrlVal;
			return 0;
		}
	}

	for (i = 0; i < state->CH_Ctrl_Num ; i++) {

		if (controlNum == state->CH_Ctrl[i].Ctrl_Num) {

			ctrlVal = 0;
			for (k = 0; k < state->CH_Ctrl[i].size; k++)
				ctrlVal += state->CH_Ctrl[i].val[k] * (1 << k);
			*value = ctrlVal;
			return 0;

		}
	}

#ifdef _MXL_INTERNAL
	for (i = 0; i < state->MXL_Ctrl_Num ; i++) {

		if (controlNum == state->MXL_Ctrl[i].Ctrl_Num) {

			ctrlVal = 0;
			for (k = 0; k < state->MXL_Ctrl[i].size; k++)
				ctrlVal += state->MXL_Ctrl[i].val[k] * (1<<k);
			*value = ctrlVal;
			return 0;

		}
	}
#endif
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
          unsigned long controlNum = 100;
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl = (struct TYPE_4__ *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fe__i0__tuner_priv_Init_Ctrl0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->Init_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_Init_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 1;
          long * value = (long *) malloc(_len_value0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = MXL_ControlRead(fe,controlNum,value);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long controlNum = 255;
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl = (struct TYPE_4__ *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fe__i0__tuner_priv_Init_Ctrl0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->Init_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_Init_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 65025;
          long * value = (long *) malloc(_len_value0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = MXL_ControlRead(fe,controlNum,value);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long controlNum = 10;
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl = (struct TYPE_4__ *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->CH_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_CH_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->CH_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_CH_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_CH_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->CH_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fe__i0__tuner_priv_Init_Ctrl0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl = (struct TYPE_3__ *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->Ctrl_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].tuner_priv->Init_Ctrl->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fe__i0__tuner_priv_Init_Ctrl_val0 = 1;
          fe[_i0].tuner_priv->Init_Ctrl->val = (int *) malloc(_len_fe__i0__tuner_priv_Init_Ctrl_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv_Init_Ctrl_val0; _j0++) {
            fe[_i0].tuner_priv->Init_Ctrl->val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 100;
          long * value = (long *) malloc(_len_value0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = MXL_ControlRead(fe,controlNum,value);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

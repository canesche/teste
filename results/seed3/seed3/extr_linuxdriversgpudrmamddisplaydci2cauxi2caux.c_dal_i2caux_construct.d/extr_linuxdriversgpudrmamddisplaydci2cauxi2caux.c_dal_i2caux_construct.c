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
typedef  size_t uint32_t ;
struct i2caux {int aux_timeout_period; int /*<<< orphan*/  default_i2c_sw_speed; int /*<<< orphan*/  default_i2c_hw_speed; int /*<<< orphan*/ * i2c_generic_hw_engine; int /*<<< orphan*/ * i2c_generic_sw_engine; int /*<<< orphan*/ ** aux_engines; int /*<<< orphan*/ ** i2c_hw_engines; int /*<<< orphan*/ ** i2c_sw_engines; struct dc_context* ctx; } ;
struct dc_context {scalar_t__ dce_version; } ;

/* Variables and functions */
 int AUX_TIMEOUT_PERIOD ; 
 scalar_t__ DCE_VERSION_11_2 ; 
 int /*<<< orphan*/  DEFAULT_I2C_HW_SPEED ; 
 int /*<<< orphan*/  DEFAULT_I2C_HW_SPEED_100KHZ ; 
 int /*<<< orphan*/  DEFAULT_I2C_SW_SPEED ; 
 int /*<<< orphan*/  DEFAULT_I2C_SW_SPEED_100KHZ ; 
 size_t GPIO_DDC_LINE_COUNT ; 
 int SW_AUX_TIMEOUT_PERIOD_MULTIPLIER ; 

void dal_i2caux_construct(
	struct i2caux *i2caux,
	struct dc_context *ctx)
{
	uint32_t i = 0;

	i2caux->ctx = ctx;
	do {
		i2caux->i2c_sw_engines[i] = NULL;
		i2caux->i2c_hw_engines[i] = NULL;
		i2caux->aux_engines[i] = NULL;

		++i;
	} while (i < GPIO_DDC_LINE_COUNT);

	i2caux->i2c_generic_sw_engine = NULL;
	i2caux->i2c_generic_hw_engine = NULL;

	i2caux->aux_timeout_period =
		SW_AUX_TIMEOUT_PERIOD_MULTIPLIER * AUX_TIMEOUT_PERIOD;

	if (ctx->dce_version >= DCE_VERSION_11_2) {
		i2caux->default_i2c_hw_speed = DEFAULT_I2C_HW_SPEED_100KHZ;
		i2caux->default_i2c_sw_speed = DEFAULT_I2C_SW_SPEED_100KHZ;
	} else {
		i2caux->default_i2c_hw_speed = DEFAULT_I2C_HW_SPEED;
		i2caux->default_i2c_sw_speed = DEFAULT_I2C_SW_SPEED;
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
          int _len_i2caux0 = 1;
          struct i2caux * i2caux = (struct i2caux *) malloc(_len_i2caux0*sizeof(struct i2caux));
          for(int _i0 = 0; _i0 < _len_i2caux0; _i0++) {
            i2caux[_i0].aux_timeout_period = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_sw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_hw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2caux__i0__i2c_generic_hw_engine0 = 1;
          i2caux[_i0].i2c_generic_hw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_hw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_hw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_hw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__i2c_generic_sw_engine0 = 1;
          i2caux[_i0].i2c_generic_sw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_sw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_sw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_sw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__aux_engines0 = 1;
          i2caux[_i0].aux_engines = (int **) malloc(_len_i2caux__i0__aux_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__aux_engines0; _j0++) {
            int _len_i2caux__i0__aux_engines1 = 1;
            i2caux[_i0].aux_engines[_j0] = (int *) malloc(_len_i2caux__i0__aux_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__aux_engines1; _j1++) {
              i2caux[_i0].aux_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_hw_engines0 = 1;
          i2caux[_i0].i2c_hw_engines = (int **) malloc(_len_i2caux__i0__i2c_hw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_hw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_hw_engines1 = 1;
            i2caux[_i0].i2c_hw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_hw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_hw_engines1; _j1++) {
              i2caux[_i0].i2c_hw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_sw_engines0 = 1;
          i2caux[_i0].i2c_sw_engines = (int **) malloc(_len_i2caux__i0__i2c_sw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_sw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_sw_engines1 = 1;
            i2caux[_i0].i2c_sw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_sw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_sw_engines1; _j1++) {
              i2caux[_i0].i2c_sw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__ctx0 = 1;
          i2caux[_i0].ctx = (struct dc_context *) malloc(_len_i2caux__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__ctx0; _j0++) {
            i2caux[_i0].ctx->dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_i2caux_construct(i2caux,ctx);
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_hw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_sw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].aux_engines));
        free(i2caux[_aux].aux_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_hw_engines));
        free(i2caux[_aux].i2c_hw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_sw_engines));
        free(i2caux[_aux].i2c_sw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].ctx);
          }
          free(i2caux);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_i2caux0 = 65025;
          struct i2caux * i2caux = (struct i2caux *) malloc(_len_i2caux0*sizeof(struct i2caux));
          for(int _i0 = 0; _i0 < _len_i2caux0; _i0++) {
            i2caux[_i0].aux_timeout_period = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_sw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_hw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2caux__i0__i2c_generic_hw_engine0 = 1;
          i2caux[_i0].i2c_generic_hw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_hw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_hw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_hw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__i2c_generic_sw_engine0 = 1;
          i2caux[_i0].i2c_generic_sw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_sw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_sw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_sw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__aux_engines0 = 1;
          i2caux[_i0].aux_engines = (int **) malloc(_len_i2caux__i0__aux_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__aux_engines0; _j0++) {
            int _len_i2caux__i0__aux_engines1 = 1;
            i2caux[_i0].aux_engines[_j0] = (int *) malloc(_len_i2caux__i0__aux_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__aux_engines1; _j1++) {
              i2caux[_i0].aux_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_hw_engines0 = 1;
          i2caux[_i0].i2c_hw_engines = (int **) malloc(_len_i2caux__i0__i2c_hw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_hw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_hw_engines1 = 1;
            i2caux[_i0].i2c_hw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_hw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_hw_engines1; _j1++) {
              i2caux[_i0].i2c_hw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_sw_engines0 = 1;
          i2caux[_i0].i2c_sw_engines = (int **) malloc(_len_i2caux__i0__i2c_sw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_sw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_sw_engines1 = 1;
            i2caux[_i0].i2c_sw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_sw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_sw_engines1; _j1++) {
              i2caux[_i0].i2c_sw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__ctx0 = 1;
          i2caux[_i0].ctx = (struct dc_context *) malloc(_len_i2caux__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__ctx0; _j0++) {
            i2caux[_i0].ctx->dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_i2caux_construct(i2caux,ctx);
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_hw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_sw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].aux_engines));
        free(i2caux[_aux].aux_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_hw_engines));
        free(i2caux[_aux].i2c_hw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_sw_engines));
        free(i2caux[_aux].i2c_sw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].ctx);
          }
          free(i2caux);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_i2caux0 = 100;
          struct i2caux * i2caux = (struct i2caux *) malloc(_len_i2caux0*sizeof(struct i2caux));
          for(int _i0 = 0; _i0 < _len_i2caux0; _i0++) {
            i2caux[_i0].aux_timeout_period = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_sw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        i2caux[_i0].default_i2c_hw_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2caux__i0__i2c_generic_hw_engine0 = 1;
          i2caux[_i0].i2c_generic_hw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_hw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_hw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_hw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__i2c_generic_sw_engine0 = 1;
          i2caux[_i0].i2c_generic_sw_engine = (int *) malloc(_len_i2caux__i0__i2c_generic_sw_engine0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_generic_sw_engine0; _j0++) {
            i2caux[_i0].i2c_generic_sw_engine[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_i2caux__i0__aux_engines0 = 1;
          i2caux[_i0].aux_engines = (int **) malloc(_len_i2caux__i0__aux_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__aux_engines0; _j0++) {
            int _len_i2caux__i0__aux_engines1 = 1;
            i2caux[_i0].aux_engines[_j0] = (int *) malloc(_len_i2caux__i0__aux_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__aux_engines1; _j1++) {
              i2caux[_i0].aux_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_hw_engines0 = 1;
          i2caux[_i0].i2c_hw_engines = (int **) malloc(_len_i2caux__i0__i2c_hw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_hw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_hw_engines1 = 1;
            i2caux[_i0].i2c_hw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_hw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_hw_engines1; _j1++) {
              i2caux[_i0].i2c_hw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__i2c_sw_engines0 = 1;
          i2caux[_i0].i2c_sw_engines = (int **) malloc(_len_i2caux__i0__i2c_sw_engines0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__i2c_sw_engines0; _j0++) {
            int _len_i2caux__i0__i2c_sw_engines1 = 1;
            i2caux[_i0].i2c_sw_engines[_j0] = (int *) malloc(_len_i2caux__i0__i2c_sw_engines1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_i2caux__i0__i2c_sw_engines1; _j1++) {
              i2caux[_i0].i2c_sw_engines[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_i2caux__i0__ctx0 = 1;
          i2caux[_i0].ctx = (struct dc_context *) malloc(_len_i2caux__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_i2caux__i0__ctx0; _j0++) {
            i2caux[_i0].ctx->dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dce_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_i2caux_construct(i2caux,ctx);
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_hw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].i2c_generic_sw_engine);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].aux_engines));
        free(i2caux[_aux].aux_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_hw_engines));
        free(i2caux[_aux].i2c_hw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(*(i2caux[_aux].i2c_sw_engines));
        free(i2caux[_aux].i2c_sw_engines);
          }
          for(int _aux = 0; _aux < _len_i2caux0; _aux++) {
          free(i2caux[_aux].ctx);
          }
          free(i2caux);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

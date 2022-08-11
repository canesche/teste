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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {float* center; float* min; float* saturate; float* dead_band; float* max; } ;
typedef  TYPE_1__ SFG_Joystick ;

/* Variables and functions */

__attribute__((used)) static float fghJoystickFudgeAxis( SFG_Joystick* joy, float value, int axis )
{
    if( value < joy->center[ axis ] )
    {
        float xx = ( value - joy->center[ axis ] ) / ( joy->center[ axis ] -
                                                       joy->min[ axis ] );

        if( xx < -joy->saturate[ axis ] )
            return -1.0f;

        if( xx > -joy->dead_band [ axis ] )
            return 0.0f;

        xx = ( xx + joy->dead_band[ axis ] ) / ( joy->saturate[ axis ] -
                                                 joy->dead_band[ axis ] );

        return ( xx < -1.0f ) ? -1.0f : xx;
    }
    else
    {
        float xx = ( value - joy->center [ axis ] ) / ( joy->max[ axis ] -
                                                        joy->center[ axis ] );

        if( xx > joy->saturate[ axis ] )
            return 1.0f;

        if( xx < joy->dead_band[ axis ] )
            return 0.0f;

        xx = ( xx - joy->dead_band[ axis ] ) / ( joy->saturate[ axis ] -
                                                 joy->dead_band[ axis ] );

        return ( xx > 1.0f ) ? 1.0f : xx;
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
          float value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 100;
          int _len_joy0 = 1;
          struct TYPE_3__ * joy = (struct TYPE_3__ *) malloc(_len_joy0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_joy0; _i0++) {
              int _len_joy__i0__center0 = 1;
          joy[_i0].center = (float *) malloc(_len_joy__i0__center0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__center0; _j0++) {
            joy[_i0].center[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__min0 = 1;
          joy[_i0].min = (float *) malloc(_len_joy__i0__min0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__min0; _j0++) {
            joy[_i0].min[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__saturate0 = 1;
          joy[_i0].saturate = (float *) malloc(_len_joy__i0__saturate0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__saturate0; _j0++) {
            joy[_i0].saturate[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__dead_band0 = 1;
          joy[_i0].dead_band = (float *) malloc(_len_joy__i0__dead_band0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__dead_band0; _j0++) {
            joy[_i0].dead_band[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__max0 = 1;
          joy[_i0].max = (float *) malloc(_len_joy__i0__max0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__max0; _j0++) {
            joy[_i0].max[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          float benchRet = fghJoystickFudgeAxis(joy,value,axis);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].center);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].min);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].saturate);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].dead_band);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].max);
          }
          free(joy);
        
        break;
    }
    // big-arr
    case 1:
    {
          float value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 255;
          int _len_joy0 = 65025;
          struct TYPE_3__ * joy = (struct TYPE_3__ *) malloc(_len_joy0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_joy0; _i0++) {
              int _len_joy__i0__center0 = 1;
          joy[_i0].center = (float *) malloc(_len_joy__i0__center0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__center0; _j0++) {
            joy[_i0].center[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__min0 = 1;
          joy[_i0].min = (float *) malloc(_len_joy__i0__min0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__min0; _j0++) {
            joy[_i0].min[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__saturate0 = 1;
          joy[_i0].saturate = (float *) malloc(_len_joy__i0__saturate0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__saturate0; _j0++) {
            joy[_i0].saturate[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__dead_band0 = 1;
          joy[_i0].dead_band = (float *) malloc(_len_joy__i0__dead_band0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__dead_band0; _j0++) {
            joy[_i0].dead_band[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__max0 = 1;
          joy[_i0].max = (float *) malloc(_len_joy__i0__max0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__max0; _j0++) {
            joy[_i0].max[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          float benchRet = fghJoystickFudgeAxis(joy,value,axis);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].center);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].min);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].saturate);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].dead_band);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].max);
          }
          free(joy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int axis = 10;
          int _len_joy0 = 100;
          struct TYPE_3__ * joy = (struct TYPE_3__ *) malloc(_len_joy0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_joy0; _i0++) {
              int _len_joy__i0__center0 = 1;
          joy[_i0].center = (float *) malloc(_len_joy__i0__center0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__center0; _j0++) {
            joy[_i0].center[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__min0 = 1;
          joy[_i0].min = (float *) malloc(_len_joy__i0__min0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__min0; _j0++) {
            joy[_i0].min[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__saturate0 = 1;
          joy[_i0].saturate = (float *) malloc(_len_joy__i0__saturate0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__saturate0; _j0++) {
            joy[_i0].saturate[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__dead_band0 = 1;
          joy[_i0].dead_band = (float *) malloc(_len_joy__i0__dead_band0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__dead_band0; _j0++) {
            joy[_i0].dead_band[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_joy__i0__max0 = 1;
          joy[_i0].max = (float *) malloc(_len_joy__i0__max0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_joy__i0__max0; _j0++) {
            joy[_i0].max[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          float benchRet = fghJoystickFudgeAxis(joy,value,axis);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].center);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].min);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].saturate);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].dead_band);
          }
          for(int _aux = 0; _aux < _len_joy0; _aux++) {
          free(joy[_aux].max);
          }
          free(joy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

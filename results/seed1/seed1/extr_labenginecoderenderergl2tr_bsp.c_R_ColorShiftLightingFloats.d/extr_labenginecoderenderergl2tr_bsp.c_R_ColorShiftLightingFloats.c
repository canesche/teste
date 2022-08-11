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
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int overbrightBits; } ;

/* Variables and functions */
 TYPE_2__* r_mapOverBrightBits ; 
 TYPE_1__ tr ; 

__attribute__((used)) static void R_ColorShiftLightingFloats(float in[4], float out[4])
{
	float	r, g, b;
	float   scale = (1 << (r_mapOverBrightBits->integer - tr.overbrightBits)) / 255.0f;

	r = in[0] * scale;
	g = in[1] * scale;
	b = in[2] * scale;

	// normalize by color instead of saturating to white
	if ( r > 1 || g > 1 || b > 1 ) {
		float	max;

		max = r > g ? r : g;
		max = max > b ? max : b;
		r = r / max;
		g = g / max;
		b = b / max;
	}

	out[0] = r;
	out[1] = g;
	out[2] = b;
	out[3] = in[3];
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
          int _len_in0 = 4;
          float * in = (float *) malloc(_len_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out0 = 4;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          R_ColorShiftLightingFloats(in,out);
          free(in);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in0 = 65025;
          float * in = (float *) malloc(_len_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out0 = 65025;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          R_ColorShiftLightingFloats(in,out);
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in0 = 100;
          float * in = (float *) malloc(_len_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_out0 = 100;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          R_ColorShiftLightingFloats(in,out);
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

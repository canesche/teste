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
struct adpcm_state {int sample; int index; } ;

/* Variables and functions */
 scalar_t__* indexTable ; 
 int* stepsizeTable ; 

void S_AdpcmDecode( const char indata[], short *outdata, int len, struct adpcm_state *state ) {
    signed char *inp;		/* Input buffer pointer */
    int outp;			/* output buffer pointer */
    int sign;			/* Current adpcm sign bit */
    int delta;			/* Current adpcm output value */
    int step;			/* Stepsize */
    int valpred;		/* Predicted value */
    int vpdiff;			/* Current change to valpred */
    int index;			/* Current step change index */
    int inputbuffer;		/* place to keep next 4-bit value */
    int bufferstep;		/* toggle between inputbuffer/input */

    outp = 0;
    inp = (signed char *)indata;

    valpred = state->sample;
    index = state->index;
    step = stepsizeTable[index];

    bufferstep = 0;
    inputbuffer = 0;	// quiet a compiler warning
    for ( ; len > 0 ; len-- ) {
		
		/* Step 1 - get the delta value */
		if ( bufferstep ) {
			delta = inputbuffer & 0xf;
		} else {
			inputbuffer = *inp++;
			delta = (inputbuffer >> 4) & 0xf;
		}
		bufferstep = !bufferstep;

		/* Step 2 - Find new index value (for later) */
		index += indexTable[delta];
		if ( index < 0 ) index = 0;
		if ( index > 88 ) index = 88;

		/* Step 3 - Separate sign and magnitude */
		sign = delta & 8;
		delta = delta & 7;

		/* Step 4 - Compute difference and new predicted value */
		/*
		** Computes 'vpdiff = (delta+0.5)*step/4', but see comment
		** in adpcm_coder.
		*/
		vpdiff = step >> 3;
		if ( delta & 4 ) vpdiff += step;
		if ( delta & 2 ) vpdiff += step>>1;
		if ( delta & 1 ) vpdiff += step>>2;

		if ( sign )
		  valpred -= vpdiff;
		else
		  valpred += vpdiff;

		/* Step 5 - clamp output value */
		if ( valpred > 32767 )
		  valpred = 32767;
		else if ( valpred < -32768 )
		  valpred = -32768;

		/* Step 6 - Update step value */
		step = stepsizeTable[index];

		/* Step 7 - Output value */
		outdata[outp] = valpred;
		outp++;
    }

    state->sample = valpred;
    state->index = index;
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
          int len = 100;
          int _len_indata0 = 1;
          char const* indata = (char const*) malloc(_len_indata0*sizeof(char const));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 1;
          short * outdata = (short *) malloc(_len_outdata0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct adpcm_state * state = (struct adpcm_state *) malloc(_len_state0*sizeof(struct adpcm_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].sample = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          S_AdpcmDecode(indata,outdata,len,state);
          free(indata);
          free(outdata);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_indata0 = 65025;
          char const* indata = (char const*) malloc(_len_indata0*sizeof(char const));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 65025;
          short * outdata = (short *) malloc(_len_outdata0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          struct adpcm_state * state = (struct adpcm_state *) malloc(_len_state0*sizeof(struct adpcm_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].sample = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          S_AdpcmDecode(indata,outdata,len,state);
          free(indata);
          free(outdata);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_indata0 = 100;
          char const* indata = (char const*) malloc(_len_indata0*sizeof(char const));
          for(int _i0 = 0; _i0 < _len_indata0; _i0++) {
            indata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdata0 = 100;
          short * outdata = (short *) malloc(_len_outdata0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_outdata0; _i0++) {
            outdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          struct adpcm_state * state = (struct adpcm_state *) malloc(_len_state0*sizeof(struct adpcm_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].sample = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          S_AdpcmDecode(indata,outdata,len,state);
          free(indata);
          free(outdata);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

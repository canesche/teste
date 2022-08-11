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
typedef  int int16_t ;

/* Variables and functions */
 int DECISION_INTERMEDIATE ; 
 int DECISION_NOISE ; 
 int DECISION_VOICE ; 

__attribute__((used)) static int16_t g729d_voice_decision(int onset, int prev_voice_decision, const int16_t* past_gain_pitch)
{
    int i, low_gain_pitch_cnt, voice_decision;

    if (past_gain_pitch[0] >= 14745) {       // 0.9
        voice_decision = DECISION_VOICE;
    } else if (past_gain_pitch[0] <= 9830) { // 0.6
        voice_decision = DECISION_NOISE;
    } else {
        voice_decision = DECISION_INTERMEDIATE;
    }

    for (i = 0, low_gain_pitch_cnt = 0; i < 6; i++)
        if (past_gain_pitch[i] < 9830)
            low_gain_pitch_cnt++;

    if (low_gain_pitch_cnt > 2 && !onset)
        voice_decision = DECISION_NOISE;

    if (!onset && voice_decision > prev_voice_decision + 1)
        voice_decision--;

    if (onset && voice_decision < DECISION_VOICE)
        voice_decision++;

    return voice_decision;
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
          int onset = 100;
          int prev_voice_decision = 100;
          int _len_past_gain_pitch0 = 1;
          const int * past_gain_pitch = (const int *) malloc(_len_past_gain_pitch0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_past_gain_pitch0; _i0++) {
            past_gain_pitch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = g729d_voice_decision(onset,prev_voice_decision,past_gain_pitch);
          printf("%d\n", benchRet); 
          free(past_gain_pitch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int onset = 255;
          int prev_voice_decision = 255;
          int _len_past_gain_pitch0 = 65025;
          const int * past_gain_pitch = (const int *) malloc(_len_past_gain_pitch0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_past_gain_pitch0; _i0++) {
            past_gain_pitch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = g729d_voice_decision(onset,prev_voice_decision,past_gain_pitch);
          printf("%d\n", benchRet); 
          free(past_gain_pitch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int onset = 10;
          int prev_voice_decision = 10;
          int _len_past_gain_pitch0 = 100;
          const int * past_gain_pitch = (const int *) malloc(_len_past_gain_pitch0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_past_gain_pitch0; _i0++) {
            past_gain_pitch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = g729d_voice_decision(onset,prev_voice_decision,past_gain_pitch);
          printf("%d\n", benchRet); 
          free(past_gain_pitch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

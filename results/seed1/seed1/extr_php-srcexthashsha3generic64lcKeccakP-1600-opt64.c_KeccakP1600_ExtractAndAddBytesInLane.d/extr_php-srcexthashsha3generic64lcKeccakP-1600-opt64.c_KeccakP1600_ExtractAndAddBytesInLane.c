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
typedef  unsigned char const UINT8 ;
typedef  int /*<<< orphan*/  UINT64 ;

/* Variables and functions */

void KeccakP1600_ExtractAndAddBytesInLane(const void *state, unsigned int lanePosition, const unsigned char *input, unsigned char *output, unsigned int offset, unsigned int length)
{
    UINT64 lane = ((UINT64*)state)[lanePosition];
#ifdef KeccakP1600_useLaneComplementing
    if ((lanePosition == 1) || (lanePosition == 2) || (lanePosition == 8) || (lanePosition == 12) || (lanePosition == 17) || (lanePosition == 20))
        lane = ~lane;
#endif
#if (PLATFORM_BYTE_ORDER == IS_LITTLE_ENDIAN)
    {
        unsigned int i;
        UINT64 lane1[1];
        lane1[0] = lane;
        for(i=0; i<length; i++)
            output[i] = input[i] ^ ((UINT8*)lane1)[offset+i];
    }
#else
    unsigned int i;
    lane >>= offset*8;
    for(i=0; i<length; i++) {
        output[i] = input[i] ^ (lane & 0xFF);
        lane >>= 8;
    }
#endif
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
          unsigned int lanePosition = 100;
          unsigned int offset = 100;
          unsigned int length = 100;
          int _len_state0 = 1;
          const void * state = (const void *) malloc(_len_state0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = 0;
          }
          int _len_input0 = 1;
          const unsigned char * input = (const unsigned char *) malloc(_len_input0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 1;
          unsigned char * output = (unsigned char *) malloc(_len_output0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          KeccakP1600_ExtractAndAddBytesInLane(state,lanePosition,input,output,offset,length);
          free(state);
          free(input);
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int lanePosition = 255;
          unsigned int offset = 255;
          unsigned int length = 255;
          int _len_state0 = 65025;
          const void * state = (const void *) malloc(_len_state0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = 0;
          }
          int _len_input0 = 65025;
          const unsigned char * input = (const unsigned char *) malloc(_len_input0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 65025;
          unsigned char * output = (unsigned char *) malloc(_len_output0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          KeccakP1600_ExtractAndAddBytesInLane(state,lanePosition,input,output,offset,length);
          free(state);
          free(input);
          free(output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int lanePosition = 10;
          unsigned int offset = 10;
          unsigned int length = 10;
          int _len_state0 = 100;
          const void * state = (const void *) malloc(_len_state0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = 0;
          }
          int _len_input0 = 100;
          const unsigned char * input = (const unsigned char *) malloc(_len_input0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output0 = 100;
          unsigned char * output = (unsigned char *) malloc(_len_output0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          KeccakP1600_ExtractAndAddBytesInLane(state,lanePosition,input,output,offset,length);
          free(state);
          free(input);
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

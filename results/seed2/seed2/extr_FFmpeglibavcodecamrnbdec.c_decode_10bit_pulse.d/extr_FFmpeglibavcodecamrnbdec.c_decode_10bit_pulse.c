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
typedef  int uint8_t ;

/* Variables and functions */
 int** base_five_table ; 

__attribute__((used)) static void decode_10bit_pulse(int code, int pulse_position[8],
                               int i1, int i2, int i3)
{
    // coded using 7+3 bits with the 3 LSBs being, individually, the LSB of 1 of
    // the 3 pulses and the upper 7 bits being coded in base 5
    const uint8_t *positions = base_five_table[code >> 3];
    pulse_position[i1] = (positions[2] << 1) + ( code       & 1);
    pulse_position[i2] = (positions[1] << 1) + ((code >> 1) & 1);
    pulse_position[i3] = (positions[0] << 1) + ((code >> 2) & 1);
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
          int code = 100;
          int i1 = 100;
          int i2 = 100;
          int i3 = 100;
          int _len_pulse_position0 = 8;
          int * pulse_position = (int *) malloc(_len_pulse_position0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pulse_position0; _i0++) {
            pulse_position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_10bit_pulse(code,pulse_position,i1,i2,i3);
          free(pulse_position);
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          int i1 = 255;
          int i2 = 255;
          int i3 = 255;
          int _len_pulse_position0 = 65025;
          int * pulse_position = (int *) malloc(_len_pulse_position0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pulse_position0; _i0++) {
            pulse_position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_10bit_pulse(code,pulse_position,i1,i2,i3);
          free(pulse_position);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          int i1 = 10;
          int i2 = 10;
          int i3 = 10;
          int _len_pulse_position0 = 100;
          int * pulse_position = (int *) malloc(_len_pulse_position0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pulse_position0; _i0++) {
            pulse_position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_10bit_pulse(code,pulse_position,i1,i2,i3);
          free(pulse_position);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

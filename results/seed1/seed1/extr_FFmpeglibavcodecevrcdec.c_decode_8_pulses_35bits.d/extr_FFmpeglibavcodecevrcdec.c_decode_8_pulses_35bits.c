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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static void decode_8_pulses_35bits(const uint16_t *fixed_index, float *cod)
{
    int i, pos1, pos2, offset;

    offset = (fixed_index[3] >> 9) & 3;

    for (i = 0; i < 3; i++) {
        pos1 = ((fixed_index[i] & 0x7f) / 11) * 5 + ((i + offset) % 5);
        pos2 = ((fixed_index[i] & 0x7f) % 11) * 5 + ((i + offset) % 5);

        cod[pos1] = (fixed_index[i] & 0x80) ? -1.0 : 1.0;

        if (pos2 < pos1)
            cod[pos2]  = -cod[pos1];
        else
            cod[pos2] +=  cod[pos1];
    }

    pos1 = ((fixed_index[3] & 0x7f) / 11) * 5 + ((3 + offset) % 5);
    pos2 = ((fixed_index[3] & 0x7f) % 11) * 5 + ((4 + offset) % 5);

    cod[pos1] = (fixed_index[3] & 0x100) ? -1.0 : 1.0;
    cod[pos2] = (fixed_index[3] & 0x80 ) ? -1.0 : 1.0;
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
          int _len_fixed_index0 = 1;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cod0 = 1;
          float * cod = (float *) malloc(_len_cod0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_cod0; _i0++) {
            cod[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_8_pulses_35bits(fixed_index,cod);
          free(fixed_index);
          free(cod);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fixed_index0 = 65025;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cod0 = 65025;
          float * cod = (float *) malloc(_len_cod0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_cod0; _i0++) {
            cod[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_8_pulses_35bits(fixed_index,cod);
          free(fixed_index);
          free(cod);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fixed_index0 = 100;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cod0 = 100;
          float * cod = (float *) malloc(_len_cod0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_cod0; _i0++) {
            cod[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_8_pulses_35bits(fixed_index,cod);
          free(fixed_index);
          free(cod);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

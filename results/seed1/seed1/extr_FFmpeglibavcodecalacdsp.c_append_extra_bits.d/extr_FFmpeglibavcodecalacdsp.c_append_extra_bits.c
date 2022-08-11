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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void append_extra_bits(int32_t *buffer[2], int32_t *extra_bits_buffer[2],
                              int extra_bits, int channels, int nb_samples)
{
    int i, ch;

    for (ch = 0; ch < channels; ch++)
        for (i = 0; i < nb_samples; i++)
            buffer[ch][i] = (buffer[ch][i] << extra_bits) | extra_bits_buffer[ch][i];
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
          int extra_bits = 100;
          int channels = 100;
          int nb_samples = 100;
          int _len_buffer0 = 2;
          int ** buffer = (int **) malloc(_len_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (int *) malloc(_len_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_extra_bits_buffer0 = 2;
          int ** extra_bits_buffer = (int **) malloc(_len_extra_bits_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_extra_bits_buffer0; _i0++) {
            int _len_extra_bits_buffer1 = 1;
            extra_bits_buffer[_i0] = (int *) malloc(_len_extra_bits_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_extra_bits_buffer1; _i1++) {
              extra_bits_buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          append_extra_bits(buffer,extra_bits_buffer,extra_bits,channels,nb_samples);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_extra_bits_buffer0; i1++) {
            int _len_extra_bits_buffer1 = 1;
              free(extra_bits_buffer[i1]);
          }
          free(extra_bits_buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int extra_bits = 255;
          int channels = 255;
          int nb_samples = 255;
          int _len_buffer0 = 65025;
          int ** buffer = (int **) malloc(_len_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (int *) malloc(_len_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_extra_bits_buffer0 = 65025;
          int ** extra_bits_buffer = (int **) malloc(_len_extra_bits_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_extra_bits_buffer0; _i0++) {
            int _len_extra_bits_buffer1 = 1;
            extra_bits_buffer[_i0] = (int *) malloc(_len_extra_bits_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_extra_bits_buffer1; _i1++) {
              extra_bits_buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          append_extra_bits(buffer,extra_bits_buffer,extra_bits,channels,nb_samples);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_extra_bits_buffer0; i1++) {
            int _len_extra_bits_buffer1 = 1;
              free(extra_bits_buffer[i1]);
          }
          free(extra_bits_buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int extra_bits = 10;
          int channels = 10;
          int nb_samples = 10;
          int _len_buffer0 = 100;
          int ** buffer = (int **) malloc(_len_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (int *) malloc(_len_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_extra_bits_buffer0 = 100;
          int ** extra_bits_buffer = (int **) malloc(_len_extra_bits_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_extra_bits_buffer0; _i0++) {
            int _len_extra_bits_buffer1 = 1;
            extra_bits_buffer[_i0] = (int *) malloc(_len_extra_bits_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_extra_bits_buffer1; _i1++) {
              extra_bits_buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          append_extra_bits(buffer,extra_bits_buffer,extra_bits,channels,nb_samples);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
            int _len_buffer1 = 1;
              free(buffer[i1]);
          }
          free(buffer);
          for(int i1 = 0; i1 < _len_extra_bits_buffer0; i1++) {
            int _len_extra_bits_buffer1 = 1;
              free(extra_bits_buffer[i1]);
          }
          free(extra_bits_buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

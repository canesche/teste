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
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */

__attribute__((used)) static void transpose_perm(int16_t *out, int16_t *in, int num_vect,
                           const uint8_t line_len[2], int length_div)
{
    int i, j;
    int cont = 0;

    for (i = 0; i < num_vect; i++)
        for (j = 0; j < line_len[i >= length_div]; j++)
            out[cont++] = in[j * num_vect + i];
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
          int num_vect = 100;
          int length_div = 100;
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 2;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transpose_perm(out,in,num_vect,line_len,length_div);
          free(out);
          free(in);
          free(line_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_vect = 255;
          int length_div = 255;
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 65025;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transpose_perm(out,in,num_vect,line_len,length_div);
          free(out);
          free(in);
          free(line_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_vect = 10;
          int length_div = 10;
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 100;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          transpose_perm(out,in,num_vect,line_len,length_div);
          free(out);
          free(in);
          free(line_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

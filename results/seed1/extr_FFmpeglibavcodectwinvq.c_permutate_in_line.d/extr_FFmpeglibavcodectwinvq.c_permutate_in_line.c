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
typedef  int int16_t ;
typedef  enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;

/* Variables and functions */
 int TWINVQ_FT_LONG ; 

__attribute__((used)) static void permutate_in_line(int16_t *tab, int num_vect, int num_blocks,
                              int block_size,
                              const uint8_t line_len[2], int length_div,
                              enum TwinVQFrameType ftype)
{
    int i, j;

    for (i = 0; i < line_len[0]; i++) {
        int shift;

        if (num_blocks == 1                                    ||
            (ftype == TWINVQ_FT_LONG && num_vect % num_blocks) ||
            (ftype != TWINVQ_FT_LONG && num_vect & 1)          ||
            i == line_len[1]) {
            shift = 0;
        } else if (ftype == TWINVQ_FT_LONG) {
            shift = i;
        } else
            shift = i * i;

        for (j = 0; j < num_vect && (j + num_vect * i < block_size * num_blocks); j++)
            tab[i * num_vect + j] = i * num_vect + (j + shift) % num_vect;
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
          int num_vect = 100;
          int num_blocks = 100;
          int block_size = 100;
          int length_div = 100;
          enum TwinVQFrameType ftype = 0;
          int _len_tab0 = 1;
          int * tab = (int *) malloc(_len_tab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 2;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permutate_in_line(tab,num_vect,num_blocks,block_size,line_len,length_div,ftype);
          free(tab);
          free(line_len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_vect = 255;
          int num_blocks = 255;
          int block_size = 255;
          int length_div = 255;
          enum TwinVQFrameType ftype = 0;
          int _len_tab0 = 65025;
          int * tab = (int *) malloc(_len_tab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 65025;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permutate_in_line(tab,num_vect,num_blocks,block_size,line_len,length_div,ftype);
          free(tab);
          free(line_len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_vect = 10;
          int num_blocks = 10;
          int block_size = 10;
          int length_div = 10;
          enum TwinVQFrameType ftype = 0;
          int _len_tab0 = 100;
          int * tab = (int *) malloc(_len_tab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tab0; _i0++) {
            tab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len0 = 100;
          int const* line_len = (int const*) malloc(_len_line_len0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permutate_in_line(tab,num_vect,num_blocks,block_size,line_len,length_div,ftype);
          free(tab);
          free(line_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

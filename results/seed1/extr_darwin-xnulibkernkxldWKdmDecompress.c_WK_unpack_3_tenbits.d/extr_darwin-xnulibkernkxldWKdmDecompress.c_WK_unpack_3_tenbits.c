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
typedef  int WK_word ;

/* Variables and functions */
 int LOW_BITS_MASK ; 

__attribute__((used)) static WK_word*
WK_unpack_3_tenbits(WK_word *input_buf,
                    WK_word *input_end,
                    WK_word *output_buf) {

  WK_word *input_next = input_buf;
  WK_word *output_next = output_buf;
  WK_word packing_mask = LOW_BITS_MASK;
  
  /* loop to fetch words of input, splitting each into three
   * words of output with 10 meaningful low bits.  This loop
   * probably ought to be unrolled and maybe coiled
   */
  while (input_next < input_end) {
    WK_word temp = input_next[0];
    
    output_next[0] = temp & packing_mask;
    output_next[1] = (temp >> 10) & packing_mask;
    output_next[2] = temp >> 20;
    
    input_next++;
    output_next += 3;
  }
  
  return output_next;

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
          int _len_input_buf0 = 1;
          int * input_buf = (int *) malloc(_len_input_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_buf0; _i0++) {
            input_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_end0 = 1;
          int * input_end = (int *) malloc(_len_input_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_end0; _i0++) {
            input_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_buf0 = 1;
          int * output_buf = (int *) malloc(_len_output_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output_buf0; _i0++) {
            output_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_unpack_3_tenbits(input_buf,input_end,output_buf);
          printf("%d\n", (*benchRet)); 
          free(input_buf);
          free(input_end);
          free(output_buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_input_buf0 = 65025;
          int * input_buf = (int *) malloc(_len_input_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_buf0; _i0++) {
            input_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_end0 = 65025;
          int * input_end = (int *) malloc(_len_input_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_end0; _i0++) {
            input_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_buf0 = 65025;
          int * output_buf = (int *) malloc(_len_output_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output_buf0; _i0++) {
            output_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_unpack_3_tenbits(input_buf,input_end,output_buf);
          printf("%d\n", (*benchRet)); 
          free(input_buf);
          free(input_end);
          free(output_buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_input_buf0 = 100;
          int * input_buf = (int *) malloc(_len_input_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_buf0; _i0++) {
            input_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input_end0 = 100;
          int * input_end = (int *) malloc(_len_input_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_input_end0; _i0++) {
            input_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_buf0 = 100;
          int * output_buf = (int *) malloc(_len_output_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output_buf0; _i0++) {
            output_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = WK_unpack_3_tenbits(input_buf,input_end,output_buf);
          printf("%d\n", (*benchRet)); 
          free(input_buf);
          free(input_end);
          free(output_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

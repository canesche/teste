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
typedef  int s32 ;
typedef  int limb ;

/* Variables and functions */

__attribute__((used)) static void fproduct(limb *output, const limb *in2, const limb *in) {
  output[0] =       ((limb) ((s32) in2[0])) * ((s32) in[0]);
  output[1] =       ((limb) ((s32) in2[0])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[0]);
  output[2] =  2 *  ((limb) ((s32) in2[1])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[0]);
  output[3] =       ((limb) ((s32) in2[1])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[0]);
  output[4] =       ((limb) ((s32) in2[2])) * ((s32) in[2]) +
               2 * (((limb) ((s32) in2[1])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[1])) +
                    ((limb) ((s32) in2[0])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[0]);
  output[5] =       ((limb) ((s32) in2[2])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[0]);
  output[6] =  2 * (((limb) ((s32) in2[3])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[1])) +
                    ((limb) ((s32) in2[2])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[0]);
  output[7] =       ((limb) ((s32) in2[3])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[0]);
  output[8] =       ((limb) ((s32) in2[4])) * ((s32) in[4]) +
               2 * (((limb) ((s32) in2[3])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[1])) +
                    ((limb) ((s32) in2[2])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[0]);
  output[9] =       ((limb) ((s32) in2[4])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[2]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[1]) +
                    ((limb) ((s32) in2[0])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[0]);
  output[10] = 2 * (((limb) ((s32) in2[5])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[1])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[1])) +
                    ((limb) ((s32) in2[4])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[2]);
  output[11] =      ((limb) ((s32) in2[5])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[4]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[3]) +
                    ((limb) ((s32) in2[2])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[2]);
  output[12] =      ((limb) ((s32) in2[6])) * ((s32) in[6]) +
               2 * (((limb) ((s32) in2[5])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[3])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[3])) +
                    ((limb) ((s32) in2[4])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[4]);
  output[13] =      ((limb) ((s32) in2[6])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[7])) * ((s32) in[6]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[5]) +
                    ((limb) ((s32) in2[4])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[4]);
  output[14] = 2 * (((limb) ((s32) in2[7])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[5])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[5])) +
                    ((limb) ((s32) in2[6])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[6]);
  output[15] =      ((limb) ((s32) in2[7])) * ((s32) in[8]) +
                    ((limb) ((s32) in2[8])) * ((s32) in[7]) +
                    ((limb) ((s32) in2[6])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[6]);
  output[16] =      ((limb) ((s32) in2[8])) * ((s32) in[8]) +
               2 * (((limb) ((s32) in2[7])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[7]));
  output[17] =      ((limb) ((s32) in2[8])) * ((s32) in[9]) +
                    ((limb) ((s32) in2[9])) * ((s32) in[8]);
  output[18] = 2 *  ((limb) ((s32) in2[9])) * ((s32) in[9]);
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
          int _len_output0 = 1;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in20 = 1;
          const int * in2 = (const int *) malloc(_len_in20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fproduct(output,in2,in);
          free(output);
          free(in2);
          free(in);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_output0 = 65025;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in20 = 65025;
          const int * in2 = (const int *) malloc(_len_in20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fproduct(output,in2,in);
          free(output);
          free(in2);
          free(in);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_output0 = 100;
          int * output = (int *) malloc(_len_output0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in20 = 100;
          const int * in2 = (const int *) malloc(_len_in20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fproduct(output,in2,in);
          free(output);
          free(in2);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

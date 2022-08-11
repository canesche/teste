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
typedef  scalar_t__ s32 ;
typedef  scalar_t__ s16 ;

/* Variables and functions */

__attribute__((used)) static void fwht16(const s16 *block, s16 *output_block, int stride, int intra)
{
	/* we'll need more than 8 bits for the transformed coefficients */
	s32 workspace1[8], workspace2[8];
	const s16 *tmp = block;
	s16 *out = output_block;
	int i;

	for (i = 0; i < 8; i++, tmp += stride, out += 8) {
		/* stage 1 */
		workspace1[0]  = tmp[0] + tmp[1];
		workspace1[1]  = tmp[0] - tmp[1];

		workspace1[2]  = tmp[2] + tmp[3];
		workspace1[3]  = tmp[2] - tmp[3];

		workspace1[4]  = tmp[4] + tmp[5];
		workspace1[5]  = tmp[4] - tmp[5];

		workspace1[6]  = tmp[6] + tmp[7];
		workspace1[7]  = tmp[6] - tmp[7];

		/* stage 2 */
		workspace2[0] = workspace1[0] + workspace1[2];
		workspace2[1] = workspace1[0] - workspace1[2];
		workspace2[2] = workspace1[1] - workspace1[3];
		workspace2[3] = workspace1[1] + workspace1[3];

		workspace2[4] = workspace1[4] + workspace1[6];
		workspace2[5] = workspace1[4] - workspace1[6];
		workspace2[6] = workspace1[5] - workspace1[7];
		workspace2[7] = workspace1[5] + workspace1[7];

		/* stage 3 */
		out[0] = workspace2[0] + workspace2[4];
		out[1] = workspace2[0] - workspace2[4];
		out[2] = workspace2[1] - workspace2[5];
		out[3] = workspace2[1] + workspace2[5];
		out[4] = workspace2[2] + workspace2[6];
		out[5] = workspace2[2] - workspace2[6];
		out[6] = workspace2[3] - workspace2[7];
		out[7] = workspace2[3] + workspace2[7];
	}

	out = output_block;

	for (i = 0; i < 8; i++, out++) {
		/* stage 1 */
		workspace1[0]  = out[0] + out[1*8];
		workspace1[1]  = out[0] - out[1*8];

		workspace1[2]  = out[2*8] + out[3*8];
		workspace1[3]  = out[2*8] - out[3*8];

		workspace1[4]  = out[4*8] + out[5*8];
		workspace1[5]  = out[4*8] - out[5*8];

		workspace1[6]  = out[6*8] + out[7*8];
		workspace1[7]  = out[6*8] - out[7*8];

		/* stage 2 */
		workspace2[0] = workspace1[0] + workspace1[2];
		workspace2[1] = workspace1[0] - workspace1[2];
		workspace2[2] = workspace1[1] - workspace1[3];
		workspace2[3] = workspace1[1] + workspace1[3];

		workspace2[4] = workspace1[4] + workspace1[6];
		workspace2[5] = workspace1[4] - workspace1[6];
		workspace2[6] = workspace1[5] - workspace1[7];
		workspace2[7] = workspace1[5] + workspace1[7];

		/* stage 3 */
		out[0*8] = workspace2[0] + workspace2[4];
		out[1*8] = workspace2[0] - workspace2[4];
		out[2*8] = workspace2[1] - workspace2[5];
		out[3*8] = workspace2[1] + workspace2[5];
		out[4*8] = workspace2[2] + workspace2[6];
		out[5*8] = workspace2[2] - workspace2[6];
		out[6*8] = workspace2[3] - workspace2[7];
		out[7*8] = workspace2[3] + workspace2[7];
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
          int stride = 100;
          int intra = 100;
          int _len_block0 = 1;
          const long * block = (const long *) malloc(_len_block0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_block0 = 1;
          long * output_block = (long *) malloc(_len_output_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_output_block0; _i0++) {
            output_block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fwht16(block,output_block,stride,intra);
          free(block);
          free(output_block);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int intra = 255;
          int _len_block0 = 65025;
          const long * block = (const long *) malloc(_len_block0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_block0 = 65025;
          long * output_block = (long *) malloc(_len_output_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_output_block0; _i0++) {
            output_block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fwht16(block,output_block,stride,intra);
          free(block);
          free(output_block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int intra = 10;
          int _len_block0 = 100;
          const long * block = (const long *) malloc(_len_block0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_output_block0 = 100;
          long * output_block = (long *) malloc(_len_output_block0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_output_block0; _i0++) {
            output_block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fwht16(block,output_block,stride,intra);
          free(block);
          free(output_block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

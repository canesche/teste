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
typedef  int uint32_t ;

/* Variables and functions */
 int** rtmpe8_keys ; 

__attribute__((used)) static void rtmpe8_sig(uint8_t *in, uint8_t *out, int keyid)
{
    unsigned int i, num_rounds = 32;
    uint32_t v0, v1, sum=0, delta=0x9E3779B9;
    uint32_t const *k;

    v0 = in[0] | (in[1] << 8) | (in[2] << 16) | (in[3] << 24);
    v1 = in[4] | (in[5] << 8) | (in[6] << 16) | (in[7] << 24);
    k = rtmpe8_keys[keyid];

    for (i=0; i < num_rounds; i++)
    {
        v0 += (((v1 << 4) ^ (v1 >> 5)) + v1) ^ (sum + k[sum & 3]);
        sum += delta;
        v1 += (((v0 << 4) ^ (v0 >> 5)) + v0) ^ (sum + k[(sum>>11) & 3]);
    }

    out[0] = v0;
    v0 >>= 8;
    out[1] = v0;
    v0 >>= 8;
    out[2] = v0;
    v0 >>= 8;
    out[3] = v0;

    out[4] = v1;
    v1 >>= 8;
    out[5] = v1;
    v1 >>= 8;
    out[6] = v1;
    v1 >>= 8;
    out[7] = v1;
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
          int keyid = 100;
          int _len_in0 = 1;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtmpe8_sig(in,out,keyid);
          free(in);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int keyid = 255;
          int _len_in0 = 65025;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtmpe8_sig(in,out,keyid);
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int keyid = 10;
          int _len_in0 = 100;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtmpe8_sig(in,out,keyid);
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

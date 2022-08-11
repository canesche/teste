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

/* Variables and functions */

__attribute__((used)) static inline void php_hash_string_xor_char(unsigned char *out, const unsigned char *in, const unsigned char xor_with, const size_t length) {
	size_t i;
	for (i=0; i < length; i++) {
		out[i] = in[i] ^ xor_with;
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
          const unsigned char xor_with = 100;
          const unsigned long length = 100;
          int _len_out0 = 1;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_hash_string_xor_char(out,in,xor_with,length);
          free(out);
          free(in);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned char xor_with = 255;
          const unsigned long length = 255;
          int _len_out0 = 65025;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_hash_string_xor_char(out,in,xor_with,length);
          free(out);
          free(in);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned char xor_with = 10;
          const unsigned long length = 10;
          int _len_out0 = 100;
          unsigned char * out = (unsigned char *) malloc(_len_out0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          php_hash_string_xor_char(out,in,xor_with,length);
          free(out);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

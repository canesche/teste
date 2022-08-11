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
typedef  int ut8 ;

/* Variables and functions */
 char* cb64 ; 

__attribute__((used)) static void sdb_b64_encode(const ut8 in[3], char out[4], int len) {
	if (len < 1) {
		return;
	}
	out[0] = cb64[ in[0] >> 2 ];
	out[1] = cb64[ ((in[0] & 0x03) << 4) | ((len>1)?((in[1] & 0xf0) >> 4):0) ];
	out[2] = (len > 1 ? cb64[ ((in[1] & 0x0f) << 2) | (len > 2 ? ((in[2] & 0xc0) >> 6) : 0) ] : '=');
	out[3] = (len > 2 ? cb64[ in[2] & 0x3f ] : '=');
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
          int len = 100;
          int _len_in0 = 3;
          int const* in = (int const*) malloc(_len_in0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 4;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sdb_b64_encode(in,out,len);
          free(in);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_in0 = 65025;
          int const* in = (int const*) malloc(_len_in0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sdb_b64_encode(in,out,len);
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_in0 = 100;
          int const* in = (int const*) malloc(_len_in0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          char * out = (char *) malloc(_len_out0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sdb_b64_encode(in,out,len);
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

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
typedef  size_t ut8 ;

/* Variables and functions */
 size_t* ebcdic_to_ascii ; 

__attribute__((used)) static void from_ebcdic(const ut8 *buf, size_t nbytes, ut8 *out) {
	size_t i;
	for (i = 0; i < nbytes; i++) {
		out[i] = ebcdic_to_ascii[buf[i]];
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
          unsigned long nbytes = 100;
          int _len_buf0 = 1;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          unsigned long * out = (unsigned long *) malloc(_len_out0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          from_ebcdic(buf,nbytes,out);
          free(buf);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long nbytes = 255;
          int _len_buf0 = 65025;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          unsigned long * out = (unsigned long *) malloc(_len_out0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          from_ebcdic(buf,nbytes,out);
          free(buf);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long nbytes = 10;
          int _len_buf0 = 100;
          const unsigned long * buf = (const unsigned long *) malloc(_len_buf0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          unsigned long * out = (unsigned long *) malloc(_len_out0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          from_ebcdic(buf,nbytes,out);
          free(buf);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

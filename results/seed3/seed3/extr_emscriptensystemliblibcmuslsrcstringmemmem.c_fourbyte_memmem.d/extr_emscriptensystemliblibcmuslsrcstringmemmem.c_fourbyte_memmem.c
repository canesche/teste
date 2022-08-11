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
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static char *fourbyte_memmem(const unsigned char *h, size_t k, const unsigned char *n)
{
	uint32_t nw = n[0]<<24 | n[1]<<16 | n[2]<<8 | n[3];
	uint32_t hw = h[0]<<24 | h[1]<<16 | h[2]<<8 | h[3];
	for (h+=3, k-=3; k; k--, hw = hw<<8 | *++h)
		if (hw == nw) return (char *)h-3;
	return 0;
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
          unsigned long k = 100;
          int _len_h0 = 1;
          const unsigned char * h = (const unsigned char *) malloc(_len_h0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 1;
          const unsigned char * n = (const unsigned char *) malloc(_len_n0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = fourbyte_memmem(h,k,n);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(h);
          free(n);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long k = 255;
          int _len_h0 = 65025;
          const unsigned char * h = (const unsigned char *) malloc(_len_h0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 65025;
          const unsigned char * n = (const unsigned char *) malloc(_len_n0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = fourbyte_memmem(h,k,n);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(h);
          free(n);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long k = 10;
          int _len_h0 = 100;
          const unsigned char * h = (const unsigned char *) malloc(_len_h0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 100;
          const unsigned char * n = (const unsigned char *) malloc(_len_n0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = fourbyte_memmem(h,k,n);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(h);
          free(n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

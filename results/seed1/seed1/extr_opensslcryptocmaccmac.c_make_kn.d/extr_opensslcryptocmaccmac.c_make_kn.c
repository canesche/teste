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

__attribute__((used)) static void make_kn(unsigned char *k1, const unsigned char *l, int bl)
{
    int i;
    unsigned char c = l[0], carry = c >> 7, cnext;

    /* Shift block to left, including carry */
    for (i = 0; i < bl - 1; i++, c = cnext)
        k1[i] = (c << 1) | ((cnext = l[i + 1]) >> 7);

    /* If MSB set fixup with R */
    k1[i] = (c << 1) ^ ((0 - carry) & (bl == 16 ? 0x87 : 0x1b));
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
          int bl = 100;
          int _len_k10 = 1;
          unsigned char * k1 = (unsigned char *) malloc(_len_k10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 1;
          const unsigned char * l = (const unsigned char *) malloc(_len_l0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_kn(k1,l,bl);
          free(k1);
          free(l);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bl = 255;
          int _len_k10 = 65025;
          unsigned char * k1 = (unsigned char *) malloc(_len_k10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 65025;
          const unsigned char * l = (const unsigned char *) malloc(_len_l0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_kn(k1,l,bl);
          free(k1);
          free(l);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bl = 10;
          int _len_k10 = 100;
          unsigned char * k1 = (unsigned char *) malloc(_len_k10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 100;
          const unsigned char * l = (const unsigned char *) malloc(_len_l0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          make_kn(k1,l,bl);
          free(k1);
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

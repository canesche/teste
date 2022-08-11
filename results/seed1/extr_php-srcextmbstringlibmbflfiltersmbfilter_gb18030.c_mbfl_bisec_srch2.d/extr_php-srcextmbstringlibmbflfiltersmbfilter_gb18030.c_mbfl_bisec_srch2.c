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

int
mbfl_bisec_srch2(int w, const unsigned short tbl[], int n)
{
	int k, k1 = 0, k2 = n;

	if (w == tbl[0]) {
		return 0;
	}

	while (k2 - k1 > 1) {
		k = (k1 + k2) >> 1;
		if (w < tbl[k]) {
			k2 = k;
		} else if (w > tbl[k]) {
			k1 = k;
		} else {
			return k;
		}
	}
	return -1;
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
          int w = 100;
          int n = 100;
          int _len_tbl0 = 1;
          unsigned short const* tbl = (unsigned short const*) malloc(_len_tbl0*sizeof(unsigned short const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfl_bisec_srch2(w,tbl,n);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int w = 255;
          int n = 255;
          int _len_tbl0 = 65025;
          unsigned short const* tbl = (unsigned short const*) malloc(_len_tbl0*sizeof(unsigned short const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfl_bisec_srch2(w,tbl,n);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int w = 10;
          int n = 10;
          int _len_tbl0 = 100;
          unsigned short const* tbl = (unsigned short const*) malloc(_len_tbl0*sizeof(unsigned short const));
          for(int _i0 = 0; _i0 < _len_tbl0; _i0++) {
            tbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfl_bisec_srch2(w,tbl,n);
          printf("%d\n", benchRet); 
          free(tbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

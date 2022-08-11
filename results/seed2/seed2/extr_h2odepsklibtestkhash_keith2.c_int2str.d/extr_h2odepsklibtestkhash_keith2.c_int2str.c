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

inline void int2str(int c, int base, char *ret)
{
	const char *tab = "0123456789abcdef";
	if (c == 0) ret[0] = '0', ret[1] = 0;
	else {
		int l, x, y;
		char buf[16];
		for (l = 0, x = c < 0? -c : c; x > 0; x /= base) buf[l++] = tab[x%base];
		if (c < 0) buf[l++] = '-';
		for (x = l - 1, y = 0; x >= 0; --x) ret[y++] = buf[x];
		ret[y] = 0;
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
          int c = 100;
          int base = 100;
          int _len_ret0 = 1;
          char * ret = (char *) malloc(_len_ret0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int2str(c,base,ret);
          free(ret);
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int base = 255;
          int _len_ret0 = 65025;
          char * ret = (char *) malloc(_len_ret0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int2str(c,base,ret);
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int base = 10;
          int _len_ret0 = 100;
          char * ret = (char *) malloc(_len_ret0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int2str(c,base,ret);
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

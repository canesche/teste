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
struct sha512 {int* h; scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static void sha512_init(struct sha512 *s)
{
	s->len = 0;
	s->h[0] = 0x6a09e667f3bcc908ULL;
	s->h[1] = 0xbb67ae8584caa73bULL;
	s->h[2] = 0x3c6ef372fe94f82bULL;
	s->h[3] = 0xa54ff53a5f1d36f1ULL;
	s->h[4] = 0x510e527fade682d1ULL;
	s->h[5] = 0x9b05688c2b3e6c1fULL;
	s->h[6] = 0x1f83d9abfb41bd6bULL;
	s->h[7] = 0x5be0cd19137e2179ULL;
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
          int _len_s0 = 1;
          struct sha512 * s = (struct sha512 *) malloc(_len_s0*sizeof(struct sha512));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__h0 = 1;
          s[_i0].h = (int *) malloc(_len_s__i0__h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__h0; _j0++) {
            s[_i0].h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha512_init(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].h);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct sha512 * s = (struct sha512 *) malloc(_len_s0*sizeof(struct sha512));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__h0 = 1;
          s[_i0].h = (int *) malloc(_len_s__i0__h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__h0; _j0++) {
            s[_i0].h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha512_init(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].h);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct sha512 * s = (struct sha512 *) malloc(_len_s0*sizeof(struct sha512));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__h0 = 1;
          s[_i0].h = (int *) malloc(_len_s__i0__h0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__h0; _j0++) {
            s[_i0].h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha512_init(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].h);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

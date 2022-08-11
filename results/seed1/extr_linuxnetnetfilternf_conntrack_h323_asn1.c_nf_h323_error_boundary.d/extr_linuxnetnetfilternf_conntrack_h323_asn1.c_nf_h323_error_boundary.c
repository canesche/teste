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
struct bitstr {scalar_t__* cur; scalar_t__* end; scalar_t__ bit; } ;

/* Variables and functions */
 size_t BITS_PER_BYTE ; 

__attribute__((used)) static int nf_h323_error_boundary(struct bitstr *bs, size_t bytes, size_t bits)
{
	bits += bs->bit;
	bytes += bits / BITS_PER_BYTE;
	if (bits % BITS_PER_BYTE > 0)
		bytes++;

	if (*bs->cur + bytes > *bs->end)
		return 1;

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
          unsigned long bytes = 100;
          unsigned long bits = 100;
          int _len_bs0 = 1;
          struct bitstr * bs = (struct bitstr *) malloc(_len_bs0*sizeof(struct bitstr));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
              int _len_bs__i0__cur0 = 1;
          bs[_i0].cur = (long *) malloc(_len_bs__i0__cur0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__cur0; _j0++) {
            bs[_i0].cur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bs__i0__end0 = 1;
          bs[_i0].end = (long *) malloc(_len_bs__i0__end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__end0; _j0++) {
            bs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bs[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nf_h323_error_boundary(bs,bytes,bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].cur);
          }
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].end);
          }
          free(bs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long bytes = 255;
          unsigned long bits = 255;
          int _len_bs0 = 65025;
          struct bitstr * bs = (struct bitstr *) malloc(_len_bs0*sizeof(struct bitstr));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
              int _len_bs__i0__cur0 = 1;
          bs[_i0].cur = (long *) malloc(_len_bs__i0__cur0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__cur0; _j0++) {
            bs[_i0].cur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bs__i0__end0 = 1;
          bs[_i0].end = (long *) malloc(_len_bs__i0__end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__end0; _j0++) {
            bs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bs[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nf_h323_error_boundary(bs,bytes,bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].cur);
          }
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].end);
          }
          free(bs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long bytes = 10;
          unsigned long bits = 10;
          int _len_bs0 = 100;
          struct bitstr * bs = (struct bitstr *) malloc(_len_bs0*sizeof(struct bitstr));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
              int _len_bs__i0__cur0 = 1;
          bs[_i0].cur = (long *) malloc(_len_bs__i0__cur0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__cur0; _j0++) {
            bs[_i0].cur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bs__i0__end0 = 1;
          bs[_i0].end = (long *) malloc(_len_bs__i0__end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__end0; _j0++) {
            bs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bs[_i0].bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nf_h323_error_boundary(bs,bytes,bits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].cur);
          }
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].end);
          }
          free(bs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

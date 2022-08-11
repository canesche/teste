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
typedef  int /*<<< orphan*/  u8 ;
typedef  int s16 ;

/* Variables and functions */

__attribute__((used)) static void add_deltas(s16 *deltas, const u8 *ref, int stride)
{
	int k, l;

	for (k = 0; k < 8; k++) {
		for (l = 0; l < 8; l++) {
			*deltas += *ref++;
			/*
			 * Due to quantizing, it might possible that the
			 * decoded coefficients are slightly out of range
			 */
			if (*deltas < 0)
				*deltas = 0;
			else if (*deltas > 255)
				*deltas = 255;
			deltas++;
		}
		ref += stride - 8;
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
          int stride = 100;
          int _len_deltas0 = 1;
          int * deltas = (int *) malloc(_len_deltas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_deltas0; _i0++) {
            deltas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 1;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_deltas(deltas,ref,stride);
          free(deltas);
          free(ref);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int _len_deltas0 = 65025;
          int * deltas = (int *) malloc(_len_deltas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_deltas0; _i0++) {
            deltas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 65025;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_deltas(deltas,ref,stride);
          free(deltas);
          free(ref);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int _len_deltas0 = 100;
          int * deltas = (int *) malloc(_len_deltas0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_deltas0; _i0++) {
            deltas[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref0 = 100;
          const int * ref = (const int *) malloc(_len_ref0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_deltas(deltas,ref,stride);
          free(deltas);
          free(ref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

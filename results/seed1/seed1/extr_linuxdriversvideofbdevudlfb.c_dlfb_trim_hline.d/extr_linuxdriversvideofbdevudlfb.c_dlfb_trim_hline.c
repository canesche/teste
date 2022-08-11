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

/* Variables and functions */

__attribute__((used)) static int dlfb_trim_hline(const u8 *bback, const u8 **bfront, int *width_bytes)
{
	int j, k;
	const unsigned long *back = (const unsigned long *) bback;
	const unsigned long *front = (const unsigned long *) *bfront;
	const int width = *width_bytes / sizeof(unsigned long);
	int identical = width;
	int start = width;
	int end = width;

	for (j = 0; j < width; j++) {
		if (back[j] != front[j]) {
			start = j;
			break;
		}
	}

	for (k = width - 1; k > j; k--) {
		if (back[k] != front[k]) {
			end = k+1;
			break;
		}
	}

	identical = start + (width - end);
	*bfront = (u8 *) &front[start];
	*width_bytes = (end - start) * sizeof(unsigned long);

	return identical * sizeof(unsigned long);
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
          int _len_bback0 = 1;
          const int * bback = (const int *) malloc(_len_bback0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bback0; _i0++) {
            bback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfront0 = 1;
          const int ** bfront = (const int **) malloc(_len_bfront0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_bfront0; _i0++) {
            int _len_bfront1 = 1;
            bfront[_i0] = (const int *) malloc(_len_bfront1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_bfront1; _i1++) {
              bfront[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_width_bytes0 = 1;
          int * width_bytes = (int *) malloc(_len_width_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width_bytes0; _i0++) {
            width_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlfb_trim_hline(bback,bfront,width_bytes);
          printf("%d\n", benchRet); 
          free(bback);
          for(int i1 = 0; i1 < _len_bfront0; i1++) {
            int _len_bfront1 = 1;
              free(bfront[i1]);
          }
          free(bfront);
          free(width_bytes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bback0 = 65025;
          const int * bback = (const int *) malloc(_len_bback0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bback0; _i0++) {
            bback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfront0 = 65025;
          const int ** bfront = (const int **) malloc(_len_bfront0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_bfront0; _i0++) {
            int _len_bfront1 = 1;
            bfront[_i0] = (const int *) malloc(_len_bfront1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_bfront1; _i1++) {
              bfront[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_width_bytes0 = 65025;
          int * width_bytes = (int *) malloc(_len_width_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width_bytes0; _i0++) {
            width_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlfb_trim_hline(bback,bfront,width_bytes);
          printf("%d\n", benchRet); 
          free(bback);
          for(int i1 = 0; i1 < _len_bfront0; i1++) {
            int _len_bfront1 = 1;
              free(bfront[i1]);
          }
          free(bfront);
          free(width_bytes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bback0 = 100;
          const int * bback = (const int *) malloc(_len_bback0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bback0; _i0++) {
            bback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bfront0 = 100;
          const int ** bfront = (const int **) malloc(_len_bfront0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_bfront0; _i0++) {
            int _len_bfront1 = 1;
            bfront[_i0] = (const int *) malloc(_len_bfront1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_bfront1; _i1++) {
              bfront[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_width_bytes0 = 100;
          int * width_bytes = (int *) malloc(_len_width_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width_bytes0; _i0++) {
            width_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlfb_trim_hline(bback,bfront,width_bytes);
          printf("%d\n", benchRet); 
          free(bback);
          for(int i1 = 0; i1 < _len_bfront0; i1++) {
            int _len_bfront1 = 1;
              free(bfront[i1]);
          }
          free(bfront);
          free(width_bytes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

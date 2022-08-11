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
 int EINVAL ; 

__attribute__((used)) static int mag3110_get_int_plus_micros_index(const int (*vals)[2], int n,
					int val, int val2)
{
	while (n-- > 0)
		if (val == vals[n][0] && val2 == vals[n][1])
			return n;

	return -EINVAL;
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
          int n = 100;
          int val = 100;
          int val2 = 100;
          int _len_vals0 = 2;
          int const (*)* vals = (int const (*)*) malloc(_len_vals0*sizeof(int const ()*));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            int _len_vals1 = 1;
            vals[_i0] = (int const ()*) malloc(_len_vals1*sizeof(int const ()));
            for(int _i1 = 0; _i1 < _len_vals1; _i1++) {
              vals[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mag3110_get_int_plus_micros_index(vals,n,val,val2);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_vals0; i1++) {
            int _len_vals1 = 1;
              free(vals[i1]);
          }
          free(vals);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int val = 255;
          int val2 = 255;
          int _len_vals0 = 65025;
          int const (*)* vals = (int const (*)*) malloc(_len_vals0*sizeof(int const ()*));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            int _len_vals1 = 1;
            vals[_i0] = (int const ()*) malloc(_len_vals1*sizeof(int const ()));
            for(int _i1 = 0; _i1 < _len_vals1; _i1++) {
              vals[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mag3110_get_int_plus_micros_index(vals,n,val,val2);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_vals0; i1++) {
            int _len_vals1 = 1;
              free(vals[i1]);
          }
          free(vals);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int val = 10;
          int val2 = 10;
          int _len_vals0 = 100;
          int const (*)* vals = (int const (*)*) malloc(_len_vals0*sizeof(int const ()*));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            int _len_vals1 = 1;
            vals[_i0] = (int const ()*) malloc(_len_vals1*sizeof(int const ()));
            for(int _i1 = 0; _i1 < _len_vals1; _i1++) {
              vals[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = mag3110_get_int_plus_micros_index(vals,n,val,val2);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_vals0; i1++) {
            int _len_vals1 = 1;
              free(vals[i1]);
          }
          free(vals);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct advert {double expected_gain; } ;

/* Variables and functions */

inline double calculate_expected_view_gain (struct advert *A, int user_ad_views, int user_id) {
  return A->expected_gain;
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
          int user_ad_views = 100;
          int user_id = 100;
          int _len_A0 = 1;
          struct advert * A = (struct advert *) malloc(_len_A0*sizeof(struct advert));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].expected_gain = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calculate_expected_view_gain(A,user_ad_views,user_id);
          printf("%lf\n", benchRet); 
          free(A);
        
        break;
    }
    // big-arr
    case 1:
    {
          int user_ad_views = 255;
          int user_id = 255;
          int _len_A0 = 65025;
          struct advert * A = (struct advert *) malloc(_len_A0*sizeof(struct advert));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].expected_gain = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calculate_expected_view_gain(A,user_ad_views,user_id);
          printf("%lf\n", benchRet); 
          free(A);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int user_ad_views = 10;
          int user_id = 10;
          int _len_A0 = 100;
          struct advert * A = (struct advert *) malloc(_len_A0*sizeof(struct advert));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].expected_gain = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calculate_expected_view_gain(A,user_ad_views,user_id);
          printf("%lf\n", benchRet); 
          free(A);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

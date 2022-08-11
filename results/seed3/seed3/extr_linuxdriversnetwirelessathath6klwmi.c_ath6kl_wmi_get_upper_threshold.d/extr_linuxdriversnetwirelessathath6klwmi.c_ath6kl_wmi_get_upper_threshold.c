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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;
struct sq_threshold_params {scalar_t__* upper_threshold; } ;
typedef  scalar_t__ s16 ;

/* Variables and functions */

__attribute__((used)) static u8 ath6kl_wmi_get_upper_threshold(s16 rssi,
					 struct sq_threshold_params *sq_thresh,
					 u32 size)
{
	u32 index;
	u8 threshold = (u8) sq_thresh->upper_threshold[size - 1];

	/* The list is already in sorted order. Get the next lower value */
	for (index = 0; index < size; index++) {
		if (rssi < sq_thresh->upper_threshold[index]) {
			threshold = (u8) sq_thresh->upper_threshold[index];
			break;
		}
	}

	return threshold;
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
          long rssi = 100;
          unsigned long size = 100;
          int _len_sq_thresh0 = 1;
          struct sq_threshold_params * sq_thresh = (struct sq_threshold_params *) malloc(_len_sq_thresh0*sizeof(struct sq_threshold_params));
          for(int _i0 = 0; _i0 < _len_sq_thresh0; _i0++) {
              int _len_sq_thresh__i0__upper_threshold0 = 1;
          sq_thresh[_i0].upper_threshold = (long *) malloc(_len_sq_thresh__i0__upper_threshold0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sq_thresh__i0__upper_threshold0; _j0++) {
            sq_thresh[_i0].upper_threshold[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = ath6kl_wmi_get_upper_threshold(rssi,sq_thresh,size);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sq_thresh0; _aux++) {
          free(sq_thresh[_aux].upper_threshold);
          }
          free(sq_thresh);
        
        break;
    }
    // big-arr
    case 1:
    {
          long rssi = 255;
          unsigned long size = 255;
          int _len_sq_thresh0 = 65025;
          struct sq_threshold_params * sq_thresh = (struct sq_threshold_params *) malloc(_len_sq_thresh0*sizeof(struct sq_threshold_params));
          for(int _i0 = 0; _i0 < _len_sq_thresh0; _i0++) {
              int _len_sq_thresh__i0__upper_threshold0 = 1;
          sq_thresh[_i0].upper_threshold = (long *) malloc(_len_sq_thresh__i0__upper_threshold0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sq_thresh__i0__upper_threshold0; _j0++) {
            sq_thresh[_i0].upper_threshold[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = ath6kl_wmi_get_upper_threshold(rssi,sq_thresh,size);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sq_thresh0; _aux++) {
          free(sq_thresh[_aux].upper_threshold);
          }
          free(sq_thresh);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long rssi = 10;
          unsigned long size = 10;
          int _len_sq_thresh0 = 100;
          struct sq_threshold_params * sq_thresh = (struct sq_threshold_params *) malloc(_len_sq_thresh0*sizeof(struct sq_threshold_params));
          for(int _i0 = 0; _i0 < _len_sq_thresh0; _i0++) {
              int _len_sq_thresh__i0__upper_threshold0 = 1;
          sq_thresh[_i0].upper_threshold = (long *) malloc(_len_sq_thresh__i0__upper_threshold0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sq_thresh__i0__upper_threshold0; _j0++) {
            sq_thresh[_i0].upper_threshold[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = ath6kl_wmi_get_upper_threshold(rssi,sq_thresh,size);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sq_thresh0; _aux++) {
          free(sq_thresh[_aux].upper_threshold);
          }
          free(sq_thresh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int const u8 ;

/* Variables and functions */
 unsigned int BITS_PER_BYTE ; 

bool qtnf_utils_is_bit_set(const u8 *arr, unsigned int bit,
			   unsigned int arr_max_len)
{
	unsigned int idx = bit / BITS_PER_BYTE;
	u8 mask = 1 << (bit - (idx * BITS_PER_BYTE));

	if (idx >= arr_max_len)
		return false;

	return arr[idx] & mask;
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
          unsigned int bit = 100;
          unsigned int arr_max_len = 100;
          int _len_arr0 = 1;
          const int * arr = (const int *) malloc(_len_arr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qtnf_utils_is_bit_set(arr,bit,arr_max_len);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int bit = 255;
          unsigned int arr_max_len = 255;
          int _len_arr0 = 65025;
          const int * arr = (const int *) malloc(_len_arr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qtnf_utils_is_bit_set(arr,bit,arr_max_len);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int bit = 10;
          unsigned int arr_max_len = 10;
          int _len_arr0 = 100;
          const int * arr = (const int *) malloc(_len_arr0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qtnf_utils_is_bit_set(arr,bit,arr_max_len);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

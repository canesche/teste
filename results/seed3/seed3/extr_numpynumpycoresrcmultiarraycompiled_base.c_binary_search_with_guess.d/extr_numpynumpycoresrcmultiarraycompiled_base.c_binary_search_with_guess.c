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
typedef  int npy_intp ;
typedef  scalar_t__ npy_double ;

/* Variables and functions */
 int LIKELY_IN_CACHE_SIZE ; 

__attribute__((used)) static npy_intp
binary_search_with_guess(const npy_double key, const npy_double *arr,
                         npy_intp len, npy_intp guess)
{
    npy_intp imin = 0;
    npy_intp imax = len;

    /* Handle keys outside of the arr range first */
    if (key > arr[len - 1]) {
        return len;
    }
    else if (key < arr[0]) {
        return -1;
    }

    /*
     * If len <= 4 use linear search.
     * From above we know key >= arr[0] when we start.
     */
    if (len <= 4) {
        npy_intp i;

        for (i = 1; i < len && key >= arr[i]; ++i);
        return i - 1;
    }

    if (guess > len - 3) {
        guess = len - 3;
    }
    if (guess < 1)  {
        guess = 1;
    }

    /* check most likely values: guess - 1, guess, guess + 1 */
    if (key < arr[guess]) {
        if (key < arr[guess - 1]) {
            imax = guess - 1;
            /* last attempt to restrict search to items in cache */
            if (guess > LIKELY_IN_CACHE_SIZE &&
                        key >= arr[guess - LIKELY_IN_CACHE_SIZE]) {
                imin = guess - LIKELY_IN_CACHE_SIZE;
            }
        }
        else {
            /* key >= arr[guess - 1] */
            return guess - 1;
        }
    }
    else {
        /* key >= arr[guess] */
        if (key < arr[guess + 1]) {
            return guess;
        }
        else {
            /* key >= arr[guess + 1] */
            if (key < arr[guess + 2]) {
                return guess + 1;
            }
            else {
                /* key >= arr[guess + 2] */
                imin = guess + 2;
                /* last attempt to restrict search to items in cache */
                if (guess < len - LIKELY_IN_CACHE_SIZE - 1 &&
                            key < arr[guess + LIKELY_IN_CACHE_SIZE]) {
                    imax = guess + LIKELY_IN_CACHE_SIZE;
                }
            }
        }
    }

    /* finally, find index by bisection */
    while (imin < imax) {
        const npy_intp imid = imin + ((imax - imin) >> 1);
        if (key >= arr[imid]) {
            imin = imid + 1;
        }
        else {
            imax = imid;
        }
    }
    return imin - 1;
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
          const long key = 100;
          int len = 100;
          int guess = 100;
          int _len_arr0 = 1;
          const long * arr = (const long *) malloc(_len_arr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search_with_guess(key,arr,len,guess);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long key = 255;
          int len = 255;
          int guess = 255;
          int _len_arr0 = 65025;
          const long * arr = (const long *) malloc(_len_arr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search_with_guess(key,arr,len,guess);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long key = 10;
          int len = 10;
          int guess = 10;
          int _len_arr0 = 100;
          const long * arr = (const long *) malloc(_len_arr0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search_with_guess(key,arr,len,guess);
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

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

__attribute__((used)) static size_t searchCodeIndex(const unsigned* array, size_t array_size, size_t value)
{
  /*linear search implementation*/
  /*for(size_t i = 1; i < array_size; i++) if(array[i] > value) return i - 1;
  return array_size - 1;*/

  /*binary search implementation (not that much faster) (precondition: array_size > 0)*/
  size_t left  = 1;
  size_t right = array_size - 1;
  while(left <= right)
  {
    size_t mid = (left + right) / 2;
    if(array[mid] <= value) left = mid + 1; /*the value to find is more to the right*/
    else if(array[mid - 1] > value) right = mid - 1; /*the value to find is more to the left*/
    else return mid - 1;
  }
  return array_size - 1;
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
          unsigned long array_size = 100;
          unsigned long value = 100;
          int _len_array0 = 1;
          const unsigned int * array = (const unsigned int *) malloc(_len_array0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = searchCodeIndex(array,array_size,value);
          printf("%lu\n", benchRet); 
          free(array);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long array_size = 255;
          unsigned long value = 255;
          int _len_array0 = 65025;
          const unsigned int * array = (const unsigned int *) malloc(_len_array0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = searchCodeIndex(array,array_size,value);
          printf("%lu\n", benchRet); 
          free(array);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long array_size = 10;
          unsigned long value = 10;
          int _len_array0 = 100;
          const unsigned int * array = (const unsigned int *) malloc(_len_array0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = searchCodeIndex(array,array_size,value);
          printf("%lu\n", benchRet); 
          free(array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

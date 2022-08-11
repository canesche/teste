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
typedef  int uint8_t ;

/* Variables and functions */
 int const* ELEM_DATA_MAX ; 
 int const ELEM_TYPE_END ; 

const uint8_t *elem_search(const uint8_t *elem, uint8_t elem_id) {
    while (elem + 2 + elem[1] <= ELEM_DATA_MAX) {
        if (elem[0] == elem_id) {
            // Found element, return a pointer to the element data
            return elem + 2;
        }
        if (elem[0] == ELEM_TYPE_END) {
            // End of elements
            return NULL;
        }
        elem += 2 + elem[1];
    }
    return NULL;
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
          int elem_id = 100;
          int _len_elem0 = 1;
          const int * elem = (const int *) malloc(_len_elem0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_elem0; _i0++) {
            elem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = elem_search(elem,elem_id);
          printf("%d\n", (*benchRet)); 
          free(elem);
        
        break;
    }
    // big-arr
    case 1:
    {
          int elem_id = 255;
          int _len_elem0 = 65025;
          const int * elem = (const int *) malloc(_len_elem0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_elem0; _i0++) {
            elem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = elem_search(elem,elem_id);
          printf("%d\n", (*benchRet)); 
          free(elem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int elem_id = 10;
          int _len_elem0 = 100;
          const int * elem = (const int *) malloc(_len_elem0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_elem0; _i0++) {
            elem[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = elem_search(elem,elem_id);
          printf("%d\n", (*benchRet)); 
          free(elem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

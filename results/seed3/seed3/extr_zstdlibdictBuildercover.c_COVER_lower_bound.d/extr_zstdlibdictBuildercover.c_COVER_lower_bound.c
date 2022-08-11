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

__attribute__((used)) static const size_t *COVER_lower_bound(const size_t *first, const size_t *last,
                                       size_t value) {
  size_t count = last - first;
  while (count != 0) {
    size_t step = count / 2;
    const size_t *ptr = first;
    ptr += step;
    if (*ptr < value) {
      first = ++ptr;
      count -= step + 1;
    } else {
      count = step;
    }
  }
  return first;
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
          unsigned long value = 100;
          int _len_first0 = 1;
          const unsigned long * first = (const unsigned long *) malloc(_len_first0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last0 = 1;
          const unsigned long * last = (const unsigned long *) malloc(_len_last0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned long * benchRet = COVER_lower_bound(first,last,value);
          printf("%lu\n", (*benchRet)); 
          free(first);
          free(last);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long value = 255;
          int _len_first0 = 65025;
          const unsigned long * first = (const unsigned long *) malloc(_len_first0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last0 = 65025;
          const unsigned long * last = (const unsigned long *) malloc(_len_last0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned long * benchRet = COVER_lower_bound(first,last,value);
          printf("%lu\n", (*benchRet)); 
          free(first);
          free(last);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long value = 10;
          int _len_first0 = 100;
          const unsigned long * first = (const unsigned long *) malloc(_len_first0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_last0 = 100;
          const unsigned long * last = (const unsigned long *) malloc(_len_last0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const unsigned long * benchRet = COVER_lower_bound(first,last,value);
          printf("%lu\n", (*benchRet)); 
          free(first);
          free(last);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

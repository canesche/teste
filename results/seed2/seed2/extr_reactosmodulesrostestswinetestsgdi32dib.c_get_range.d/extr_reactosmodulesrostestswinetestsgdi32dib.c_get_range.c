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
typedef  int DWORD ;
typedef  size_t BYTE ;

/* Variables and functions */
 int* ramp ; 

__attribute__((used)) static inline void get_range(BYTE alpha, DWORD text_comp, BYTE *min_comp, BYTE *max_comp)
{
    *min_comp = (ramp[alpha] * text_comp) / 0xff;
    *max_comp = ramp[16 - alpha] + ((0xff - ramp[16 - alpha]) * text_comp) / 0xff;
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
          unsigned long alpha = 100;
          int text_comp = 100;
          int _len_min_comp0 = 1;
          unsigned long * min_comp = (unsigned long *) malloc(_len_min_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_min_comp0; _i0++) {
            min_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_comp0 = 1;
          unsigned long * max_comp = (unsigned long *) malloc(_len_max_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_comp0; _i0++) {
            max_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_range(alpha,text_comp,min_comp,max_comp);
          free(min_comp);
          free(max_comp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long alpha = 255;
          int text_comp = 255;
          int _len_min_comp0 = 65025;
          unsigned long * min_comp = (unsigned long *) malloc(_len_min_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_min_comp0; _i0++) {
            min_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_comp0 = 65025;
          unsigned long * max_comp = (unsigned long *) malloc(_len_max_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_comp0; _i0++) {
            max_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_range(alpha,text_comp,min_comp,max_comp);
          free(min_comp);
          free(max_comp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long alpha = 10;
          int text_comp = 10;
          int _len_min_comp0 = 100;
          unsigned long * min_comp = (unsigned long *) malloc(_len_min_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_min_comp0; _i0++) {
            min_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_comp0 = 100;
          unsigned long * max_comp = (unsigned long *) malloc(_len_max_comp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_max_comp0; _i0++) {
            max_comp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_range(alpha,text_comp,min_comp,max_comp);
          free(min_comp);
          free(max_comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

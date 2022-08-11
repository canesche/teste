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

__attribute__((used)) static inline float get_cos(int idx, int part, const float *cos_tab, int size)
{
    return part ? -cos_tab[size - idx - 1]
                :  cos_tab[idx];
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
          int idx = 100;
          int part = 100;
          int size = 100;
          int _len_cos_tab0 = 1;
          const float * cos_tab = (const float *) malloc(_len_cos_tab0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_cos_tab0; _i0++) {
            cos_tab[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = get_cos(idx,part,cos_tab,size);
          printf("%f\n", benchRet); 
          free(cos_tab);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int part = 255;
          int size = 255;
          int _len_cos_tab0 = 65025;
          const float * cos_tab = (const float *) malloc(_len_cos_tab0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_cos_tab0; _i0++) {
            cos_tab[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = get_cos(idx,part,cos_tab,size);
          printf("%f\n", benchRet); 
          free(cos_tab);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int part = 10;
          int size = 10;
          int _len_cos_tab0 = 100;
          const float * cos_tab = (const float *) malloc(_len_cos_tab0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_cos_tab0; _i0++) {
            cos_tab[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = get_cos(idx,part,cos_tab,size);
          printf("%f\n", benchRet); 
          free(cos_tab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

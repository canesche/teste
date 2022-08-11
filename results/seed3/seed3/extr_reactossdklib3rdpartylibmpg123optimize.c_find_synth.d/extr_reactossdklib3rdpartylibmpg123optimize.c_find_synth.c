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
typedef  scalar_t__ const func_synth ;
typedef  enum synth_resample { ____Placeholder_synth_resample } synth_resample ;
typedef  enum synth_format { ____Placeholder_synth_format } synth_format ;

/* Variables and functions */
 int FALSE ; 
 int TRUE ; 
 int f_limit ; 
 int r_limit ; 

__attribute__((used)) static int find_synth(func_synth synth,  const func_synth synths[r_limit][f_limit])
{
	enum synth_resample ri;
	enum synth_format   fi;
	for(ri=0; ri<r_limit; ++ri)
	for(fi=0; fi<f_limit; ++fi)
	if(synth == synths[ri][fi])
	return TRUE;

	return FALSE;
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
          const long synth = 100;
          int _len_synths0 = r_limit;
          long const** synths = (long const**) malloc(_len_synths0*sizeof(long const*));
          for(int _i0 = 0; _i0 < _len_synths0; _i0++) {
            int _len_synths1 = f_limit;
            synths[_i0] = (long const*) malloc(_len_synths1*sizeof(long const));
            for(int _i1 = 0; _i1 < _len_synths1; _i1++) {
              synths[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_synth(synth,synths);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_synths0; i1++) {
            int _len_synths1 = f_limit;
              free(synths[i1]);
          }
          free(synths);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long synth = 255;
          int _len_synths0 = 65025;
          long const** synths = (long const**) malloc(_len_synths0*sizeof(long const*));
          for(int _i0 = 0; _i0 < _len_synths0; _i0++) {
            int _len_synths1 = f_limit;
            synths[_i0] = (long const*) malloc(_len_synths1*sizeof(long const));
            for(int _i1 = 0; _i1 < _len_synths1; _i1++) {
              synths[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_synth(synth,synths);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_synths0; i1++) {
            int _len_synths1 = f_limit;
              free(synths[i1]);
          }
          free(synths);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long synth = 10;
          int _len_synths0 = 100;
          long const** synths = (long const**) malloc(_len_synths0*sizeof(long const*));
          for(int _i0 = 0; _i0 < _len_synths0; _i0++) {
            int _len_synths1 = f_limit;
            synths[_i0] = (long const*) malloc(_len_synths1*sizeof(long const));
            for(int _i1 = 0; _i1 < _len_synths1; _i1++) {
              synths[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_synth(synth,synths);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_synths0; i1++) {
            int _len_synths1 = f_limit;
              free(synths[i1]);
          }
          free(synths);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

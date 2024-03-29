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
typedef  int uint64_t ;
typedef  int uint32_t ;
typedef  int clock_usec_t ;
typedef  int clock_sec_t ;

/* Variables and functions */
 scalar_t__ NSEC_PER_SEC ; 
 int NSEC_PER_USEC ; 

__attribute__((used)) static inline uint32_t
_absolutetime_to_microtime(uint64_t abstime, clock_sec_t *secs, clock_usec_t *microsecs)
{
	uint32_t remain;
	*secs = abstime / (uint64_t)NSEC_PER_SEC;
	remain = (uint32_t)(abstime % (uint64_t)NSEC_PER_SEC);
	*microsecs = remain / NSEC_PER_USEC;
	return remain;
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
          int abstime = 100;
          int _len_secs0 = 1;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 1;
          int * microsecs = (int *) malloc(_len_microsecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _absolutetime_to_microtime(abstime,secs,microsecs);
          printf("%d\n", benchRet); 
          free(secs);
          free(microsecs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int abstime = 255;
          int _len_secs0 = 65025;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 65025;
          int * microsecs = (int *) malloc(_len_microsecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _absolutetime_to_microtime(abstime,secs,microsecs);
          printf("%d\n", benchRet); 
          free(secs);
          free(microsecs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int abstime = 10;
          int _len_secs0 = 100;
          int * secs = (int *) malloc(_len_secs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_microsecs0 = 100;
          int * microsecs = (int *) malloc(_len_microsecs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_microsecs0; _i0++) {
            microsecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _absolutetime_to_microtime(abstime,secs,microsecs);
          printf("%d\n", benchRet); 
          free(secs);
          free(microsecs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

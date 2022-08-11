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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int size; } ;
union perf_event {TYPE_1__ header; } ;

/* Variables and functions */
 int EFAULT ; 

__attribute__((used)) static int
perf_event__check_size(union perf_event *event, unsigned int sample_size)
{
	/*
	 * The evsel's sample_size is based on PERF_SAMPLE_MASK which includes
	 * up to PERF_SAMPLE_PERIOD.  After that overflow() must be used to
	 * check the format does not go past the end of the event.
	 */
	if (sample_size + sizeof(event->header) > event->header.size)
		return -EFAULT;

	return 0;
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
          unsigned int sample_size = 100;
          int _len_event0 = 1;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int benchRet = perf_event__check_size(event,sample_size);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int sample_size = 255;
          int _len_event0 = 65025;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int benchRet = perf_event__check_size(event,sample_size);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int sample_size = 10;
          int _len_event0 = 100;
          union perf_event * event = (union perf_event *) malloc(_len_event0*sizeof(union perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0] = 0;
          }
          int benchRet = perf_event__check_size(event,sample_size);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

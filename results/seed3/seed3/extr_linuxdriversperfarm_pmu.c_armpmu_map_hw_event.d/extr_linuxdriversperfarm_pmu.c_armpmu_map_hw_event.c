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
typedef  size_t u64 ;

/* Variables and functions */
 int EINVAL ; 
 int ENOENT ; 
 int HW_OP_UNSUPPORTED ; 
 size_t PERF_COUNT_HW_MAX ; 

__attribute__((used)) static int
armpmu_map_hw_event(const unsigned (*event_map)[PERF_COUNT_HW_MAX], u64 config)
{
	int mapping;

	if (config >= PERF_COUNT_HW_MAX)
		return -EINVAL;

	if (!event_map)
		return -ENOENT;

	mapping = (*event_map)[config];
	return mapping == HW_OP_UNSUPPORTED ? -ENOENT : mapping;
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
          unsigned long config = 100;
          int _len_event_map0 = PERF_COUNT_HW_MAX;
          unsigned int const (*)* event_map = (unsigned int const (*)*) malloc(_len_event_map0*sizeof(unsigned int const ()*));
          for(int _i0 = 0; _i0 < _len_event_map0; _i0++) {
            int _len_event_map1 = 1;
            event_map[_i0] = (unsigned int const ()*) malloc(_len_event_map1*sizeof(unsigned int const ()));
            for(int _i1 = 0; _i1 < _len_event_map1; _i1++) {
              event_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = armpmu_map_hw_event(event_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_event_map0; i1++) {
            int _len_event_map1 = 1;
              free(event_map[i1]);
          }
          free(event_map);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long config = 255;
          int _len_event_map0 = 65025;
          unsigned int const (*)* event_map = (unsigned int const (*)*) malloc(_len_event_map0*sizeof(unsigned int const ()*));
          for(int _i0 = 0; _i0 < _len_event_map0; _i0++) {
            int _len_event_map1 = 1;
            event_map[_i0] = (unsigned int const ()*) malloc(_len_event_map1*sizeof(unsigned int const ()));
            for(int _i1 = 0; _i1 < _len_event_map1; _i1++) {
              event_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = armpmu_map_hw_event(event_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_event_map0; i1++) {
            int _len_event_map1 = 1;
              free(event_map[i1]);
          }
          free(event_map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long config = 10;
          int _len_event_map0 = 100;
          unsigned int const (*)* event_map = (unsigned int const (*)*) malloc(_len_event_map0*sizeof(unsigned int const ()*));
          for(int _i0 = 0; _i0 < _len_event_map0; _i0++) {
            int _len_event_map1 = 1;
            event_map[_i0] = (unsigned int const ()*) malloc(_len_event_map1*sizeof(unsigned int const ()));
            for(int _i1 = 0; _i1 < _len_event_map1; _i1++) {
              event_map[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = armpmu_map_hw_event(event_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_event_map0; i1++) {
            int _len_event_map1 = 1;
              free(event_map[i1]);
          }
          free(event_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

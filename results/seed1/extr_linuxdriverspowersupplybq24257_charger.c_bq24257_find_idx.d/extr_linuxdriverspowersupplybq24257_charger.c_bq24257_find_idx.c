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
typedef  size_t u8 ;
typedef  scalar_t__ const u32 ;

/* Variables and functions */

__attribute__((used)) static u8 bq24257_find_idx(u32 value, const u32 *map, u8 map_size)
{
	u8 idx;

	for (idx = 1; idx < map_size; idx++)
		if (value < map[idx])
			break;

	return idx - 1;
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
          const long value = 100;
          unsigned long map_size = 100;
          int _len_map0 = 1;
          const long * map = (const long *) malloc(_len_map0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = bq24257_find_idx(value,map,map_size);
          printf("%lu\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long value = 255;
          unsigned long map_size = 255;
          int _len_map0 = 65025;
          const long * map = (const long *) malloc(_len_map0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = bq24257_find_idx(value,map,map_size);
          printf("%lu\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long value = 10;
          unsigned long map_size = 10;
          int _len_map0 = 100;
          const long * map = (const long *) malloc(_len_map0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = bq24257_find_idx(value,map,map_size);
          printf("%lu\n", benchRet); 
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

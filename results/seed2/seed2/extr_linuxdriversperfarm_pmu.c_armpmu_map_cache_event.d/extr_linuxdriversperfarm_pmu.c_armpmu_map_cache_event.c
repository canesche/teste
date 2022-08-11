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
typedef  int u64 ;

/* Variables and functions */
 unsigned int CACHE_OP_UNSUPPORTED ; 
 int EINVAL ; 
 int ENOENT ; 
 unsigned int PERF_COUNT_HW_CACHE_MAX ; 
 unsigned int PERF_COUNT_HW_CACHE_OP_MAX ; 
 unsigned int PERF_COUNT_HW_CACHE_RESULT_MAX ; 

__attribute__((used)) static int
armpmu_map_cache_event(const unsigned (*cache_map)
				      [PERF_COUNT_HW_CACHE_MAX]
				      [PERF_COUNT_HW_CACHE_OP_MAX]
				      [PERF_COUNT_HW_CACHE_RESULT_MAX],
		       u64 config)
{
	unsigned int cache_type, cache_op, cache_result, ret;

	cache_type = (config >>  0) & 0xff;
	if (cache_type >= PERF_COUNT_HW_CACHE_MAX)
		return -EINVAL;

	cache_op = (config >>  8) & 0xff;
	if (cache_op >= PERF_COUNT_HW_CACHE_OP_MAX)
		return -EINVAL;

	cache_result = (config >> 16) & 0xff;
	if (cache_result >= PERF_COUNT_HW_CACHE_RESULT_MAX)
		return -EINVAL;

	if (!cache_map)
		return -ENOENT;

	ret = (int)(*cache_map)[cache_type][cache_op][cache_result];

	if (ret == CACHE_OP_UNSUPPORTED)
		return -ENOENT;

	return ret;
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
          int config = 100;
          int _len_cache_map0 = PERF_COUNT_HW_CACHE_MAX;
          unsigned int const (*)*** cache_map = (unsigned int const (*)***) malloc(_len_cache_map0*sizeof(unsigned int const ()***));
          for(int _i0 = 0; _i0 < _len_cache_map0; _i0++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
            cache_map[_i0] = (unsigned int const ()***) malloc(_len_cache_map1*sizeof(unsigned int const ()**));
            for(int _i1 = 0; _i1 < _len_cache_map1; _i1++) {
              int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              cache_map[_i0][_i1] = (unsigned int const ()**) malloc(_len_cache_map2*sizeof(unsigned int const ()*));
              for(int _i2 = 0; _i2 < _len_cache_map2; _i2++) {
                int _len_cache_map3 = 1;
                cache_map[_i0][_i1][_i2] = (unsigned int const ()*) malloc(_len_cache_map3*sizeof(unsigned int const ()));
                for(int _i3 = 0; _i3 < _len_cache_map3; _i3++) {
                  cache_map[_i0][_i1][_i2][_i3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int benchRet = armpmu_map_cache_event(cache_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cache_map0; i1++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
              for(int i2 = 0; i2 < _len_cache_map1; i2++) {
            int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              for(int i3 = 0; i3 < _len_cache_map2; i3++) {
            int _len_cache_map3 = 1;
              free(cache_map[i1][i2][i3]);
          }
          free(cache_map[i1][i2]);
          }
          free(cache_map[i1]);
          }
          free(cache_map);
        
        break;
    }
    // big-arr
    case 1:
    {
          int config = 255;
          int _len_cache_map0 = 65025;
          unsigned int const (*)*** cache_map = (unsigned int const (*)***) malloc(_len_cache_map0*sizeof(unsigned int const ()***));
          for(int _i0 = 0; _i0 < _len_cache_map0; _i0++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
            cache_map[_i0] = (unsigned int const ()***) malloc(_len_cache_map1*sizeof(unsigned int const ()**));
            for(int _i1 = 0; _i1 < _len_cache_map1; _i1++) {
              int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              cache_map[_i0][_i1] = (unsigned int const ()**) malloc(_len_cache_map2*sizeof(unsigned int const ()*));
              for(int _i2 = 0; _i2 < _len_cache_map2; _i2++) {
                int _len_cache_map3 = 1;
                cache_map[_i0][_i1][_i2] = (unsigned int const ()*) malloc(_len_cache_map3*sizeof(unsigned int const ()));
                for(int _i3 = 0; _i3 < _len_cache_map3; _i3++) {
                  cache_map[_i0][_i1][_i2][_i3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int benchRet = armpmu_map_cache_event(cache_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cache_map0; i1++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
              for(int i2 = 0; i2 < _len_cache_map1; i2++) {
            int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              for(int i3 = 0; i3 < _len_cache_map2; i3++) {
            int _len_cache_map3 = 1;
              free(cache_map[i1][i2][i3]);
          }
          free(cache_map[i1][i2]);
          }
          free(cache_map[i1]);
          }
          free(cache_map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int config = 10;
          int _len_cache_map0 = 100;
          unsigned int const (*)*** cache_map = (unsigned int const (*)***) malloc(_len_cache_map0*sizeof(unsigned int const ()***));
          for(int _i0 = 0; _i0 < _len_cache_map0; _i0++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
            cache_map[_i0] = (unsigned int const ()***) malloc(_len_cache_map1*sizeof(unsigned int const ()**));
            for(int _i1 = 0; _i1 < _len_cache_map1; _i1++) {
              int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              cache_map[_i0][_i1] = (unsigned int const ()**) malloc(_len_cache_map2*sizeof(unsigned int const ()*));
              for(int _i2 = 0; _i2 < _len_cache_map2; _i2++) {
                int _len_cache_map3 = 1;
                cache_map[_i0][_i1][_i2] = (unsigned int const ()*) malloc(_len_cache_map3*sizeof(unsigned int const ()));
                for(int _i3 = 0; _i3 < _len_cache_map3; _i3++) {
                  cache_map[_i0][_i1][_i2][_i3] = ((-2 * (next_i()%2)) + 1) * next_i();
                }
              }
            }
          }
          int benchRet = armpmu_map_cache_event(cache_map,config);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_cache_map0; i1++) {
            int _len_cache_map1 = PERF_COUNT_HW_CACHE_OP_MAX;
              for(int i2 = 0; i2 < _len_cache_map1; i2++) {
            int _len_cache_map2 = PERF_COUNT_HW_CACHE_RESULT_MAX;
              for(int i3 = 0; i3 < _len_cache_map2; i3++) {
            int _len_cache_map3 = 1;
              free(cache_map[i1][i2][i3]);
          }
          free(cache_map[i1][i2]);
          }
          free(cache_map[i1]);
          }
          free(cache_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

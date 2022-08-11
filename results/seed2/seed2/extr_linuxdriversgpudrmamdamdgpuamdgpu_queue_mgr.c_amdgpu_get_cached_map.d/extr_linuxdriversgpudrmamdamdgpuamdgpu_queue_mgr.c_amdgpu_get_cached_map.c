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
struct amdgpu_ring {int dummy; } ;
struct amdgpu_queue_mapper {struct amdgpu_ring** queue_map; } ;

/* Variables and functions */

__attribute__((used)) static struct amdgpu_ring *amdgpu_get_cached_map(struct amdgpu_queue_mapper *mapper,
					  int ring)
{
	return mapper->queue_map[ring];
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
          int ring = 100;
          int _len_mapper0 = 1;
          struct amdgpu_queue_mapper * mapper = (struct amdgpu_queue_mapper *) malloc(_len_mapper0*sizeof(struct amdgpu_queue_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__queue_map0 = 1;
          mapper[_i0].queue_map = (struct amdgpu_ring **) malloc(_len_mapper__i0__queue_map0*sizeof(struct amdgpu_ring *));
          for(int _j0 = 0; _j0 < _len_mapper__i0__queue_map0; _j0++) {
            int _len_mapper__i0__queue_map1 = 1;
            mapper[_i0].queue_map[_j0] = (struct amdgpu_ring *) malloc(_len_mapper__i0__queue_map1*sizeof(struct amdgpu_ring));
            for(int _j1 = 0; _j1 < _len_mapper__i0__queue_map1; _j1++) {
              mapper[_i0].queue_map[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct amdgpu_ring * benchRet = amdgpu_get_cached_map(mapper,ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(*(mapper[_aux].queue_map));
        free(mapper[_aux].queue_map);
          }
          free(mapper);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ring = 255;
          int _len_mapper0 = 65025;
          struct amdgpu_queue_mapper * mapper = (struct amdgpu_queue_mapper *) malloc(_len_mapper0*sizeof(struct amdgpu_queue_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__queue_map0 = 1;
          mapper[_i0].queue_map = (struct amdgpu_ring **) malloc(_len_mapper__i0__queue_map0*sizeof(struct amdgpu_ring *));
          for(int _j0 = 0; _j0 < _len_mapper__i0__queue_map0; _j0++) {
            int _len_mapper__i0__queue_map1 = 1;
            mapper[_i0].queue_map[_j0] = (struct amdgpu_ring *) malloc(_len_mapper__i0__queue_map1*sizeof(struct amdgpu_ring));
            for(int _j1 = 0; _j1 < _len_mapper__i0__queue_map1; _j1++) {
              mapper[_i0].queue_map[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct amdgpu_ring * benchRet = amdgpu_get_cached_map(mapper,ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(*(mapper[_aux].queue_map));
        free(mapper[_aux].queue_map);
          }
          free(mapper);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ring = 10;
          int _len_mapper0 = 100;
          struct amdgpu_queue_mapper * mapper = (struct amdgpu_queue_mapper *) malloc(_len_mapper0*sizeof(struct amdgpu_queue_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__queue_map0 = 1;
          mapper[_i0].queue_map = (struct amdgpu_ring **) malloc(_len_mapper__i0__queue_map0*sizeof(struct amdgpu_ring *));
          for(int _j0 = 0; _j0 < _len_mapper__i0__queue_map0; _j0++) {
            int _len_mapper__i0__queue_map1 = 1;
            mapper[_i0].queue_map[_j0] = (struct amdgpu_ring *) malloc(_len_mapper__i0__queue_map1*sizeof(struct amdgpu_ring));
            for(int _j1 = 0; _j1 < _len_mapper__i0__queue_map1; _j1++) {
              mapper[_i0].queue_map[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct amdgpu_ring * benchRet = amdgpu_get_cached_map(mapper,ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(*(mapper[_aux].queue_map));
        free(mapper[_aux].queue_map);
          }
          free(mapper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ u32 ;
struct uid_gid_map {struct uid_gid_extent* extent; } ;
struct uid_gid_extent {scalar_t__ first; scalar_t__ count; } ;

/* Variables and functions */

__attribute__((used)) static struct uid_gid_extent *
map_id_range_down_base(unsigned extents, struct uid_gid_map *map, u32 id, u32 count)
{
	unsigned idx;
	u32 first, last, id2;

	id2 = id + count - 1;

	/* Find the matching extent */
	for (idx = 0; idx < extents; idx++) {
		first = map->extent[idx].first;
		last = first + map->extent[idx].count - 1;
		if (id >= first && id <= last &&
		    (id2 >= first && id2 <= last))
			return &map->extent[idx];
	}
	return NULL;
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
          unsigned int extents = 100;
          long id = 100;
          long count = 100;
          int _len_map0 = 1;
          struct uid_gid_map * map = (struct uid_gid_map *) malloc(_len_map0*sizeof(struct uid_gid_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__extent0 = 1;
          map[_i0].extent = (struct uid_gid_extent *) malloc(_len_map__i0__extent0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_map__i0__extent0; _j0++) {
            map[_i0].extent->first = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].extent->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct uid_gid_extent * benchRet = map_id_range_down_base(extents,map,id,count);
          printf("%ld\n", (*benchRet).first);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].extent);
          }
          free(map);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int extents = 255;
          long id = 255;
          long count = 255;
          int _len_map0 = 65025;
          struct uid_gid_map * map = (struct uid_gid_map *) malloc(_len_map0*sizeof(struct uid_gid_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__extent0 = 1;
          map[_i0].extent = (struct uid_gid_extent *) malloc(_len_map__i0__extent0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_map__i0__extent0; _j0++) {
            map[_i0].extent->first = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].extent->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct uid_gid_extent * benchRet = map_id_range_down_base(extents,map,id,count);
          printf("%ld\n", (*benchRet).first);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].extent);
          }
          free(map);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int extents = 10;
          long id = 10;
          long count = 10;
          int _len_map0 = 100;
          struct uid_gid_map * map = (struct uid_gid_map *) malloc(_len_map0*sizeof(struct uid_gid_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__extent0 = 1;
          map[_i0].extent = (struct uid_gid_extent *) malloc(_len_map__i0__extent0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_map__i0__extent0; _j0++) {
            map[_i0].extent->first = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].extent->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct uid_gid_extent * benchRet = map_id_range_down_base(extents,map,id,count);
          printf("%ld\n", (*benchRet).first);
          printf("%ld\n", (*benchRet).count);
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].extent);
          }
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

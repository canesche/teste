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
struct metapath {scalar_t__ mp_aheight; scalar_t__ mp_fheight; } ;
struct gfs2_hole_walker_args {int blocks; } ;
typedef  scalar_t__ __be64 ;

/* Variables and functions */
 scalar_t__ const* WALK_NEXT ; 
 scalar_t__ const* WALK_STOP ; 

__attribute__((used)) static const __be64 *gfs2_hole_walker(struct metapath *mp,
		const __be64 *start, const __be64 *end,
		u64 factor, void *data)
{
	struct gfs2_hole_walker_args *args = data;
	const __be64 *ptr;

	for (ptr = start; ptr < end; ptr++) {
		if (*ptr) {
			args->blocks += (ptr - start) * factor;
			if (mp->mp_aheight == mp->mp_fheight)
				return WALK_STOP;
			return ptr;  /* increase height */
		}
	}
	args->blocks += (end - start) * factor;
	return WALK_NEXT;
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
          int factor = 100;
          int _len_mp0 = 1;
          struct metapath * mp = (struct metapath *) malloc(_len_mp0*sizeof(struct metapath));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mp_aheight = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mp_fheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 1;
          const long * start = (const long *) malloc(_len_start0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          const long * end = (const long *) malloc(_len_end0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          const long * benchRet = gfs2_hole_walker(mp,start,end,factor,data);
          printf("%ld\n", (*benchRet)); 
          free(mp);
          free(start);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int factor = 255;
          int _len_mp0 = 65025;
          struct metapath * mp = (struct metapath *) malloc(_len_mp0*sizeof(struct metapath));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mp_aheight = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mp_fheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 65025;
          const long * start = (const long *) malloc(_len_start0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          const long * end = (const long *) malloc(_len_end0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          const long * benchRet = gfs2_hole_walker(mp,start,end,factor,data);
          printf("%ld\n", (*benchRet)); 
          free(mp);
          free(start);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int factor = 10;
          int _len_mp0 = 100;
          struct metapath * mp = (struct metapath *) malloc(_len_mp0*sizeof(struct metapath));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mp_aheight = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mp_fheight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 100;
          const long * start = (const long *) malloc(_len_start0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          const long * end = (const long *) malloc(_len_end0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          const long * benchRet = gfs2_hole_walker(mp,start,end,factor,data);
          printf("%ld\n", (*benchRet)); 
          free(mp);
          free(start);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

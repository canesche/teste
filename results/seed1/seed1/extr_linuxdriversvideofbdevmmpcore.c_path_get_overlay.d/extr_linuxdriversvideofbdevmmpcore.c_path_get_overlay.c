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
struct mmp_path {int overlay_num; struct mmp_overlay* overlays; } ;
struct mmp_overlay {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct mmp_overlay *path_get_overlay(struct mmp_path *path,
		int overlay_id)
{
	if (path && overlay_id < path->overlay_num)
		return &path->overlays[overlay_id];
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
          int overlay_id = 100;
          int _len_path0 = 1;
          struct mmp_path * path = (struct mmp_path *) malloc(_len_path0*sizeof(struct mmp_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].overlay_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__overlays0 = 1;
          path[_i0].overlays = (struct mmp_overlay *) malloc(_len_path__i0__overlays0*sizeof(struct mmp_overlay));
          for(int _j0 = 0; _j0 < _len_path__i0__overlays0; _j0++) {
            path[_i0].overlays->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmp_overlay * benchRet = path_get_overlay(path,overlay_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].overlays);
          }
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int overlay_id = 255;
          int _len_path0 = 65025;
          struct mmp_path * path = (struct mmp_path *) malloc(_len_path0*sizeof(struct mmp_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].overlay_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__overlays0 = 1;
          path[_i0].overlays = (struct mmp_overlay *) malloc(_len_path__i0__overlays0*sizeof(struct mmp_overlay));
          for(int _j0 = 0; _j0 < _len_path__i0__overlays0; _j0++) {
            path[_i0].overlays->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmp_overlay * benchRet = path_get_overlay(path,overlay_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].overlays);
          }
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int overlay_id = 10;
          int _len_path0 = 100;
          struct mmp_path * path = (struct mmp_path *) malloc(_len_path0*sizeof(struct mmp_path));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].overlay_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__overlays0 = 1;
          path[_i0].overlays = (struct mmp_overlay *) malloc(_len_path__i0__overlays0*sizeof(struct mmp_overlay));
          for(int _j0 = 0; _j0 < _len_path__i0__overlays0; _j0++) {
            path[_i0].overlays->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mmp_overlay * benchRet = path_get_overlay(path,overlay_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].overlays);
          }
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t uint32_t ;
struct dc_link {int dummy; } ;
struct dc {struct dc_link** links; } ;

/* Variables and functions */

__attribute__((used)) static inline struct dc_link *dc_get_link_at_index(struct dc *dc, uint32_t link_index)
{
	return dc->links[link_index];
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
          unsigned long link_index = 100;
          int _len_dc0 = 1;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__links0 = 1;
          dc[_i0].links = (struct dc_link **) malloc(_len_dc__i0__links0*sizeof(struct dc_link *));
          for(int _j0 = 0; _j0 < _len_dc__i0__links0; _j0++) {
            int _len_dc__i0__links1 = 1;
            dc[_i0].links[_j0] = (struct dc_link *) malloc(_len_dc__i0__links1*sizeof(struct dc_link));
            for(int _j1 = 0; _j1 < _len_dc__i0__links1; _j1++) {
              dc[_i0].links[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dc_link * benchRet = dc_get_link_at_index(dc,link_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(*(dc[_aux].links));
        free(dc[_aux].links);
          }
          free(dc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long link_index = 255;
          int _len_dc0 = 65025;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__links0 = 1;
          dc[_i0].links = (struct dc_link **) malloc(_len_dc__i0__links0*sizeof(struct dc_link *));
          for(int _j0 = 0; _j0 < _len_dc__i0__links0; _j0++) {
            int _len_dc__i0__links1 = 1;
            dc[_i0].links[_j0] = (struct dc_link *) malloc(_len_dc__i0__links1*sizeof(struct dc_link));
            for(int _j1 = 0; _j1 < _len_dc__i0__links1; _j1++) {
              dc[_i0].links[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dc_link * benchRet = dc_get_link_at_index(dc,link_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(*(dc[_aux].links));
        free(dc[_aux].links);
          }
          free(dc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long link_index = 10;
          int _len_dc0 = 100;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__links0 = 1;
          dc[_i0].links = (struct dc_link **) malloc(_len_dc__i0__links0*sizeof(struct dc_link *));
          for(int _j0 = 0; _j0 < _len_dc__i0__links0; _j0++) {
            int _len_dc__i0__links1 = 1;
            dc[_i0].links[_j0] = (struct dc_link *) malloc(_len_dc__i0__links1*sizeof(struct dc_link));
            for(int _j1 = 0; _j1 < _len_dc__i0__links1; _j1++) {
              dc[_i0].links[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dc_link * benchRet = dc_get_link_at_index(dc,link_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(*(dc[_aux].links));
        free(dc[_aux].links);
          }
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

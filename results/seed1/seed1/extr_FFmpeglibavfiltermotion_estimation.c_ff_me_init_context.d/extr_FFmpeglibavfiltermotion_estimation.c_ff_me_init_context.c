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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; int height; int mb_size; int search_param; int x_min; int x_max; int y_min; int y_max; int /*<<< orphan*/ * get_cost; } ;
typedef  TYPE_1__ AVMotionEstContext ;

/* Variables and functions */
 int /*<<< orphan*/  ff_me_cmp_sad ; 

void ff_me_init_context(AVMotionEstContext *me_ctx, int mb_size, int search_param,
                        int width, int height, int x_min, int x_max, int y_min, int y_max)
{
    me_ctx->width = width;
    me_ctx->height = height;
    me_ctx->mb_size = mb_size;
    me_ctx->search_param = search_param;
    me_ctx->get_cost = &ff_me_cmp_sad;
    me_ctx->x_min = x_min;
    me_ctx->x_max = x_max;
    me_ctx->y_min = y_min;
    me_ctx->y_max = y_max;
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
          int mb_size = 100;
          int search_param = 100;
          int width = 100;
          int height = 100;
          int x_min = 100;
          int x_max = 100;
          int y_min = 100;
          int y_max = 100;
          int _len_me_ctx0 = 1;
          struct TYPE_3__ * me_ctx = (struct TYPE_3__ *) malloc(_len_me_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_me_ctx0; _i0++) {
            me_ctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].mb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].search_param = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_me_ctx__i0__get_cost0 = 1;
          me_ctx[_i0].get_cost = (int *) malloc(_len_me_ctx__i0__get_cost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_me_ctx__i0__get_cost0; _j0++) {
            me_ctx[_i0].get_cost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_me_init_context(me_ctx,mb_size,search_param,width,height,x_min,x_max,y_min,y_max);
          for(int _aux = 0; _aux < _len_me_ctx0; _aux++) {
          free(me_ctx[_aux].get_cost);
          }
          free(me_ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mb_size = 255;
          int search_param = 255;
          int width = 255;
          int height = 255;
          int x_min = 255;
          int x_max = 255;
          int y_min = 255;
          int y_max = 255;
          int _len_me_ctx0 = 65025;
          struct TYPE_3__ * me_ctx = (struct TYPE_3__ *) malloc(_len_me_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_me_ctx0; _i0++) {
            me_ctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].mb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].search_param = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_me_ctx__i0__get_cost0 = 1;
          me_ctx[_i0].get_cost = (int *) malloc(_len_me_ctx__i0__get_cost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_me_ctx__i0__get_cost0; _j0++) {
            me_ctx[_i0].get_cost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_me_init_context(me_ctx,mb_size,search_param,width,height,x_min,x_max,y_min,y_max);
          for(int _aux = 0; _aux < _len_me_ctx0; _aux++) {
          free(me_ctx[_aux].get_cost);
          }
          free(me_ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mb_size = 10;
          int search_param = 10;
          int width = 10;
          int height = 10;
          int x_min = 10;
          int x_max = 10;
          int y_min = 10;
          int y_max = 10;
          int _len_me_ctx0 = 100;
          struct TYPE_3__ * me_ctx = (struct TYPE_3__ *) malloc(_len_me_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_me_ctx0; _i0++) {
            me_ctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].mb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].search_param = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_min = ((-2 * (next_i()%2)) + 1) * next_i();
        me_ctx[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_me_ctx__i0__get_cost0 = 1;
          me_ctx[_i0].get_cost = (int *) malloc(_len_me_ctx__i0__get_cost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_me_ctx__i0__get_cost0; _j0++) {
            me_ctx[_i0].get_cost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_me_init_context(me_ctx,mb_size,search_param,width,height,x_min,x_max,y_min,y_max);
          for(int _aux = 0; _aux < _len_me_ctx0; _aux++) {
          free(me_ctx[_aux].get_cost);
          }
          free(me_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

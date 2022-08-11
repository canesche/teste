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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {TYPE_1__* dst; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ zoom; scalar_t__ angle; TYPE_2__ vec; } ;
struct TYPE_10__ {TYPE_3__ last; int /*<<< orphan*/ * ref; } ;
struct TYPE_7__ {TYPE_4__* priv; } ;
typedef  TYPE_4__ DeshakeContext ;
typedef  TYPE_5__ AVFilterLink ;

/* Variables and functions */

__attribute__((used)) static int config_props(AVFilterLink *link)
{
    DeshakeContext *deshake = link->dst->priv;

    deshake->ref = NULL;
    deshake->last.vec.x = 0;
    deshake->last.vec.y = 0;
    deshake->last.angle = 0;
    deshake->last.zoom = 0;

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
          int _len_link0 = 1;
          struct TYPE_11__ * link = (struct TYPE_11__ *) malloc(_len_link0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__dst0 = 1;
          link[_i0].dst = (struct TYPE_7__ *) malloc(_len_link__i0__dst0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst0; _j0++) {
              int _len_link__i0__dst_priv0 = 1;
          link[_i0].dst->priv = (struct TYPE_10__ *) malloc(_len_link__i0__dst_priv0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv0; _j0++) {
            link[_i0].dst->priv->last.zoom = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.angle = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.y = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__dst_priv_ref0 = 1;
          link[_i0].dst->priv->ref = (int *) malloc(_len_link__i0__dst_priv_ref0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv_ref0; _j0++) {
            link[_i0].dst->priv->ref[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_props(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].dst);
          }
          free(link);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_link0 = 65025;
          struct TYPE_11__ * link = (struct TYPE_11__ *) malloc(_len_link0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__dst0 = 1;
          link[_i0].dst = (struct TYPE_7__ *) malloc(_len_link__i0__dst0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst0; _j0++) {
              int _len_link__i0__dst_priv0 = 1;
          link[_i0].dst->priv = (struct TYPE_10__ *) malloc(_len_link__i0__dst_priv0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv0; _j0++) {
            link[_i0].dst->priv->last.zoom = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.angle = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.y = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__dst_priv_ref0 = 1;
          link[_i0].dst->priv->ref = (int *) malloc(_len_link__i0__dst_priv_ref0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv_ref0; _j0++) {
            link[_i0].dst->priv->ref[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_props(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].dst);
          }
          free(link);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_link0 = 100;
          struct TYPE_11__ * link = (struct TYPE_11__ *) malloc(_len_link0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__dst0 = 1;
          link[_i0].dst = (struct TYPE_7__ *) malloc(_len_link__i0__dst0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst0; _j0++) {
              int _len_link__i0__dst_priv0 = 1;
          link[_i0].dst->priv = (struct TYPE_10__ *) malloc(_len_link__i0__dst_priv0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv0; _j0++) {
            link[_i0].dst->priv->last.zoom = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.angle = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.y = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dst->priv->last.vec.x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__dst_priv_ref0 = 1;
          link[_i0].dst->priv->ref = (int *) malloc(_len_link__i0__dst_priv_ref0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_link__i0__dst_priv_ref0; _j0++) {
            link[_i0].dst->priv->ref[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = config_props(link);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].dst);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

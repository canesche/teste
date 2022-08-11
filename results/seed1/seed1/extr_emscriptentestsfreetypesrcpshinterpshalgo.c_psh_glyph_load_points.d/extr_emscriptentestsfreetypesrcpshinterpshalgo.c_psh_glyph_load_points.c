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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int /*<<< orphan*/  x; int /*<<< orphan*/  y; } ;
struct TYPE_8__ {scalar_t__ num_points; TYPE_2__* points; TYPE_1__* outline; } ;
struct TYPE_7__ {int /*<<< orphan*/  org_v; int /*<<< orphan*/  org_u; int /*<<< orphan*/ * hint; scalar_t__ flags2; } ;
struct TYPE_6__ {TYPE_4__* points; } ;
typedef  TYPE_2__* PSH_Point ;
typedef  TYPE_3__* PSH_Glyph ;
typedef  TYPE_4__ FT_Vector ;
typedef  scalar_t__ FT_UInt ;
typedef  scalar_t__ FT_Int ;

/* Variables and functions */

__attribute__((used)) static void
  psh_glyph_load_points( PSH_Glyph  glyph,
                         FT_Int     dimension )
  {
    FT_Vector*  vec   = glyph->outline->points;
    PSH_Point   point = glyph->points;
    FT_UInt     count = glyph->num_points;


    for ( ; count > 0; count--, point++, vec++ )
    {
      point->flags2 = 0;
      point->hint   = NULL;
      if ( dimension == 0 )
      {
        point->org_u = vec->x;
        point->org_v = vec->y;
      }
      else
      {
        point->org_u = vec->y;
        point->org_v = vec->x;
      }

#ifdef DEBUG_HINTER
      point->org_x = vec->x;
      point->org_y = vec->y;
#endif

    }
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
          long dimension = 100;
          int _len_glyph0 = 1;
          struct TYPE_8__ * glyph = (struct TYPE_8__ *) malloc(_len_glyph0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
            glyph[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points0 = 1;
          glyph[_i0].points = (struct TYPE_7__ *) malloc(_len_glyph__i0__points0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points0; _j0++) {
            glyph[_i0].points->org_v = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].points->org_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points_hint0 = 1;
          glyph[_i0].points->hint = (int *) malloc(_len_glyph__i0__points_hint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points_hint0; _j0++) {
            glyph[_i0].points->hint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        glyph[_i0].points->flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_glyph__i0__outline0 = 1;
          glyph[_i0].outline = (struct TYPE_6__ *) malloc(_len_glyph__i0__outline0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline0; _j0++) {
              int _len_glyph__i0__outline_points0 = 1;
          glyph[_i0].outline->points = (struct TYPE_9__ *) malloc(_len_glyph__i0__outline_points0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline_points0; _j0++) {
            glyph[_i0].outline->points->x = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].outline->points->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          psh_glyph_load_points(glyph,dimension);
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].points);
          }
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].outline);
          }
          free(glyph);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dimension = 255;
          int _len_glyph0 = 65025;
          struct TYPE_8__ * glyph = (struct TYPE_8__ *) malloc(_len_glyph0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
            glyph[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points0 = 1;
          glyph[_i0].points = (struct TYPE_7__ *) malloc(_len_glyph__i0__points0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points0; _j0++) {
            glyph[_i0].points->org_v = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].points->org_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points_hint0 = 1;
          glyph[_i0].points->hint = (int *) malloc(_len_glyph__i0__points_hint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points_hint0; _j0++) {
            glyph[_i0].points->hint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        glyph[_i0].points->flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_glyph__i0__outline0 = 1;
          glyph[_i0].outline = (struct TYPE_6__ *) malloc(_len_glyph__i0__outline0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline0; _j0++) {
              int _len_glyph__i0__outline_points0 = 1;
          glyph[_i0].outline->points = (struct TYPE_9__ *) malloc(_len_glyph__i0__outline_points0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline_points0; _j0++) {
            glyph[_i0].outline->points->x = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].outline->points->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          psh_glyph_load_points(glyph,dimension);
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].points);
          }
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].outline);
          }
          free(glyph);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dimension = 10;
          int _len_glyph0 = 100;
          struct TYPE_8__ * glyph = (struct TYPE_8__ *) malloc(_len_glyph0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_glyph0; _i0++) {
            glyph[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points0 = 1;
          glyph[_i0].points = (struct TYPE_7__ *) malloc(_len_glyph__i0__points0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points0; _j0++) {
            glyph[_i0].points->org_v = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].points->org_u = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_glyph__i0__points_hint0 = 1;
          glyph[_i0].points->hint = (int *) malloc(_len_glyph__i0__points_hint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_glyph__i0__points_hint0; _j0++) {
            glyph[_i0].points->hint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        glyph[_i0].points->flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_glyph__i0__outline0 = 1;
          glyph[_i0].outline = (struct TYPE_6__ *) malloc(_len_glyph__i0__outline0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline0; _j0++) {
              int _len_glyph__i0__outline_points0 = 1;
          glyph[_i0].outline->points = (struct TYPE_9__ *) malloc(_len_glyph__i0__outline_points0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_glyph__i0__outline_points0; _j0++) {
            glyph[_i0].outline->points->x = ((-2 * (next_i()%2)) + 1) * next_i();
        glyph[_i0].outline->points->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          psh_glyph_load_points(glyph,dimension);
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].points);
          }
          for(int _aux = 0; _aux < _len_glyph0; _aux++) {
          free(glyph[_aux].outline);
          }
          free(glyph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

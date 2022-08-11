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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int* rgba; TYPE_1__* comp; } ;
struct TYPE_8__ {int nb_planes; } ;
struct TYPE_7__ {int* u8; } ;
typedef  TYPE_2__ FFDrawContext ;
typedef  TYPE_3__ FFDrawColor ;

/* Variables and functions */

__attribute__((used)) static void reverse_color8(FFDrawContext *draw, FFDrawColor *color, FFDrawColor *reverse)
{
    int p;

    reverse->rgba[3] = 255;
    for (p = 0; p < draw->nb_planes; p++) {
        reverse->comp[p].u8[0] = color->comp[p].u8[0] > 127 ? 0 : 255;
        reverse->comp[p].u8[1] = color->comp[p].u8[1] > 127 ? 0 : 255;
        reverse->comp[p].u8[2] = color->comp[p].u8[2] > 127 ? 0 : 255;
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
          int _len_draw0 = 1;
          struct TYPE_8__ * draw = (struct TYPE_8__ *) malloc(_len_draw0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 1;
          struct TYPE_9__ * color = (struct TYPE_9__ *) malloc(_len_color0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_7__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_reverse0 = 1;
          struct TYPE_9__ * reverse = (struct TYPE_9__ *) malloc(_len_reverse0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_reverse0; _i0++) {
              int _len_reverse__i0__rgba0 = 1;
          reverse[_i0].rgba = (int *) malloc(_len_reverse__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__rgba0; _j0++) {
            reverse[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reverse__i0__comp0 = 1;
          reverse[_i0].comp = (struct TYPE_7__ *) malloc(_len_reverse__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp0; _j0++) {
              int _len_reverse__i0__comp_u80 = 1;
          reverse[_i0].comp->u8 = (int *) malloc(_len_reverse__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp_u80; _j0++) {
            reverse[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reverse_color8(draw,color,reverse);
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].comp);
          }
          free(reverse);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_draw0 = 65025;
          struct TYPE_8__ * draw = (struct TYPE_8__ *) malloc(_len_draw0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 65025;
          struct TYPE_9__ * color = (struct TYPE_9__ *) malloc(_len_color0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_7__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_reverse0 = 65025;
          struct TYPE_9__ * reverse = (struct TYPE_9__ *) malloc(_len_reverse0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_reverse0; _i0++) {
              int _len_reverse__i0__rgba0 = 1;
          reverse[_i0].rgba = (int *) malloc(_len_reverse__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__rgba0; _j0++) {
            reverse[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reverse__i0__comp0 = 1;
          reverse[_i0].comp = (struct TYPE_7__ *) malloc(_len_reverse__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp0; _j0++) {
              int _len_reverse__i0__comp_u80 = 1;
          reverse[_i0].comp->u8 = (int *) malloc(_len_reverse__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp_u80; _j0++) {
            reverse[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reverse_color8(draw,color,reverse);
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].comp);
          }
          free(reverse);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_draw0 = 100;
          struct TYPE_8__ * draw = (struct TYPE_8__ *) malloc(_len_draw0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color0 = 100;
          struct TYPE_9__ * color = (struct TYPE_9__ *) malloc(_len_color0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_7__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_reverse0 = 100;
          struct TYPE_9__ * reverse = (struct TYPE_9__ *) malloc(_len_reverse0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_reverse0; _i0++) {
              int _len_reverse__i0__rgba0 = 1;
          reverse[_i0].rgba = (int *) malloc(_len_reverse__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__rgba0; _j0++) {
            reverse[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reverse__i0__comp0 = 1;
          reverse[_i0].comp = (struct TYPE_7__ *) malloc(_len_reverse__i0__comp0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp0; _j0++) {
              int _len_reverse__i0__comp_u80 = 1;
          reverse[_i0].comp->u8 = (int *) malloc(_len_reverse__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reverse__i0__comp_u80; _j0++) {
            reverse[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reverse_color8(draw,color,reverse);
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_reverse0; _aux++) {
          free(reverse[_aux].comp);
          }
          free(reverse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

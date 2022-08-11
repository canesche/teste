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
struct TYPE_3__ {size_t bgindex; int w; int h; int /*<<< orphan*/ * out; int /*<<< orphan*/ ** pal; } ;
typedef  TYPE_1__ stbi_gif ;
typedef  int /*<<< orphan*/  stbi__uint8 ;

/* Variables and functions */

__attribute__((used)) static void stbi_fill_gif_background(stbi_gif *g)
{
   int i;
   stbi__uint8 *c = g->pal[g->bgindex];
   // @OPTIMIZE: write a dword at a time
   for (i = 0; i < g->w * g->h * 4; i += 4) {
      stbi__uint8 *p  = &g->out[i];
      p[0] = c[2];
      p[1] = c[1];
      p[2] = c[0];
      p[3] = c[3];
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
          int _len_g0 = 1;
          struct TYPE_3__ * g = (struct TYPE_3__ *) malloc(_len_g0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].bgindex = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__out0 = 1;
          g[_i0].out = (int *) malloc(_len_g__i0__out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__out0; _j0++) {
            g[_i0].out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g__i0__pal0 = 1;
          g[_i0].pal = (int **) malloc(_len_g__i0__pal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_g__i0__pal0; _j0++) {
            int _len_g__i0__pal1 = 1;
            g[_i0].pal[_j0] = (int *) malloc(_len_g__i0__pal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_g__i0__pal1; _j1++) {
              g[_i0].pal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          stbi_fill_gif_background(g);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].out);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(*(g[_aux].pal));
        free(g[_aux].pal);
          }
          free(g);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_g0 = 65025;
          struct TYPE_3__ * g = (struct TYPE_3__ *) malloc(_len_g0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].bgindex = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__out0 = 1;
          g[_i0].out = (int *) malloc(_len_g__i0__out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__out0; _j0++) {
            g[_i0].out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g__i0__pal0 = 1;
          g[_i0].pal = (int **) malloc(_len_g__i0__pal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_g__i0__pal0; _j0++) {
            int _len_g__i0__pal1 = 1;
            g[_i0].pal[_j0] = (int *) malloc(_len_g__i0__pal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_g__i0__pal1; _j1++) {
              g[_i0].pal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          stbi_fill_gif_background(g);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].out);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(*(g[_aux].pal));
        free(g[_aux].pal);
          }
          free(g);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_g0 = 100;
          struct TYPE_3__ * g = (struct TYPE_3__ *) malloc(_len_g0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].bgindex = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__out0 = 1;
          g[_i0].out = (int *) malloc(_len_g__i0__out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__out0; _j0++) {
            g[_i0].out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g__i0__pal0 = 1;
          g[_i0].pal = (int **) malloc(_len_g__i0__pal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_g__i0__pal0; _j0++) {
            int _len_g__i0__pal1 = 1;
            g[_i0].pal[_j0] = (int *) malloc(_len_g__i0__pal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_g__i0__pal1; _j1++) {
              g[_i0].pal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          stbi_fill_gif_background(g);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].out);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(*(g[_aux].pal));
        free(g[_aux].pal);
          }
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

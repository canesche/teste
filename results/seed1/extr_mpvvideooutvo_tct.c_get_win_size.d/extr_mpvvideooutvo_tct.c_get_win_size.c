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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* opts; } ;
struct TYPE_2__ {int width; int height; } ;

/* Variables and functions */
 int DEFAULT_HEIGHT ; 
 int DEFAULT_WIDTH ; 

__attribute__((used)) static void get_win_size(struct vo *vo, int *out_width, int *out_height) {
    struct priv *p = vo->priv;
    *out_width = DEFAULT_WIDTH;
    *out_height = DEFAULT_HEIGHT;
#if HAVE_POSIX
    struct winsize winsize;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &winsize) >= 0) {
        *out_width = winsize.ws_col;
        *out_height = winsize.ws_row;
    }
#endif

    if (p->opts->width > 0)
        *out_width = p->opts->width;
    if (p->opts->height > 0)
        *out_height = p->opts->height;
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
          int _len_vo0 = 1;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              int _len_vo__i0__priv_opts0 = 1;
          vo[_i0].priv->opts = (struct TYPE_2__ *) malloc(_len_vo__i0__priv_opts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv_opts0; _j0++) {
            vo[_i0].priv->opts->width = ((-2 * (next_i()%2)) + 1) * next_i();
        vo[_i0].priv->opts->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_out_width0 = 1;
          int * out_width = (int *) malloc(_len_out_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_width0; _i0++) {
            out_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_height0 = 1;
          int * out_height = (int *) malloc(_len_out_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_height0; _i0++) {
            out_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_win_size(vo,out_width,out_height);
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
          free(out_width);
          free(out_height);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vo0 = 65025;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              int _len_vo__i0__priv_opts0 = 1;
          vo[_i0].priv->opts = (struct TYPE_2__ *) malloc(_len_vo__i0__priv_opts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv_opts0; _j0++) {
            vo[_i0].priv->opts->width = ((-2 * (next_i()%2)) + 1) * next_i();
        vo[_i0].priv->opts->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_out_width0 = 65025;
          int * out_width = (int *) malloc(_len_out_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_width0; _i0++) {
            out_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_height0 = 65025;
          int * out_height = (int *) malloc(_len_out_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_height0; _i0++) {
            out_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_win_size(vo,out_width,out_height);
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
          free(out_width);
          free(out_height);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vo0 = 100;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__priv0 = 1;
          vo[_i0].priv = (struct priv *) malloc(_len_vo__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv0; _j0++) {
              int _len_vo__i0__priv_opts0 = 1;
          vo[_i0].priv->opts = (struct TYPE_2__ *) malloc(_len_vo__i0__priv_opts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vo__i0__priv_opts0; _j0++) {
            vo[_i0].priv->opts->width = ((-2 * (next_i()%2)) + 1) * next_i();
        vo[_i0].priv->opts->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_out_width0 = 100;
          int * out_width = (int *) malloc(_len_out_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_width0; _i0++) {
            out_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_height0 = 100;
          int * out_height = (int *) malloc(_len_out_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_height0; _i0++) {
            out_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_win_size(vo,out_width,out_height);
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].priv);
          }
          free(vo);
          free(out_width);
          free(out_height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

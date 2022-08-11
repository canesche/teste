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
struct w100fb_par {TYPE_1__* mach; } ;
struct w100_mode {unsigned int xres; unsigned int yres; } ;
struct TYPE_2__ {unsigned int num_modes; struct w100_mode* modelist; } ;

/* Variables and functions */

__attribute__((used)) static struct w100_mode *w100fb_get_mode(struct w100fb_par *par, unsigned int *x, unsigned int *y, int saveval)
{
	struct w100_mode *mode = NULL;
	struct w100_mode *modelist = par->mach->modelist;
	unsigned int best_x = 0xffffffff, best_y = 0xffffffff;
	unsigned int i;

	for (i = 0 ; i < par->mach->num_modes ; i++) {
		if (modelist[i].xres >= *x && modelist[i].yres >= *y &&
				modelist[i].xres < best_x && modelist[i].yres < best_y) {
			best_x = modelist[i].xres;
			best_y = modelist[i].yres;
			mode = &modelist[i];
		} else if(modelist[i].xres >= *y && modelist[i].yres >= *x &&
		        modelist[i].xres < best_y && modelist[i].yres < best_x) {
			best_x = modelist[i].yres;
			best_y = modelist[i].xres;
			mode = &modelist[i];
		}
	}

	if (mode && saveval) {
		*x = best_x;
		*y = best_y;
	}

	return mode;
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
          int saveval = 100;
          int _len_par0 = 1;
          struct w100fb_par * par = (struct w100fb_par *) malloc(_len_par0*sizeof(struct w100fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              int _len_par__i0__mach0 = 1;
          par[_i0].mach = (struct TYPE_2__ *) malloc(_len_par__i0__mach0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_par__i0__mach0; _j0++) {
            par[_i0].mach->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__mach_modelist0 = 1;
          par[_i0].mach->modelist = (struct w100_mode *) malloc(_len_par__i0__mach_modelist0*sizeof(struct w100_mode));
          for(int _j0 = 0; _j0 < _len_par__i0__mach_modelist0; _j0++) {
            par[_i0].mach->modelist->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].mach->modelist->yres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_x0 = 1;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct w100_mode * benchRet = w100fb_get_mode(par,x,y,saveval);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          for(int _aux = 0; _aux < _len_par0; _aux++) {
          free(par[_aux].mach);
          }
          free(par);
          free(x);
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int saveval = 255;
          int _len_par0 = 65025;
          struct w100fb_par * par = (struct w100fb_par *) malloc(_len_par0*sizeof(struct w100fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              int _len_par__i0__mach0 = 1;
          par[_i0].mach = (struct TYPE_2__ *) malloc(_len_par__i0__mach0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_par__i0__mach0; _j0++) {
            par[_i0].mach->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__mach_modelist0 = 1;
          par[_i0].mach->modelist = (struct w100_mode *) malloc(_len_par__i0__mach_modelist0*sizeof(struct w100_mode));
          for(int _j0 = 0; _j0 < _len_par__i0__mach_modelist0; _j0++) {
            par[_i0].mach->modelist->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].mach->modelist->yres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_x0 = 65025;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct w100_mode * benchRet = w100fb_get_mode(par,x,y,saveval);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          for(int _aux = 0; _aux < _len_par0; _aux++) {
          free(par[_aux].mach);
          }
          free(par);
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int saveval = 10;
          int _len_par0 = 100;
          struct w100fb_par * par = (struct w100fb_par *) malloc(_len_par0*sizeof(struct w100fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              int _len_par__i0__mach0 = 1;
          par[_i0].mach = (struct TYPE_2__ *) malloc(_len_par__i0__mach0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_par__i0__mach0; _j0++) {
            par[_i0].mach->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_par__i0__mach_modelist0 = 1;
          par[_i0].mach->modelist = (struct w100_mode *) malloc(_len_par__i0__mach_modelist0*sizeof(struct w100_mode));
          for(int _j0 = 0; _j0 < _len_par__i0__mach_modelist0; _j0++) {
            par[_i0].mach->modelist->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].mach->modelist->yres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_x0 = 100;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct w100_mode * benchRet = w100fb_get_mode(par,x,y,saveval);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          for(int _aux = 0; _aux < _len_par0; _aux++) {
          free(par[_aux].mach);
          }
          free(par);
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

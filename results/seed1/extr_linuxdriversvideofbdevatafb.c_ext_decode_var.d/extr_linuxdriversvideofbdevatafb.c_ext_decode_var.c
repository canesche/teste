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
struct fb_var_screeninfo {scalar_t__ bits_per_pixel; scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct atafb_par {int next_line; } ;

/* Variables and functions */
 int EINVAL ; 
 struct fb_var_screeninfo* atafb_predefined ; 
 int external_depth ; 
 int external_xres_virtual ; 

__attribute__((used)) static int ext_decode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
{
	struct fb_var_screeninfo *myvar = &atafb_predefined[0];

	if (var->bits_per_pixel > myvar->bits_per_pixel ||
	    var->xres > myvar->xres ||
	    var->xres_virtual > myvar->xres_virtual ||
	    var->yres > myvar->yres ||
	    var->xoffset > 0 ||
	    var->yoffset > 0)
		return -EINVAL;

	par->next_line = external_xres_virtual * external_depth / 8;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct atafb_par * par = (struct atafb_par *) malloc(_len_par0*sizeof(struct atafb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].next_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_decode_var(var,par);
          printf("%d\n", benchRet); 
          free(var);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 65025;
          struct atafb_par * par = (struct atafb_par *) malloc(_len_par0*sizeof(struct atafb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].next_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_decode_var(var,par);
          printf("%d\n", benchRet); 
          free(var);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 100;
          struct atafb_par * par = (struct atafb_par *) malloc(_len_par0*sizeof(struct atafb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].next_line = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext_decode_var(var,par);
          printf("%d\n", benchRet); 
          free(var);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

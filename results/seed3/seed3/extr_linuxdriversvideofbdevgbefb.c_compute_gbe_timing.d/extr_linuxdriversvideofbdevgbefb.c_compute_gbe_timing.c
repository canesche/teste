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
struct gbe_timing_info {int width; int height; int pll_m; int pll_n; int pll_p; int cfreq; int htotal; int vtotal; int fields_sec; int hblank_start; int vblank_start; int hblank_end; int hsync_start; int hsync_end; int vblank_end; int vsync_start; int vsync_end; } ;
struct gbe_pll_info {int clock_rate; int fvco_min; int fvco_max; } ;
struct fb_var_screeninfo {int pixclock; int xres; int yres; int left_margin; int right_margin; int hsync_len; int upper_margin; int lower_margin; int vsync_len; } ;

/* Variables and functions */
 int EINVAL ; 
 struct gbe_pll_info* gbe_pll_table ; 
 int gbe_revision ; 

__attribute__((used)) static int compute_gbe_timing(struct fb_var_screeninfo *var,
			      struct gbe_timing_info *timing)
{
	int pll_m, pll_n, pll_p, error, best_m, best_n, best_p, best_error;
	int pixclock;
	struct gbe_pll_info *gbe_pll;

	if (gbe_revision < 2)
		gbe_pll = &gbe_pll_table[0];
	else
		gbe_pll = &gbe_pll_table[1];

	/* Determine valid resolution and timing
	 * GBE crystal runs at 20Mhz or 27Mhz
	 * pll_m, pll_n, pll_p define the following frequencies
	 * fvco = pll_m * 20Mhz / pll_n
	 * fout = fvco / (2**pll_p) */
	best_error = 1000000000;
	best_n = best_m = best_p = 0;
	for (pll_p = 0; pll_p < 4; pll_p++)
		for (pll_m = 1; pll_m < 256; pll_m++)
			for (pll_n = 1; pll_n < 64; pll_n++) {
				pixclock = (1000000 / gbe_pll->clock_rate) *
						(pll_n << pll_p) / pll_m;

				error = var->pixclock - pixclock;

				if (error < 0)
					error = -error;

				if (error < best_error &&
				    pll_m / pll_n >
				    gbe_pll->fvco_min / gbe_pll->clock_rate &&
 				    pll_m / pll_n <
				    gbe_pll->fvco_max / gbe_pll->clock_rate) {
					best_error = error;
					best_m = pll_m;
					best_n = pll_n;
					best_p = pll_p;
				}
			}

	if (!best_n || !best_m)
		return -EINVAL;	/* Resolution to high */

	pixclock = (1000000 / gbe_pll->clock_rate) *
		(best_n << best_p) / best_m;

	/* set video timing information */
	if (timing) {
		timing->width = var->xres;
		timing->height = var->yres;
		timing->pll_m = best_m;
		timing->pll_n = best_n;
		timing->pll_p = best_p;
		timing->cfreq = gbe_pll->clock_rate * 1000 * timing->pll_m /
			(timing->pll_n << timing->pll_p);
		timing->htotal = var->left_margin + var->xres +
				var->right_margin + var->hsync_len;
		timing->vtotal = var->upper_margin + var->yres +
				var->lower_margin + var->vsync_len;
		timing->fields_sec = 1000 * timing->cfreq / timing->htotal *
				1000 / timing->vtotal;
		timing->hblank_start = var->xres;
		timing->vblank_start = var->yres;
		timing->hblank_end = timing->htotal;
		timing->hsync_start = var->xres + var->right_margin + 1;
		timing->hsync_end = timing->hsync_start + var->hsync_len;
		timing->vblank_end = timing->vtotal;
		timing->vsync_start = var->yres + var->lower_margin + 1;
		timing->vsync_end = timing->vsync_start + var->vsync_len;
	}

	return pixclock;
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
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timing0 = 1;
          struct gbe_timing_info * timing = (struct gbe_timing_info *) malloc(_len_timing0*sizeof(struct gbe_timing_info));
          for(int _i0 = 0; _i0 < _len_timing0; _i0++) {
            timing[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_m = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_n = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_p = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].cfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].htotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].fields_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_gbe_timing(var,timing);
          printf("%d\n", benchRet); 
          free(var);
          free(timing);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timing0 = 65025;
          struct gbe_timing_info * timing = (struct gbe_timing_info *) malloc(_len_timing0*sizeof(struct gbe_timing_info));
          for(int _i0 = 0; _i0 < _len_timing0; _i0++) {
            timing[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_m = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_n = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_p = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].cfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].htotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].fields_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_gbe_timing(var,timing);
          printf("%d\n", benchRet); 
          free(var);
          free(timing);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].left_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].right_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].hsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].upper_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].lower_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vsync_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timing0 = 100;
          struct gbe_timing_info * timing = (struct gbe_timing_info *) malloc(_len_timing0*sizeof(struct gbe_timing_info));
          for(int _i0 = 0; _i0 < _len_timing0; _i0++) {
            timing[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_m = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_n = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].pll_p = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].cfreq = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].htotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].fields_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].hsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_gbe_timing(var,timing);
          printf("%d\n", benchRet); 
          free(var);
          free(timing);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

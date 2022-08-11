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
struct omap3isp_hist_config {scalar_t__ cfa; scalar_t__ num_acc_frames; scalar_t__ hist_bins; scalar_t__* wg; int num_regions; TYPE_1__* region; } ;
struct ispstat {struct omap3isp_hist_config* priv; } ;
struct TYPE_2__ {scalar_t__ h_start; scalar_t__ h_end; scalar_t__ v_start; scalar_t__ v_end; } ;

/* Variables and functions */
 scalar_t__ OMAP3ISP_HIST_CFA_FOVEONX3 ; 
 int OMAP3ISP_HIST_MAX_WG ; 

__attribute__((used)) static int hist_comp_params(struct ispstat *hist,
			    struct omap3isp_hist_config *user_cfg)
{
	struct omap3isp_hist_config *cur_cfg = hist->priv;
	int c;

	if (cur_cfg->cfa != user_cfg->cfa)
		return 1;

	if (cur_cfg->num_acc_frames != user_cfg->num_acc_frames)
		return 1;

	if (cur_cfg->hist_bins != user_cfg->hist_bins)
		return 1;

	for (c = 0; c < OMAP3ISP_HIST_MAX_WG; c++) {
		if (c == 3 && user_cfg->cfa == OMAP3ISP_HIST_CFA_FOVEONX3)
			break;
		else if (cur_cfg->wg[c] != user_cfg->wg[c])
			return 1;
	}

	if (cur_cfg->num_regions != user_cfg->num_regions)
		return 1;

	/* Regions */
	for (c = 0; c < user_cfg->num_regions; c++) {
		if (cur_cfg->region[c].h_start != user_cfg->region[c].h_start)
			return 1;
		if (cur_cfg->region[c].h_end != user_cfg->region[c].h_end)
			return 1;
		if (cur_cfg->region[c].v_start != user_cfg->region[c].v_start)
			return 1;
		if (cur_cfg->region[c].v_end != user_cfg->region[c].v_end)
			return 1;
	}

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
          int _len_hist0 = 1;
          struct ispstat * hist = (struct ispstat *) malloc(_len_hist0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
              int _len_hist__i0__priv0 = 1;
          hist[_i0].priv = (struct omap3isp_hist_config *) malloc(_len_hist__i0__priv0*sizeof(struct omap3isp_hist_config));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv0; _j0++) {
            hist[_i0].priv->cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_wg0 = 1;
          hist[_i0].priv->wg = (long *) malloc(_len_hist__i0__priv_wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_wg0; _j0++) {
            hist[_i0].priv->wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hist[_i0].priv->num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_region0 = 1;
          hist[_i0].priv->region = (struct TYPE_2__ *) malloc(_len_hist__i0__priv_region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_region0; _j0++) {
            hist[_i0].priv->region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_user_cfg0 = 1;
          struct omap3isp_hist_config * user_cfg = (struct omap3isp_hist_config *) malloc(_len_user_cfg0*sizeof(struct omap3isp_hist_config));
          for(int _i0 = 0; _i0 < _len_user_cfg0; _i0++) {
            user_cfg[_i0].cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__wg0 = 1;
          user_cfg[_i0].wg = (long *) malloc(_len_user_cfg__i0__wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__wg0; _j0++) {
            user_cfg[_i0].wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        user_cfg[_i0].num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__region0 = 1;
          user_cfg[_i0].region = (struct TYPE_2__ *) malloc(_len_user_cfg__i0__region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__region0; _j0++) {
            user_cfg[_i0].region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hist_comp_params(hist,user_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist0; _aux++) {
          free(hist[_aux].priv);
          }
          free(hist);
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].wg);
          }
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].region);
          }
          free(user_cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hist0 = 65025;
          struct ispstat * hist = (struct ispstat *) malloc(_len_hist0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
              int _len_hist__i0__priv0 = 1;
          hist[_i0].priv = (struct omap3isp_hist_config *) malloc(_len_hist__i0__priv0*sizeof(struct omap3isp_hist_config));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv0; _j0++) {
            hist[_i0].priv->cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_wg0 = 1;
          hist[_i0].priv->wg = (long *) malloc(_len_hist__i0__priv_wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_wg0; _j0++) {
            hist[_i0].priv->wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hist[_i0].priv->num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_region0 = 1;
          hist[_i0].priv->region = (struct TYPE_2__ *) malloc(_len_hist__i0__priv_region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_region0; _j0++) {
            hist[_i0].priv->region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_user_cfg0 = 65025;
          struct omap3isp_hist_config * user_cfg = (struct omap3isp_hist_config *) malloc(_len_user_cfg0*sizeof(struct omap3isp_hist_config));
          for(int _i0 = 0; _i0 < _len_user_cfg0; _i0++) {
            user_cfg[_i0].cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__wg0 = 1;
          user_cfg[_i0].wg = (long *) malloc(_len_user_cfg__i0__wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__wg0; _j0++) {
            user_cfg[_i0].wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        user_cfg[_i0].num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__region0 = 1;
          user_cfg[_i0].region = (struct TYPE_2__ *) malloc(_len_user_cfg__i0__region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__region0; _j0++) {
            user_cfg[_i0].region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hist_comp_params(hist,user_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist0; _aux++) {
          free(hist[_aux].priv);
          }
          free(hist);
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].wg);
          }
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].region);
          }
          free(user_cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hist0 = 100;
          struct ispstat * hist = (struct ispstat *) malloc(_len_hist0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
              int _len_hist__i0__priv0 = 1;
          hist[_i0].priv = (struct omap3isp_hist_config *) malloc(_len_hist__i0__priv0*sizeof(struct omap3isp_hist_config));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv0; _j0++) {
            hist[_i0].priv->cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_wg0 = 1;
          hist[_i0].priv->wg = (long *) malloc(_len_hist__i0__priv_wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_wg0; _j0++) {
            hist[_i0].priv->wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hist[_i0].priv->num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hist__i0__priv_region0 = 1;
          hist[_i0].priv->region = (struct TYPE_2__ *) malloc(_len_hist__i0__priv_region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hist__i0__priv_region0; _j0++) {
            hist[_i0].priv->region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        hist[_i0].priv->region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_user_cfg0 = 100;
          struct omap3isp_hist_config * user_cfg = (struct omap3isp_hist_config *) malloc(_len_user_cfg0*sizeof(struct omap3isp_hist_config));
          for(int _i0 = 0; _i0 < _len_user_cfg0; _i0++) {
            user_cfg[_i0].cfa = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].num_acc_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].hist_bins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__wg0 = 1;
          user_cfg[_i0].wg = (long *) malloc(_len_user_cfg__i0__wg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__wg0; _j0++) {
            user_cfg[_i0].wg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        user_cfg[_i0].num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_user_cfg__i0__region0 = 1;
          user_cfg[_i0].region = (struct TYPE_2__ *) malloc(_len_user_cfg__i0__region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_user_cfg__i0__region0; _j0++) {
            user_cfg[_i0].region->h_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->h_end = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_start = ((-2 * (next_i()%2)) + 1) * next_i();
        user_cfg[_i0].region->v_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hist_comp_params(hist,user_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hist0; _aux++) {
          free(hist[_aux].priv);
          }
          free(hist);
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].wg);
          }
          for(int _aux = 0; _aux < _len_user_cfg0; _aux++) {
          free(user_cfg[_aux].region);
          }
          free(user_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

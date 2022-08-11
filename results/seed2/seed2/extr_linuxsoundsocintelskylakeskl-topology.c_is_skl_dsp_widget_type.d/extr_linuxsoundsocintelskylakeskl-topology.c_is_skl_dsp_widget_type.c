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
struct snd_soc_dapm_widget {int id; TYPE_1__* dapm; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;

/* Variables and functions */
#define  snd_soc_dapm_aif_in 135 
#define  snd_soc_dapm_aif_out 134 
#define  snd_soc_dapm_dai_in 133 
#define  snd_soc_dapm_dai_link 132 
#define  snd_soc_dapm_dai_out 131 
#define  snd_soc_dapm_mux 130 
#define  snd_soc_dapm_output 129 
#define  snd_soc_dapm_switch 128 

__attribute__((used)) static int is_skl_dsp_widget_type(struct snd_soc_dapm_widget *w,
				  struct device *dev)
{
	if (w->dapm->dev != dev)
		return false;

	switch (w->id) {
	case snd_soc_dapm_dai_link:
	case snd_soc_dapm_dai_in:
	case snd_soc_dapm_aif_in:
	case snd_soc_dapm_aif_out:
	case snd_soc_dapm_dai_out:
	case snd_soc_dapm_switch:
	case snd_soc_dapm_output:
	case snd_soc_dapm_mux:

		return false;
	default:
		return true;
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
          int _len_w0 = 1;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__dapm0 = 1;
          w[_i0].dapm = (struct TYPE_2__ *) malloc(_len_w__i0__dapm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm0; _j0++) {
              int _len_w__i0__dapm_dev0 = 1;
          w[_i0].dapm->dev = (struct device *) malloc(_len_w__i0__dapm_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm_dev0; _j0++) {
            w[_i0].dapm->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_skl_dsp_widget_type(w,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].dapm);
          }
          free(w);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_w0 = 65025;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__dapm0 = 1;
          w[_i0].dapm = (struct TYPE_2__ *) malloc(_len_w__i0__dapm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm0; _j0++) {
              int _len_w__i0__dapm_dev0 = 1;
          w[_i0].dapm->dev = (struct device *) malloc(_len_w__i0__dapm_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm_dev0; _j0++) {
            w[_i0].dapm->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_skl_dsp_widget_type(w,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].dapm);
          }
          free(w);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_w0 = 100;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__dapm0 = 1;
          w[_i0].dapm = (struct TYPE_2__ *) malloc(_len_w__i0__dapm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm0; _j0++) {
              int _len_w__i0__dapm_dev0 = 1;
          w[_i0].dapm->dev = (struct device *) malloc(_len_w__i0__dapm_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_w__i0__dapm_dev0; _j0++) {
            w[_i0].dapm->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_skl_dsp_widget_type(w,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].dapm);
          }
          free(w);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

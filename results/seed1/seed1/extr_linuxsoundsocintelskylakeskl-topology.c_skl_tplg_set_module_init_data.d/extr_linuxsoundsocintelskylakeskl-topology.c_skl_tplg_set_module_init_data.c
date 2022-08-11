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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_3__ {scalar_t__ private; } ;
struct soc_bytes_ext {TYPE_1__ dobj; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol_new* kcontrol_news; struct skl_module_cfg* priv; } ;
struct snd_kcontrol_new {int access; scalar_t__ private_value; } ;
struct TYPE_4__ {int /*<<< orphan*/  caps_size; int /*<<< orphan*/ * caps; } ;
struct skl_module_cfg {TYPE_2__ formats_config; } ;
struct skl_algo_data {scalar_t__ set_params; int /*<<< orphan*/  size; scalar_t__ params; } ;

/* Variables and functions */
 scalar_t__ SKL_PARAM_INIT ; 
 int SNDRV_CTL_ELEM_ACCESS_TLV_CALLBACK ; 

__attribute__((used)) static int skl_tplg_set_module_init_data(struct snd_soc_dapm_widget *w)
{
	const struct snd_kcontrol_new *k;
	struct soc_bytes_ext *sb;
	struct skl_algo_data *bc;
	struct skl_module_cfg *mconfig = w->priv;
	int i;

	for (i = 0; i < w->num_kcontrols; i++) {
		k = &w->kcontrol_news[i];
		if (k->access & SNDRV_CTL_ELEM_ACCESS_TLV_CALLBACK) {
			sb = (struct soc_bytes_ext *)k->private_value;
			bc = (struct skl_algo_data *)sb->dobj.private;

			if (bc->set_params != SKL_PARAM_INIT)
				continue;

			mconfig->formats_config.caps = (u32 *)bc->params;
			mconfig->formats_config.caps_size = bc->size;

			break;
		}
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
          int _len_w0 = 1;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].num_kcontrols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__kcontrol_news0 = 1;
          w[_i0].kcontrol_news = (struct snd_kcontrol_new *) malloc(_len_w__i0__kcontrol_news0*sizeof(struct snd_kcontrol_new));
          for(int _j0 = 0; _j0 < _len_w__i0__kcontrol_news0; _j0++) {
            w[_i0].kcontrol_news->access = ((-2 * (next_i()%2)) + 1) * next_i();
        w[_i0].kcontrol_news->private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w__i0__priv0 = 1;
          w[_i0].priv = (struct skl_module_cfg *) malloc(_len_w__i0__priv0*sizeof(struct skl_module_cfg));
          for(int _j0 = 0; _j0 < _len_w__i0__priv0; _j0++) {
            w[_i0].priv->formats_config.caps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__priv_formats_config_caps0 = 1;
          w[_i0].priv->formats_config.caps = (int *) malloc(_len_w__i0__priv_formats_config_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_w__i0__priv_formats_config_caps0; _j0++) {
            w[_i0].priv->formats_config.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = skl_tplg_set_module_init_data(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].kcontrol_news);
          }
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].priv);
          }
          free(w);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_w0 = 65025;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].num_kcontrols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__kcontrol_news0 = 1;
          w[_i0].kcontrol_news = (struct snd_kcontrol_new *) malloc(_len_w__i0__kcontrol_news0*sizeof(struct snd_kcontrol_new));
          for(int _j0 = 0; _j0 < _len_w__i0__kcontrol_news0; _j0++) {
            w[_i0].kcontrol_news->access = ((-2 * (next_i()%2)) + 1) * next_i();
        w[_i0].kcontrol_news->private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w__i0__priv0 = 1;
          w[_i0].priv = (struct skl_module_cfg *) malloc(_len_w__i0__priv0*sizeof(struct skl_module_cfg));
          for(int _j0 = 0; _j0 < _len_w__i0__priv0; _j0++) {
            w[_i0].priv->formats_config.caps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__priv_formats_config_caps0 = 1;
          w[_i0].priv->formats_config.caps = (int *) malloc(_len_w__i0__priv_formats_config_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_w__i0__priv_formats_config_caps0; _j0++) {
            w[_i0].priv->formats_config.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = skl_tplg_set_module_init_data(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].kcontrol_news);
          }
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].priv);
          }
          free(w);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_w0 = 100;
          struct snd_soc_dapm_widget * w = (struct snd_soc_dapm_widget *) malloc(_len_w0*sizeof(struct snd_soc_dapm_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].num_kcontrols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__kcontrol_news0 = 1;
          w[_i0].kcontrol_news = (struct snd_kcontrol_new *) malloc(_len_w__i0__kcontrol_news0*sizeof(struct snd_kcontrol_new));
          for(int _j0 = 0; _j0 < _len_w__i0__kcontrol_news0; _j0++) {
            w[_i0].kcontrol_news->access = ((-2 * (next_i()%2)) + 1) * next_i();
        w[_i0].kcontrol_news->private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w__i0__priv0 = 1;
          w[_i0].priv = (struct skl_module_cfg *) malloc(_len_w__i0__priv0*sizeof(struct skl_module_cfg));
          for(int _j0 = 0; _j0 < _len_w__i0__priv0; _j0++) {
            w[_i0].priv->formats_config.caps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_w__i0__priv_formats_config_caps0 = 1;
          w[_i0].priv->formats_config.caps = (int *) malloc(_len_w__i0__priv_formats_config_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_w__i0__priv_formats_config_caps0; _j0++) {
            w[_i0].priv->formats_config.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = skl_tplg_set_module_init_data(w);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].kcontrol_news);
          }
          for(int _aux = 0; _aux < _len_w0; _aux++) {
          free(w[_aux].priv);
          }
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

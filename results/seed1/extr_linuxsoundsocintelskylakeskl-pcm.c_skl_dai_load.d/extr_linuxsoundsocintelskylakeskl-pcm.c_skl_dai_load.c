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
struct snd_soc_tplg_pcm {int dummy; } ;
struct snd_soc_dai_driver {int /*<<< orphan*/ * ops; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  skl_pcm_dai_ops ; 

int skl_dai_load(struct snd_soc_component *cmp, int index,
			struct snd_soc_dai_driver *dai_drv,
			struct snd_soc_tplg_pcm *pcm, struct snd_soc_dai *dai)
{
	dai_drv->ops = &skl_pcm_dai_ops;

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
          int index = 100;
          int _len_cmp0 = 1;
          struct snd_soc_component * cmp = (struct snd_soc_component *) malloc(_len_cmp0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_cmp0; _i0++) {
            cmp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai_drv0 = 1;
          struct snd_soc_dai_driver * dai_drv = (struct snd_soc_dai_driver *) malloc(_len_dai_drv0*sizeof(struct snd_soc_dai_driver));
          for(int _i0 = 0; _i0 < _len_dai_drv0; _i0++) {
              int _len_dai_drv__i0__ops0 = 1;
          dai_drv[_i0].ops = (int *) malloc(_len_dai_drv__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_drv__i0__ops0; _j0++) {
            dai_drv[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pcm0 = 1;
          struct snd_soc_tplg_pcm * pcm = (struct snd_soc_tplg_pcm *) malloc(_len_pcm0*sizeof(struct snd_soc_tplg_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai0 = 1;
          struct snd_soc_dai * dai = (struct snd_soc_dai *) malloc(_len_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
            dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skl_dai_load(cmp,index,dai_drv,pcm,dai);
          printf("%d\n", benchRet); 
          free(cmp);
          for(int _aux = 0; _aux < _len_dai_drv0; _aux++) {
          free(dai_drv[_aux].ops);
          }
          free(dai_drv);
          free(pcm);
          free(dai);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_cmp0 = 65025;
          struct snd_soc_component * cmp = (struct snd_soc_component *) malloc(_len_cmp0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_cmp0; _i0++) {
            cmp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai_drv0 = 65025;
          struct snd_soc_dai_driver * dai_drv = (struct snd_soc_dai_driver *) malloc(_len_dai_drv0*sizeof(struct snd_soc_dai_driver));
          for(int _i0 = 0; _i0 < _len_dai_drv0; _i0++) {
              int _len_dai_drv__i0__ops0 = 1;
          dai_drv[_i0].ops = (int *) malloc(_len_dai_drv__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_drv__i0__ops0; _j0++) {
            dai_drv[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pcm0 = 65025;
          struct snd_soc_tplg_pcm * pcm = (struct snd_soc_tplg_pcm *) malloc(_len_pcm0*sizeof(struct snd_soc_tplg_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai0 = 65025;
          struct snd_soc_dai * dai = (struct snd_soc_dai *) malloc(_len_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
            dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skl_dai_load(cmp,index,dai_drv,pcm,dai);
          printf("%d\n", benchRet); 
          free(cmp);
          for(int _aux = 0; _aux < _len_dai_drv0; _aux++) {
          free(dai_drv[_aux].ops);
          }
          free(dai_drv);
          free(pcm);
          free(dai);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_cmp0 = 100;
          struct snd_soc_component * cmp = (struct snd_soc_component *) malloc(_len_cmp0*sizeof(struct snd_soc_component));
          for(int _i0 = 0; _i0 < _len_cmp0; _i0++) {
            cmp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai_drv0 = 100;
          struct snd_soc_dai_driver * dai_drv = (struct snd_soc_dai_driver *) malloc(_len_dai_drv0*sizeof(struct snd_soc_dai_driver));
          for(int _i0 = 0; _i0 < _len_dai_drv0; _i0++) {
              int _len_dai_drv__i0__ops0 = 1;
          dai_drv[_i0].ops = (int *) malloc(_len_dai_drv__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dai_drv__i0__ops0; _j0++) {
            dai_drv[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pcm0 = 100;
          struct snd_soc_tplg_pcm * pcm = (struct snd_soc_tplg_pcm *) malloc(_len_pcm0*sizeof(struct snd_soc_tplg_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dai0 = 100;
          struct snd_soc_dai * dai = (struct snd_soc_dai *) malloc(_len_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
            dai[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skl_dai_load(cmp,index,dai_drv,pcm,dai);
          printf("%d\n", benchRet); 
          free(cmp);
          for(int _aux = 0; _aux < _len_dai_drv0; _aux++) {
          free(dai_drv[_aux].ops);
          }
          free(dai_drv);
          free(pcm);
          free(dai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

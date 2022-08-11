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
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int** dimm_csmap; int ranksperchan; } ;

/* Variables and functions */
 int I5100_MAX_DIMM_SLOTS_PER_CHAN ; 
 int I5100_MAX_RANKS_PER_DIMM ; 

__attribute__((used)) static void i5100_init_dimm_csmap(struct mem_ctl_info *mci)
{
	struct i5100_priv *priv = mci->pvt_info;
	int i;

	for (i = 0; i < I5100_MAX_DIMM_SLOTS_PER_CHAN; i++) {
		int j;

		for (j = 0; j < I5100_MAX_RANKS_PER_DIMM; j++)
			priv->dimm_csmap[i][j] = -1; /* default NC */
	}

	/* only 2 chip selects per slot... */
	if (priv->ranksperchan == 4) {
		priv->dimm_csmap[0][0] = 0;
		priv->dimm_csmap[0][1] = 3;
		priv->dimm_csmap[1][0] = 1;
		priv->dimm_csmap[1][1] = 2;
		priv->dimm_csmap[2][0] = 2;
		priv->dimm_csmap[3][0] = 3;
	} else {
		priv->dimm_csmap[0][0] = 0;
		priv->dimm_csmap[0][1] = 1;
		priv->dimm_csmap[1][0] = 2;
		priv->dimm_csmap[1][1] = 3;
		priv->dimm_csmap[2][0] = 4;
		priv->dimm_csmap[2][1] = 5;
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
          int _len_mci0 = 1;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct i5100_priv *) malloc(_len_mci__i0__pvt_info0*sizeof(struct i5100_priv));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
              int _len_mci__i0__pvt_info_dimm_csmap0 = 1;
          mci[_i0].pvt_info->dimm_csmap = (int **) malloc(_len_mci__i0__pvt_info_dimm_csmap0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info_dimm_csmap0; _j0++) {
            int _len_mci__i0__pvt_info_dimm_csmap1 = 1;
            mci[_i0].pvt_info->dimm_csmap[_j0] = (int *) malloc(_len_mci__i0__pvt_info_dimm_csmap1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mci__i0__pvt_info_dimm_csmap1; _j1++) {
              mci[_i0].pvt_info->dimm_csmap[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        mci[_i0].pvt_info->ranksperchan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i5100_init_dimm_csmap(mci);
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mci0 = 65025;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct i5100_priv *) malloc(_len_mci__i0__pvt_info0*sizeof(struct i5100_priv));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
              int _len_mci__i0__pvt_info_dimm_csmap0 = 1;
          mci[_i0].pvt_info->dimm_csmap = (int **) malloc(_len_mci__i0__pvt_info_dimm_csmap0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info_dimm_csmap0; _j0++) {
            int _len_mci__i0__pvt_info_dimm_csmap1 = 1;
            mci[_i0].pvt_info->dimm_csmap[_j0] = (int *) malloc(_len_mci__i0__pvt_info_dimm_csmap1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mci__i0__pvt_info_dimm_csmap1; _j1++) {
              mci[_i0].pvt_info->dimm_csmap[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        mci[_i0].pvt_info->ranksperchan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i5100_init_dimm_csmap(mci);
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mci0 = 100;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct i5100_priv *) malloc(_len_mci__i0__pvt_info0*sizeof(struct i5100_priv));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
              int _len_mci__i0__pvt_info_dimm_csmap0 = 1;
          mci[_i0].pvt_info->dimm_csmap = (int **) malloc(_len_mci__i0__pvt_info_dimm_csmap0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info_dimm_csmap0; _j0++) {
            int _len_mci__i0__pvt_info_dimm_csmap1 = 1;
            mci[_i0].pvt_info->dimm_csmap[_j0] = (int *) malloc(_len_mci__i0__pvt_info_dimm_csmap1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mci__i0__pvt_info_dimm_csmap1; _j1++) {
              mci[_i0].pvt_info->dimm_csmap[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        mci[_i0].pvt_info->ranksperchan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          i5100_init_dimm_csmap(mci);
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

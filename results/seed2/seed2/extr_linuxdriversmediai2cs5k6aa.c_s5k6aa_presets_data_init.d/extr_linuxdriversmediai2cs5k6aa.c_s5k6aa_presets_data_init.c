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
       3            linked\n\
       4            dlinked\n\
       5            bintree\n\
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
struct TYPE_3__ {int /*<<< orphan*/  code; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct s5k6aa_preset {int index; scalar_t__ clk_id; TYPE_1__ mbus_fmt; } ;
struct s5k6aa {struct s5k6aa_preset* presets; struct s5k6aa_preset* preset; int /*<<< orphan*/ * fiv; } ;
struct TYPE_4__ {int /*<<< orphan*/  code; } ;

/* Variables and functions */
 size_t S5K6AA_INTERVAL_DEF_INDEX ; 
 int S5K6AA_MAX_PRESETS ; 
 int /*<<< orphan*/  S5K6AA_OUT_HEIGHT_DEF ; 
 int /*<<< orphan*/  S5K6AA_OUT_WIDTH_DEF ; 
 TYPE_2__* s5k6aa_formats ; 
 int /*<<< orphan*/ * s5k6aa_intervals ; 

__attribute__((used)) static void s5k6aa_presets_data_init(struct s5k6aa *s5k6aa)
{
	struct s5k6aa_preset *preset = &s5k6aa->presets[0];
	int i;

	for (i = 0; i < S5K6AA_MAX_PRESETS; i++) {
		preset->mbus_fmt.width	= S5K6AA_OUT_WIDTH_DEF;
		preset->mbus_fmt.height	= S5K6AA_OUT_HEIGHT_DEF;
		preset->mbus_fmt.code	= s5k6aa_formats[0].code;
		preset->index		= i;
		preset->clk_id		= 0;
		preset++;
	}

	s5k6aa->fiv = &s5k6aa_intervals[S5K6AA_INTERVAL_DEF_INDEX];
	s5k6aa->preset = &s5k6aa->presets[0];
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
          int _len_s5k6aa0 = 1;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s5k6aa0 = 65025;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s5k6aa0 = 100;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_s5k6aa0 = 1;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }
    // dlinked
    case 4:
    {
          int _len_s5k6aa0 = 1;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }
    // bintree
    case 5:
    {
          int _len_s5k6aa0 = 1;
          struct s5k6aa * s5k6aa = (struct s5k6aa *) malloc(_len_s5k6aa0*sizeof(struct s5k6aa));
          for(int _i0 = 0; _i0 < _len_s5k6aa0; _i0++) {
              int _len_s5k6aa__i0__presets0 = 1;
          s5k6aa[_i0].presets = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__presets0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__presets0; _j0++) {
            s5k6aa[_i0].presets->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].presets->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__preset0 = 1;
          s5k6aa[_i0].preset = (struct s5k6aa_preset *) malloc(_len_s5k6aa__i0__preset0*sizeof(struct s5k6aa_preset));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__preset0; _j0++) {
            s5k6aa[_i0].preset->index = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->clk_id = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.code = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        s5k6aa[_i0].preset->mbus_fmt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s5k6aa__i0__fiv0 = 1;
          s5k6aa[_i0].fiv = (int *) malloc(_len_s5k6aa__i0__fiv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s5k6aa__i0__fiv0; _j0++) {
            s5k6aa[_i0].fiv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          s5k6aa_presets_data_init(s5k6aa);
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].presets);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].preset);
          }
          for(int _aux = 0; _aux < _len_s5k6aa0; _aux++) {
          free(s5k6aa[_aux].fiv);
          }
          free(s5k6aa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

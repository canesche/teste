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
struct gfs2_rgrpd {TYPE_2__* rd_bits; struct gfs2_rgrp_lvb* rd_rgl; } ;
struct gfs2_rgrp_lvb {scalar_t__ rl_flags; scalar_t__ rl_free; scalar_t__ rl_dinodes; scalar_t__ rl_igeneration; } ;
struct gfs2_rgrp {scalar_t__ rg_flags; scalar_t__ rg_free; scalar_t__ rg_dinodes; scalar_t__ rg_igeneration; } ;
struct TYPE_4__ {TYPE_1__* bi_bh; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;

/* Variables and functions */

__attribute__((used)) static int gfs2_rgrp_lvb_valid(struct gfs2_rgrpd *rgd)
{
	struct gfs2_rgrp_lvb *rgl = rgd->rd_rgl;
	struct gfs2_rgrp *str = (struct gfs2_rgrp *)rgd->rd_bits[0].bi_bh->b_data;

	if (rgl->rl_flags != str->rg_flags || rgl->rl_free != str->rg_free ||
	    rgl->rl_dinodes != str->rg_dinodes ||
	    rgl->rl_igeneration != str->rg_igeneration)
		return 0;
	return 1;
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
          int _len_rgd0 = 1;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
              int _len_rgd__i0__rd_bits0 = 1;
          rgd[_i0].rd_bits = (struct TYPE_4__ *) malloc(_len_rgd__i0__rd_bits0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits0; _j0++) {
              int _len_rgd__i0__rd_bits_bi_bh0 = 1;
          rgd[_i0].rd_bits->bi_bh = (struct TYPE_3__ *) malloc(_len_rgd__i0__rd_bits_bi_bh0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits_bi_bh0; _j0++) {
            rgd[_i0].rd_bits->bi_bh->b_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rgd__i0__rd_rgl0 = 1;
          rgd[_i0].rd_rgl = (struct gfs2_rgrp_lvb *) malloc(_len_rgd__i0__rd_rgl0*sizeof(struct gfs2_rgrp_lvb));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_rgl0; _j0++) {
            rgd[_i0].rd_rgl->rl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_free = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_dinodes = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_igeneration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gfs2_rgrp_lvb_valid(rgd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_bits);
          }
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_rgl);
          }
          free(rgd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rgd0 = 65025;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
              int _len_rgd__i0__rd_bits0 = 1;
          rgd[_i0].rd_bits = (struct TYPE_4__ *) malloc(_len_rgd__i0__rd_bits0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits0; _j0++) {
              int _len_rgd__i0__rd_bits_bi_bh0 = 1;
          rgd[_i0].rd_bits->bi_bh = (struct TYPE_3__ *) malloc(_len_rgd__i0__rd_bits_bi_bh0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits_bi_bh0; _j0++) {
            rgd[_i0].rd_bits->bi_bh->b_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rgd__i0__rd_rgl0 = 1;
          rgd[_i0].rd_rgl = (struct gfs2_rgrp_lvb *) malloc(_len_rgd__i0__rd_rgl0*sizeof(struct gfs2_rgrp_lvb));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_rgl0; _j0++) {
            rgd[_i0].rd_rgl->rl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_free = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_dinodes = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_igeneration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gfs2_rgrp_lvb_valid(rgd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_bits);
          }
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_rgl);
          }
          free(rgd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rgd0 = 100;
          struct gfs2_rgrpd * rgd = (struct gfs2_rgrpd *) malloc(_len_rgd0*sizeof(struct gfs2_rgrpd));
          for(int _i0 = 0; _i0 < _len_rgd0; _i0++) {
              int _len_rgd__i0__rd_bits0 = 1;
          rgd[_i0].rd_bits = (struct TYPE_4__ *) malloc(_len_rgd__i0__rd_bits0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits0; _j0++) {
              int _len_rgd__i0__rd_bits_bi_bh0 = 1;
          rgd[_i0].rd_bits->bi_bh = (struct TYPE_3__ *) malloc(_len_rgd__i0__rd_bits_bi_bh0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_bits_bi_bh0; _j0++) {
            rgd[_i0].rd_bits->bi_bh->b_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rgd__i0__rd_rgl0 = 1;
          rgd[_i0].rd_rgl = (struct gfs2_rgrp_lvb *) malloc(_len_rgd__i0__rd_rgl0*sizeof(struct gfs2_rgrp_lvb));
          for(int _j0 = 0; _j0 < _len_rgd__i0__rd_rgl0; _j0++) {
            rgd[_i0].rd_rgl->rl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_free = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_dinodes = ((-2 * (next_i()%2)) + 1) * next_i();
        rgd[_i0].rd_rgl->rl_igeneration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gfs2_rgrp_lvb_valid(rgd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_bits);
          }
          for(int _aux = 0; _aux < _len_rgd0; _aux++) {
          free(rgd[_aux].rd_rgl);
          }
          free(rgd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

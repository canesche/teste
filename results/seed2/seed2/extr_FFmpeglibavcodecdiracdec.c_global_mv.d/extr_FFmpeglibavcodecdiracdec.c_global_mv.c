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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
struct TYPE_8__ {int** mv; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_1__* globalmc; } ;
struct TYPE_7__ {int zrs_exp; int perspective_exp; int** zrs; int* pan_tilt; int* perspective; } ;
typedef  TYPE_3__ DiracContext ;
typedef  TYPE_4__ DiracBlock ;

/* Variables and functions */

__attribute__((used)) static void global_mv(DiracContext *s, DiracBlock *block, int x, int y, int ref)
{
    int ez      = s->globalmc[ref].zrs_exp;
    int ep      = s->globalmc[ref].perspective_exp;
    int (*A)[2] = s->globalmc[ref].zrs;
    int *b      = s->globalmc[ref].pan_tilt;
    int *c      = s->globalmc[ref].perspective;

    int64_t m   = (1<<ep) - (c[0]*(int64_t)x + c[1]*(int64_t)y);
    int64_t mx  = m * (int64_t)((A[0][0] * (int64_t)x + A[0][1]*(int64_t)y) + (1<<ez) * b[0]);
    int64_t my  = m * (int64_t)((A[1][0] * (int64_t)x + A[1][1]*(int64_t)y) + (1<<ez) * b[1]);

    block->u.mv[ref][0] = (mx + (1<<(ez+ep))) >> (ez+ep);
    block->u.mv[ref][1] = (my + (1<<(ez+ep))) >> (ez+ep);
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
          int x = 100;
          int y = 100;
          int ref = 100;
          int _len_s0 = 1;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__globalmc0 = 1;
          s[_i0].globalmc = (struct TYPE_7__ *) malloc(_len_s__i0__globalmc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc0; _j0++) {
            s[_i0].globalmc->zrs_exp = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].globalmc->perspective_exp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__globalmc_zrs0 = 1;
          s[_i0].globalmc->zrs = (int **) malloc(_len_s__i0__globalmc_zrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_zrs0; _j0++) {
            int _len_s__i0__globalmc_zrs1 = 1;
            s[_i0].globalmc->zrs[_j0] = (int *) malloc(_len_s__i0__globalmc_zrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__globalmc_zrs1; _j1++) {
              s[_i0].globalmc->zrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__globalmc_pan_tilt0 = 1;
          s[_i0].globalmc->pan_tilt = (int *) malloc(_len_s__i0__globalmc_pan_tilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_pan_tilt0; _j0++) {
            s[_i0].globalmc->pan_tilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__globalmc_perspective0 = 1;
          s[_i0].globalmc->perspective = (int *) malloc(_len_s__i0__globalmc_perspective0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_perspective0; _j0++) {
            s[_i0].globalmc->perspective[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_block0 = 1;
          struct TYPE_10__ * block = (struct TYPE_10__ *) malloc(_len_block0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              int _len_block__i0__u_mv0 = 1;
          block[_i0].u.mv = (int **) malloc(_len_block__i0__u_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_block__i0__u_mv0; _j0++) {
            int _len_block__i0__u_mv1 = 1;
            block[_i0].u.mv[_j0] = (int *) malloc(_len_block__i0__u_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_block__i0__u_mv1; _j1++) {
              block[_i0].u.mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          global_mv(s,block,x,y,ref);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].globalmc);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int ref = 255;
          int _len_s0 = 65025;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__globalmc0 = 1;
          s[_i0].globalmc = (struct TYPE_7__ *) malloc(_len_s__i0__globalmc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc0; _j0++) {
            s[_i0].globalmc->zrs_exp = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].globalmc->perspective_exp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__globalmc_zrs0 = 1;
          s[_i0].globalmc->zrs = (int **) malloc(_len_s__i0__globalmc_zrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_zrs0; _j0++) {
            int _len_s__i0__globalmc_zrs1 = 1;
            s[_i0].globalmc->zrs[_j0] = (int *) malloc(_len_s__i0__globalmc_zrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__globalmc_zrs1; _j1++) {
              s[_i0].globalmc->zrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__globalmc_pan_tilt0 = 1;
          s[_i0].globalmc->pan_tilt = (int *) malloc(_len_s__i0__globalmc_pan_tilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_pan_tilt0; _j0++) {
            s[_i0].globalmc->pan_tilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__globalmc_perspective0 = 1;
          s[_i0].globalmc->perspective = (int *) malloc(_len_s__i0__globalmc_perspective0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_perspective0; _j0++) {
            s[_i0].globalmc->perspective[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_block0 = 65025;
          struct TYPE_10__ * block = (struct TYPE_10__ *) malloc(_len_block0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              int _len_block__i0__u_mv0 = 1;
          block[_i0].u.mv = (int **) malloc(_len_block__i0__u_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_block__i0__u_mv0; _j0++) {
            int _len_block__i0__u_mv1 = 1;
            block[_i0].u.mv[_j0] = (int *) malloc(_len_block__i0__u_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_block__i0__u_mv1; _j1++) {
              block[_i0].u.mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          global_mv(s,block,x,y,ref);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].globalmc);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int ref = 10;
          int _len_s0 = 100;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__globalmc0 = 1;
          s[_i0].globalmc = (struct TYPE_7__ *) malloc(_len_s__i0__globalmc0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc0; _j0++) {
            s[_i0].globalmc->zrs_exp = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].globalmc->perspective_exp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__globalmc_zrs0 = 1;
          s[_i0].globalmc->zrs = (int **) malloc(_len_s__i0__globalmc_zrs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_zrs0; _j0++) {
            int _len_s__i0__globalmc_zrs1 = 1;
            s[_i0].globalmc->zrs[_j0] = (int *) malloc(_len_s__i0__globalmc_zrs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__globalmc_zrs1; _j1++) {
              s[_i0].globalmc->zrs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__globalmc_pan_tilt0 = 1;
          s[_i0].globalmc->pan_tilt = (int *) malloc(_len_s__i0__globalmc_pan_tilt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_pan_tilt0; _j0++) {
            s[_i0].globalmc->pan_tilt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__globalmc_perspective0 = 1;
          s[_i0].globalmc->perspective = (int *) malloc(_len_s__i0__globalmc_perspective0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__globalmc_perspective0; _j0++) {
            s[_i0].globalmc->perspective[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_block0 = 100;
          struct TYPE_10__ * block = (struct TYPE_10__ *) malloc(_len_block0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              int _len_block__i0__u_mv0 = 1;
          block[_i0].u.mv = (int **) malloc(_len_block__i0__u_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_block__i0__u_mv0; _j0++) {
            int _len_block__i0__u_mv1 = 1;
            block[_i0].u.mv[_j0] = (int *) malloc(_len_block__i0__u_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_block__i0__u_mv1; _j1++) {
              block[_i0].u.mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          global_mv(s,block,x,y,ref);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].globalmc);
          }
          free(s);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

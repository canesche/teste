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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint16_t ;
struct TYPE_4__ {int*** motion_val; } ;
struct TYPE_5__ {int* block_index; int pp_time; int pb_time; int*** mv; int** direct_scale_mv; TYPE_1__ next_picture; } ;
typedef  TYPE_2__ MpegEncContext ;

/* Variables and functions */
 int tab_bias ; 
 unsigned int tab_size ; 

__attribute__((used)) static inline void ff_mpeg4_set_one_direct_mv(MpegEncContext *s, int mx,
                                              int my, int i)
{
    int xy           = s->block_index[i];
    uint16_t time_pp = s->pp_time;
    uint16_t time_pb = s->pb_time;
    int p_mx, p_my;

    p_mx = s->next_picture.motion_val[0][xy][0];
    if ((unsigned)(p_mx + tab_bias) < tab_size) {
        s->mv[0][i][0] = s->direct_scale_mv[0][p_mx + tab_bias] + mx;
        s->mv[1][i][0] = mx ? s->mv[0][i][0] - p_mx
                            : s->direct_scale_mv[1][p_mx + tab_bias];
    } else {
        s->mv[0][i][0] = p_mx * time_pb / time_pp + mx;
        s->mv[1][i][0] = mx ? s->mv[0][i][0] - p_mx
                            : p_mx * (time_pb - time_pp) / time_pp;
    }
    p_my = s->next_picture.motion_val[0][xy][1];
    if ((unsigned)(p_my + tab_bias) < tab_size) {
        s->mv[0][i][1] = s->direct_scale_mv[0][p_my + tab_bias] + my;
        s->mv[1][i][1] = my ? s->mv[0][i][1] - p_my
                            : s->direct_scale_mv[1][p_my + tab_bias];
    } else {
        s->mv[0][i][1] = p_my * time_pb / time_pp + my;
        s->mv[1][i][1] = my ? s->mv[0][i][1] - p_my
                            : p_my * (time_pb - time_pp) / time_pp;
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
          int mx = 100;
          int my = 100;
          int i = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].pp_time = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pb_time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mv0 = 1;
          s[_i0].mv = (int ***) malloc(_len_s__i0__mv0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__mv0; _j0++) {
            int _len_s__i0__mv1 = 1;
            s[_i0].mv[_j0] = (int **) malloc(_len_s__i0__mv1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__mv1; _j1++) {
              int _len_s__i0__mv2 = 1;
              s[_i0].mv[_j0][_j1] = (int *) malloc(_len_s__i0__mv2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__mv2; _j2++) {
                s[_i0].mv[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__direct_scale_mv0 = 1;
          s[_i0].direct_scale_mv = (int **) malloc(_len_s__i0__direct_scale_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__direct_scale_mv0; _j0++) {
            int _len_s__i0__direct_scale_mv1 = 1;
            s[_i0].direct_scale_mv[_j0] = (int *) malloc(_len_s__i0__direct_scale_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__direct_scale_mv1; _j1++) {
              s[_i0].direct_scale_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__next_picture_motion_val0 = 1;
          s[_i0].next_picture.motion_val = (int ***) malloc(_len_s__i0__next_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__next_picture_motion_val0; _j0++) {
            int _len_s__i0__next_picture_motion_val1 = 1;
            s[_i0].next_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__next_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__next_picture_motion_val1; _j1++) {
              int _len_s__i0__next_picture_motion_val2 = 1;
              s[_i0].next_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__next_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__next_picture_motion_val2; _j2++) {
                s[_i0].next_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          ff_mpeg4_set_one_direct_mv(s,mx,my,i);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].direct_scale_mv));
        free(s[_aux].direct_scale_mv);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mx = 255;
          int my = 255;
          int i = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].pp_time = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pb_time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mv0 = 1;
          s[_i0].mv = (int ***) malloc(_len_s__i0__mv0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__mv0; _j0++) {
            int _len_s__i0__mv1 = 1;
            s[_i0].mv[_j0] = (int **) malloc(_len_s__i0__mv1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__mv1; _j1++) {
              int _len_s__i0__mv2 = 1;
              s[_i0].mv[_j0][_j1] = (int *) malloc(_len_s__i0__mv2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__mv2; _j2++) {
                s[_i0].mv[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__direct_scale_mv0 = 1;
          s[_i0].direct_scale_mv = (int **) malloc(_len_s__i0__direct_scale_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__direct_scale_mv0; _j0++) {
            int _len_s__i0__direct_scale_mv1 = 1;
            s[_i0].direct_scale_mv[_j0] = (int *) malloc(_len_s__i0__direct_scale_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__direct_scale_mv1; _j1++) {
              s[_i0].direct_scale_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__next_picture_motion_val0 = 1;
          s[_i0].next_picture.motion_val = (int ***) malloc(_len_s__i0__next_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__next_picture_motion_val0; _j0++) {
            int _len_s__i0__next_picture_motion_val1 = 1;
            s[_i0].next_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__next_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__next_picture_motion_val1; _j1++) {
              int _len_s__i0__next_picture_motion_val2 = 1;
              s[_i0].next_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__next_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__next_picture_motion_val2; _j2++) {
                s[_i0].next_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          ff_mpeg4_set_one_direct_mv(s,mx,my,i);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].direct_scale_mv));
        free(s[_aux].direct_scale_mv);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mx = 10;
          int my = 10;
          int i = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].pp_time = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pb_time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mv0 = 1;
          s[_i0].mv = (int ***) malloc(_len_s__i0__mv0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__mv0; _j0++) {
            int _len_s__i0__mv1 = 1;
            s[_i0].mv[_j0] = (int **) malloc(_len_s__i0__mv1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__mv1; _j1++) {
              int _len_s__i0__mv2 = 1;
              s[_i0].mv[_j0][_j1] = (int *) malloc(_len_s__i0__mv2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__mv2; _j2++) {
                s[_i0].mv[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__direct_scale_mv0 = 1;
          s[_i0].direct_scale_mv = (int **) malloc(_len_s__i0__direct_scale_mv0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__direct_scale_mv0; _j0++) {
            int _len_s__i0__direct_scale_mv1 = 1;
            s[_i0].direct_scale_mv[_j0] = (int *) malloc(_len_s__i0__direct_scale_mv1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__direct_scale_mv1; _j1++) {
              s[_i0].direct_scale_mv[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__next_picture_motion_val0 = 1;
          s[_i0].next_picture.motion_val = (int ***) malloc(_len_s__i0__next_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__next_picture_motion_val0; _j0++) {
            int _len_s__i0__next_picture_motion_val1 = 1;
            s[_i0].next_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__next_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__next_picture_motion_val1; _j1++) {
              int _len_s__i0__next_picture_motion_val2 = 1;
              s[_i0].next_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__next_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__next_picture_motion_val2; _j2++) {
                s[_i0].next_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          ff_mpeg4_set_one_direct_mv(s,mx,my,i);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].direct_scale_mv));
        free(s[_aux].direct_scale_mv);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

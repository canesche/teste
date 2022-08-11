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
struct TYPE_4__ {int*** motion_val; } ;
struct TYPE_5__ {int mb_x; int mb_y; int mb_stride; int** p_mv_table; int* block_index; TYPE_1__ current_picture; scalar_t__ b8_stride; } ;
typedef  TYPE_2__ MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static inline void set_p_mv_tables(MpegEncContext * s, int mx, int my, int mv4)
{
    const int xy= s->mb_x + s->mb_y*s->mb_stride;

    s->p_mv_table[xy][0] = mx;
    s->p_mv_table[xy][1] = my;

    /* has already been set to the 4 MV if 4MV is done */
    if(mv4){
        int mot_xy= s->block_index[0];

        s->current_picture.motion_val[0][mot_xy    ][0] = mx;
        s->current_picture.motion_val[0][mot_xy    ][1] = my;
        s->current_picture.motion_val[0][mot_xy + 1][0] = mx;
        s->current_picture.motion_val[0][mot_xy + 1][1] = my;

        mot_xy += s->b8_stride;
        s->current_picture.motion_val[0][mot_xy    ][0] = mx;
        s->current_picture.motion_val[0][mot_xy    ][1] = my;
        s->current_picture.motion_val[0][mot_xy + 1][0] = mx;
        s->current_picture.motion_val[0][mot_xy + 1][1] = my;
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
          int mv4 = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__p_mv_table0 = 1;
          s[_i0].p_mv_table = (int **) malloc(_len_s__i0__p_mv_table0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__p_mv_table0; _j0++) {
            int _len_s__i0__p_mv_table1 = 1;
            s[_i0].p_mv_table[_j0] = (int *) malloc(_len_s__i0__p_mv_table1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__p_mv_table1; _j1++) {
              s[_i0].p_mv_table[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__current_picture_motion_val0 = 1;
          s[_i0].current_picture.motion_val = (int ***) malloc(_len_s__i0__current_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__current_picture_motion_val0; _j0++) {
            int _len_s__i0__current_picture_motion_val1 = 1;
            s[_i0].current_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__current_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__current_picture_motion_val1; _j1++) {
              int _len_s__i0__current_picture_motion_val2 = 1;
              s[_i0].current_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__current_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__current_picture_motion_val2; _j2++) {
                s[_i0].current_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_p_mv_tables(s,mx,my,mv4);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].p_mv_table));
        free(s[_aux].p_mv_table);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mx = 255;
          int my = 255;
          int mv4 = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__p_mv_table0 = 1;
          s[_i0].p_mv_table = (int **) malloc(_len_s__i0__p_mv_table0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__p_mv_table0; _j0++) {
            int _len_s__i0__p_mv_table1 = 1;
            s[_i0].p_mv_table[_j0] = (int *) malloc(_len_s__i0__p_mv_table1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__p_mv_table1; _j1++) {
              s[_i0].p_mv_table[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__current_picture_motion_val0 = 1;
          s[_i0].current_picture.motion_val = (int ***) malloc(_len_s__i0__current_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__current_picture_motion_val0; _j0++) {
            int _len_s__i0__current_picture_motion_val1 = 1;
            s[_i0].current_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__current_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__current_picture_motion_val1; _j1++) {
              int _len_s__i0__current_picture_motion_val2 = 1;
              s[_i0].current_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__current_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__current_picture_motion_val2; _j2++) {
                s[_i0].current_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_p_mv_tables(s,mx,my,mv4);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].p_mv_table));
        free(s[_aux].p_mv_table);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mx = 10;
          int my = 10;
          int mv4 = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mb_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__p_mv_table0 = 1;
          s[_i0].p_mv_table = (int **) malloc(_len_s__i0__p_mv_table0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__p_mv_table0; _j0++) {
            int _len_s__i0__p_mv_table1 = 1;
            s[_i0].p_mv_table[_j0] = (int *) malloc(_len_s__i0__p_mv_table1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__p_mv_table1; _j1++) {
              s[_i0].p_mv_table[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__block_index0 = 1;
          s[_i0].block_index = (int *) malloc(_len_s__i0__block_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_index0; _j0++) {
            s[_i0].block_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__current_picture_motion_val0 = 1;
          s[_i0].current_picture.motion_val = (int ***) malloc(_len_s__i0__current_picture_motion_val0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__current_picture_motion_val0; _j0++) {
            int _len_s__i0__current_picture_motion_val1 = 1;
            s[_i0].current_picture.motion_val[_j0] = (int **) malloc(_len_s__i0__current_picture_motion_val1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__current_picture_motion_val1; _j1++) {
              int _len_s__i0__current_picture_motion_val2 = 1;
              s[_i0].current_picture.motion_val[_j0][_j1] = (int *) malloc(_len_s__i0__current_picture_motion_val2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__current_picture_motion_val2; _j2++) {
                s[_i0].current_picture.motion_val[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
        s[_i0].b8_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_p_mv_tables(s,mx,my,mv4);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].p_mv_table));
        free(s[_aux].p_mv_table);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_index);
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

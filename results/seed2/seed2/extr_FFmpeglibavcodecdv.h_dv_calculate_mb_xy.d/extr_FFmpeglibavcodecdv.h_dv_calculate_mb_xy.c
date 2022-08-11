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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int* buf; TYPE_1__* sys; } ;
struct TYPE_7__ {int* mb_coordinates; } ;
struct TYPE_6__ {int height; } ;
typedef  TYPE_2__ DVwork_chunk ;
typedef  TYPE_3__ DVVideoContext ;

/* Variables and functions */

__attribute__((used)) static inline void dv_calculate_mb_xy(DVVideoContext *s,
                                      DVwork_chunk *work_chunk,
                                      int m, int *mb_x, int *mb_y)
{
    *mb_x = work_chunk->mb_coordinates[m] & 0xff;
    *mb_y = work_chunk->mb_coordinates[m] >> 8;

    /* We work with 720p frames split in half.
     * The odd half-frame (chan == 2,3) is displaced :-( */
    if (s->sys->height == 720 && !(s->buf[1] & 0x0C))
        /* shifting the Y coordinate down by 72/2 macro blocks */
        *mb_y -= (*mb_y > 17) ? 18 : -72;
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
          int m = 100;
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf0 = 1;
          s[_i0].buf = (int *) malloc(_len_s__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sys0 = 1;
          s[_i0].sys = (struct TYPE_6__ *) malloc(_len_s__i0__sys0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__sys0; _j0++) {
            s[_i0].sys->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_work_chunk0 = 1;
          struct TYPE_7__ * work_chunk = (struct TYPE_7__ *) malloc(_len_work_chunk0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_work_chunk0; _i0++) {
              int _len_work_chunk__i0__mb_coordinates0 = 1;
          work_chunk[_i0].mb_coordinates = (int *) malloc(_len_work_chunk__i0__mb_coordinates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_work_chunk__i0__mb_coordinates0; _j0++) {
            work_chunk[_i0].mb_coordinates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mb_x0 = 1;
          int * mb_x = (int *) malloc(_len_mb_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_x0; _i0++) {
            mb_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mb_y0 = 1;
          int * mb_y = (int *) malloc(_len_mb_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_y0; _i0++) {
            mb_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dv_calculate_mb_xy(s,work_chunk,m,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].sys);
          }
          free(s);
          for(int _aux = 0; _aux < _len_work_chunk0; _aux++) {
          free(work_chunk[_aux].mb_coordinates);
          }
          free(work_chunk);
          free(mb_x);
          free(mb_y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int m = 255;
          int _len_s0 = 65025;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf0 = 1;
          s[_i0].buf = (int *) malloc(_len_s__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sys0 = 1;
          s[_i0].sys = (struct TYPE_6__ *) malloc(_len_s__i0__sys0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__sys0; _j0++) {
            s[_i0].sys->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_work_chunk0 = 65025;
          struct TYPE_7__ * work_chunk = (struct TYPE_7__ *) malloc(_len_work_chunk0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_work_chunk0; _i0++) {
              int _len_work_chunk__i0__mb_coordinates0 = 1;
          work_chunk[_i0].mb_coordinates = (int *) malloc(_len_work_chunk__i0__mb_coordinates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_work_chunk__i0__mb_coordinates0; _j0++) {
            work_chunk[_i0].mb_coordinates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mb_x0 = 65025;
          int * mb_x = (int *) malloc(_len_mb_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_x0; _i0++) {
            mb_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mb_y0 = 65025;
          int * mb_y = (int *) malloc(_len_mb_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_y0; _i0++) {
            mb_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dv_calculate_mb_xy(s,work_chunk,m,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].sys);
          }
          free(s);
          for(int _aux = 0; _aux < _len_work_chunk0; _aux++) {
          free(work_chunk[_aux].mb_coordinates);
          }
          free(work_chunk);
          free(mb_x);
          free(mb_y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int m = 10;
          int _len_s0 = 100;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__buf0 = 1;
          s[_i0].buf = (int *) malloc(_len_s__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__sys0 = 1;
          s[_i0].sys = (struct TYPE_6__ *) malloc(_len_s__i0__sys0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__sys0; _j0++) {
            s[_i0].sys->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_work_chunk0 = 100;
          struct TYPE_7__ * work_chunk = (struct TYPE_7__ *) malloc(_len_work_chunk0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_work_chunk0; _i0++) {
              int _len_work_chunk__i0__mb_coordinates0 = 1;
          work_chunk[_i0].mb_coordinates = (int *) malloc(_len_work_chunk__i0__mb_coordinates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_work_chunk__i0__mb_coordinates0; _j0++) {
            work_chunk[_i0].mb_coordinates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mb_x0 = 100;
          int * mb_x = (int *) malloc(_len_mb_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_x0; _i0++) {
            mb_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mb_y0 = 100;
          int * mb_y = (int *) malloc(_len_mb_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb_y0; _i0++) {
            mb_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dv_calculate_mb_xy(s,work_chunk,m,mb_x,mb_y);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].sys);
          }
          free(s);
          for(int _aux = 0; _aux < _len_work_chunk0; _aux++) {
          free(work_chunk[_aux].mb_coordinates);
          }
          free(work_chunk);
          free(mb_x);
          free(mb_y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

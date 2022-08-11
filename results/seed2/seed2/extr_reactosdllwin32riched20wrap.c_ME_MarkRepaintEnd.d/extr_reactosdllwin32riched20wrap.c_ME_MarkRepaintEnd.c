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
typedef  int /*<<< orphan*/  ME_DisplayItem ;

/* Variables and functions */

__attribute__((used)) static void ME_MarkRepaintEnd(ME_DisplayItem *para,
                              ME_DisplayItem **repaint_start,
                              ME_DisplayItem **repaint_end)
{
    if (!*repaint_start)
      *repaint_start = para;
    *repaint_end = para;
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
          int _len_para0 = 1;
          int * para = (int *) malloc(_len_para0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_para0; _i0++) {
            para[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_repaint_start0 = 1;
          int ** repaint_start = (int **) malloc(_len_repaint_start0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_start0; _i0++) {
            int _len_repaint_start1 = 1;
            repaint_start[_i0] = (int *) malloc(_len_repaint_start1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_start1; _i1++) {
              repaint_start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_repaint_end0 = 1;
          int ** repaint_end = (int **) malloc(_len_repaint_end0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_end0; _i0++) {
            int _len_repaint_end1 = 1;
            repaint_end[_i0] = (int *) malloc(_len_repaint_end1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_end1; _i1++) {
              repaint_end[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ME_MarkRepaintEnd(para,repaint_start,repaint_end);
          free(para);
          for(int i1 = 0; i1 < _len_repaint_start0; i1++) {
            int _len_repaint_start1 = 1;
              free(repaint_start[i1]);
          }
          free(repaint_start);
          for(int i1 = 0; i1 < _len_repaint_end0; i1++) {
            int _len_repaint_end1 = 1;
              free(repaint_end[i1]);
          }
          free(repaint_end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_para0 = 65025;
          int * para = (int *) malloc(_len_para0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_para0; _i0++) {
            para[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_repaint_start0 = 65025;
          int ** repaint_start = (int **) malloc(_len_repaint_start0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_start0; _i0++) {
            int _len_repaint_start1 = 1;
            repaint_start[_i0] = (int *) malloc(_len_repaint_start1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_start1; _i1++) {
              repaint_start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_repaint_end0 = 65025;
          int ** repaint_end = (int **) malloc(_len_repaint_end0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_end0; _i0++) {
            int _len_repaint_end1 = 1;
            repaint_end[_i0] = (int *) malloc(_len_repaint_end1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_end1; _i1++) {
              repaint_end[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ME_MarkRepaintEnd(para,repaint_start,repaint_end);
          free(para);
          for(int i1 = 0; i1 < _len_repaint_start0; i1++) {
            int _len_repaint_start1 = 1;
              free(repaint_start[i1]);
          }
          free(repaint_start);
          for(int i1 = 0; i1 < _len_repaint_end0; i1++) {
            int _len_repaint_end1 = 1;
              free(repaint_end[i1]);
          }
          free(repaint_end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_para0 = 100;
          int * para = (int *) malloc(_len_para0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_para0; _i0++) {
            para[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_repaint_start0 = 100;
          int ** repaint_start = (int **) malloc(_len_repaint_start0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_start0; _i0++) {
            int _len_repaint_start1 = 1;
            repaint_start[_i0] = (int *) malloc(_len_repaint_start1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_start1; _i1++) {
              repaint_start[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_repaint_end0 = 100;
          int ** repaint_end = (int **) malloc(_len_repaint_end0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_repaint_end0; _i0++) {
            int _len_repaint_end1 = 1;
            repaint_end[_i0] = (int *) malloc(_len_repaint_end1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_repaint_end1; _i1++) {
              repaint_end[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ME_MarkRepaintEnd(para,repaint_start,repaint_end);
          free(para);
          for(int i1 = 0; i1 < _len_repaint_start0; i1++) {
            int _len_repaint_start1 = 1;
              free(repaint_start[i1]);
          }
          free(repaint_start);
          for(int i1 = 0; i1 < _len_repaint_end0; i1++) {
            int _len_repaint_end1 = 1;
              free(repaint_end[i1]);
          }
          free(repaint_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

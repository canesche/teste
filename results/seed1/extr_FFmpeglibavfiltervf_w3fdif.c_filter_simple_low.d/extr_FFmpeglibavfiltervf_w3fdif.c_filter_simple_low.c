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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void filter_simple_low(int32_t *work_line,
                              uint8_t *in_lines_cur[2],
                              const int16_t *coef, int linesize)
{
    int i;

    for (i = 0; i < linesize; i++) {
        *work_line    = *in_lines_cur[0]++ * coef[0];
        *work_line++ += *in_lines_cur[1]++ * coef[1];
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
          int linesize = 100;
          int _len_work_line0 = 1;
          int * work_line = (int *) malloc(_len_work_line0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_work_line0; _i0++) {
            work_line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_lines_cur0 = 2;
          int ** in_lines_cur = (int **) malloc(_len_in_lines_cur0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_lines_cur0; _i0++) {
            int _len_in_lines_cur1 = 1;
            in_lines_cur[_i0] = (int *) malloc(_len_in_lines_cur1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_lines_cur1; _i1++) {
              in_lines_cur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_coef0 = 1;
          const int * coef = (const int *) malloc(_len_coef0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          filter_simple_low(work_line,in_lines_cur,coef,linesize);
          free(work_line);
          for(int i1 = 0; i1 < _len_in_lines_cur0; i1++) {
            int _len_in_lines_cur1 = 1;
              free(in_lines_cur[i1]);
          }
          free(in_lines_cur);
          free(coef);
        
        break;
    }
    // big-arr
    case 1:
    {
          int linesize = 255;
          int _len_work_line0 = 65025;
          int * work_line = (int *) malloc(_len_work_line0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_work_line0; _i0++) {
            work_line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_lines_cur0 = 65025;
          int ** in_lines_cur = (int **) malloc(_len_in_lines_cur0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_lines_cur0; _i0++) {
            int _len_in_lines_cur1 = 1;
            in_lines_cur[_i0] = (int *) malloc(_len_in_lines_cur1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_lines_cur1; _i1++) {
              in_lines_cur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_coef0 = 65025;
          const int * coef = (const int *) malloc(_len_coef0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          filter_simple_low(work_line,in_lines_cur,coef,linesize);
          free(work_line);
          for(int i1 = 0; i1 < _len_in_lines_cur0; i1++) {
            int _len_in_lines_cur1 = 1;
              free(in_lines_cur[i1]);
          }
          free(in_lines_cur);
          free(coef);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int linesize = 10;
          int _len_work_line0 = 100;
          int * work_line = (int *) malloc(_len_work_line0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_work_line0; _i0++) {
            work_line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_lines_cur0 = 100;
          int ** in_lines_cur = (int **) malloc(_len_in_lines_cur0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_lines_cur0; _i0++) {
            int _len_in_lines_cur1 = 1;
            in_lines_cur[_i0] = (int *) malloc(_len_in_lines_cur1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_lines_cur1; _i1++) {
              in_lines_cur[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_coef0 = 100;
          const int * coef = (const int *) malloc(_len_coef0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          filter_simple_low(work_line,in_lines_cur,coef,linesize);
          free(work_line);
          for(int i1 = 0; i1 < _len_in_lines_cur0; i1++) {
            int _len_in_lines_cur1 = 1;
              free(in_lines_cur[i1]);
          }
          free(in_lines_cur);
          free(coef);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

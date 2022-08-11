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
struct si_sm_data {int* read_data; int* write_data; int read_count; } ;

/* Variables and functions */

__attribute__((used)) static void force_result(struct si_sm_data *bt, unsigned char completion_code)
{
	bt->read_data[0] = 4;				/* # following bytes */
	bt->read_data[1] = bt->write_data[1] | 4;	/* Odd NetFn/LUN */
	bt->read_data[2] = bt->write_data[2];		/* seq (ignored) */
	bt->read_data[3] = bt->write_data[3];		/* Command */
	bt->read_data[4] = completion_code;
	bt->read_count = 5;
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
          unsigned char completion_code = 100;
          int _len_bt0 = 1;
          struct si_sm_data * bt = (struct si_sm_data *) malloc(_len_bt0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              int _len_bt__i0__read_data0 = 1;
          bt[_i0].read_data = (int *) malloc(_len_bt__i0__read_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__read_data0; _j0++) {
            bt[_i0].read_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bt__i0__write_data0 = 1;
          bt[_i0].write_data = (int *) malloc(_len_bt__i0__write_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__write_data0; _j0++) {
            bt[_i0].write_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bt[_i0].read_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          force_result(bt,completion_code);
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].read_data);
          }
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].write_data);
          }
          free(bt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char completion_code = 255;
          int _len_bt0 = 65025;
          struct si_sm_data * bt = (struct si_sm_data *) malloc(_len_bt0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              int _len_bt__i0__read_data0 = 1;
          bt[_i0].read_data = (int *) malloc(_len_bt__i0__read_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__read_data0; _j0++) {
            bt[_i0].read_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bt__i0__write_data0 = 1;
          bt[_i0].write_data = (int *) malloc(_len_bt__i0__write_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__write_data0; _j0++) {
            bt[_i0].write_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bt[_i0].read_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          force_result(bt,completion_code);
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].read_data);
          }
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].write_data);
          }
          free(bt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char completion_code = 10;
          int _len_bt0 = 100;
          struct si_sm_data * bt = (struct si_sm_data *) malloc(_len_bt0*sizeof(struct si_sm_data));
          for(int _i0 = 0; _i0 < _len_bt0; _i0++) {
              int _len_bt__i0__read_data0 = 1;
          bt[_i0].read_data = (int *) malloc(_len_bt__i0__read_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__read_data0; _j0++) {
            bt[_i0].read_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bt__i0__write_data0 = 1;
          bt[_i0].write_data = (int *) malloc(_len_bt__i0__write_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bt__i0__write_data0; _j0++) {
            bt[_i0].write_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bt[_i0].read_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          force_result(bt,completion_code);
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].read_data);
          }
          for(int _aux = 0; _aux < _len_bt0; _aux++) {
          free(bt[_aux].write_data);
          }
          free(bt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

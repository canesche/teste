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
typedef  size_t u16 ;
struct hinic_cmdq {int** errcode; } ;

/* Variables and functions */

__attribute__((used)) static void cmdq_update_errcode(struct hinic_cmdq *cmdq, u16 prod_idx,
				int errcode)
{
	if (cmdq->errcode[prod_idx])
		*cmdq->errcode[prod_idx] = errcode;
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
          unsigned long prod_idx = 100;
          int errcode = 100;
          int _len_cmdq0 = 1;
          struct hinic_cmdq * cmdq = (struct hinic_cmdq *) malloc(_len_cmdq0*sizeof(struct hinic_cmdq));
          for(int _i0 = 0; _i0 < _len_cmdq0; _i0++) {
              int _len_cmdq__i0__errcode0 = 1;
          cmdq[_i0].errcode = (int **) malloc(_len_cmdq__i0__errcode0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cmdq__i0__errcode0; _j0++) {
            int _len_cmdq__i0__errcode1 = 1;
            cmdq[_i0].errcode[_j0] = (int *) malloc(_len_cmdq__i0__errcode1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cmdq__i0__errcode1; _j1++) {
              cmdq[_i0].errcode[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          cmdq_update_errcode(cmdq,prod_idx,errcode);
          for(int _aux = 0; _aux < _len_cmdq0; _aux++) {
          free(*(cmdq[_aux].errcode));
        free(cmdq[_aux].errcode);
          }
          free(cmdq);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long prod_idx = 255;
          int errcode = 255;
          int _len_cmdq0 = 65025;
          struct hinic_cmdq * cmdq = (struct hinic_cmdq *) malloc(_len_cmdq0*sizeof(struct hinic_cmdq));
          for(int _i0 = 0; _i0 < _len_cmdq0; _i0++) {
              int _len_cmdq__i0__errcode0 = 1;
          cmdq[_i0].errcode = (int **) malloc(_len_cmdq__i0__errcode0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cmdq__i0__errcode0; _j0++) {
            int _len_cmdq__i0__errcode1 = 1;
            cmdq[_i0].errcode[_j0] = (int *) malloc(_len_cmdq__i0__errcode1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cmdq__i0__errcode1; _j1++) {
              cmdq[_i0].errcode[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          cmdq_update_errcode(cmdq,prod_idx,errcode);
          for(int _aux = 0; _aux < _len_cmdq0; _aux++) {
          free(*(cmdq[_aux].errcode));
        free(cmdq[_aux].errcode);
          }
          free(cmdq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long prod_idx = 10;
          int errcode = 10;
          int _len_cmdq0 = 100;
          struct hinic_cmdq * cmdq = (struct hinic_cmdq *) malloc(_len_cmdq0*sizeof(struct hinic_cmdq));
          for(int _i0 = 0; _i0 < _len_cmdq0; _i0++) {
              int _len_cmdq__i0__errcode0 = 1;
          cmdq[_i0].errcode = (int **) malloc(_len_cmdq__i0__errcode0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_cmdq__i0__errcode0; _j0++) {
            int _len_cmdq__i0__errcode1 = 1;
            cmdq[_i0].errcode[_j0] = (int *) malloc(_len_cmdq__i0__errcode1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_cmdq__i0__errcode1; _j1++) {
              cmdq[_i0].errcode[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          cmdq_update_errcode(cmdq,prod_idx,errcode);
          for(int _aux = 0; _aux < _len_cmdq0; _aux++) {
          free(*(cmdq[_aux].errcode));
        free(cmdq[_aux].errcode);
          }
          free(cmdq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

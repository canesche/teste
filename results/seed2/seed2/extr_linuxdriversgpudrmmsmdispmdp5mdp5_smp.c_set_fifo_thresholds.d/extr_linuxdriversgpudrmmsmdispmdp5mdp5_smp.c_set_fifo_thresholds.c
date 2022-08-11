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
typedef  int u32 ;
struct mdp5_smp {int blk_size; int* pipe_reqprio_fifo_wm0; int* pipe_reqprio_fifo_wm1; int* pipe_reqprio_fifo_wm2; } ;
typedef  enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;

/* Variables and functions */
 int BITS_PER_BYTE ; 

__attribute__((used)) static void set_fifo_thresholds(struct mdp5_smp *smp,
		enum mdp5_pipe pipe, int nblks)
{
	u32 smp_entries_per_blk = smp->blk_size / (128 / BITS_PER_BYTE);
	u32 val;

	/* 1/4 of SMP pool that is being fetched */
	val = (nblks * smp_entries_per_blk) / 4;

	smp->pipe_reqprio_fifo_wm0[pipe] = val * 1;
	smp->pipe_reqprio_fifo_wm1[pipe] = val * 2;
	smp->pipe_reqprio_fifo_wm2[pipe] = val * 3;
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
          enum mdp5_pipe pipe = 0;
          int nblks = 100;
          int _len_smp0 = 1;
          struct mdp5_smp * smp = (struct mdp5_smp *) malloc(_len_smp0*sizeof(struct mdp5_smp));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0].blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smp__i0__pipe_reqprio_fifo_wm00 = 1;
          smp[_i0].pipe_reqprio_fifo_wm0 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm00; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm10 = 1;
          smp[_i0].pipe_reqprio_fifo_wm1 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm10; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm20 = 1;
          smp[_i0].pipe_reqprio_fifo_wm2 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm20; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_fifo_thresholds(smp,pipe,nblks);
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm0);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm1);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm2);
          }
          free(smp);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mdp5_pipe pipe = 0;
          int nblks = 255;
          int _len_smp0 = 65025;
          struct mdp5_smp * smp = (struct mdp5_smp *) malloc(_len_smp0*sizeof(struct mdp5_smp));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0].blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smp__i0__pipe_reqprio_fifo_wm00 = 1;
          smp[_i0].pipe_reqprio_fifo_wm0 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm00; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm10 = 1;
          smp[_i0].pipe_reqprio_fifo_wm1 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm10; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm20 = 1;
          smp[_i0].pipe_reqprio_fifo_wm2 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm20; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_fifo_thresholds(smp,pipe,nblks);
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm0);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm1);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm2);
          }
          free(smp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mdp5_pipe pipe = 0;
          int nblks = 10;
          int _len_smp0 = 100;
          struct mdp5_smp * smp = (struct mdp5_smp *) malloc(_len_smp0*sizeof(struct mdp5_smp));
          for(int _i0 = 0; _i0 < _len_smp0; _i0++) {
            smp[_i0].blk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_smp__i0__pipe_reqprio_fifo_wm00 = 1;
          smp[_i0].pipe_reqprio_fifo_wm0 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm00; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm10 = 1;
          smp[_i0].pipe_reqprio_fifo_wm1 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm10; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_smp__i0__pipe_reqprio_fifo_wm20 = 1;
          smp[_i0].pipe_reqprio_fifo_wm2 = (int *) malloc(_len_smp__i0__pipe_reqprio_fifo_wm20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_smp__i0__pipe_reqprio_fifo_wm20; _j0++) {
            smp[_i0].pipe_reqprio_fifo_wm2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_fifo_thresholds(smp,pipe,nblks);
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm0);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm1);
          }
          for(int _aux = 0; _aux < _len_smp0; _aux++) {
          free(smp[_aux].pipe_reqprio_fifo_wm2);
          }
          free(smp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

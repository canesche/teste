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
struct brcms_fifo_info {int* mcs2ampdu_table; scalar_t__ accum_txfunfl; scalar_t__ prev_txfunfl; scalar_t__ accum_txampdu; scalar_t__ dmaxferrate; scalar_t__ ampdu_pld_size; } ;
struct ampdu_info {struct brcms_fifo_info* fifo_tb; } ;

/* Variables and functions */
 int FFPLD_MAX_MCS ; 
 int NUM_FFPLD_FIFO ; 

__attribute__((used)) static void brcms_c_ffpld_init(struct ampdu_info *ampdu)
{
	int i, j;
	struct brcms_fifo_info *fifo;

	for (j = 0; j < NUM_FFPLD_FIFO; j++) {
		fifo = (ampdu->fifo_tb + j);
		fifo->ampdu_pld_size = 0;
		for (i = 0; i <= FFPLD_MAX_MCS; i++)
			fifo->mcs2ampdu_table[i] = 255;
		fifo->dmaxferrate = 0;
		fifo->accum_txampdu = 0;
		fifo->prev_txfunfl = 0;
		fifo->accum_txfunfl = 0;

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
          int _len_ampdu0 = 1;
          struct ampdu_info * ampdu = (struct ampdu_info *) malloc(_len_ampdu0*sizeof(struct ampdu_info));
          for(int _i0 = 0; _i0 < _len_ampdu0; _i0++) {
              int _len_ampdu__i0__fifo_tb0 = 1;
          ampdu[_i0].fifo_tb = (struct brcms_fifo_info *) malloc(_len_ampdu__i0__fifo_tb0*sizeof(struct brcms_fifo_info));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb0; _j0++) {
              int _len_ampdu__i0__fifo_tb_mcs2ampdu_table0 = 1;
          ampdu[_i0].fifo_tb->mcs2ampdu_table = (int *) malloc(_len_ampdu__i0__fifo_tb_mcs2ampdu_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb_mcs2ampdu_table0; _j0++) {
            ampdu[_i0].fifo_tb->mcs2ampdu_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ampdu[_i0].fifo_tb->accum_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->prev_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->accum_txampdu = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->dmaxferrate = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->ampdu_pld_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_ffpld_init(ampdu);
          for(int _aux = 0; _aux < _len_ampdu0; _aux++) {
          free(ampdu[_aux].fifo_tb);
          }
          free(ampdu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ampdu0 = 65025;
          struct ampdu_info * ampdu = (struct ampdu_info *) malloc(_len_ampdu0*sizeof(struct ampdu_info));
          for(int _i0 = 0; _i0 < _len_ampdu0; _i0++) {
              int _len_ampdu__i0__fifo_tb0 = 1;
          ampdu[_i0].fifo_tb = (struct brcms_fifo_info *) malloc(_len_ampdu__i0__fifo_tb0*sizeof(struct brcms_fifo_info));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb0; _j0++) {
              int _len_ampdu__i0__fifo_tb_mcs2ampdu_table0 = 1;
          ampdu[_i0].fifo_tb->mcs2ampdu_table = (int *) malloc(_len_ampdu__i0__fifo_tb_mcs2ampdu_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb_mcs2ampdu_table0; _j0++) {
            ampdu[_i0].fifo_tb->mcs2ampdu_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ampdu[_i0].fifo_tb->accum_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->prev_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->accum_txampdu = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->dmaxferrate = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->ampdu_pld_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_ffpld_init(ampdu);
          for(int _aux = 0; _aux < _len_ampdu0; _aux++) {
          free(ampdu[_aux].fifo_tb);
          }
          free(ampdu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ampdu0 = 100;
          struct ampdu_info * ampdu = (struct ampdu_info *) malloc(_len_ampdu0*sizeof(struct ampdu_info));
          for(int _i0 = 0; _i0 < _len_ampdu0; _i0++) {
              int _len_ampdu__i0__fifo_tb0 = 1;
          ampdu[_i0].fifo_tb = (struct brcms_fifo_info *) malloc(_len_ampdu__i0__fifo_tb0*sizeof(struct brcms_fifo_info));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb0; _j0++) {
              int _len_ampdu__i0__fifo_tb_mcs2ampdu_table0 = 1;
          ampdu[_i0].fifo_tb->mcs2ampdu_table = (int *) malloc(_len_ampdu__i0__fifo_tb_mcs2ampdu_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ampdu__i0__fifo_tb_mcs2ampdu_table0; _j0++) {
            ampdu[_i0].fifo_tb->mcs2ampdu_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ampdu[_i0].fifo_tb->accum_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->prev_txfunfl = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->accum_txampdu = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->dmaxferrate = ((-2 * (next_i()%2)) + 1) * next_i();
        ampdu[_i0].fifo_tb->ampdu_pld_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcms_c_ffpld_init(ampdu);
          for(int _aux = 0; _aux < _len_ampdu0; _aux++) {
          free(ampdu[_aux].fifo_tb);
          }
          free(ampdu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

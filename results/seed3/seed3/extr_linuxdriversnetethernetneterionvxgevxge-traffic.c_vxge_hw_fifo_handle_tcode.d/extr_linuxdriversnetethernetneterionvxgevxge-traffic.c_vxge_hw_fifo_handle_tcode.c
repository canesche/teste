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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct __vxge_hw_fifo {TYPE_1__* stats; } ;
typedef  enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
typedef  enum vxge_hw_fifo_tcode { ____Placeholder_vxge_hw_fifo_tcode } vxge_hw_fifo_tcode ;
struct TYPE_2__ {int /*<<< orphan*/ * txd_t_code_err_cnt; } ;

/* Variables and functions */
 int VXGE_HW_ERR_INVALID_TCODE ; 
 int VXGE_HW_OK ; 

enum vxge_hw_status vxge_hw_fifo_handle_tcode(struct __vxge_hw_fifo *fifo,
					      void *txdlh,
					      enum vxge_hw_fifo_tcode t_code)
{
	enum vxge_hw_status status = VXGE_HW_OK;

	if (((t_code & 0x7) < 0) || ((t_code & 0x7) > 0x4)) {
		status = VXGE_HW_ERR_INVALID_TCODE;
		goto exit;
	}

	fifo->stats->txd_t_code_err_cnt[t_code]++;
exit:
	return status;
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
          enum vxge_hw_fifo_tcode t_code = 0;
          int _len_fifo0 = 1;
          struct __vxge_hw_fifo * fifo = (struct __vxge_hw_fifo *) malloc(_len_fifo0*sizeof(struct __vxge_hw_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__stats0 = 1;
          fifo[_i0].stats = (struct TYPE_2__ *) malloc(_len_fifo__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats0; _j0++) {
              int _len_fifo__i0__stats_txd_t_code_err_cnt0 = 1;
          fifo[_i0].stats->txd_t_code_err_cnt = (int *) malloc(_len_fifo__i0__stats_txd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats_txd_t_code_err_cnt0; _j0++) {
            fifo[_i0].stats->txd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * txdlh;
          enum vxge_hw_status benchRet = vxge_hw_fifo_handle_tcode(fifo,txdlh,t_code);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].stats);
          }
          free(fifo);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum vxge_hw_fifo_tcode t_code = 0;
          int _len_fifo0 = 65025;
          struct __vxge_hw_fifo * fifo = (struct __vxge_hw_fifo *) malloc(_len_fifo0*sizeof(struct __vxge_hw_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__stats0 = 1;
          fifo[_i0].stats = (struct TYPE_2__ *) malloc(_len_fifo__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats0; _j0++) {
              int _len_fifo__i0__stats_txd_t_code_err_cnt0 = 1;
          fifo[_i0].stats->txd_t_code_err_cnt = (int *) malloc(_len_fifo__i0__stats_txd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats_txd_t_code_err_cnt0; _j0++) {
            fifo[_i0].stats->txd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * txdlh;
          enum vxge_hw_status benchRet = vxge_hw_fifo_handle_tcode(fifo,txdlh,t_code);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].stats);
          }
          free(fifo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum vxge_hw_fifo_tcode t_code = 0;
          int _len_fifo0 = 100;
          struct __vxge_hw_fifo * fifo = (struct __vxge_hw_fifo *) malloc(_len_fifo0*sizeof(struct __vxge_hw_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__stats0 = 1;
          fifo[_i0].stats = (struct TYPE_2__ *) malloc(_len_fifo__i0__stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats0; _j0++) {
              int _len_fifo__i0__stats_txd_t_code_err_cnt0 = 1;
          fifo[_i0].stats->txd_t_code_err_cnt = (int *) malloc(_len_fifo__i0__stats_txd_t_code_err_cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fifo__i0__stats_txd_t_code_err_cnt0; _j0++) {
            fifo[_i0].stats->txd_t_code_err_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * txdlh;
          enum vxge_hw_status benchRet = vxge_hw_fifo_handle_tcode(fifo,txdlh,t_code);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].stats);
          }
          free(fifo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

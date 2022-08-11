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
typedef  size_t u16 ;
struct ena_rss {int tbl_log_size; size_t* host_rss_ind_tbl; TYPE_1__* rss_ind_tbl; } ;
struct ena_com_io_sq {scalar_t__ direction; int /*<<< orphan*/  idx; } ;
struct ena_com_dev {struct ena_com_io_sq* io_sq_queues; struct ena_rss rss; } ;
struct TYPE_2__ {int /*<<< orphan*/  cq_idx; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ ENA_COM_IO_QUEUE_DIRECTION_RX ; 
 size_t ENA_TOTAL_NUM_QUEUES ; 

__attribute__((used)) static int ena_com_ind_tbl_convert_to_device(struct ena_com_dev *ena_dev)
{
	struct ena_rss *rss = &ena_dev->rss;
	struct ena_com_io_sq *io_sq;
	u16 qid;
	int i;

	for (i = 0; i < 1 << rss->tbl_log_size; i++) {
		qid = rss->host_rss_ind_tbl[i];
		if (qid >= ENA_TOTAL_NUM_QUEUES)
			return -EINVAL;

		io_sq = &ena_dev->io_sq_queues[qid];

		if (io_sq->direction != ENA_COM_IO_QUEUE_DIRECTION_RX)
			return -EINVAL;

		rss->rss_ind_tbl[i].cq_idx = io_sq->idx;
	}

	return 0;
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
          int _len_ena_dev0 = 1;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              int _len_ena_dev__i0__io_sq_queues0 = 1;
          ena_dev[_i0].io_sq_queues = (struct ena_com_io_sq *) malloc(_len_ena_dev__i0__io_sq_queues0*sizeof(struct ena_com_io_sq));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__io_sq_queues0; _j0++) {
            ena_dev[_i0].io_sq_queues->direction = ((-2 * (next_i()%2)) + 1) * next_i();
        ena_dev[_i0].io_sq_queues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ena_dev[_i0].rss.tbl_log_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ena_dev__i0__rss_host_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.host_rss_ind_tbl = (unsigned long *) malloc(_len_ena_dev__i0__rss_host_rss_ind_tbl0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_host_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.host_rss_ind_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ena_dev__i0__rss_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.rss_ind_tbl = (struct TYPE_2__ *) malloc(_len_ena_dev__i0__rss_rss_ind_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.rss_ind_tbl->cq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ena_com_ind_tbl_convert_to_device(ena_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ena_dev0; _aux++) {
          free(ena_dev[_aux].io_sq_queues);
          }
          free(ena_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ena_dev0 = 65025;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              int _len_ena_dev__i0__io_sq_queues0 = 1;
          ena_dev[_i0].io_sq_queues = (struct ena_com_io_sq *) malloc(_len_ena_dev__i0__io_sq_queues0*sizeof(struct ena_com_io_sq));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__io_sq_queues0; _j0++) {
            ena_dev[_i0].io_sq_queues->direction = ((-2 * (next_i()%2)) + 1) * next_i();
        ena_dev[_i0].io_sq_queues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ena_dev[_i0].rss.tbl_log_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ena_dev__i0__rss_host_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.host_rss_ind_tbl = (unsigned long *) malloc(_len_ena_dev__i0__rss_host_rss_ind_tbl0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_host_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.host_rss_ind_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ena_dev__i0__rss_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.rss_ind_tbl = (struct TYPE_2__ *) malloc(_len_ena_dev__i0__rss_rss_ind_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.rss_ind_tbl->cq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ena_com_ind_tbl_convert_to_device(ena_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ena_dev0; _aux++) {
          free(ena_dev[_aux].io_sq_queues);
          }
          free(ena_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ena_dev0 = 100;
          struct ena_com_dev * ena_dev = (struct ena_com_dev *) malloc(_len_ena_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_ena_dev0; _i0++) {
              int _len_ena_dev__i0__io_sq_queues0 = 1;
          ena_dev[_i0].io_sq_queues = (struct ena_com_io_sq *) malloc(_len_ena_dev__i0__io_sq_queues0*sizeof(struct ena_com_io_sq));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__io_sq_queues0; _j0++) {
            ena_dev[_i0].io_sq_queues->direction = ((-2 * (next_i()%2)) + 1) * next_i();
        ena_dev[_i0].io_sq_queues->idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ena_dev[_i0].rss.tbl_log_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ena_dev__i0__rss_host_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.host_rss_ind_tbl = (unsigned long *) malloc(_len_ena_dev__i0__rss_host_rss_ind_tbl0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_host_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.host_rss_ind_tbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ena_dev__i0__rss_rss_ind_tbl0 = 1;
          ena_dev[_i0].rss.rss_ind_tbl = (struct TYPE_2__ *) malloc(_len_ena_dev__i0__rss_rss_ind_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ena_dev__i0__rss_rss_ind_tbl0; _j0++) {
            ena_dev[_i0].rss.rss_ind_tbl->cq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ena_com_ind_tbl_convert_to_device(ena_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ena_dev0; _aux++) {
          free(ena_dev[_aux].io_sq_queues);
          }
          free(ena_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

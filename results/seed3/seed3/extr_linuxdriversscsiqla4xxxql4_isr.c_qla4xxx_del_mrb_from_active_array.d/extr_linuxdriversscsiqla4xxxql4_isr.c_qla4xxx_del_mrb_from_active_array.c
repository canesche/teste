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
typedef  size_t uint32_t ;
struct scsi_qla_host {int /*<<< orphan*/  iocb_cnt; struct mrb** active_mrb_array; } ;
struct mrb {scalar_t__ iocb_cnt; } ;

/* Variables and functions */
 size_t MAX_MRB ; 

__attribute__((used)) static struct mrb *qla4xxx_del_mrb_from_active_array(struct scsi_qla_host *ha,
						     uint32_t index)
{
	struct mrb *mrb = NULL;

	/* validate handle and remove from active array */
	if (index >= MAX_MRB)
		return mrb;

	mrb = ha->active_mrb_array[index];
	ha->active_mrb_array[index] = NULL;
	if (!mrb)
		return mrb;

	/* update counters */
	ha->iocb_cnt -= mrb->iocb_cnt;

	return mrb;
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
          unsigned long index = 100;
          int _len_ha0 = 1;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__active_mrb_array0 = 1;
          ha[_i0].active_mrb_array = (struct mrb **) malloc(_len_ha__i0__active_mrb_array0*sizeof(struct mrb *));
          for(int _j0 = 0; _j0 < _len_ha__i0__active_mrb_array0; _j0++) {
            int _len_ha__i0__active_mrb_array1 = 1;
            ha[_i0].active_mrb_array[_j0] = (struct mrb *) malloc(_len_ha__i0__active_mrb_array1*sizeof(struct mrb));
            for(int _j1 = 0; _j1 < _len_ha__i0__active_mrb_array1; _j1++) {
              ha[_i0].active_mrb_array[_j0]->iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mrb * benchRet = qla4xxx_del_mrb_from_active_array(ha,index);
          printf("%ld\n", (*benchRet).iocb_cnt);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].active_mrb_array));
        free(ha[_aux].active_mrb_array);
          }
          free(ha);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          int _len_ha0 = 65025;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__active_mrb_array0 = 1;
          ha[_i0].active_mrb_array = (struct mrb **) malloc(_len_ha__i0__active_mrb_array0*sizeof(struct mrb *));
          for(int _j0 = 0; _j0 < _len_ha__i0__active_mrb_array0; _j0++) {
            int _len_ha__i0__active_mrb_array1 = 1;
            ha[_i0].active_mrb_array[_j0] = (struct mrb *) malloc(_len_ha__i0__active_mrb_array1*sizeof(struct mrb));
            for(int _j1 = 0; _j1 < _len_ha__i0__active_mrb_array1; _j1++) {
              ha[_i0].active_mrb_array[_j0]->iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mrb * benchRet = qla4xxx_del_mrb_from_active_array(ha,index);
          printf("%ld\n", (*benchRet).iocb_cnt);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].active_mrb_array));
        free(ha[_aux].active_mrb_array);
          }
          free(ha);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          int _len_ha0 = 100;
          struct scsi_qla_host * ha = (struct scsi_qla_host *) malloc(_len_ha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_ha0; _i0++) {
            ha[_i0].iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ha__i0__active_mrb_array0 = 1;
          ha[_i0].active_mrb_array = (struct mrb **) malloc(_len_ha__i0__active_mrb_array0*sizeof(struct mrb *));
          for(int _j0 = 0; _j0 < _len_ha__i0__active_mrb_array0; _j0++) {
            int _len_ha__i0__active_mrb_array1 = 1;
            ha[_i0].active_mrb_array[_j0] = (struct mrb *) malloc(_len_ha__i0__active_mrb_array1*sizeof(struct mrb));
            for(int _j1 = 0; _j1 < _len_ha__i0__active_mrb_array1; _j1++) {
              ha[_i0].active_mrb_array[_j0]->iocb_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mrb * benchRet = qla4xxx_del_mrb_from_active_array(ha,index);
          printf("%ld\n", (*benchRet).iocb_cnt);
          for(int _aux = 0; _aux < _len_ha0; _aux++) {
          free(*(ha[_aux].active_mrb_array));
        free(ha[_aux].active_mrb_array);
          }
          free(ha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

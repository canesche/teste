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
typedef  void* uint64_t ;
struct qcm_process_device {void* tma_addr; void* tba_addr; scalar_t__ cwsr_kaddr; } ;
struct device_queue_manager {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ cwsr_enabled; } ;

/* Variables and functions */
 scalar_t__ KFD_CWSR_TMA_OFFSET ; 

__attribute__((used)) static int set_trap_handler(struct device_queue_manager *dqm,
				struct qcm_process_device *qpd,
				uint64_t tba_addr,
				uint64_t tma_addr)
{
	uint64_t *tma;

	if (dqm->dev->cwsr_enabled) {
		/* Jump from CWSR trap handler to user trap */
		tma = (uint64_t *)(qpd->cwsr_kaddr + KFD_CWSR_TMA_OFFSET);
		tma[0] = tba_addr;
		tma[1] = tma_addr;
	} else {
		qpd->tba_addr = tba_addr;
		qpd->tma_addr = tma_addr;
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
          int _len_dqm0 = 1;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__dev0 = 1;
          dqm[_i0].dev = (struct TYPE_2__ *) malloc(_len_dqm__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dqm__i0__dev0; _j0++) {
            dqm[_i0].dev->cwsr_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpd0 = 1;
          struct qcm_process_device * qpd = (struct qcm_process_device *) malloc(_len_qpd0*sizeof(struct qcm_process_device));
          for(int _i0 = 0; _i0 < _len_qpd0; _i0++) {
            qpd[_i0].cwsr_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * tba_addr;
          void * tma_addr;
          int benchRet = set_trap_handler(dqm,qpd,tba_addr,tma_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].dev);
          }
          free(dqm);
          free(qpd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dqm0 = 65025;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__dev0 = 1;
          dqm[_i0].dev = (struct TYPE_2__ *) malloc(_len_dqm__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dqm__i0__dev0; _j0++) {
            dqm[_i0].dev->cwsr_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpd0 = 65025;
          struct qcm_process_device * qpd = (struct qcm_process_device *) malloc(_len_qpd0*sizeof(struct qcm_process_device));
          for(int _i0 = 0; _i0 < _len_qpd0; _i0++) {
            qpd[_i0].cwsr_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * tba_addr;
          void * tma_addr;
          int benchRet = set_trap_handler(dqm,qpd,tba_addr,tma_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].dev);
          }
          free(dqm);
          free(qpd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dqm0 = 100;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
              int _len_dqm__i0__dev0 = 1;
          dqm[_i0].dev = (struct TYPE_2__ *) malloc(_len_dqm__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dqm__i0__dev0; _j0++) {
            dqm[_i0].dev->cwsr_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpd0 = 100;
          struct qcm_process_device * qpd = (struct qcm_process_device *) malloc(_len_qpd0*sizeof(struct qcm_process_device));
          for(int _i0 = 0; _i0 < _len_qpd0; _i0++) {
            qpd[_i0].cwsr_kaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * tba_addr;
          void * tma_addr;
          int benchRet = set_trap_handler(dqm,qpd,tba_addr,tma_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dqm0; _aux++) {
          free(dqm[_aux].dev);
          }
          free(dqm);
          free(qpd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

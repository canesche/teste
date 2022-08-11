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
typedef  int /*<<< orphan*/  u32 ;
struct mvneta_rx_queue {void** buf_virt_addr; struct mvneta_rx_desc* descs; } ;
struct mvneta_rx_desc {int /*<<< orphan*/  buf_phys_addr; } ;

/* Variables and functions */

__attribute__((used)) static void mvneta_rx_desc_fill(struct mvneta_rx_desc *rx_desc,
				u32 phys_addr, void *virt_addr,
				struct mvneta_rx_queue *rxq)
{
	int i;

	rx_desc->buf_phys_addr = phys_addr;
	i = rx_desc - rxq->descs;
	rxq->buf_virt_addr[i] = virt_addr;
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
          int phys_addr = 100;
          int _len_rx_desc0 = 1;
          struct mvneta_rx_desc * rx_desc = (struct mvneta_rx_desc *) malloc(_len_rx_desc0*sizeof(struct mvneta_rx_desc));
          for(int _i0 = 0; _i0 < _len_rx_desc0; _i0++) {
            rx_desc[_i0].buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * virt_addr;
          int _len_rxq0 = 1;
          struct mvneta_rx_queue * rxq = (struct mvneta_rx_queue *) malloc(_len_rxq0*sizeof(struct mvneta_rx_queue));
          for(int _i0 = 0; _i0 < _len_rxq0; _i0++) {
              int _len_rxq__i0__buf_virt_addr0 = 1;
          rxq[_i0].buf_virt_addr = (void **) malloc(_len_rxq__i0__buf_virt_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rxq__i0__buf_virt_addr0; _j0++) {
          }
          int _len_rxq__i0__descs0 = 1;
          rxq[_i0].descs = (struct mvneta_rx_desc *) malloc(_len_rxq__i0__descs0*sizeof(struct mvneta_rx_desc));
          for(int _j0 = 0; _j0 < _len_rxq__i0__descs0; _j0++) {
            rxq[_i0].descs->buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvneta_rx_desc_fill(rx_desc,phys_addr,virt_addr,rxq);
          free(rx_desc);
          for(int _aux = 0; _aux < _len_rxq0; _aux++) {
          free(rxq[_aux].descs);
          }
          free(rxq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int phys_addr = 255;
          int _len_rx_desc0 = 65025;
          struct mvneta_rx_desc * rx_desc = (struct mvneta_rx_desc *) malloc(_len_rx_desc0*sizeof(struct mvneta_rx_desc));
          for(int _i0 = 0; _i0 < _len_rx_desc0; _i0++) {
            rx_desc[_i0].buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * virt_addr;
          int _len_rxq0 = 65025;
          struct mvneta_rx_queue * rxq = (struct mvneta_rx_queue *) malloc(_len_rxq0*sizeof(struct mvneta_rx_queue));
          for(int _i0 = 0; _i0 < _len_rxq0; _i0++) {
              int _len_rxq__i0__buf_virt_addr0 = 1;
          rxq[_i0].buf_virt_addr = (void **) malloc(_len_rxq__i0__buf_virt_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rxq__i0__buf_virt_addr0; _j0++) {
          }
          int _len_rxq__i0__descs0 = 1;
          rxq[_i0].descs = (struct mvneta_rx_desc *) malloc(_len_rxq__i0__descs0*sizeof(struct mvneta_rx_desc));
          for(int _j0 = 0; _j0 < _len_rxq__i0__descs0; _j0++) {
            rxq[_i0].descs->buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvneta_rx_desc_fill(rx_desc,phys_addr,virt_addr,rxq);
          free(rx_desc);
          for(int _aux = 0; _aux < _len_rxq0; _aux++) {
          free(rxq[_aux].descs);
          }
          free(rxq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int phys_addr = 10;
          int _len_rx_desc0 = 100;
          struct mvneta_rx_desc * rx_desc = (struct mvneta_rx_desc *) malloc(_len_rx_desc0*sizeof(struct mvneta_rx_desc));
          for(int _i0 = 0; _i0 < _len_rx_desc0; _i0++) {
            rx_desc[_i0].buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * virt_addr;
          int _len_rxq0 = 100;
          struct mvneta_rx_queue * rxq = (struct mvneta_rx_queue *) malloc(_len_rxq0*sizeof(struct mvneta_rx_queue));
          for(int _i0 = 0; _i0 < _len_rxq0; _i0++) {
              int _len_rxq__i0__buf_virt_addr0 = 1;
          rxq[_i0].buf_virt_addr = (void **) malloc(_len_rxq__i0__buf_virt_addr0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_rxq__i0__buf_virt_addr0; _j0++) {
          }
          int _len_rxq__i0__descs0 = 1;
          rxq[_i0].descs = (struct mvneta_rx_desc *) malloc(_len_rxq__i0__descs0*sizeof(struct mvneta_rx_desc));
          for(int _j0 = 0; _j0 < _len_rxq__i0__descs0; _j0++) {
            rxq[_i0].descs->buf_phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvneta_rx_desc_fill(rx_desc,phys_addr,virt_addr,rxq);
          free(rx_desc);
          for(int _aux = 0; _aux < _len_rxq0; _aux++) {
          free(rxq[_aux].descs);
          }
          free(rxq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u8 ;
struct mlxsw_pci_queue {int dummy; } ;
struct mlxsw_pci {TYPE_1__* queues; } ;
typedef  enum mlxsw_pci_queue_type { ____Placeholder_mlxsw_pci_queue_type } mlxsw_pci_queue_type ;
struct TYPE_2__ {struct mlxsw_pci_queue* q; } ;

/* Variables and functions */

__attribute__((used)) static struct mlxsw_pci_queue *
__mlxsw_pci_queue_get(struct mlxsw_pci *mlxsw_pci,
		      enum mlxsw_pci_queue_type q_type, u8 q_num)
{
	return &mlxsw_pci->queues[q_type].q[q_num];
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
          enum mlxsw_pci_queue_type q_type = 0;
          unsigned long q_num = 100;
          int _len_mlxsw_pci0 = 1;
          struct mlxsw_pci * mlxsw_pci = (struct mlxsw_pci *) malloc(_len_mlxsw_pci0*sizeof(struct mlxsw_pci));
          for(int _i0 = 0; _i0 < _len_mlxsw_pci0; _i0++) {
              int _len_mlxsw_pci__i0__queues0 = 1;
          mlxsw_pci[_i0].queues = (struct TYPE_2__ *) malloc(_len_mlxsw_pci__i0__queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues0; _j0++) {
              int _len_mlxsw_pci__i0__queues_q0 = 1;
          mlxsw_pci[_i0].queues->q = (struct mlxsw_pci_queue *) malloc(_len_mlxsw_pci__i0__queues_q0*sizeof(struct mlxsw_pci_queue));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues_q0; _j0++) {
            mlxsw_pci[_i0].queues->q->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_pci_queue * benchRet = __mlxsw_pci_queue_get(mlxsw_pci,q_type,q_num);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_pci0; _aux++) {
          free(mlxsw_pci[_aux].queues);
          }
          free(mlxsw_pci);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mlxsw_pci_queue_type q_type = 0;
          unsigned long q_num = 255;
          int _len_mlxsw_pci0 = 65025;
          struct mlxsw_pci * mlxsw_pci = (struct mlxsw_pci *) malloc(_len_mlxsw_pci0*sizeof(struct mlxsw_pci));
          for(int _i0 = 0; _i0 < _len_mlxsw_pci0; _i0++) {
              int _len_mlxsw_pci__i0__queues0 = 1;
          mlxsw_pci[_i0].queues = (struct TYPE_2__ *) malloc(_len_mlxsw_pci__i0__queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues0; _j0++) {
              int _len_mlxsw_pci__i0__queues_q0 = 1;
          mlxsw_pci[_i0].queues->q = (struct mlxsw_pci_queue *) malloc(_len_mlxsw_pci__i0__queues_q0*sizeof(struct mlxsw_pci_queue));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues_q0; _j0++) {
            mlxsw_pci[_i0].queues->q->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_pci_queue * benchRet = __mlxsw_pci_queue_get(mlxsw_pci,q_type,q_num);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_pci0; _aux++) {
          free(mlxsw_pci[_aux].queues);
          }
          free(mlxsw_pci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mlxsw_pci_queue_type q_type = 0;
          unsigned long q_num = 10;
          int _len_mlxsw_pci0 = 100;
          struct mlxsw_pci * mlxsw_pci = (struct mlxsw_pci *) malloc(_len_mlxsw_pci0*sizeof(struct mlxsw_pci));
          for(int _i0 = 0; _i0 < _len_mlxsw_pci0; _i0++) {
              int _len_mlxsw_pci__i0__queues0 = 1;
          mlxsw_pci[_i0].queues = (struct TYPE_2__ *) malloc(_len_mlxsw_pci__i0__queues0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues0; _j0++) {
              int _len_mlxsw_pci__i0__queues_q0 = 1;
          mlxsw_pci[_i0].queues->q = (struct mlxsw_pci_queue *) malloc(_len_mlxsw_pci__i0__queues_q0*sizeof(struct mlxsw_pci_queue));
          for(int _j0 = 0; _j0 < _len_mlxsw_pci__i0__queues_q0; _j0++) {
            mlxsw_pci[_i0].queues->q->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_pci_queue * benchRet = __mlxsw_pci_queue_get(mlxsw_pci,q_type,q_num);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mlxsw_pci0; _aux++) {
          free(mlxsw_pci[_aux].queues);
          }
          free(mlxsw_pci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

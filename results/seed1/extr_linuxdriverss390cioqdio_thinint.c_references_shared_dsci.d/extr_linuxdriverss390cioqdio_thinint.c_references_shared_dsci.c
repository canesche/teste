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
struct qdio_irq {int /*<<< orphan*/ * dsci; } ;
struct TYPE_2__ {int /*<<< orphan*/  ind; } ;

/* Variables and functions */
 size_t TIQDIO_SHARED_IND ; 
 TYPE_1__* q_indicators ; 

__attribute__((used)) static inline int references_shared_dsci(struct qdio_irq *irq_ptr)
{
	return irq_ptr->dsci == &q_indicators[TIQDIO_SHARED_IND].ind;
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
          int _len_irq_ptr0 = 1;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__dsci0 = 1;
          irq_ptr[_i0].dsci = (int *) malloc(_len_irq_ptr__i0__dsci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__dsci0; _j0++) {
            irq_ptr[_i0].dsci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = references_shared_dsci(irq_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].dsci);
          }
          free(irq_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_irq_ptr0 = 65025;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__dsci0 = 1;
          irq_ptr[_i0].dsci = (int *) malloc(_len_irq_ptr__i0__dsci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__dsci0; _j0++) {
            irq_ptr[_i0].dsci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = references_shared_dsci(irq_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].dsci);
          }
          free(irq_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_irq_ptr0 = 100;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__dsci0 = 1;
          irq_ptr[_i0].dsci = (int *) malloc(_len_irq_ptr__i0__dsci0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__dsci0; _j0++) {
            irq_ptr[_i0].dsci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = references_shared_dsci(irq_ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].dsci);
          }
          free(irq_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * val; } ;
struct qdio_q {TYPE_1__ slsb; scalar_t__ sl; scalar_t__ slib; } ;
struct qdio_irq {TYPE_3__* qdr; } ;
struct TYPE_6__ {TYPE_2__* qdf0; } ;
struct TYPE_5__ {unsigned long sliba; unsigned long sla; unsigned long slsba; int akey; int bkey; int ckey; int dkey; } ;

/* Variables and functions */
 int PAGE_DEFAULT_KEY ; 

__attribute__((used)) static void __qdio_allocate_fill_qdr(struct qdio_irq *irq_ptr,
				     struct qdio_q **irq_ptr_qs,
				     int i, int nr)
{
	irq_ptr->qdr->qdf0[i + nr].sliba =
		(unsigned long)irq_ptr_qs[i]->slib;

	irq_ptr->qdr->qdf0[i + nr].sla =
		(unsigned long)irq_ptr_qs[i]->sl;

	irq_ptr->qdr->qdf0[i + nr].slsba =
		(unsigned long)&irq_ptr_qs[i]->slsb.val[0];

	irq_ptr->qdr->qdf0[i + nr].akey = PAGE_DEFAULT_KEY >> 4;
	irq_ptr->qdr->qdf0[i + nr].bkey = PAGE_DEFAULT_KEY >> 4;
	irq_ptr->qdr->qdf0[i + nr].ckey = PAGE_DEFAULT_KEY >> 4;
	irq_ptr->qdr->qdf0[i + nr].dkey = PAGE_DEFAULT_KEY >> 4;
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
          int i = 100;
          int nr = 100;
          int _len_irq_ptr0 = 1;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__qdr0 = 1;
          irq_ptr[_i0].qdr = (struct TYPE_6__ *) malloc(_len_irq_ptr__i0__qdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr0; _j0++) {
              int _len_irq_ptr__i0__qdr_qdf00 = 1;
          irq_ptr[_i0].qdr->qdf0 = (struct TYPE_5__ *) malloc(_len_irq_ptr__i0__qdr_qdf00*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr_qdf00; _j0++) {
            irq_ptr[_i0].qdr->qdf0->sliba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->sla = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->slsba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->akey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->bkey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->ckey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->dkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_irq_ptr_qs0 = 1;
          struct qdio_q ** irq_ptr_qs = (struct qdio_q **) malloc(_len_irq_ptr_qs0*sizeof(struct qdio_q *));
          for(int _i0 = 0; _i0 < _len_irq_ptr_qs0; _i0++) {
            int _len_irq_ptr_qs1 = 1;
            irq_ptr_qs[_i0] = (struct qdio_q *) malloc(_len_irq_ptr_qs1*sizeof(struct qdio_q));
            for(int _i1 = 0; _i1 < _len_irq_ptr_qs1; _i1++) {
                int _len_irq_ptr_qs__i0___i1__slsb_val0 = 1;
          irq_ptr_qs[_i0][_i1].slsb.val = (int *) malloc(_len_irq_ptr_qs__i0___i1__slsb_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr_qs__i0___i1__slsb_val0; _j0++) {
            irq_ptr_qs[_i0][_i1].slsb.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        irq_ptr_qs[_i0][_i1].sl = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr_qs[_i0][_i1].slib = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          __qdio_allocate_fill_qdr(irq_ptr,irq_ptr_qs,i,nr);
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].qdr);
          }
          free(irq_ptr);
          for(int i1 = 0; i1 < _len_irq_ptr_qs0; i1++) {
            int _len_irq_ptr_qs1 = 1;
              free(irq_ptr_qs[i1]);
          }
          free(irq_ptr_qs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int nr = 255;
          int _len_irq_ptr0 = 65025;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__qdr0 = 1;
          irq_ptr[_i0].qdr = (struct TYPE_6__ *) malloc(_len_irq_ptr__i0__qdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr0; _j0++) {
              int _len_irq_ptr__i0__qdr_qdf00 = 1;
          irq_ptr[_i0].qdr->qdf0 = (struct TYPE_5__ *) malloc(_len_irq_ptr__i0__qdr_qdf00*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr_qdf00; _j0++) {
            irq_ptr[_i0].qdr->qdf0->sliba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->sla = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->slsba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->akey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->bkey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->ckey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->dkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_irq_ptr_qs0 = 65025;
          struct qdio_q ** irq_ptr_qs = (struct qdio_q **) malloc(_len_irq_ptr_qs0*sizeof(struct qdio_q *));
          for(int _i0 = 0; _i0 < _len_irq_ptr_qs0; _i0++) {
            int _len_irq_ptr_qs1 = 1;
            irq_ptr_qs[_i0] = (struct qdio_q *) malloc(_len_irq_ptr_qs1*sizeof(struct qdio_q));
            for(int _i1 = 0; _i1 < _len_irq_ptr_qs1; _i1++) {
                int _len_irq_ptr_qs__i0___i1__slsb_val0 = 1;
          irq_ptr_qs[_i0][_i1].slsb.val = (int *) malloc(_len_irq_ptr_qs__i0___i1__slsb_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr_qs__i0___i1__slsb_val0; _j0++) {
            irq_ptr_qs[_i0][_i1].slsb.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        irq_ptr_qs[_i0][_i1].sl = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr_qs[_i0][_i1].slib = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          __qdio_allocate_fill_qdr(irq_ptr,irq_ptr_qs,i,nr);
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].qdr);
          }
          free(irq_ptr);
          for(int i1 = 0; i1 < _len_irq_ptr_qs0; i1++) {
            int _len_irq_ptr_qs1 = 1;
              free(irq_ptr_qs[i1]);
          }
          free(irq_ptr_qs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int nr = 10;
          int _len_irq_ptr0 = 100;
          struct qdio_irq * irq_ptr = (struct qdio_irq *) malloc(_len_irq_ptr0*sizeof(struct qdio_irq));
          for(int _i0 = 0; _i0 < _len_irq_ptr0; _i0++) {
              int _len_irq_ptr__i0__qdr0 = 1;
          irq_ptr[_i0].qdr = (struct TYPE_6__ *) malloc(_len_irq_ptr__i0__qdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr0; _j0++) {
              int _len_irq_ptr__i0__qdr_qdf00 = 1;
          irq_ptr[_i0].qdr->qdf0 = (struct TYPE_5__ *) malloc(_len_irq_ptr__i0__qdr_qdf00*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_irq_ptr__i0__qdr_qdf00; _j0++) {
            irq_ptr[_i0].qdr->qdf0->sliba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->sla = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->slsba = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->akey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->bkey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->ckey = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr[_i0].qdr->qdf0->dkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_irq_ptr_qs0 = 100;
          struct qdio_q ** irq_ptr_qs = (struct qdio_q **) malloc(_len_irq_ptr_qs0*sizeof(struct qdio_q *));
          for(int _i0 = 0; _i0 < _len_irq_ptr_qs0; _i0++) {
            int _len_irq_ptr_qs1 = 1;
            irq_ptr_qs[_i0] = (struct qdio_q *) malloc(_len_irq_ptr_qs1*sizeof(struct qdio_q));
            for(int _i1 = 0; _i1 < _len_irq_ptr_qs1; _i1++) {
                int _len_irq_ptr_qs__i0___i1__slsb_val0 = 1;
          irq_ptr_qs[_i0][_i1].slsb.val = (int *) malloc(_len_irq_ptr_qs__i0___i1__slsb_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_ptr_qs__i0___i1__slsb_val0; _j0++) {
            irq_ptr_qs[_i0][_i1].slsb.val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        irq_ptr_qs[_i0][_i1].sl = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_ptr_qs[_i0][_i1].slib = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          __qdio_allocate_fill_qdr(irq_ptr,irq_ptr_qs,i,nr);
          for(int _aux = 0; _aux < _len_irq_ptr0; _aux++) {
          free(irq_ptr[_aux].qdr);
          }
          free(irq_ptr);
          for(int i1 = 0; i1 < _len_irq_ptr_qs0; i1++) {
            int _len_irq_ptr_qs1 = 1;
              free(irq_ptr_qs[i1]);
          }
          free(irq_ptr_qs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

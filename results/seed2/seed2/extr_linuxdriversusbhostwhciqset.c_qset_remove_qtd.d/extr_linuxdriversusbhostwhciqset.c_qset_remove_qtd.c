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
struct whc_qset {size_t td_start; int /*<<< orphan*/  ntds; TYPE_1__* qtd; } ;
struct whc {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;

/* Variables and functions */
 size_t WHCI_QSET_TD_MAX ; 

__attribute__((used)) static void qset_remove_qtd(struct whc *whc, struct whc_qset *qset)
{
	qset->qtd[qset->td_start].status = 0;

	if (++qset->td_start >= WHCI_QSET_TD_MAX)
		qset->td_start = 0;
	qset->ntds--;
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
          int _len_whc0 = 1;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
            whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qset0 = 1;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
            qset[_i0].td_start = ((-2 * (next_i()%2)) + 1) * next_i();
        qset[_i0].ntds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qset__i0__qtd0 = 1;
          qset[_i0].qtd = (struct TYPE_2__ *) malloc(_len_qset__i0__qtd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qset__i0__qtd0; _j0++) {
            qset[_i0].qtd->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qset_remove_qtd(whc,qset);
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].qtd);
          }
          free(qset);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_whc0 = 65025;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
            whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qset0 = 65025;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
            qset[_i0].td_start = ((-2 * (next_i()%2)) + 1) * next_i();
        qset[_i0].ntds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qset__i0__qtd0 = 1;
          qset[_i0].qtd = (struct TYPE_2__ *) malloc(_len_qset__i0__qtd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qset__i0__qtd0; _j0++) {
            qset[_i0].qtd->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qset_remove_qtd(whc,qset);
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].qtd);
          }
          free(qset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_whc0 = 100;
          struct whc * whc = (struct whc *) malloc(_len_whc0*sizeof(struct whc));
          for(int _i0 = 0; _i0 < _len_whc0; _i0++) {
            whc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qset0 = 100;
          struct whc_qset * qset = (struct whc_qset *) malloc(_len_qset0*sizeof(struct whc_qset));
          for(int _i0 = 0; _i0 < _len_qset0; _i0++) {
            qset[_i0].td_start = ((-2 * (next_i()%2)) + 1) * next_i();
        qset[_i0].ntds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qset__i0__qtd0 = 1;
          qset[_i0].qtd = (struct TYPE_2__ *) malloc(_len_qset__i0__qtd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qset__i0__qtd0; _j0++) {
            qset[_i0].qtd->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qset_remove_qtd(whc,qset);
          free(whc);
          for(int _aux = 0; _aux < _len_qset0; _aux++) {
          free(qset[_aux].qtd);
          }
          free(qset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

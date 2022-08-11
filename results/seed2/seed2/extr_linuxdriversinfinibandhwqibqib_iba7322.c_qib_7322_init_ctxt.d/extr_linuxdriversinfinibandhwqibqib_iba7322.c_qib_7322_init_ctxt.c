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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct qib_ctxtdata {scalar_t__ ctxt; int rcvegrcnt; int rcvegr_tid_base; TYPE_2__* dd; } ;
struct TYPE_4__ {int num_pports; TYPE_1__* cspec; } ;
struct TYPE_3__ {int rcvegrcnt; } ;

/* Variables and functions */
 int KCTXT0_EGRCNT ; 
 scalar_t__ NUM_IB_PORTS ; 

__attribute__((used)) static void qib_7322_init_ctxt(struct qib_ctxtdata *rcd)
{
	if (rcd->ctxt < NUM_IB_PORTS) {
		if (rcd->dd->num_pports > 1) {
			rcd->rcvegrcnt = KCTXT0_EGRCNT / 2;
			rcd->rcvegr_tid_base = rcd->ctxt ? rcd->rcvegrcnt : 0;
		} else {
			rcd->rcvegrcnt = KCTXT0_EGRCNT;
			rcd->rcvegr_tid_base = 0;
		}
	} else {
		rcd->rcvegrcnt = rcd->dd->cspec->rcvegrcnt;
		rcd->rcvegr_tid_base = KCTXT0_EGRCNT +
			(rcd->ctxt - NUM_IB_PORTS) * rcd->rcvegrcnt;
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
          int _len_rcd0 = 1;
          struct qib_ctxtdata * rcd = (struct qib_ctxtdata *) malloc(_len_rcd0*sizeof(struct qib_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
            rcd[_i0].ctxt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegr_tid_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd0 = 1;
          rcd[_i0].dd = (struct TYPE_4__ *) malloc(_len_rcd__i0__dd0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd0; _j0++) {
            rcd[_i0].dd->num_pports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd_cspec0 = 1;
          rcd[_i0].dd->cspec = (struct TYPE_3__ *) malloc(_len_rcd__i0__dd_cspec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd_cspec0; _j0++) {
            rcd[_i0].dd->cspec->rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qib_7322_init_ctxt(rcd);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].dd);
          }
          free(rcd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rcd0 = 65025;
          struct qib_ctxtdata * rcd = (struct qib_ctxtdata *) malloc(_len_rcd0*sizeof(struct qib_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
            rcd[_i0].ctxt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegr_tid_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd0 = 1;
          rcd[_i0].dd = (struct TYPE_4__ *) malloc(_len_rcd__i0__dd0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd0; _j0++) {
            rcd[_i0].dd->num_pports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd_cspec0 = 1;
          rcd[_i0].dd->cspec = (struct TYPE_3__ *) malloc(_len_rcd__i0__dd_cspec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd_cspec0; _j0++) {
            rcd[_i0].dd->cspec->rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qib_7322_init_ctxt(rcd);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].dd);
          }
          free(rcd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rcd0 = 100;
          struct qib_ctxtdata * rcd = (struct qib_ctxtdata *) malloc(_len_rcd0*sizeof(struct qib_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
            rcd[_i0].ctxt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        rcd[_i0].rcvegr_tid_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd0 = 1;
          rcd[_i0].dd = (struct TYPE_4__ *) malloc(_len_rcd__i0__dd0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd0; _j0++) {
            rcd[_i0].dd->num_pports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rcd__i0__dd_cspec0 = 1;
          rcd[_i0].dd->cspec = (struct TYPE_3__ *) malloc(_len_rcd__i0__dd_cspec0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rcd__i0__dd_cspec0; _j0++) {
            rcd[_i0].dd->cspec->rcvegrcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qib_7322_init_ctxt(rcd);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].dd);
          }
          free(rcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

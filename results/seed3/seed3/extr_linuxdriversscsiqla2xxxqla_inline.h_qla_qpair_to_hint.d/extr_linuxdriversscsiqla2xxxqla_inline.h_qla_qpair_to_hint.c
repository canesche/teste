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
struct qla_tgt {struct qla_qpair_hint* qphints; TYPE_1__* ha; } ;
struct qla_qpair_hint {struct qla_qpair* qpair; } ;
struct qla_qpair {int dummy; } ;
struct TYPE_2__ {size_t max_qpairs; } ;

/* Variables and functions */

__attribute__((used)) static inline struct qla_qpair_hint *
qla_qpair_to_hint(struct qla_tgt *tgt, struct qla_qpair *qpair)
{
	struct qla_qpair_hint *h;
	u16 i;

	for (i = 0; i < tgt->ha->max_qpairs + 1; i++) {
		h = &tgt->qphints[i];
		if (h->qpair == qpair)
			return h;
	}

	return NULL;
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
          int _len_tgt0 = 1;
          struct qla_tgt * tgt = (struct qla_tgt *) malloc(_len_tgt0*sizeof(struct qla_tgt));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
              int _len_tgt__i0__qphints0 = 1;
          tgt[_i0].qphints = (struct qla_qpair_hint *) malloc(_len_tgt__i0__qphints0*sizeof(struct qla_qpair_hint));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints0; _j0++) {
              int _len_tgt__i0__qphints_qpair0 = 1;
          tgt[_i0].qphints->qpair = (struct qla_qpair *) malloc(_len_tgt__i0__qphints_qpair0*sizeof(struct qla_qpair));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints_qpair0; _j0++) {
            tgt[_i0].qphints->qpair->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tgt__i0__ha0 = 1;
          tgt[_i0].ha = (struct TYPE_2__ *) malloc(_len_tgt__i0__ha0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tgt__i0__ha0; _j0++) {
            tgt[_i0].ha->max_qpairs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpair0 = 1;
          struct qla_qpair * qpair = (struct qla_qpair *) malloc(_len_qpair0*sizeof(struct qla_qpair));
          for(int _i0 = 0; _i0 < _len_qpair0; _i0++) {
            qpair[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qla_qpair_hint * benchRet = qla_qpair_to_hint(tgt,qpair);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].qphints);
          }
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].ha);
          }
          free(tgt);
          free(qpair);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tgt0 = 65025;
          struct qla_tgt * tgt = (struct qla_tgt *) malloc(_len_tgt0*sizeof(struct qla_tgt));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
              int _len_tgt__i0__qphints0 = 1;
          tgt[_i0].qphints = (struct qla_qpair_hint *) malloc(_len_tgt__i0__qphints0*sizeof(struct qla_qpair_hint));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints0; _j0++) {
              int _len_tgt__i0__qphints_qpair0 = 1;
          tgt[_i0].qphints->qpair = (struct qla_qpair *) malloc(_len_tgt__i0__qphints_qpair0*sizeof(struct qla_qpair));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints_qpair0; _j0++) {
            tgt[_i0].qphints->qpair->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tgt__i0__ha0 = 1;
          tgt[_i0].ha = (struct TYPE_2__ *) malloc(_len_tgt__i0__ha0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tgt__i0__ha0; _j0++) {
            tgt[_i0].ha->max_qpairs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpair0 = 65025;
          struct qla_qpair * qpair = (struct qla_qpair *) malloc(_len_qpair0*sizeof(struct qla_qpair));
          for(int _i0 = 0; _i0 < _len_qpair0; _i0++) {
            qpair[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qla_qpair_hint * benchRet = qla_qpair_to_hint(tgt,qpair);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].qphints);
          }
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].ha);
          }
          free(tgt);
          free(qpair);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tgt0 = 100;
          struct qla_tgt * tgt = (struct qla_tgt *) malloc(_len_tgt0*sizeof(struct qla_tgt));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
              int _len_tgt__i0__qphints0 = 1;
          tgt[_i0].qphints = (struct qla_qpair_hint *) malloc(_len_tgt__i0__qphints0*sizeof(struct qla_qpair_hint));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints0; _j0++) {
              int _len_tgt__i0__qphints_qpair0 = 1;
          tgt[_i0].qphints->qpair = (struct qla_qpair *) malloc(_len_tgt__i0__qphints_qpair0*sizeof(struct qla_qpair));
          for(int _j0 = 0; _j0 < _len_tgt__i0__qphints_qpair0; _j0++) {
            tgt[_i0].qphints->qpair->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tgt__i0__ha0 = 1;
          tgt[_i0].ha = (struct TYPE_2__ *) malloc(_len_tgt__i0__ha0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tgt__i0__ha0; _j0++) {
            tgt[_i0].ha->max_qpairs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qpair0 = 100;
          struct qla_qpair * qpair = (struct qla_qpair *) malloc(_len_qpair0*sizeof(struct qla_qpair));
          for(int _i0 = 0; _i0 < _len_qpair0; _i0++) {
            qpair[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct qla_qpair_hint * benchRet = qla_qpair_to_hint(tgt,qpair);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].qphints);
          }
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].ha);
          }
          free(tgt);
          free(qpair);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

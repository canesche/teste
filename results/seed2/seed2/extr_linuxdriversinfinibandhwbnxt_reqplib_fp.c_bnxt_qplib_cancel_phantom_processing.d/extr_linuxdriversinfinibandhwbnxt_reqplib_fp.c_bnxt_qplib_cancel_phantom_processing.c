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
struct TYPE_2__ {int condition; int send_phantom; int single; } ;
struct bnxt_qplib_qp {TYPE_1__ sq; } ;

/* Variables and functions */

__attribute__((used)) static void bnxt_qplib_cancel_phantom_processing(struct bnxt_qplib_qp *qp)
{
	qp->sq.condition = false;
	qp->sq.send_phantom = false;
	qp->sq.single = false;
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
          int _len_qp0 = 1;
          struct bnxt_qplib_qp * qp = (struct bnxt_qplib_qp *) malloc(_len_qp0*sizeof(struct bnxt_qplib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.condition = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.send_phantom = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.single = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_qplib_cancel_phantom_processing(qp);
          free(qp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qp0 = 65025;
          struct bnxt_qplib_qp * qp = (struct bnxt_qplib_qp *) malloc(_len_qp0*sizeof(struct bnxt_qplib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.condition = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.send_phantom = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.single = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_qplib_cancel_phantom_processing(qp);
          free(qp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qp0 = 100;
          struct bnxt_qplib_qp * qp = (struct bnxt_qplib_qp *) malloc(_len_qp0*sizeof(struct bnxt_qplib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.condition = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.send_phantom = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.single = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_qplib_cancel_phantom_processing(qp);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

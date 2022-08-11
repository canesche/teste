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
struct scu_sgl_element_pair {int dummy; } ;
struct isci_request {struct scu_sgl_element_pair* sg_table; TYPE_1__* tc; } ;
struct TYPE_2__ {struct scu_sgl_element_pair sgl_pair_cd; struct scu_sgl_element_pair sgl_pair_ab; } ;

/* Variables and functions */

__attribute__((used)) static struct scu_sgl_element_pair *to_sgl_element_pair(struct isci_request *ireq,
							int idx)
{
	if (idx == 0)
		return &ireq->tc->sgl_pair_ab;
	else if (idx == 1)
		return &ireq->tc->sgl_pair_cd;
	else if (idx < 0)
		return NULL;
	else
		return &ireq->sg_table[idx - 2];
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
          int idx = 100;
          int _len_ireq0 = 1;
          struct isci_request * ireq = (struct isci_request *) malloc(_len_ireq0*sizeof(struct isci_request));
          for(int _i0 = 0; _i0 < _len_ireq0; _i0++) {
              int _len_ireq__i0__sg_table0 = 1;
          ireq[_i0].sg_table = (struct scu_sgl_element_pair *) malloc(_len_ireq__i0__sg_table0*sizeof(struct scu_sgl_element_pair));
          for(int _j0 = 0; _j0 < _len_ireq__i0__sg_table0; _j0++) {
            ireq[_i0].sg_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ireq__i0__tc0 = 1;
          ireq[_i0].tc = (struct TYPE_2__ *) malloc(_len_ireq__i0__tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ireq__i0__tc0; _j0++) {
            ireq[_i0].tc->sgl_pair_cd.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        ireq[_i0].tc->sgl_pair_ab.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct scu_sgl_element_pair * benchRet = to_sgl_element_pair(ireq,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].sg_table);
          }
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].tc);
          }
          free(ireq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_ireq0 = 65025;
          struct isci_request * ireq = (struct isci_request *) malloc(_len_ireq0*sizeof(struct isci_request));
          for(int _i0 = 0; _i0 < _len_ireq0; _i0++) {
              int _len_ireq__i0__sg_table0 = 1;
          ireq[_i0].sg_table = (struct scu_sgl_element_pair *) malloc(_len_ireq__i0__sg_table0*sizeof(struct scu_sgl_element_pair));
          for(int _j0 = 0; _j0 < _len_ireq__i0__sg_table0; _j0++) {
            ireq[_i0].sg_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ireq__i0__tc0 = 1;
          ireq[_i0].tc = (struct TYPE_2__ *) malloc(_len_ireq__i0__tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ireq__i0__tc0; _j0++) {
            ireq[_i0].tc->sgl_pair_cd.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        ireq[_i0].tc->sgl_pair_ab.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct scu_sgl_element_pair * benchRet = to_sgl_element_pair(ireq,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].sg_table);
          }
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].tc);
          }
          free(ireq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_ireq0 = 100;
          struct isci_request * ireq = (struct isci_request *) malloc(_len_ireq0*sizeof(struct isci_request));
          for(int _i0 = 0; _i0 < _len_ireq0; _i0++) {
              int _len_ireq__i0__sg_table0 = 1;
          ireq[_i0].sg_table = (struct scu_sgl_element_pair *) malloc(_len_ireq__i0__sg_table0*sizeof(struct scu_sgl_element_pair));
          for(int _j0 = 0; _j0 < _len_ireq__i0__sg_table0; _j0++) {
            ireq[_i0].sg_table->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ireq__i0__tc0 = 1;
          ireq[_i0].tc = (struct TYPE_2__ *) malloc(_len_ireq__i0__tc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ireq__i0__tc0; _j0++) {
            ireq[_i0].tc->sgl_pair_cd.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        ireq[_i0].tc->sgl_pair_ab.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct scu_sgl_element_pair * benchRet = to_sgl_element_pair(ireq,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].sg_table);
          }
          for(int _aux = 0; _aux < _len_ireq0; _aux++) {
          free(ireq[_aux].tc);
          }
          free(ireq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct pktgen_dev {unsigned int nr_labels; int* labels; } ;
typedef  int __be32 ;

/* Variables and functions */
 int MPLS_STACK_BOTTOM ; 

__attribute__((used)) static void mpls_push(__be32 *mpls, struct pktgen_dev *pkt_dev)
{
	unsigned int i;
	for (i = 0; i < pkt_dev->nr_labels; i++)
		*mpls++ = pkt_dev->labels[i] & ~MPLS_STACK_BOTTOM;

	mpls--;
	*mpls |= MPLS_STACK_BOTTOM;
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
          int _len_mpls0 = 1;
          int * mpls = (int *) malloc(_len_mpls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpls0; _i0++) {
            mpls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt_dev0 = 1;
          struct pktgen_dev * pkt_dev = (struct pktgen_dev *) malloc(_len_pkt_dev0*sizeof(struct pktgen_dev));
          for(int _i0 = 0; _i0 < _len_pkt_dev0; _i0++) {
            pkt_dev[_i0].nr_labels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt_dev__i0__labels0 = 1;
          pkt_dev[_i0].labels = (int *) malloc(_len_pkt_dev__i0__labels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt_dev__i0__labels0; _j0++) {
            pkt_dev[_i0].labels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpls_push(mpls,pkt_dev);
          free(mpls);
          for(int _aux = 0; _aux < _len_pkt_dev0; _aux++) {
          free(pkt_dev[_aux].labels);
          }
          free(pkt_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mpls0 = 65025;
          int * mpls = (int *) malloc(_len_mpls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpls0; _i0++) {
            mpls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt_dev0 = 65025;
          struct pktgen_dev * pkt_dev = (struct pktgen_dev *) malloc(_len_pkt_dev0*sizeof(struct pktgen_dev));
          for(int _i0 = 0; _i0 < _len_pkt_dev0; _i0++) {
            pkt_dev[_i0].nr_labels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt_dev__i0__labels0 = 1;
          pkt_dev[_i0].labels = (int *) malloc(_len_pkt_dev__i0__labels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt_dev__i0__labels0; _j0++) {
            pkt_dev[_i0].labels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpls_push(mpls,pkt_dev);
          free(mpls);
          for(int _aux = 0; _aux < _len_pkt_dev0; _aux++) {
          free(pkt_dev[_aux].labels);
          }
          free(pkt_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mpls0 = 100;
          int * mpls = (int *) malloc(_len_mpls0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mpls0; _i0++) {
            mpls[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt_dev0 = 100;
          struct pktgen_dev * pkt_dev = (struct pktgen_dev *) malloc(_len_pkt_dev0*sizeof(struct pktgen_dev));
          for(int _i0 = 0; _i0 < _len_pkt_dev0; _i0++) {
            pkt_dev[_i0].nr_labels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt_dev__i0__labels0 = 1;
          pkt_dev[_i0].labels = (int *) malloc(_len_pkt_dev__i0__labels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt_dev__i0__labels0; _j0++) {
            pkt_dev[_i0].labels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mpls_push(mpls,pkt_dev);
          free(mpls);
          for(int _aux = 0; _aux < _len_pkt_dev0; _aux++) {
          free(pkt_dev[_aux].labels);
          }
          free(pkt_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

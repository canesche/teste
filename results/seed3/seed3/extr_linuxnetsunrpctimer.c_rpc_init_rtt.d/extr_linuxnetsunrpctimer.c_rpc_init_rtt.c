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
struct rpc_rtt {unsigned long timeo; unsigned long* srtt; unsigned long* sdrtt; scalar_t__* ntimeouts; } ;

/* Variables and functions */
 unsigned long RPC_RTO_INIT ; 

void rpc_init_rtt(struct rpc_rtt *rt, unsigned long timeo)
{
	unsigned long init = 0;
	unsigned int i;

	rt->timeo = timeo;

	if (timeo > RPC_RTO_INIT)
		init = (timeo - RPC_RTO_INIT) << 3;
	for (i = 0; i < 5; i++) {
		rt->srtt[i] = init;
		rt->sdrtt[i] = RPC_RTO_INIT;
		rt->ntimeouts[i] = 0;
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
          unsigned long timeo = 100;
          int _len_rt0 = 1;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (unsigned long *) malloc(_len_rt__i0__srtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (unsigned long *) malloc(_len_rt__i0__sdrtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__ntimeouts0 = 1;
          rt[_i0].ntimeouts = (long *) malloc(_len_rt__i0__ntimeouts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rt__i0__ntimeouts0; _j0++) {
            rt[_i0].ntimeouts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_init_rtt(rt,timeo);
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].ntimeouts);
          }
          free(rt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long timeo = 255;
          int _len_rt0 = 65025;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (unsigned long *) malloc(_len_rt__i0__srtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (unsigned long *) malloc(_len_rt__i0__sdrtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__ntimeouts0 = 1;
          rt[_i0].ntimeouts = (long *) malloc(_len_rt__i0__ntimeouts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rt__i0__ntimeouts0; _j0++) {
            rt[_i0].ntimeouts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_init_rtt(rt,timeo);
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].ntimeouts);
          }
          free(rt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long timeo = 10;
          int _len_rt0 = 100;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (unsigned long *) malloc(_len_rt__i0__srtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (unsigned long *) malloc(_len_rt__i0__sdrtt0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__ntimeouts0 = 1;
          rt[_i0].ntimeouts = (long *) malloc(_len_rt__i0__ntimeouts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rt__i0__ntimeouts0; _j0++) {
            rt[_i0].ntimeouts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rpc_init_rtt(rt,timeo);
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].ntimeouts);
          }
          free(rt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

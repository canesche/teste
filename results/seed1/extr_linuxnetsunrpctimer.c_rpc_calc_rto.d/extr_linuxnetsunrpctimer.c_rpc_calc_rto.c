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
struct rpc_rtt {unsigned long timeo; int* srtt; int* sdrtt; } ;

/* Variables and functions */
 unsigned long RPC_RTO_MAX ; 

unsigned long rpc_calc_rto(struct rpc_rtt *rt, unsigned int timer)
{
	unsigned long res;

	if (timer-- == 0)
		return rt->timeo;

	res = ((rt->srtt[timer] + 7) >> 3) + rt->sdrtt[timer];
	if (res > RPC_RTO_MAX)
		res = RPC_RTO_MAX;

	return res;
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
          unsigned int timer = 100;
          int _len_rt0 = 1;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (int *) malloc(_len_rt__i0__srtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (int *) malloc(_len_rt__i0__sdrtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rpc_calc_rto(rt,timer);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
          }
          free(rt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int timer = 255;
          int _len_rt0 = 65025;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (int *) malloc(_len_rt__i0__srtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (int *) malloc(_len_rt__i0__sdrtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rpc_calc_rto(rt,timer);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
          }
          free(rt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int timer = 10;
          int _len_rt0 = 100;
          struct rpc_rtt * rt = (struct rpc_rtt *) malloc(_len_rt0*sizeof(struct rpc_rtt));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].timeo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rt__i0__srtt0 = 1;
          rt[_i0].srtt = (int *) malloc(_len_rt__i0__srtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__srtt0; _j0++) {
            rt[_i0].srtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt__i0__sdrtt0 = 1;
          rt[_i0].sdrtt = (int *) malloc(_len_rt__i0__sdrtt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rt__i0__sdrtt0; _j0++) {
            rt[_i0].sdrtt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rpc_calc_rto(rt,timer);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].srtt);
          }
          for(int _aux = 0; _aux < _len_rt0; _aux++) {
          free(rt[_aux].sdrtt);
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

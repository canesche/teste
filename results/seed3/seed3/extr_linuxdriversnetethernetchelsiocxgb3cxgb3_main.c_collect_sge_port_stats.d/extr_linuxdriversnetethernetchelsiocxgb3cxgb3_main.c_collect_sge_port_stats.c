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
struct port_info {int first_qset; int nqsets; } ;
struct TYPE_4__ {TYPE_1__* qs; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {scalar_t__* port_stats; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long collect_sge_port_stats(struct adapter *adapter,
					    struct port_info *p, int idx)
{
	int i;
	unsigned long tot = 0;

	for (i = p->first_qset; i < p->first_qset + p->nqsets; ++i)
		tot += adapter->sge.qs[i].port_stats[idx];
	return tot;
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
          int _len_adapter0 = 1;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__sge_qs0 = 1;
          adapter[_i0].sge.qs = (struct TYPE_3__ *) malloc(_len_adapter__i0__sge_qs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs0; _j0++) {
              int _len_adapter__i0__sge_qs_port_stats0 = 1;
          adapter[_i0].sge.qs->port_stats = (long *) malloc(_len_adapter__i0__sge_qs_port_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs_port_stats0; _j0++) {
            adapter[_i0].sge.qs->port_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 1;
          struct port_info * p = (struct port_info *) malloc(_len_p0*sizeof(struct port_info));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].first_qset = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].nqsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = collect_sge_port_stats(adapter,p,idx);
          printf("%lu\n", benchRet); 
          free(adapter);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_adapter0 = 65025;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__sge_qs0 = 1;
          adapter[_i0].sge.qs = (struct TYPE_3__ *) malloc(_len_adapter__i0__sge_qs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs0; _j0++) {
              int _len_adapter__i0__sge_qs_port_stats0 = 1;
          adapter[_i0].sge.qs->port_stats = (long *) malloc(_len_adapter__i0__sge_qs_port_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs_port_stats0; _j0++) {
            adapter[_i0].sge.qs->port_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 65025;
          struct port_info * p = (struct port_info *) malloc(_len_p0*sizeof(struct port_info));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].first_qset = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].nqsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = collect_sge_port_stats(adapter,p,idx);
          printf("%lu\n", benchRet); 
          free(adapter);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_adapter0 = 100;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__sge_qs0 = 1;
          adapter[_i0].sge.qs = (struct TYPE_3__ *) malloc(_len_adapter__i0__sge_qs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs0; _j0++) {
              int _len_adapter__i0__sge_qs_port_stats0 = 1;
          adapter[_i0].sge.qs->port_stats = (long *) malloc(_len_adapter__i0__sge_qs_port_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapter__i0__sge_qs_port_stats0; _j0++) {
            adapter[_i0].sge.qs->port_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_p0 = 100;
          struct port_info * p = (struct port_info *) malloc(_len_p0*sizeof(struct port_info));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].first_qset = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].nqsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = collect_sge_port_stats(adapter,p,idx);
          printf("%lu\n", benchRet); 
          free(adapter);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

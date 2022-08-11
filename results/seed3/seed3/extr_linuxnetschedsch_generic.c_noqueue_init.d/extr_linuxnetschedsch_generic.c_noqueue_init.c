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
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int /*<<< orphan*/ * enqueue; } ;

/* Variables and functions */

__attribute__((used)) static int noqueue_init(struct Qdisc *qdisc, struct nlattr *opt,
			struct netlink_ext_ack *extack)
{
	/* register_qdisc() assigns a default of noop_enqueue if unset,
	 * but __dev_queue_xmit() treats noqueue only as such
	 * if this is NULL - so clear it here. */
	qdisc->enqueue = NULL;
	return 0;
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
          int _len_qdisc0 = 1;
          struct Qdisc * qdisc = (struct Qdisc *) malloc(_len_qdisc0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_qdisc0; _i0++) {
              int _len_qdisc__i0__enqueue0 = 1;
          qdisc[_i0].enqueue = (int *) malloc(_len_qdisc__i0__enqueue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qdisc__i0__enqueue0; _j0++) {
            qdisc[_i0].enqueue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_opt0 = 1;
          struct nlattr * opt = (struct nlattr *) malloc(_len_opt0*sizeof(struct nlattr));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extack0 = 1;
          struct netlink_ext_ack * extack = (struct netlink_ext_ack *) malloc(_len_extack0*sizeof(struct netlink_ext_ack));
          for(int _i0 = 0; _i0 < _len_extack0; _i0++) {
            extack[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = noqueue_init(qdisc,opt,extack);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdisc0; _aux++) {
          free(qdisc[_aux].enqueue);
          }
          free(qdisc);
          free(opt);
          free(extack);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qdisc0 = 65025;
          struct Qdisc * qdisc = (struct Qdisc *) malloc(_len_qdisc0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_qdisc0; _i0++) {
              int _len_qdisc__i0__enqueue0 = 1;
          qdisc[_i0].enqueue = (int *) malloc(_len_qdisc__i0__enqueue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qdisc__i0__enqueue0; _j0++) {
            qdisc[_i0].enqueue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_opt0 = 65025;
          struct nlattr * opt = (struct nlattr *) malloc(_len_opt0*sizeof(struct nlattr));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extack0 = 65025;
          struct netlink_ext_ack * extack = (struct netlink_ext_ack *) malloc(_len_extack0*sizeof(struct netlink_ext_ack));
          for(int _i0 = 0; _i0 < _len_extack0; _i0++) {
            extack[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = noqueue_init(qdisc,opt,extack);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdisc0; _aux++) {
          free(qdisc[_aux].enqueue);
          }
          free(qdisc);
          free(opt);
          free(extack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qdisc0 = 100;
          struct Qdisc * qdisc = (struct Qdisc *) malloc(_len_qdisc0*sizeof(struct Qdisc));
          for(int _i0 = 0; _i0 < _len_qdisc0; _i0++) {
              int _len_qdisc__i0__enqueue0 = 1;
          qdisc[_i0].enqueue = (int *) malloc(_len_qdisc__i0__enqueue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qdisc__i0__enqueue0; _j0++) {
            qdisc[_i0].enqueue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_opt0 = 100;
          struct nlattr * opt = (struct nlattr *) malloc(_len_opt0*sizeof(struct nlattr));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extack0 = 100;
          struct netlink_ext_ack * extack = (struct netlink_ext_ack *) malloc(_len_extack0*sizeof(struct netlink_ext_ack));
          for(int _i0 = 0; _i0 < _len_extack0; _i0++) {
            extack[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = noqueue_init(qdisc,opt,extack);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_qdisc0; _aux++) {
          free(qdisc[_aux].enqueue);
          }
          free(qdisc);
          free(opt);
          free(extack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

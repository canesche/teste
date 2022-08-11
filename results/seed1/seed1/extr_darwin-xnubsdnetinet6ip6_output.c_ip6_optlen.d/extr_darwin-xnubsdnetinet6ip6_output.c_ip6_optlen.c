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
struct ip6_ext {int ip6e_len; } ;
struct in6pcb {TYPE_1__* in6p_outputopts; } ;
struct TYPE_2__ {scalar_t__ ip6po_dest2; scalar_t__ ip6po_rthdr; scalar_t__ ip6po_dest1; scalar_t__ ip6po_hbh; } ;

/* Variables and functions */

int
ip6_optlen(struct in6pcb *in6p)
{
	int len;

	if (!in6p->in6p_outputopts)
		return (0);

	len = 0;
#define	elen(x)								\
	(((struct ip6_ext *)(x)) ?					\
	(((struct ip6_ext *)(x))->ip6e_len + 1) << 3 : 0)

	len += elen(in6p->in6p_outputopts->ip6po_hbh);
	if (in6p->in6p_outputopts->ip6po_rthdr) {
		/* dest1 is valid with rthdr only */
		len += elen(in6p->in6p_outputopts->ip6po_dest1);
	}
	len += elen(in6p->in6p_outputopts->ip6po_rthdr);
	len += elen(in6p->in6p_outputopts->ip6po_dest2);
	return (len);
#undef elen
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
          int _len_in6p0 = 1;
          struct in6pcb * in6p = (struct in6pcb *) malloc(_len_in6p0*sizeof(struct in6pcb));
          for(int _i0 = 0; _i0 < _len_in6p0; _i0++) {
              int _len_in6p__i0__in6p_outputopts0 = 1;
          in6p[_i0].in6p_outputopts = (struct TYPE_2__ *) malloc(_len_in6p__i0__in6p_outputopts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_in6p__i0__in6p_outputopts0; _j0++) {
            in6p[_i0].in6p_outputopts->ip6po_dest2 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_rthdr = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_dest1 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_hbh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ip6_optlen(in6p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_in6p0; _aux++) {
          free(in6p[_aux].in6p_outputopts);
          }
          free(in6p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_in6p0 = 65025;
          struct in6pcb * in6p = (struct in6pcb *) malloc(_len_in6p0*sizeof(struct in6pcb));
          for(int _i0 = 0; _i0 < _len_in6p0; _i0++) {
              int _len_in6p__i0__in6p_outputopts0 = 1;
          in6p[_i0].in6p_outputopts = (struct TYPE_2__ *) malloc(_len_in6p__i0__in6p_outputopts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_in6p__i0__in6p_outputopts0; _j0++) {
            in6p[_i0].in6p_outputopts->ip6po_dest2 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_rthdr = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_dest1 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_hbh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ip6_optlen(in6p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_in6p0; _aux++) {
          free(in6p[_aux].in6p_outputopts);
          }
          free(in6p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_in6p0 = 100;
          struct in6pcb * in6p = (struct in6pcb *) malloc(_len_in6p0*sizeof(struct in6pcb));
          for(int _i0 = 0; _i0 < _len_in6p0; _i0++) {
              int _len_in6p__i0__in6p_outputopts0 = 1;
          in6p[_i0].in6p_outputopts = (struct TYPE_2__ *) malloc(_len_in6p__i0__in6p_outputopts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_in6p__i0__in6p_outputopts0; _j0++) {
            in6p[_i0].in6p_outputopts->ip6po_dest2 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_rthdr = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_dest1 = ((-2 * (next_i()%2)) + 1) * next_i();
        in6p[_i0].in6p_outputopts->ip6po_hbh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ip6_optlen(in6p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_in6p0; _aux++) {
          free(in6p[_aux].in6p_outputopts);
          }
          free(in6p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

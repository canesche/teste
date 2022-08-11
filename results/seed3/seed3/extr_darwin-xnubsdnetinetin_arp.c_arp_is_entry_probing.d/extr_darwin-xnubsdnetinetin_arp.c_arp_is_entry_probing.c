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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct llinfo_arp {TYPE_1__* la_llreach; } ;
typedef  TYPE_2__* route_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_5__ {struct llinfo_arp* rt_llinfo; } ;
struct TYPE_4__ {scalar_t__ lr_probes; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

boolean_t
arp_is_entry_probing (route_t p_route)
{
	struct llinfo_arp *llinfo = p_route->rt_llinfo;

	if (llinfo != NULL &&
	    llinfo->la_llreach != NULL &&
	    llinfo->la_llreach->lr_probes != 0)
		return (TRUE);

	return (FALSE);
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
          int _len_p_route0 = 1;
          struct TYPE_5__ * p_route = (struct TYPE_5__ *) malloc(_len_p_route0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_route0; _i0++) {
              int _len_p_route__i0__rt_llinfo0 = 1;
          p_route[_i0].rt_llinfo = (struct llinfo_arp *) malloc(_len_p_route__i0__rt_llinfo0*sizeof(struct llinfo_arp));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo0; _j0++) {
              int _len_p_route__i0__rt_llinfo_la_llreach0 = 1;
          p_route[_i0].rt_llinfo->la_llreach = (struct TYPE_4__ *) malloc(_len_p_route__i0__rt_llinfo_la_llreach0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo_la_llreach0; _j0++) {
            p_route[_i0].rt_llinfo->la_llreach->lr_probes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = arp_is_entry_probing(p_route);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_route0; _aux++) {
          free(p_route[_aux].rt_llinfo);
          }
          free(p_route);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_route0 = 65025;
          struct TYPE_5__ * p_route = (struct TYPE_5__ *) malloc(_len_p_route0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_route0; _i0++) {
              int _len_p_route__i0__rt_llinfo0 = 1;
          p_route[_i0].rt_llinfo = (struct llinfo_arp *) malloc(_len_p_route__i0__rt_llinfo0*sizeof(struct llinfo_arp));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo0; _j0++) {
              int _len_p_route__i0__rt_llinfo_la_llreach0 = 1;
          p_route[_i0].rt_llinfo->la_llreach = (struct TYPE_4__ *) malloc(_len_p_route__i0__rt_llinfo_la_llreach0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo_la_llreach0; _j0++) {
            p_route[_i0].rt_llinfo->la_llreach->lr_probes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = arp_is_entry_probing(p_route);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_route0; _aux++) {
          free(p_route[_aux].rt_llinfo);
          }
          free(p_route);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_route0 = 100;
          struct TYPE_5__ * p_route = (struct TYPE_5__ *) malloc(_len_p_route0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p_route0; _i0++) {
              int _len_p_route__i0__rt_llinfo0 = 1;
          p_route[_i0].rt_llinfo = (struct llinfo_arp *) malloc(_len_p_route__i0__rt_llinfo0*sizeof(struct llinfo_arp));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo0; _j0++) {
              int _len_p_route__i0__rt_llinfo_la_llreach0 = 1;
          p_route[_i0].rt_llinfo->la_llreach = (struct TYPE_4__ *) malloc(_len_p_route__i0__rt_llinfo_la_llreach0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_route__i0__rt_llinfo_la_llreach0; _j0++) {
            p_route[_i0].rt_llinfo->la_llreach->lr_probes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = arp_is_entry_probing(p_route);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_route0; _aux++) {
          free(p_route[_aux].rt_llinfo);
          }
          free(p_route);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

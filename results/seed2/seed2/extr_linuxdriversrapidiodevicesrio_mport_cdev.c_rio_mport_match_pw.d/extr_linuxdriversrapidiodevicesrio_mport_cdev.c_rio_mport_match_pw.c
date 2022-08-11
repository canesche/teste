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
struct TYPE_2__ {int comptag; } ;
union rio_pw_msg {TYPE_1__ em; } ;
struct rio_pw_filter {int mask; int low; int high; } ;

/* Variables and functions */

__attribute__((used)) static int rio_mport_match_pw(union rio_pw_msg *msg,
			      struct rio_pw_filter *filter)
{
	if ((msg->em.comptag & filter->mask) < filter->low ||
		(msg->em.comptag & filter->mask) > filter->high)
		return 0;
	return 1;
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
          int _len_msg0 = 1;
          union rio_pw_msg * msg = (union rio_pw_msg *) malloc(_len_msg0*sizeof(union rio_pw_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          int _len_filter0 = 1;
          struct rio_pw_filter * filter = (struct rio_pw_filter *) malloc(_len_filter0*sizeof(struct rio_pw_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_mport_match_pw(msg,filter);
          printf("%d\n", benchRet); 
          free(msg);
          free(filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_msg0 = 65025;
          union rio_pw_msg * msg = (union rio_pw_msg *) malloc(_len_msg0*sizeof(union rio_pw_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          int _len_filter0 = 65025;
          struct rio_pw_filter * filter = (struct rio_pw_filter *) malloc(_len_filter0*sizeof(struct rio_pw_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_mport_match_pw(msg,filter);
          printf("%d\n", benchRet); 
          free(msg);
          free(filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_msg0 = 100;
          union rio_pw_msg * msg = (union rio_pw_msg *) malloc(_len_msg0*sizeof(union rio_pw_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0] = 0;
          }
          int _len_filter0 = 100;
          struct rio_pw_filter * filter = (struct rio_pw_filter *) malloc(_len_filter0*sizeof(struct rio_pw_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_mport_match_pw(msg,filter);
          printf("%d\n", benchRet); 
          free(msg);
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

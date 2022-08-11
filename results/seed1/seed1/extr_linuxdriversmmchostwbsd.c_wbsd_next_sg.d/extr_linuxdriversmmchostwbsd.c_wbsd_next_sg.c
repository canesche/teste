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
struct wbsd_host {scalar_t__ num_sg; TYPE_1__* cur_sg; int /*<<< orphan*/  remain; scalar_t__ offset; } ;
struct TYPE_2__ {int /*<<< orphan*/  length; } ;

/* Variables and functions */

__attribute__((used)) static inline int wbsd_next_sg(struct wbsd_host *host)
{
	/*
	 * Skip to next SG entry.
	 */
	host->cur_sg++;
	host->num_sg--;

	/*
	 * Any entries left?
	 */
	if (host->num_sg > 0) {
		host->offset = 0;
		host->remain = host->cur_sg->length;
	}

	return host->num_sg;
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
          int _len_host0 = 1;
          struct wbsd_host * host = (struct wbsd_host *) malloc(_len_host0*sizeof(struct wbsd_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].num_sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__cur_sg0 = 1;
          host[_i0].cur_sg = (struct TYPE_2__ *) malloc(_len_host__i0__cur_sg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__cur_sg0; _j0++) {
            host[_i0].cur_sg->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].remain = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wbsd_next_sg(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cur_sg);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct wbsd_host * host = (struct wbsd_host *) malloc(_len_host0*sizeof(struct wbsd_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].num_sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__cur_sg0 = 1;
          host[_i0].cur_sg = (struct TYPE_2__ *) malloc(_len_host__i0__cur_sg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__cur_sg0; _j0++) {
            host[_i0].cur_sg->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].remain = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wbsd_next_sg(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cur_sg);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct wbsd_host * host = (struct wbsd_host *) malloc(_len_host0*sizeof(struct wbsd_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].num_sg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__cur_sg0 = 1;
          host[_i0].cur_sg = (struct TYPE_2__ *) malloc(_len_host__i0__cur_sg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__cur_sg0; _j0++) {
            host[_i0].cur_sg->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].remain = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wbsd_next_sg(host);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].cur_sg);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       3            linked\n\
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
struct host1x_syncpt {int dummy; } ;
struct host1x {struct host1x_syncpt* syncpt; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int nb_pts; } ;

/* Variables and functions */

struct host1x_syncpt *host1x_syncpt_get(struct host1x *host, unsigned int id)
{
	if (id >= host->info->nb_pts)
		return NULL;

	return host->syncpt + id;
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
          unsigned int id = 100;
          int _len_host0 = 1;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__syncpt0 = 1;
          host[_i0].syncpt = (struct host1x_syncpt *) malloc(_len_host__i0__syncpt0*sizeof(struct host1x_syncpt));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt0; _j0++) {
            host[_i0].syncpt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__info0 = 1;
          host[_i0].info = (struct TYPE_2__ *) malloc(_len_host__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__info0; _j0++) {
            host[_i0].info->nb_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt * benchRet = host1x_syncpt_get(host,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].info);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int id = 255;
          int _len_host0 = 65025;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__syncpt0 = 1;
          host[_i0].syncpt = (struct host1x_syncpt *) malloc(_len_host__i0__syncpt0*sizeof(struct host1x_syncpt));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt0; _j0++) {
            host[_i0].syncpt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__info0 = 1;
          host[_i0].info = (struct TYPE_2__ *) malloc(_len_host__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__info0; _j0++) {
            host[_i0].info->nb_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt * benchRet = host1x_syncpt_get(host,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].info);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int id = 10;
          int _len_host0 = 100;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__syncpt0 = 1;
          host[_i0].syncpt = (struct host1x_syncpt *) malloc(_len_host__i0__syncpt0*sizeof(struct host1x_syncpt));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt0; _j0++) {
            host[_i0].syncpt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__info0 = 1;
          host[_i0].info = (struct TYPE_2__ *) malloc(_len_host__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__info0; _j0++) {
            host[_i0].info->nb_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt * benchRet = host1x_syncpt_get(host,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].info);
          }
          free(host);
        
        break;
    }
    // linked
    case 3:
    {
          unsigned int id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host0 = 1;
          struct host1x * host = (struct host1x *) malloc(_len_host0*sizeof(struct host1x));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__syncpt0 = 1;
          host[_i0].syncpt = (struct host1x_syncpt *) malloc(_len_host__i0__syncpt0*sizeof(struct host1x_syncpt));
          for(int _j0 = 0; _j0 < _len_host__i0__syncpt0; _j0++) {
            host[_i0].syncpt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__info0 = 1;
          host[_i0].info = (struct TYPE_2__ *) malloc(_len_host__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_host__i0__info0; _j0++) {
            host[_i0].info->nb_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt * benchRet = host1x_syncpt_get(host,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].syncpt);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].info);
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

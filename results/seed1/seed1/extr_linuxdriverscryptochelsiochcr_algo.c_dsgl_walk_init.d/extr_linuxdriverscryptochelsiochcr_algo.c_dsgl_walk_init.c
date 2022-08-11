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
struct phys_sge_pairs {int dummy; } ;
struct dsgl_walk {struct phys_sge_pairs* to; scalar_t__ nents; struct cpl_rx_phys_dsgl* dsgl; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void dsgl_walk_init(struct dsgl_walk *walk,
				   struct cpl_rx_phys_dsgl *dsgl)
{
	walk->dsgl = dsgl;
	walk->nents = 0;
	walk->to = (struct phys_sge_pairs *)(dsgl + 1);
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
          int _len_walk0 = 1;
          struct dsgl_walk * walk = (struct dsgl_walk *) malloc(_len_walk0*sizeof(struct dsgl_walk));
          for(int _i0 = 0; _i0 < _len_walk0; _i0++) {
              int _len_walk__i0__to0 = 1;
          walk[_i0].to = (struct phys_sge_pairs *) malloc(_len_walk__i0__to0*sizeof(struct phys_sge_pairs));
          for(int _j0 = 0; _j0 < _len_walk__i0__to0; _j0++) {
            walk[_i0].to->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        walk[_i0].nents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_walk__i0__dsgl0 = 1;
          walk[_i0].dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_walk__i0__dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _j0 = 0; _j0 < _len_walk__i0__dsgl0; _j0++) {
            walk[_i0].dsgl->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dsgl0 = 1;
          struct cpl_rx_phys_dsgl * dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _i0 = 0; _i0 < _len_dsgl0; _i0++) {
            dsgl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsgl_walk_init(walk,dsgl);
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].to);
          }
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].dsgl);
          }
          free(walk);
          free(dsgl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_walk0 = 65025;
          struct dsgl_walk * walk = (struct dsgl_walk *) malloc(_len_walk0*sizeof(struct dsgl_walk));
          for(int _i0 = 0; _i0 < _len_walk0; _i0++) {
              int _len_walk__i0__to0 = 1;
          walk[_i0].to = (struct phys_sge_pairs *) malloc(_len_walk__i0__to0*sizeof(struct phys_sge_pairs));
          for(int _j0 = 0; _j0 < _len_walk__i0__to0; _j0++) {
            walk[_i0].to->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        walk[_i0].nents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_walk__i0__dsgl0 = 1;
          walk[_i0].dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_walk__i0__dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _j0 = 0; _j0 < _len_walk__i0__dsgl0; _j0++) {
            walk[_i0].dsgl->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dsgl0 = 65025;
          struct cpl_rx_phys_dsgl * dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _i0 = 0; _i0 < _len_dsgl0; _i0++) {
            dsgl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsgl_walk_init(walk,dsgl);
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].to);
          }
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].dsgl);
          }
          free(walk);
          free(dsgl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_walk0 = 100;
          struct dsgl_walk * walk = (struct dsgl_walk *) malloc(_len_walk0*sizeof(struct dsgl_walk));
          for(int _i0 = 0; _i0 < _len_walk0; _i0++) {
              int _len_walk__i0__to0 = 1;
          walk[_i0].to = (struct phys_sge_pairs *) malloc(_len_walk__i0__to0*sizeof(struct phys_sge_pairs));
          for(int _j0 = 0; _j0 < _len_walk__i0__to0; _j0++) {
            walk[_i0].to->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        walk[_i0].nents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_walk__i0__dsgl0 = 1;
          walk[_i0].dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_walk__i0__dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _j0 = 0; _j0 < _len_walk__i0__dsgl0; _j0++) {
            walk[_i0].dsgl->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dsgl0 = 100;
          struct cpl_rx_phys_dsgl * dsgl = (struct cpl_rx_phys_dsgl *) malloc(_len_dsgl0*sizeof(struct cpl_rx_phys_dsgl));
          for(int _i0 = 0; _i0 < _len_dsgl0; _i0++) {
            dsgl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsgl_walk_init(walk,dsgl);
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].to);
          }
          for(int _aux = 0; _aux < _len_walk0; _aux++) {
          free(walk[_aux].dsgl);
          }
          free(walk);
          free(dsgl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

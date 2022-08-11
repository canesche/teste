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
struct WD33C93_hostdata {int /*<<< orphan*/ * sync_stat; } ;

/* Variables and functions */
 int /*<<< orphan*/  SS_UNSET ; 

__attribute__((used)) static inline void set_resync ( struct WD33C93_hostdata *hd, int mask )
{
	int i;
	for (i = 0; i < 8; i++)
		if (mask & (1 << i))
			hd->sync_stat[i] = SS_UNSET;
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
          int mask = 100;
          int _len_hd0 = 1;
          struct WD33C93_hostdata * hd = (struct WD33C93_hostdata *) malloc(_len_hd0*sizeof(struct WD33C93_hostdata));
          for(int _i0 = 0; _i0 < _len_hd0; _i0++) {
              int _len_hd__i0__sync_stat0 = 1;
          hd[_i0].sync_stat = (int *) malloc(_len_hd__i0__sync_stat0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hd__i0__sync_stat0; _j0++) {
            hd[_i0].sync_stat[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_resync(hd,mask);
          for(int _aux = 0; _aux < _len_hd0; _aux++) {
          free(hd[_aux].sync_stat);
          }
          free(hd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mask = 255;
          int _len_hd0 = 65025;
          struct WD33C93_hostdata * hd = (struct WD33C93_hostdata *) malloc(_len_hd0*sizeof(struct WD33C93_hostdata));
          for(int _i0 = 0; _i0 < _len_hd0; _i0++) {
              int _len_hd__i0__sync_stat0 = 1;
          hd[_i0].sync_stat = (int *) malloc(_len_hd__i0__sync_stat0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hd__i0__sync_stat0; _j0++) {
            hd[_i0].sync_stat[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_resync(hd,mask);
          for(int _aux = 0; _aux < _len_hd0; _aux++) {
          free(hd[_aux].sync_stat);
          }
          free(hd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mask = 10;
          int _len_hd0 = 100;
          struct WD33C93_hostdata * hd = (struct WD33C93_hostdata *) malloc(_len_hd0*sizeof(struct WD33C93_hostdata));
          for(int _i0 = 0; _i0 < _len_hd0; _i0++) {
              int _len_hd__i0__sync_stat0 = 1;
          hd[_i0].sync_stat = (int *) malloc(_len_hd__i0__sync_stat0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hd__i0__sync_stat0; _j0++) {
            hd[_i0].sync_stat[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_resync(hd,mask);
          for(int _aux = 0; _aux < _len_hd0; _aux++) {
          free(hd[_aux].sync_stat);
          }
          free(hd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct zone_reclaim_stat {int /*<<< orphan*/ * recent_rotated; int /*<<< orphan*/ * recent_scanned; } ;
struct lruvec {struct zone_reclaim_stat reclaim_stat; } ;

/* Variables and functions */

__attribute__((used)) static void update_page_reclaim_stat(struct lruvec *lruvec,
				     int file, int rotated)
{
	struct zone_reclaim_stat *reclaim_stat = &lruvec->reclaim_stat;

	reclaim_stat->recent_scanned[file]++;
	if (rotated)
		reclaim_stat->recent_rotated[file]++;
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
          int file = 100;
          int rotated = 100;
          int _len_lruvec0 = 1;
          struct lruvec * lruvec = (struct lruvec *) malloc(_len_lruvec0*sizeof(struct lruvec));
          for(int _i0 = 0; _i0 < _len_lruvec0; _i0++) {
              int _len_lruvec__i0__reclaim_stat_recent_rotated0 = 1;
          lruvec[_i0].reclaim_stat.recent_rotated = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_rotated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_rotated0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_rotated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lruvec__i0__reclaim_stat_recent_scanned0 = 1;
          lruvec[_i0].reclaim_stat.recent_scanned = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_scanned0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_scanned0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_scanned[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_page_reclaim_stat(lruvec,file,rotated);
          free(lruvec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int file = 255;
          int rotated = 255;
          int _len_lruvec0 = 65025;
          struct lruvec * lruvec = (struct lruvec *) malloc(_len_lruvec0*sizeof(struct lruvec));
          for(int _i0 = 0; _i0 < _len_lruvec0; _i0++) {
              int _len_lruvec__i0__reclaim_stat_recent_rotated0 = 1;
          lruvec[_i0].reclaim_stat.recent_rotated = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_rotated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_rotated0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_rotated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lruvec__i0__reclaim_stat_recent_scanned0 = 1;
          lruvec[_i0].reclaim_stat.recent_scanned = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_scanned0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_scanned0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_scanned[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_page_reclaim_stat(lruvec,file,rotated);
          free(lruvec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int file = 10;
          int rotated = 10;
          int _len_lruvec0 = 100;
          struct lruvec * lruvec = (struct lruvec *) malloc(_len_lruvec0*sizeof(struct lruvec));
          for(int _i0 = 0; _i0 < _len_lruvec0; _i0++) {
              int _len_lruvec__i0__reclaim_stat_recent_rotated0 = 1;
          lruvec[_i0].reclaim_stat.recent_rotated = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_rotated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_rotated0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_rotated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lruvec__i0__reclaim_stat_recent_scanned0 = 1;
          lruvec[_i0].reclaim_stat.recent_scanned = (int *) malloc(_len_lruvec__i0__reclaim_stat_recent_scanned0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lruvec__i0__reclaim_stat_recent_scanned0; _j0++) {
            lruvec[_i0].reclaim_stat.recent_scanned[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_page_reclaim_stat(lruvec,file,rotated);
          free(lruvec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

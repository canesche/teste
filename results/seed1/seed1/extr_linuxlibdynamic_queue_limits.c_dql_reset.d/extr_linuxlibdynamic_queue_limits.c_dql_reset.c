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
struct dql {int /*<<< orphan*/  slack_start_time; int /*<<< orphan*/  lowest_slack; scalar_t__ prev_ovlimit; scalar_t__ prev_last_obj_cnt; scalar_t__ prev_num_queued; scalar_t__ last_obj_cnt; scalar_t__ num_completed; scalar_t__ num_queued; scalar_t__ limit; } ;

/* Variables and functions */
 int /*<<< orphan*/  UINT_MAX ; 
 int /*<<< orphan*/  jiffies ; 

void dql_reset(struct dql *dql)
{
	/* Reset all dynamic values */
	dql->limit = 0;
	dql->num_queued = 0;
	dql->num_completed = 0;
	dql->last_obj_cnt = 0;
	dql->prev_num_queued = 0;
	dql->prev_last_obj_cnt = 0;
	dql->prev_ovlimit = 0;
	dql->lowest_slack = UINT_MAX;
	dql->slack_start_time = jiffies;
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
          int _len_dql0 = 1;
          struct dql * dql = (struct dql *) malloc(_len_dql0*sizeof(struct dql));
          for(int _i0 = 0; _i0 < _len_dql0; _i0++) {
            dql[_i0].slack_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].lowest_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_ovlimit = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dql_reset(dql);
          free(dql);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dql0 = 65025;
          struct dql * dql = (struct dql *) malloc(_len_dql0*sizeof(struct dql));
          for(int _i0 = 0; _i0 < _len_dql0; _i0++) {
            dql[_i0].slack_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].lowest_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_ovlimit = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dql_reset(dql);
          free(dql);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dql0 = 100;
          struct dql * dql = (struct dql *) malloc(_len_dql0*sizeof(struct dql));
          for(int _i0 = 0; _i0 < _len_dql0; _i0++) {
            dql[_i0].slack_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].lowest_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_ovlimit = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].prev_num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].last_obj_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].num_queued = ((-2 * (next_i()%2)) + 1) * next_i();
        dql[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dql_reset(dql);
          free(dql);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

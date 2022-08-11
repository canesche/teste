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
struct compstat {int /*<<< orphan*/  bytes_out; int /*<<< orphan*/  in_count; int /*<<< orphan*/  inc_packets; int /*<<< orphan*/  inc_bytes; int /*<<< orphan*/  comp_packets; int /*<<< orphan*/  comp_bytes; int /*<<< orphan*/  unc_packets; int /*<<< orphan*/  unc_bytes; } ;
struct bsd_db {int /*<<< orphan*/  bytes_out; int /*<<< orphan*/  in_count; int /*<<< orphan*/  incomp_count; int /*<<< orphan*/  incomp_bytes; int /*<<< orphan*/  comp_count; int /*<<< orphan*/  comp_bytes; int /*<<< orphan*/  uncomp_count; int /*<<< orphan*/  uncomp_bytes; } ;

/* Variables and functions */

__attribute__((used)) static void bsd_stats(void *state, struct compstat *stats)
{
	struct bsd_db *db = (struct bsd_db *) state;

	stats->unc_bytes    = db->uncomp_bytes;
	stats->unc_packets  = db->uncomp_count;
	stats->comp_bytes   = db->comp_bytes;
	stats->comp_packets = db->comp_count;
	stats->inc_bytes    = db->incomp_bytes;
	stats->inc_packets  = db->incomp_count;
	stats->in_count     = db->in_count;
	stats->bytes_out    = db->bytes_out;
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
          void * state;
          int _len_stats0 = 1;
          struct compstat * stats = (struct compstat *) malloc(_len_stats0*sizeof(struct compstat));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].bytes_out = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].in_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bsd_stats(state,stats);
          free(stats);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * state;
          int _len_stats0 = 65025;
          struct compstat * stats = (struct compstat *) malloc(_len_stats0*sizeof(struct compstat));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].bytes_out = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].in_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bsd_stats(state,stats);
          free(stats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * state;
          int _len_stats0 = 100;
          struct compstat * stats = (struct compstat *) malloc(_len_stats0*sizeof(struct compstat));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].bytes_out = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].in_count = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].inc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].comp_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].unc_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bsd_stats(state,stats);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

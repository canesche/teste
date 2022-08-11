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
struct worker_stats {scalar_t__ posinfo_packets_received; scalar_t__ posinfo_packets_not_sent; scalar_t__ posinfo_packets_sent; scalar_t__ tot_unflushed_bytes; scalar_t__ tot_read_bytes; scalar_t__ data_bytes_received; scalar_t__ data_bytes_sent; scalar_t__ unknown_packets_received; scalar_t__ rotate_packets_received; scalar_t__ rotate_packets_sent; scalar_t__ data_packets_received; scalar_t__ data_packets_sent; scalar_t__ errors_received; scalar_t__ errors_sent; scalar_t__* slave_cnt; scalar_t__ servers_sentall; scalar_t__ active_repl_clients; scalar_t__ active_repl_servers; scalar_t__ broken_slave_binlogs; scalar_t__ broken_master_binlogs; scalar_t__ conf_slave_binlogs; scalar_t__ conf_master_binlogs; } ;
struct TYPE_2__ {int /*<<< orphan*/  posinfo_packets_received; int /*<<< orphan*/  posinfo_packets_not_sent; int /*<<< orphan*/  posinfo_packets_sent; int /*<<< orphan*/  tot_unflushed_bytes; int /*<<< orphan*/  tot_read_bytes; int /*<<< orphan*/  data_bytes_received; int /*<<< orphan*/  data_bytes_sent; int /*<<< orphan*/  unknown_packets_received; int /*<<< orphan*/  rotate_packets_received; int /*<<< orphan*/  rotate_packets_sent; int /*<<< orphan*/  data_packets_received; int /*<<< orphan*/  data_packets_sent; int /*<<< orphan*/  errors_received; int /*<<< orphan*/  errors_sent; int /*<<< orphan*/ * slave_cnt; int /*<<< orphan*/  servers_sentall; int /*<<< orphan*/  active_repl_clients; int /*<<< orphan*/  active_repl_servers; int /*<<< orphan*/  broken_slave_binlogs; int /*<<< orphan*/  broken_master_binlogs; int /*<<< orphan*/  conf_slave_binlogs; int /*<<< orphan*/  conf_master_binlogs; } ;

/* Variables and functions */
 TYPE_1__ SumStats ; 

__attribute__((used)) static inline void add_stats (struct worker_stats *W) {
#define UPD(x)	SumStats.x += W->x;
  UPD (conf_master_binlogs);
  UPD (conf_slave_binlogs);
  UPD (broken_master_binlogs);
  UPD (broken_slave_binlogs);
  UPD (active_repl_servers);
  UPD (active_repl_clients);
  UPD (servers_sentall);
  UPD (slave_cnt[0]);
  UPD (slave_cnt[1]);
  UPD (slave_cnt[2]);
  UPD (slave_cnt[3]);
  UPD (errors_sent);
  UPD (errors_received);
  UPD (data_packets_sent);
  UPD (data_packets_received);
  UPD (rotate_packets_sent);
  UPD (rotate_packets_received);
  UPD (unknown_packets_received);
  UPD (data_bytes_sent);
  UPD (data_bytes_received);
  UPD (tot_read_bytes);
  UPD (tot_unflushed_bytes);
  UPD (posinfo_packets_sent);
  UPD (posinfo_packets_not_sent);
  UPD (posinfo_packets_received);
#undef UPD
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
          int _len_W0 = 1;
          struct worker_stats * W = (struct worker_stats *) malloc(_len_W0*sizeof(struct worker_stats));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            W[_i0].posinfo_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_not_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_unflushed_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].unknown_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_sent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_W__i0__slave_cnt0 = 1;
          W[_i0].slave_cnt = (long *) malloc(_len_W__i0__slave_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_W__i0__slave_cnt0; _j0++) {
            W[_i0].slave_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        W[_i0].servers_sentall = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_clients = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_servers = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_stats(W);
          for(int _aux = 0; _aux < _len_W0; _aux++) {
          free(W[_aux].slave_cnt);
          }
          free(W);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_W0 = 65025;
          struct worker_stats * W = (struct worker_stats *) malloc(_len_W0*sizeof(struct worker_stats));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            W[_i0].posinfo_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_not_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_unflushed_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].unknown_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_sent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_W__i0__slave_cnt0 = 1;
          W[_i0].slave_cnt = (long *) malloc(_len_W__i0__slave_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_W__i0__slave_cnt0; _j0++) {
            W[_i0].slave_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        W[_i0].servers_sentall = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_clients = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_servers = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_stats(W);
          for(int _aux = 0; _aux < _len_W0; _aux++) {
          free(W[_aux].slave_cnt);
          }
          free(W);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_W0 = 100;
          struct worker_stats * W = (struct worker_stats *) malloc(_len_W0*sizeof(struct worker_stats));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            W[_i0].posinfo_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_not_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].posinfo_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_unflushed_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].tot_read_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_bytes_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].unknown_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].rotate_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].data_packets_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_received = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].errors_sent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_W__i0__slave_cnt0 = 1;
          W[_i0].slave_cnt = (long *) malloc(_len_W__i0__slave_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_W__i0__slave_cnt0; _j0++) {
            W[_i0].slave_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        W[_i0].servers_sentall = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_clients = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].active_repl_servers = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].broken_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_slave_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
        W[_i0].conf_master_binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_stats(W);
          for(int _aux = 0; _aux < _len_W0; _aux++) {
          free(W[_aux].slave_cnt);
          }
          free(W);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

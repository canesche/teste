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
struct aq_vec_s {unsigned int tx_rings; struct aq_ring_s** ring; } ;
struct aq_ring_stats_tx_s {scalar_t__ queue_restarts; scalar_t__ errors; scalar_t__ bytes; scalar_t__ packets; } ;
struct aq_ring_stats_rx_s {scalar_t__ lro_packets; scalar_t__ jumbo_packets; scalar_t__ errors; scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_2__ {struct aq_ring_stats_rx_s rx; struct aq_ring_stats_tx_s tx; } ;
struct aq_ring_s {TYPE_1__ stats; } ;

/* Variables and functions */
 size_t AQ_VEC_RX_ID ; 
 size_t AQ_VEC_TX_ID ; 

void aq_vec_add_stats(struct aq_vec_s *self,
		      struct aq_ring_stats_rx_s *stats_rx,
		      struct aq_ring_stats_tx_s *stats_tx)
{
	struct aq_ring_s *ring = NULL;
	unsigned int r = 0U;

	for (r = 0U, ring = self->ring[0];
		self->tx_rings > r; ++r, ring = self->ring[r]) {
		struct aq_ring_stats_tx_s *tx = &ring[AQ_VEC_TX_ID].stats.tx;
		struct aq_ring_stats_rx_s *rx = &ring[AQ_VEC_RX_ID].stats.rx;

		stats_rx->packets += rx->packets;
		stats_rx->bytes += rx->bytes;
		stats_rx->errors += rx->errors;
		stats_rx->jumbo_packets += rx->jumbo_packets;
		stats_rx->lro_packets += rx->lro_packets;

		stats_tx->packets += tx->packets;
		stats_tx->bytes += tx->bytes;
		stats_tx->errors += tx->errors;
		stats_tx->queue_restarts += tx->queue_restarts;
	}
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
          int _len_self0 = 1;
          struct aq_vec_s * self = (struct aq_vec_s *) malloc(_len_self0*sizeof(struct aq_vec_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].tx_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__ring0 = 1;
          self[_i0].ring = (struct aq_ring_s **) malloc(_len_self__i0__ring0*sizeof(struct aq_ring_s *));
          for(int _j0 = 0; _j0 < _len_self__i0__ring0; _j0++) {
            int _len_self__i0__ring1 = 1;
            self[_i0].ring[_j0] = (struct aq_ring_s *) malloc(_len_self__i0__ring1*sizeof(struct aq_ring_s));
            for(int _j1 = 0; _j1 < _len_self__i0__ring1; _j1++) {
              self[_i0].ring[_j0]->stats.rx.lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stats_rx0 = 1;
          struct aq_ring_stats_rx_s * stats_rx = (struct aq_ring_stats_rx_s *) malloc(_len_stats_rx0*sizeof(struct aq_ring_stats_rx_s));
          for(int _i0 = 0; _i0 < _len_stats_rx0; _i0++) {
            stats_rx[_i0].lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats_tx0 = 1;
          struct aq_ring_stats_tx_s * stats_tx = (struct aq_ring_stats_tx_s *) malloc(_len_stats_tx0*sizeof(struct aq_ring_stats_tx_s));
          for(int _i0 = 0; _i0 < _len_stats_tx0; _i0++) {
            stats_tx[_i0].queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aq_vec_add_stats(self,stats_rx,stats_tx);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(*(self[_aux].ring));
        free(self[_aux].ring);
          }
          free(self);
          free(stats_rx);
          free(stats_tx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_self0 = 65025;
          struct aq_vec_s * self = (struct aq_vec_s *) malloc(_len_self0*sizeof(struct aq_vec_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].tx_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__ring0 = 1;
          self[_i0].ring = (struct aq_ring_s **) malloc(_len_self__i0__ring0*sizeof(struct aq_ring_s *));
          for(int _j0 = 0; _j0 < _len_self__i0__ring0; _j0++) {
            int _len_self__i0__ring1 = 1;
            self[_i0].ring[_j0] = (struct aq_ring_s *) malloc(_len_self__i0__ring1*sizeof(struct aq_ring_s));
            for(int _j1 = 0; _j1 < _len_self__i0__ring1; _j1++) {
              self[_i0].ring[_j0]->stats.rx.lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stats_rx0 = 65025;
          struct aq_ring_stats_rx_s * stats_rx = (struct aq_ring_stats_rx_s *) malloc(_len_stats_rx0*sizeof(struct aq_ring_stats_rx_s));
          for(int _i0 = 0; _i0 < _len_stats_rx0; _i0++) {
            stats_rx[_i0].lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats_tx0 = 65025;
          struct aq_ring_stats_tx_s * stats_tx = (struct aq_ring_stats_tx_s *) malloc(_len_stats_tx0*sizeof(struct aq_ring_stats_tx_s));
          for(int _i0 = 0; _i0 < _len_stats_tx0; _i0++) {
            stats_tx[_i0].queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aq_vec_add_stats(self,stats_rx,stats_tx);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(*(self[_aux].ring));
        free(self[_aux].ring);
          }
          free(self);
          free(stats_rx);
          free(stats_tx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_self0 = 100;
          struct aq_vec_s * self = (struct aq_vec_s *) malloc(_len_self0*sizeof(struct aq_vec_s));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].tx_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__ring0 = 1;
          self[_i0].ring = (struct aq_ring_s **) malloc(_len_self__i0__ring0*sizeof(struct aq_ring_s *));
          for(int _j0 = 0; _j0 < _len_self__i0__ring0; _j0++) {
            int _len_self__i0__ring1 = 1;
            self[_i0].ring[_j0] = (struct aq_ring_s *) malloc(_len_self__i0__ring1*sizeof(struct aq_ring_s));
            for(int _j1 = 0; _j1 < _len_self__i0__ring1; _j1++) {
              self[_i0].ring[_j0]->stats.rx.lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.rx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.errors = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].ring[_j0]->stats.tx.packets = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stats_rx0 = 100;
          struct aq_ring_stats_rx_s * stats_rx = (struct aq_ring_stats_rx_s *) malloc(_len_stats_rx0*sizeof(struct aq_ring_stats_rx_s));
          for(int _i0 = 0; _i0 < _len_stats_rx0; _i0++) {
            stats_rx[_i0].lro_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].jumbo_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_rx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats_tx0 = 100;
          struct aq_ring_stats_tx_s * stats_tx = (struct aq_ring_stats_tx_s *) malloc(_len_stats_tx0*sizeof(struct aq_ring_stats_tx_s));
          for(int _i0 = 0; _i0 < _len_stats_tx0; _i0++) {
            stats_tx[_i0].queue_restarts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats_tx[_i0].packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aq_vec_add_stats(self,stats_rx,stats_tx);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(*(self[_aux].ring));
        free(self[_aux].ring);
          }
          free(self);
          free(stats_rx);
          free(stats_tx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

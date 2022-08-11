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
struct vnt_options {int /*<<< orphan*/  bbp_type; int /*<<< orphan*/  long_retry; int /*<<< orphan*/  short_retry; int /*<<< orphan*/  int_works; int /*<<< orphan*/ * tx_descs; int /*<<< orphan*/  rx_descs1; int /*<<< orphan*/  rx_descs0; } ;
struct vnt_private {struct vnt_options opts; } ;

/* Variables and functions */
 int /*<<< orphan*/  BBP_TYPE_DEF ; 
 int /*<<< orphan*/  INT_WORKS_DEF ; 
 int /*<<< orphan*/  LONG_RETRY_DEF ; 
 int /*<<< orphan*/  RX_DESC_DEF0 ; 
 int /*<<< orphan*/  RX_DESC_DEF1 ; 
 int /*<<< orphan*/  SHORT_RETRY_DEF ; 
 int /*<<< orphan*/  TX_DESC_DEF0 ; 
 int /*<<< orphan*/  TX_DESC_DEF1 ; 

__attribute__((used)) static void device_get_options(struct vnt_private *priv)
{
	struct vnt_options *opts = &priv->opts;

	opts->rx_descs0 = RX_DESC_DEF0;
	opts->rx_descs1 = RX_DESC_DEF1;
	opts->tx_descs[0] = TX_DESC_DEF0;
	opts->tx_descs[1] = TX_DESC_DEF1;
	opts->int_works = INT_WORKS_DEF;

	opts->short_retry = SHORT_RETRY_DEF;
	opts->long_retry = LONG_RETRY_DEF;
	opts->bbp_type = BBP_TYPE_DEF;
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
          int _len_priv0 = 1;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].opts.bbp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.long_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.short_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.int_works = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__opts_tx_descs0 = 1;
          priv[_i0].opts.tx_descs = (int *) malloc(_len_priv__i0__opts_tx_descs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__opts_tx_descs0; _j0++) {
            priv[_i0].opts.tx_descs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].opts.rx_descs1 = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.rx_descs0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          device_get_options(priv);
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].opts.bbp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.long_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.short_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.int_works = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__opts_tx_descs0 = 1;
          priv[_i0].opts.tx_descs = (int *) malloc(_len_priv__i0__opts_tx_descs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__opts_tx_descs0; _j0++) {
            priv[_i0].opts.tx_descs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].opts.rx_descs1 = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.rx_descs0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          device_get_options(priv);
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].opts.bbp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.long_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.short_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.int_works = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__opts_tx_descs0 = 1;
          priv[_i0].opts.tx_descs = (int *) malloc(_len_priv__i0__opts_tx_descs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__opts_tx_descs0; _j0++) {
            priv[_i0].opts.tx_descs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].opts.rx_descs1 = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].opts.rx_descs0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          device_get_options(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

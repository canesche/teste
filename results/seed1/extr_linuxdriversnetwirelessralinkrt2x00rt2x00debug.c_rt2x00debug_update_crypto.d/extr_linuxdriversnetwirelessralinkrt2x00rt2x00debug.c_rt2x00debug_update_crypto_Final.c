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
struct rxdone_entry_desc {int cipher; int cipher_status; } ;
struct rt2x00debug_intf {TYPE_1__* crypto_stats; } ;
struct rt2x00_dev {struct rt2x00debug_intf* debugfs_intf; } ;
typedef  enum rx_crypto { ____Placeholder_rx_crypto } rx_crypto ;
typedef  enum cipher { ____Placeholder_cipher } cipher ;
struct TYPE_2__ {int success; int icv_error; int mic_error; int key_error; } ;

/* Variables and functions */
 int CIPHER_MAX ; 
 int CIPHER_NONE ; 
 int CIPHER_TKIP ; 
 int CIPHER_TKIP_NO_MIC ; 
 int RX_CRYPTO_FAIL_ICV ; 
 int RX_CRYPTO_FAIL_KEY ; 
 int RX_CRYPTO_FAIL_MIC ; 
 int RX_CRYPTO_SUCCESS ; 

void rt2x00debug_update_crypto(struct rt2x00_dev *rt2x00dev,
			       struct rxdone_entry_desc *rxdesc)
{
	struct rt2x00debug_intf *intf = rt2x00dev->debugfs_intf;
	enum cipher cipher = rxdesc->cipher;
	enum rx_crypto status = rxdesc->cipher_status;

	if (cipher == CIPHER_TKIP_NO_MIC)
		cipher = CIPHER_TKIP;
	if (cipher == CIPHER_NONE || cipher >= CIPHER_MAX)
		return;

	/* Remove CIPHER_NONE index */
	cipher--;

	intf->crypto_stats[cipher].success += (status == RX_CRYPTO_SUCCESS);
	intf->crypto_stats[cipher].icv_error += (status == RX_CRYPTO_FAIL_ICV);
	intf->crypto_stats[cipher].mic_error += (status == RX_CRYPTO_FAIL_MIC);
	intf->crypto_stats[cipher].key_error += (status == RX_CRYPTO_FAIL_KEY);
}


// ------------------------------------------------------------------------- //




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
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
              int _len_rt2x00dev__i0__debugfs_intf0 = 1;
          rt2x00dev[_i0].debugfs_intf = (struct rt2x00debug_intf *) malloc(_len_rt2x00dev__i0__debugfs_intf0*sizeof(struct rt2x00debug_intf));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__debugfs_intf0; _j0++) {
              int _len_rt2x00dev__i0__debugfs_intf_crypto_stats0 = 1;
          rt2x00dev[_i0].debugfs_intf->crypto_stats = (struct TYPE_2__ *) malloc(_len_rt2x00dev__i0__debugfs_intf_crypto_stats0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__debugfs_intf_crypto_stats0; _j0++) {
            rt2x00dev[_i0].debugfs_intf->crypto_stats->success = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].debugfs_intf->crypto_stats->icv_error = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].debugfs_intf->crypto_stats->mic_error = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].debugfs_intf->crypto_stats->key_error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rxdesc0 = 1;
          struct rxdone_entry_desc * rxdesc = (struct rxdone_entry_desc *) malloc(_len_rxdesc0*sizeof(struct rxdone_entry_desc));
          for(int _i0 = 0; _i0 < _len_rxdesc0; _i0++) {
            rxdesc[_i0].cipher = ((-2 * (next_i()%2)) + 1) * next_i();
        rxdesc[_i0].cipher_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rt2x00debug_update_crypto(rt2x00dev,rxdesc);
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].debugfs_intf);
          }
          free(rt2x00dev);
          free(rxdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u8 ;
struct rndis_wlan_private {TYPE_1__* encr_keys; } ;
struct TYPE_2__ {int cipher; } ;

/* Variables and functions */
 int WLAN_CIPHER_SUITE_CCMP ; 
 int WLAN_CIPHER_SUITE_TKIP ; 

__attribute__((used)) static bool is_wpa_key(struct rndis_wlan_private *priv, u8 idx)
{
	int cipher = priv->encr_keys[idx].cipher;

	return (cipher == WLAN_CIPHER_SUITE_CCMP ||
		cipher == WLAN_CIPHER_SUITE_TKIP);
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
          unsigned long idx = 100;
          int _len_priv0 = 1;
          struct rndis_wlan_private * priv = (struct rndis_wlan_private *) malloc(_len_priv0*sizeof(struct rndis_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__encr_keys0 = 1;
          priv[_i0].encr_keys = (struct TYPE_2__ *) malloc(_len_priv__i0__encr_keys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__encr_keys0; _j0++) {
            priv[_i0].encr_keys->cipher = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_wpa_key(priv,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].encr_keys);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long idx = 255;
          int _len_priv0 = 65025;
          struct rndis_wlan_private * priv = (struct rndis_wlan_private *) malloc(_len_priv0*sizeof(struct rndis_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__encr_keys0 = 1;
          priv[_i0].encr_keys = (struct TYPE_2__ *) malloc(_len_priv__i0__encr_keys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__encr_keys0; _j0++) {
            priv[_i0].encr_keys->cipher = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_wpa_key(priv,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].encr_keys);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long idx = 10;
          int _len_priv0 = 100;
          struct rndis_wlan_private * priv = (struct rndis_wlan_private *) malloc(_len_priv0*sizeof(struct rndis_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__encr_keys0 = 1;
          priv[_i0].encr_keys = (struct TYPE_2__ *) malloc(_len_priv__i0__encr_keys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__encr_keys0; _j0++) {
            priv[_i0].encr_keys->cipher = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_wpa_key(priv,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].encr_keys);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

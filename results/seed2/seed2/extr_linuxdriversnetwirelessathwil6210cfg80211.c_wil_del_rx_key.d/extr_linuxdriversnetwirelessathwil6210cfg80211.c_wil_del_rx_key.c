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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct wil_tid_crypto_rx_single {int key_set; } ;
struct TYPE_3__ {struct wil_tid_crypto_rx_single* key_id; } ;
struct wil_sta_info {TYPE_1__ group_crypto_rx; TYPE_2__* tid_crypto_rx; } ;
typedef  enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;
struct TYPE_4__ {struct wil_tid_crypto_rx_single* key_id; } ;

/* Variables and functions */
 int WIL_STA_TID_NUM ; 
#define  WMI_KEY_USE_PAIRWISE 129 
#define  WMI_KEY_USE_RX_GROUP 128 

__attribute__((used)) static void wil_del_rx_key(u8 key_index, enum wmi_key_usage key_usage,
			   struct wil_sta_info *cs)
{
	struct wil_tid_crypto_rx_single *cc;
	int tid;

	if (!cs)
		return;

	switch (key_usage) {
	case WMI_KEY_USE_PAIRWISE:
		for (tid = 0; tid < WIL_STA_TID_NUM; tid++) {
			cc = &cs->tid_crypto_rx[tid].key_id[key_index];
			cc->key_set = false;
		}
		break;
	case WMI_KEY_USE_RX_GROUP:
		cc = &cs->group_crypto_rx.key_id[key_index];
		cc->key_set = false;
		break;
	default:
		break;
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
          unsigned long key_index = 100;
          enum wmi_key_usage key_usage = 0;
          int _len_cs0 = 1;
          struct wil_sta_info * cs = (struct wil_sta_info *) malloc(_len_cs0*sizeof(struct wil_sta_info));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__group_crypto_rx_key_id0 = 1;
          cs[_i0].group_crypto_rx.key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__group_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__group_crypto_rx_key_id0; _j0++) {
            cs[_i0].group_crypto_rx.key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cs__i0__tid_crypto_rx0 = 1;
          cs[_i0].tid_crypto_rx = (struct TYPE_4__ *) malloc(_len_cs__i0__tid_crypto_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx0; _j0++) {
              int _len_cs__i0__tid_crypto_rx_key_id0 = 1;
          cs[_i0].tid_crypto_rx->key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__tid_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx_key_id0; _j0++) {
            cs[_i0].tid_crypto_rx->key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          wil_del_rx_key(key_index,key_usage,cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].tid_crypto_rx);
          }
          free(cs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long key_index = 255;
          enum wmi_key_usage key_usage = 0;
          int _len_cs0 = 65025;
          struct wil_sta_info * cs = (struct wil_sta_info *) malloc(_len_cs0*sizeof(struct wil_sta_info));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__group_crypto_rx_key_id0 = 1;
          cs[_i0].group_crypto_rx.key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__group_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__group_crypto_rx_key_id0; _j0++) {
            cs[_i0].group_crypto_rx.key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cs__i0__tid_crypto_rx0 = 1;
          cs[_i0].tid_crypto_rx = (struct TYPE_4__ *) malloc(_len_cs__i0__tid_crypto_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx0; _j0++) {
              int _len_cs__i0__tid_crypto_rx_key_id0 = 1;
          cs[_i0].tid_crypto_rx->key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__tid_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx_key_id0; _j0++) {
            cs[_i0].tid_crypto_rx->key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          wil_del_rx_key(key_index,key_usage,cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].tid_crypto_rx);
          }
          free(cs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long key_index = 10;
          enum wmi_key_usage key_usage = 0;
          int _len_cs0 = 100;
          struct wil_sta_info * cs = (struct wil_sta_info *) malloc(_len_cs0*sizeof(struct wil_sta_info));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__group_crypto_rx_key_id0 = 1;
          cs[_i0].group_crypto_rx.key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__group_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__group_crypto_rx_key_id0; _j0++) {
            cs[_i0].group_crypto_rx.key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cs__i0__tid_crypto_rx0 = 1;
          cs[_i0].tid_crypto_rx = (struct TYPE_4__ *) malloc(_len_cs__i0__tid_crypto_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx0; _j0++) {
              int _len_cs__i0__tid_crypto_rx_key_id0 = 1;
          cs[_i0].tid_crypto_rx->key_id = (struct wil_tid_crypto_rx_single *) malloc(_len_cs__i0__tid_crypto_rx_key_id0*sizeof(struct wil_tid_crypto_rx_single));
          for(int _j0 = 0; _j0 < _len_cs__i0__tid_crypto_rx_key_id0; _j0++) {
            cs[_i0].tid_crypto_rx->key_id->key_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          wil_del_rx_key(key_index,key_usage,cs);
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].tid_crypto_rx);
          }
          free(cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

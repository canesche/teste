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
struct wmi_start_scan_arg {int scan_req_id; int dwell_time_active; int dwell_time_passive; int min_rest_time; int max_rest_time; int max_scan_time; int probe_delay; int notify_scan_events; int n_bssids; TYPE_1__* bssids; int /*<<< orphan*/  scan_ctrl_flags; scalar_t__ idle_time; scalar_t__ probe_spacing_time; scalar_t__ repeat_probe_time; int /*<<< orphan*/  scan_priority; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {char* bssid; } ;

/* Variables and functions */
 int /*<<< orphan*/  WMI_SCAN_CHAN_STAT_EVENT ; 
 int WMI_SCAN_EVENT_BSS_CHANNEL ; 
 int WMI_SCAN_EVENT_COMPLETED ; 
 int WMI_SCAN_EVENT_DEQUEUED ; 
 int WMI_SCAN_EVENT_FOREIGN_CHANNEL ; 
 int WMI_SCAN_EVENT_FOREIGN_CHANNEL_EXIT ; 
 int WMI_SCAN_EVENT_STARTED ; 
 int /*<<< orphan*/  WMI_SCAN_PRIORITY_LOW ; 

void ath10k_wmi_start_scan_init(struct ath10k *ar,
				struct wmi_start_scan_arg *arg)
{
	/* setup commonly used values */
	arg->scan_req_id = 1;
	arg->scan_priority = WMI_SCAN_PRIORITY_LOW;
	arg->dwell_time_active = 50;
	arg->dwell_time_passive = 150;
	arg->min_rest_time = 50;
	arg->max_rest_time = 500;
	arg->repeat_probe_time = 0;
	arg->probe_spacing_time = 0;
	arg->idle_time = 0;
	arg->max_scan_time = 20000;
	arg->probe_delay = 5;
	arg->notify_scan_events = WMI_SCAN_EVENT_STARTED
		| WMI_SCAN_EVENT_COMPLETED
		| WMI_SCAN_EVENT_BSS_CHANNEL
		| WMI_SCAN_EVENT_FOREIGN_CHANNEL
		| WMI_SCAN_EVENT_FOREIGN_CHANNEL_EXIT
		| WMI_SCAN_EVENT_DEQUEUED;
	arg->scan_ctrl_flags |= WMI_SCAN_CHAN_STAT_EVENT;
	arg->n_bssids = 1;
	arg->bssids[0].bssid = "\xFF\xFF\xFF\xFF\xFF\xFF";
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
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 1;
          struct wmi_start_scan_arg * arg = (struct wmi_start_scan_arg *) malloc(_len_arg0*sizeof(struct wmi_start_scan_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].scan_req_id = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_active = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_passive = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].min_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_scan_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].notify_scan_events = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].n_bssids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__bssids0 = 1;
          arg[_i0].bssids = (struct TYPE_2__ *) malloc(_len_arg__i0__bssids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids0; _j0++) {
              int _len_arg__i0__bssids_bssid0 = 1;
          arg[_i0].bssids->bssid = (char *) malloc(_len_arg__i0__bssids_bssid0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids_bssid0; _j0++) {
            arg[_i0].bssids->bssid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        arg[_i0].scan_ctrl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_spacing_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].repeat_probe_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].scan_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath10k_wmi_start_scan_init(ar,arg);
          free(ar);
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].bssids);
          }
          free(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ar0 = 65025;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 65025;
          struct wmi_start_scan_arg * arg = (struct wmi_start_scan_arg *) malloc(_len_arg0*sizeof(struct wmi_start_scan_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].scan_req_id = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_active = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_passive = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].min_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_scan_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].notify_scan_events = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].n_bssids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__bssids0 = 1;
          arg[_i0].bssids = (struct TYPE_2__ *) malloc(_len_arg__i0__bssids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids0; _j0++) {
              int _len_arg__i0__bssids_bssid0 = 1;
          arg[_i0].bssids->bssid = (char *) malloc(_len_arg__i0__bssids_bssid0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids_bssid0; _j0++) {
            arg[_i0].bssids->bssid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        arg[_i0].scan_ctrl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_spacing_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].repeat_probe_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].scan_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath10k_wmi_start_scan_init(ar,arg);
          free(ar);
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].bssids);
          }
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ar0 = 100;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg0 = 100;
          struct wmi_start_scan_arg * arg = (struct wmi_start_scan_arg *) malloc(_len_arg0*sizeof(struct wmi_start_scan_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].scan_req_id = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_active = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].dwell_time_passive = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].min_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_rest_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].max_scan_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].notify_scan_events = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].n_bssids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_arg__i0__bssids0 = 1;
          arg[_i0].bssids = (struct TYPE_2__ *) malloc(_len_arg__i0__bssids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids0; _j0++) {
              int _len_arg__i0__bssids_bssid0 = 1;
          arg[_i0].bssids->bssid = (char *) malloc(_len_arg__i0__bssids_bssid0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_arg__i0__bssids_bssid0; _j0++) {
            arg[_i0].bssids->bssid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        arg[_i0].scan_ctrl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].idle_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].probe_spacing_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].repeat_probe_time = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].scan_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath10k_wmi_start_scan_init(ar,arg);
          free(ar);
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].bssids);
          }
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

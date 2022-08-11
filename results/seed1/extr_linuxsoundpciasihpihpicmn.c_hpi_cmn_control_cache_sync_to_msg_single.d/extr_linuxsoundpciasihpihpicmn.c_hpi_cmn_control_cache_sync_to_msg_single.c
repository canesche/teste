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
typedef  struct TYPE_26__   TYPE_9__ ;
typedef  struct TYPE_25__   TYPE_8__ ;
typedef  struct TYPE_24__   TYPE_7__ ;
typedef  struct TYPE_23__   TYPE_6__ ;
typedef  struct TYPE_22__   TYPE_5__ ;
typedef  struct TYPE_21__   TYPE_4__ ;
typedef  struct TYPE_20__   TYPE_3__ ;
typedef  struct TYPE_19__   TYPE_2__ ;
typedef  struct TYPE_18__   TYPE_1__ ;
typedef  struct TYPE_17__   TYPE_13__ ;
typedef  struct TYPE_16__   TYPE_12__ ;
typedef  struct TYPE_15__   TYPE_11__ ;
typedef  struct TYPE_14__   TYPE_10__ ;

/* Type definitions */
typedef  void* u16 ;
struct TYPE_22__ {int /*<<< orphan*/ * an_log_value; } ;
struct TYPE_23__ {TYPE_5__ c; } ;
struct hpi_response {TYPE_6__ u; } ;
struct TYPE_16__ {int /*<<< orphan*/  param1; int /*<<< orphan*/  attribute; int /*<<< orphan*/  param2; } ;
struct TYPE_17__ {TYPE_12__ c; } ;
struct hpi_message {TYPE_13__ u; } ;
struct TYPE_14__ {int /*<<< orphan*/  sample_rate; void* source_index; void* source; } ;
struct TYPE_26__ {int /*<<< orphan*/  format; } ;
struct TYPE_25__ {int /*<<< orphan*/  format; } ;
struct TYPE_24__ {void* phantom_state; } ;
struct TYPE_21__ {int /*<<< orphan*/ * an_log; int /*<<< orphan*/  flags; } ;
struct TYPE_20__ {void* mode; } ;
struct TYPE_19__ {void* source_node_index; void* source_node_type; } ;
struct TYPE_18__ {int control_type; } ;
struct TYPE_15__ {TYPE_10__ clk; TYPE_9__ aes3rx; TYPE_8__ aes3tx; TYPE_7__ microphone; TYPE_4__ vol; TYPE_3__ mode; TYPE_2__ mux; TYPE_1__ i; } ;
struct hpi_control_cache_single {TYPE_11__ u; } ;

/* Variables and functions */
 int /*<<< orphan*/  HPI_AESEBURX_FORMAT ; 
 int /*<<< orphan*/  HPI_AESEBUTX_FORMAT ; 
 int /*<<< orphan*/  HPI_CHANNEL_MODE_MODE ; 
#define  HPI_CONTROL_AESEBU_RECEIVER 135 
#define  HPI_CONTROL_AESEBU_TRANSMITTER 134 
#define  HPI_CONTROL_CHANNEL_MODE 133 
#define  HPI_CONTROL_LEVEL 132 
#define  HPI_CONTROL_MICROPHONE 131 
#define  HPI_CONTROL_MULTIPLEXER 130 
#define  HPI_CONTROL_SAMPLECLOCK 129 
#define  HPI_CONTROL_VOLUME 128 
 int /*<<< orphan*/  HPI_LEVEL_GAIN ; 
 int /*<<< orphan*/  HPI_MICROPHONE_PHANTOM_POWER ; 
 int /*<<< orphan*/  HPI_MULTIPLEXER_SOURCE ; 
 int /*<<< orphan*/  HPI_SAMPLECLOCK_SAMPLERATE ; 
 int /*<<< orphan*/  HPI_SAMPLECLOCK_SOURCE ; 
 int /*<<< orphan*/  HPI_SAMPLECLOCK_SOURCE_INDEX ; 
 int /*<<< orphan*/  HPI_VOLUME_FLAG_MUTED ; 
 int /*<<< orphan*/  HPI_VOLUME_GAIN ; 
 int /*<<< orphan*/  HPI_VOLUME_MUTE ; 

void hpi_cmn_control_cache_sync_to_msg_single(struct hpi_control_cache_single
	*pC, struct hpi_message *phm, struct hpi_response *phr)
{
	switch (pC->u.i.control_type) {
	case HPI_CONTROL_VOLUME:
		if (phm->u.c.attribute == HPI_VOLUME_GAIN) {
			pC->u.vol.an_log[0] = phr->u.c.an_log_value[0];
			pC->u.vol.an_log[1] = phr->u.c.an_log_value[1];
		} else if (phm->u.c.attribute == HPI_VOLUME_MUTE) {
			if (phm->u.c.param1)
				pC->u.vol.flags |= HPI_VOLUME_FLAG_MUTED;
			else
				pC->u.vol.flags &= ~HPI_VOLUME_FLAG_MUTED;
		}
		break;
	case HPI_CONTROL_MULTIPLEXER:
		/* mux does not return its setting on Set command. */
		if (phm->u.c.attribute == HPI_MULTIPLEXER_SOURCE) {
			pC->u.mux.source_node_type = (u16)phm->u.c.param1;
			pC->u.mux.source_node_index = (u16)phm->u.c.param2;
		}
		break;
	case HPI_CONTROL_CHANNEL_MODE:
		/* mode does not return its setting on Set command. */
		if (phm->u.c.attribute == HPI_CHANNEL_MODE_MODE)
			pC->u.mode.mode = (u16)phm->u.c.param1;
		break;
	case HPI_CONTROL_LEVEL:
		if (phm->u.c.attribute == HPI_LEVEL_GAIN) {
			pC->u.vol.an_log[0] = phr->u.c.an_log_value[0];
			pC->u.vol.an_log[1] = phr->u.c.an_log_value[1];
		}
		break;
	case HPI_CONTROL_MICROPHONE:
		if (phm->u.c.attribute == HPI_MICROPHONE_PHANTOM_POWER)
			pC->u.microphone.phantom_state = (u16)phm->u.c.param1;
		break;
	case HPI_CONTROL_AESEBU_TRANSMITTER:
		if (phm->u.c.attribute == HPI_AESEBUTX_FORMAT)
			pC->u.aes3tx.format = phm->u.c.param1;
		break;
	case HPI_CONTROL_AESEBU_RECEIVER:
		if (phm->u.c.attribute == HPI_AESEBURX_FORMAT)
			pC->u.aes3rx.format = phm->u.c.param1;
		break;
	case HPI_CONTROL_SAMPLECLOCK:
		if (phm->u.c.attribute == HPI_SAMPLECLOCK_SOURCE)
			pC->u.clk.source = (u16)phm->u.c.param1;
		else if (phm->u.c.attribute == HPI_SAMPLECLOCK_SOURCE_INDEX)
			pC->u.clk.source_index = (u16)phm->u.c.param1;
		else if (phm->u.c.attribute == HPI_SAMPLECLOCK_SAMPLERATE)
			pC->u.clk.sample_rate = phm->u.c.param1;
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
          int _len_pC0 = 1;
          struct hpi_control_cache_single * pC = (struct hpi_control_cache_single *) malloc(_len_pC0*sizeof(struct hpi_control_cache_single));
          for(int _i0 = 0; _i0 < _len_pC0; _i0++) {
            pC[_i0].u.clk.sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3rx.format = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3tx.format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pC__i0__u_vol_an_log0 = 1;
          pC[_i0].u.vol.an_log = (int *) malloc(_len_pC__i0__u_vol_an_log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pC__i0__u_vol_an_log0; _j0++) {
            pC[_i0].u.vol.an_log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pC[_i0].u.vol.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.i.control_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phm0 = 1;
          struct hpi_message * phm = (struct hpi_message *) malloc(_len_phm0*sizeof(struct hpi_message));
          for(int _i0 = 0; _i0 < _len_phm0; _i0++) {
            phm[_i0].u.c.param1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.attribute = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.param2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phr0 = 1;
          struct hpi_response * phr = (struct hpi_response *) malloc(_len_phr0*sizeof(struct hpi_response));
          for(int _i0 = 0; _i0 < _len_phr0; _i0++) {
              int _len_phr__i0__u_c_an_log_value0 = 1;
          phr[_i0].u.c.an_log_value = (int *) malloc(_len_phr__i0__u_c_an_log_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phr__i0__u_c_an_log_value0; _j0++) {
            phr[_i0].u.c.an_log_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hpi_cmn_control_cache_sync_to_msg_single(pC,phm,phr);
          free(pC);
          free(phm);
          free(phr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pC0 = 65025;
          struct hpi_control_cache_single * pC = (struct hpi_control_cache_single *) malloc(_len_pC0*sizeof(struct hpi_control_cache_single));
          for(int _i0 = 0; _i0 < _len_pC0; _i0++) {
            pC[_i0].u.clk.sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3rx.format = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3tx.format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pC__i0__u_vol_an_log0 = 1;
          pC[_i0].u.vol.an_log = (int *) malloc(_len_pC__i0__u_vol_an_log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pC__i0__u_vol_an_log0; _j0++) {
            pC[_i0].u.vol.an_log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pC[_i0].u.vol.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.i.control_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phm0 = 65025;
          struct hpi_message * phm = (struct hpi_message *) malloc(_len_phm0*sizeof(struct hpi_message));
          for(int _i0 = 0; _i0 < _len_phm0; _i0++) {
            phm[_i0].u.c.param1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.attribute = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.param2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phr0 = 65025;
          struct hpi_response * phr = (struct hpi_response *) malloc(_len_phr0*sizeof(struct hpi_response));
          for(int _i0 = 0; _i0 < _len_phr0; _i0++) {
              int _len_phr__i0__u_c_an_log_value0 = 1;
          phr[_i0].u.c.an_log_value = (int *) malloc(_len_phr__i0__u_c_an_log_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phr__i0__u_c_an_log_value0; _j0++) {
            phr[_i0].u.c.an_log_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hpi_cmn_control_cache_sync_to_msg_single(pC,phm,phr);
          free(pC);
          free(phm);
          free(phr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pC0 = 100;
          struct hpi_control_cache_single * pC = (struct hpi_control_cache_single *) malloc(_len_pC0*sizeof(struct hpi_control_cache_single));
          for(int _i0 = 0; _i0 < _len_pC0; _i0++) {
            pC[_i0].u.clk.sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3rx.format = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.aes3tx.format = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pC__i0__u_vol_an_log0 = 1;
          pC[_i0].u.vol.an_log = (int *) malloc(_len_pC__i0__u_vol_an_log0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pC__i0__u_vol_an_log0; _j0++) {
            pC[_i0].u.vol.an_log[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pC[_i0].u.vol.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pC[_i0].u.i.control_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phm0 = 100;
          struct hpi_message * phm = (struct hpi_message *) malloc(_len_phm0*sizeof(struct hpi_message));
          for(int _i0 = 0; _i0 < _len_phm0; _i0++) {
            phm[_i0].u.c.param1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.attribute = ((-2 * (next_i()%2)) + 1) * next_i();
        phm[_i0].u.c.param2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phr0 = 100;
          struct hpi_response * phr = (struct hpi_response *) malloc(_len_phr0*sizeof(struct hpi_response));
          for(int _i0 = 0; _i0 < _len_phr0; _i0++) {
              int _len_phr__i0__u_c_an_log_value0 = 1;
          phr[_i0].u.c.an_log_value = (int *) malloc(_len_phr__i0__u_c_an_log_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phr__i0__u_c_an_log_value0; _j0++) {
            phr[_i0].u.c.an_log_value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hpi_cmn_control_cache_sync_to_msg_single(pC,phm,phr);
          free(pC);
          free(phm);
          free(phr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

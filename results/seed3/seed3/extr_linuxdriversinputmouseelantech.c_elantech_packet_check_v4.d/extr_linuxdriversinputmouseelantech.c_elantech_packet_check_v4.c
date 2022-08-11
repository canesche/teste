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
struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct TYPE_2__ {int fw_version; int* samples; scalar_t__ crc_enabled; } ;
struct elantech_data {TYPE_1__ info; scalar_t__ tp_dev; } ;

/* Variables and functions */
 int PACKET_TRACKPOINT ; 
 int PACKET_UNKNOWN ; 
 int PACKET_V4_HEAD ; 
 int PACKET_V4_MOTION ; 
 int PACKET_V4_STATUS ; 

__attribute__((used)) static int elantech_packet_check_v4(struct psmouse *psmouse)
{
	struct elantech_data *etd = psmouse->private;
	unsigned char *packet = psmouse->packet;
	unsigned char packet_type = packet[3] & 0x03;
	unsigned int ic_version;
	bool sanity_check;

	if (etd->tp_dev && (packet[3] & 0x0f) == 0x06)
		return PACKET_TRACKPOINT;

	/* This represents the version of IC body. */
	ic_version = (etd->info.fw_version & 0x0f0000) >> 16;

	/*
	 * Sanity check based on the constant bits of a packet.
	 * The constant bits change depending on the value of
	 * the hardware flag 'crc_enabled' and the version of
	 * the IC body, but are the same for every packet,
	 * regardless of the type.
	 */
	if (etd->info.crc_enabled)
		sanity_check = ((packet[3] & 0x08) == 0x00);
	else if (ic_version == 7 && etd->info.samples[1] == 0x2A)
		sanity_check = ((packet[3] & 0x1c) == 0x10);
	else
		sanity_check = ((packet[0] & 0x08) == 0x00 &&
				(packet[3] & 0x1c) == 0x10);

	if (!sanity_check)
		return PACKET_UNKNOWN;

	switch (packet_type) {
	case 0:
		return PACKET_V4_STATUS;

	case 1:
		return PACKET_V4_HEAD;

	case 2:
		return PACKET_V4_MOTION;
	}

	return PACKET_UNKNOWN;
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
          int _len_psmouse0 = 1;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
              int _len_psmouse__i0__packet0 = 1;
          psmouse[_i0].packet = (unsigned char *) malloc(_len_psmouse__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__packet0; _j0++) {
            psmouse[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psmouse__i0__private0 = 1;
          psmouse[_i0].private = (struct elantech_data *) malloc(_len_psmouse__i0__private0*sizeof(struct elantech_data));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private0; _j0++) {
            psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_psmouse__i0__private_info_samples0 = 1;
          psmouse[_i0].private->info.samples = (int *) malloc(_len_psmouse__i0__private_info_samples0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_info_samples0; _j0++) {
            psmouse[_i0].private->info.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.crc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].private->tp_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v4(psmouse);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].packet);
          }
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].private);
          }
          free(psmouse);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_psmouse0 = 65025;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
              int _len_psmouse__i0__packet0 = 1;
          psmouse[_i0].packet = (unsigned char *) malloc(_len_psmouse__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__packet0; _j0++) {
            psmouse[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psmouse__i0__private0 = 1;
          psmouse[_i0].private = (struct elantech_data *) malloc(_len_psmouse__i0__private0*sizeof(struct elantech_data));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private0; _j0++) {
            psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_psmouse__i0__private_info_samples0 = 1;
          psmouse[_i0].private->info.samples = (int *) malloc(_len_psmouse__i0__private_info_samples0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_info_samples0; _j0++) {
            psmouse[_i0].private->info.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.crc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].private->tp_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v4(psmouse);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].packet);
          }
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].private);
          }
          free(psmouse);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_psmouse0 = 100;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
              int _len_psmouse__i0__packet0 = 1;
          psmouse[_i0].packet = (unsigned char *) malloc(_len_psmouse__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__packet0; _j0++) {
            psmouse[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psmouse__i0__private0 = 1;
          psmouse[_i0].private = (struct elantech_data *) malloc(_len_psmouse__i0__private0*sizeof(struct elantech_data));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private0; _j0++) {
            psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_psmouse__i0__private_info_samples0 = 1;
          psmouse[_i0].private->info.samples = (int *) malloc(_len_psmouse__i0__private_info_samples0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_info_samples0; _j0++) {
            psmouse[_i0].private->info.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.crc_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].private->tp_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v4(psmouse);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].packet);
          }
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].private);
          }
          free(psmouse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

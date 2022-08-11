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
struct TYPE_2__ {int fw_version; } ;
struct elantech_data {unsigned char* parity; TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static int elantech_packet_check_v1(struct psmouse *psmouse)
{
	struct elantech_data *etd = psmouse->private;
	unsigned char *packet = psmouse->packet;
	unsigned char p1, p2, p3;

	/* Parity bits are placed differently */
	if (etd->info.fw_version < 0x020000) {
		/* byte 0:  D   U  p1  p2   1  p3   R   L */
		p1 = (packet[0] & 0x20) >> 5;
		p2 = (packet[0] & 0x10) >> 4;
	} else {
		/* byte 0: n1  n0  p2  p1   1  p3   R   L */
		p1 = (packet[0] & 0x10) >> 4;
		p2 = (packet[0] & 0x20) >> 5;
	}

	p3 = (packet[0] & 0x04) >> 2;

	return etd->parity[packet[1]] == p1 &&
	       etd->parity[packet[2]] == p2 &&
	       etd->parity[packet[3]] == p3;
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
              int _len_psmouse__i0__private_parity0 = 1;
          psmouse[_i0].private->parity = (unsigned char *) malloc(_len_psmouse__i0__private_parity0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_parity0; _j0++) {
            psmouse[_i0].private->parity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v1(psmouse);
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
              int _len_psmouse__i0__private_parity0 = 1;
          psmouse[_i0].private->parity = (unsigned char *) malloc(_len_psmouse__i0__private_parity0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_parity0; _j0++) {
            psmouse[_i0].private->parity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v1(psmouse);
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
              int _len_psmouse__i0__private_parity0 = 1;
          psmouse[_i0].private->parity = (unsigned char *) malloc(_len_psmouse__i0__private_parity0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private_parity0; _j0++) {
            psmouse[_i0].private->parity[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        psmouse[_i0].private->info.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v1(psmouse);
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

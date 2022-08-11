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
struct sctp_packet {int /*<<< orphan*/ * auth; scalar_t__ ipfragok; scalar_t__ has_auth; scalar_t__ has_data; scalar_t__ has_sack; scalar_t__ has_cookie_echo; int /*<<< orphan*/  overhead; int /*<<< orphan*/  size; } ;

/* Variables and functions */

__attribute__((used)) static void sctp_packet_reset(struct sctp_packet *packet)
{
	/* sctp_packet_transmit() relies on this to reset size to the
	 * current overhead after sending packets.
	 */
	packet->size = packet->overhead;

	packet->has_cookie_echo = 0;
	packet->has_sack = 0;
	packet->has_data = 0;
	packet->has_auth = 0;
	packet->ipfragok = 0;
	packet->auth = NULL;
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
          int _len_packet0 = 1;
          struct sctp_packet * packet = (struct sctp_packet *) malloc(_len_packet0*sizeof(struct sctp_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
              int _len_packet__i0__auth0 = 1;
          packet[_i0].auth = (int *) malloc(_len_packet__i0__auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__auth0; _j0++) {
            packet[_i0].auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        packet[_i0].ipfragok = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_data = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_sack = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_cookie_echo = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_packet_reset(packet);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].auth);
          }
          free(packet);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_packet0 = 65025;
          struct sctp_packet * packet = (struct sctp_packet *) malloc(_len_packet0*sizeof(struct sctp_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
              int _len_packet__i0__auth0 = 1;
          packet[_i0].auth = (int *) malloc(_len_packet__i0__auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__auth0; _j0++) {
            packet[_i0].auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        packet[_i0].ipfragok = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_data = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_sack = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_cookie_echo = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_packet_reset(packet);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].auth);
          }
          free(packet);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_packet0 = 100;
          struct sctp_packet * packet = (struct sctp_packet *) malloc(_len_packet0*sizeof(struct sctp_packet));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
              int _len_packet__i0__auth0 = 1;
          packet[_i0].auth = (int *) malloc(_len_packet__i0__auth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_packet__i0__auth0; _j0++) {
            packet[_i0].auth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        packet[_i0].ipfragok = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_data = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_sack = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].has_cookie_echo = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sctp_packet_reset(packet);
          for(int _aux = 0; _aux < _len_packet0; _aux++) {
          free(packet[_aux].auth);
          }
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

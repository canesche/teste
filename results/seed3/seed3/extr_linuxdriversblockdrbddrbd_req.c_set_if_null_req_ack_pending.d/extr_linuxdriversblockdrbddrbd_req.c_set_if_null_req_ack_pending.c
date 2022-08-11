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
struct drbd_request {int dummy; } ;
struct drbd_peer_device {struct drbd_connection* connection; } ;
struct drbd_connection {struct drbd_request* req_ack_pending; } ;

/* Variables and functions */

__attribute__((used)) static void set_if_null_req_ack_pending(struct drbd_peer_device *peer_device, struct drbd_request *req)
{
	struct drbd_connection *connection = peer_device ? peer_device->connection : NULL;
	if (!connection)
		return;
	if (connection->req_ack_pending == NULL)
		connection->req_ack_pending = req;
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
          int _len_peer_device0 = 1;
          struct drbd_peer_device * peer_device = (struct drbd_peer_device *) malloc(_len_peer_device0*sizeof(struct drbd_peer_device));
          for(int _i0 = 0; _i0 < _len_peer_device0; _i0++) {
              int _len_peer_device__i0__connection0 = 1;
          peer_device[_i0].connection = (struct drbd_connection *) malloc(_len_peer_device__i0__connection0*sizeof(struct drbd_connection));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection0; _j0++) {
              int _len_peer_device__i0__connection_req_ack_pending0 = 1;
          peer_device[_i0].connection->req_ack_pending = (struct drbd_request *) malloc(_len_peer_device__i0__connection_req_ack_pending0*sizeof(struct drbd_request));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection_req_ack_pending0; _j0++) {
            peer_device[_i0].connection->req_ack_pending->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_req0 = 1;
          struct drbd_request * req = (struct drbd_request *) malloc(_len_req0*sizeof(struct drbd_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_if_null_req_ack_pending(peer_device,req);
          for(int _aux = 0; _aux < _len_peer_device0; _aux++) {
          free(peer_device[_aux].connection);
          }
          free(peer_device);
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_peer_device0 = 65025;
          struct drbd_peer_device * peer_device = (struct drbd_peer_device *) malloc(_len_peer_device0*sizeof(struct drbd_peer_device));
          for(int _i0 = 0; _i0 < _len_peer_device0; _i0++) {
              int _len_peer_device__i0__connection0 = 1;
          peer_device[_i0].connection = (struct drbd_connection *) malloc(_len_peer_device__i0__connection0*sizeof(struct drbd_connection));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection0; _j0++) {
              int _len_peer_device__i0__connection_req_ack_pending0 = 1;
          peer_device[_i0].connection->req_ack_pending = (struct drbd_request *) malloc(_len_peer_device__i0__connection_req_ack_pending0*sizeof(struct drbd_request));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection_req_ack_pending0; _j0++) {
            peer_device[_i0].connection->req_ack_pending->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_req0 = 65025;
          struct drbd_request * req = (struct drbd_request *) malloc(_len_req0*sizeof(struct drbd_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_if_null_req_ack_pending(peer_device,req);
          for(int _aux = 0; _aux < _len_peer_device0; _aux++) {
          free(peer_device[_aux].connection);
          }
          free(peer_device);
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_peer_device0 = 100;
          struct drbd_peer_device * peer_device = (struct drbd_peer_device *) malloc(_len_peer_device0*sizeof(struct drbd_peer_device));
          for(int _i0 = 0; _i0 < _len_peer_device0; _i0++) {
              int _len_peer_device__i0__connection0 = 1;
          peer_device[_i0].connection = (struct drbd_connection *) malloc(_len_peer_device__i0__connection0*sizeof(struct drbd_connection));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection0; _j0++) {
              int _len_peer_device__i0__connection_req_ack_pending0 = 1;
          peer_device[_i0].connection->req_ack_pending = (struct drbd_request *) malloc(_len_peer_device__i0__connection_req_ack_pending0*sizeof(struct drbd_request));
          for(int _j0 = 0; _j0 < _len_peer_device__i0__connection_req_ack_pending0; _j0++) {
            peer_device[_i0].connection->req_ack_pending->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_req0 = 100;
          struct drbd_request * req = (struct drbd_request *) malloc(_len_req0*sizeof(struct drbd_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_if_null_req_ack_pending(peer_device,req);
          for(int _aux = 0; _aux < _len_peer_device0; _aux++) {
          free(peer_device[_aux].connection);
          }
          free(peer_device);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

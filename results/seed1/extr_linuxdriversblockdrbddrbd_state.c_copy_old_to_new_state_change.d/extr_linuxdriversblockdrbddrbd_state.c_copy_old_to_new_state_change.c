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
struct drbd_state_change {unsigned int n_connections; unsigned int n_devices; struct drbd_peer_device_state_change* peer_devices; struct drbd_device_state_change* devices; struct drbd_connection_state_change* connections; struct drbd_resource_state_change* resource; } ;
struct drbd_resource_state_change {int /*<<< orphan*/ * susp_fen; int /*<<< orphan*/ * susp_nod; int /*<<< orphan*/ * susp; int /*<<< orphan*/ * role; } ;
struct drbd_peer_device_state_change {int /*<<< orphan*/ * resync_susp_dependency; int /*<<< orphan*/ * resync_susp_peer; int /*<<< orphan*/ * resync_susp_user; int /*<<< orphan*/ * repl_state; int /*<<< orphan*/ * disk_state; } ;
struct drbd_device_state_change {int /*<<< orphan*/ * disk_state; } ;
struct drbd_connection_state_change {int /*<<< orphan*/ * cstate; int /*<<< orphan*/ * peer_role; } ;

/* Variables and functions */
 size_t NEW ; 
 size_t OLD ; 

void copy_old_to_new_state_change(struct drbd_state_change *state_change)
{
	struct drbd_resource_state_change *resource_state_change = &state_change->resource[0];
	unsigned int n_device, n_connection, n_peer_device, n_peer_devices;

#define OLD_TO_NEW(x) \
	(x[NEW] = x[OLD])

	OLD_TO_NEW(resource_state_change->role);
	OLD_TO_NEW(resource_state_change->susp);
	OLD_TO_NEW(resource_state_change->susp_nod);
	OLD_TO_NEW(resource_state_change->susp_fen);

	for (n_connection = 0; n_connection < state_change->n_connections; n_connection++) {
		struct drbd_connection_state_change *connection_state_change =
				&state_change->connections[n_connection];

		OLD_TO_NEW(connection_state_change->peer_role);
		OLD_TO_NEW(connection_state_change->cstate);
	}

	for (n_device = 0; n_device < state_change->n_devices; n_device++) {
		struct drbd_device_state_change *device_state_change =
			&state_change->devices[n_device];

		OLD_TO_NEW(device_state_change->disk_state);
	}

	n_peer_devices = state_change->n_devices * state_change->n_connections;
	for (n_peer_device = 0; n_peer_device < n_peer_devices; n_peer_device++) {
		struct drbd_peer_device_state_change *p =
			&state_change->peer_devices[n_peer_device];

		OLD_TO_NEW(p->disk_state);
		OLD_TO_NEW(p->repl_state);
		OLD_TO_NEW(p->resync_susp_user);
		OLD_TO_NEW(p->resync_susp_peer);
		OLD_TO_NEW(p->resync_susp_dependency);
	}

#undef OLD_TO_NEW
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
          int _len_state_change0 = 1;
          struct drbd_state_change * state_change = (struct drbd_state_change *) malloc(_len_state_change0*sizeof(struct drbd_state_change));
          for(int _i0 = 0; _i0 < _len_state_change0; _i0++) {
            state_change[_i0].n_connections = ((-2 * (next_i()%2)) + 1) * next_i();
        state_change[_i0].n_devices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state_change__i0__peer_devices0 = 1;
          state_change[_i0].peer_devices = (struct drbd_peer_device_state_change *) malloc(_len_state_change__i0__peer_devices0*sizeof(struct drbd_peer_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices0; _j0++) {
              int _len_state_change__i0__peer_devices_resync_susp_dependency0 = 1;
          state_change[_i0].peer_devices->resync_susp_dependency = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_dependency0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_dependency0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_dependency[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_peer0 = 1;
          state_change[_i0].peer_devices->resync_susp_peer = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_peer0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_user0 = 1;
          state_change[_i0].peer_devices->resync_susp_user = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_user0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_user0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_user[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_repl_state0 = 1;
          state_change[_i0].peer_devices->repl_state = (int *) malloc(_len_state_change__i0__peer_devices_repl_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_repl_state0; _j0++) {
            state_change[_i0].peer_devices->repl_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_disk_state0 = 1;
          state_change[_i0].peer_devices->disk_state = (int *) malloc(_len_state_change__i0__peer_devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_disk_state0; _j0++) {
            state_change[_i0].peer_devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__devices0 = 1;
          state_change[_i0].devices = (struct drbd_device_state_change *) malloc(_len_state_change__i0__devices0*sizeof(struct drbd_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices0; _j0++) {
              int _len_state_change__i0__devices_disk_state0 = 1;
          state_change[_i0].devices->disk_state = (int *) malloc(_len_state_change__i0__devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices_disk_state0; _j0++) {
            state_change[_i0].devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__connections0 = 1;
          state_change[_i0].connections = (struct drbd_connection_state_change *) malloc(_len_state_change__i0__connections0*sizeof(struct drbd_connection_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections0; _j0++) {
              int _len_state_change__i0__connections_cstate0 = 1;
          state_change[_i0].connections->cstate = (int *) malloc(_len_state_change__i0__connections_cstate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_cstate0; _j0++) {
            state_change[_i0].connections->cstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__connections_peer_role0 = 1;
          state_change[_i0].connections->peer_role = (int *) malloc(_len_state_change__i0__connections_peer_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_peer_role0; _j0++) {
            state_change[_i0].connections->peer_role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__resource0 = 1;
          state_change[_i0].resource = (struct drbd_resource_state_change *) malloc(_len_state_change__i0__resource0*sizeof(struct drbd_resource_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource0; _j0++) {
              int _len_state_change__i0__resource_susp_fen0 = 1;
          state_change[_i0].resource->susp_fen = (int *) malloc(_len_state_change__i0__resource_susp_fen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_fen0; _j0++) {
            state_change[_i0].resource->susp_fen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp_nod0 = 1;
          state_change[_i0].resource->susp_nod = (int *) malloc(_len_state_change__i0__resource_susp_nod0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_nod0; _j0++) {
            state_change[_i0].resource->susp_nod[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp0 = 1;
          state_change[_i0].resource->susp = (int *) malloc(_len_state_change__i0__resource_susp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp0; _j0++) {
            state_change[_i0].resource->susp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_role0 = 1;
          state_change[_i0].resource->role = (int *) malloc(_len_state_change__i0__resource_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_role0; _j0++) {
            state_change[_i0].resource->role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          copy_old_to_new_state_change(state_change);
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].peer_devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].connections);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].resource);
          }
          free(state_change);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state_change0 = 65025;
          struct drbd_state_change * state_change = (struct drbd_state_change *) malloc(_len_state_change0*sizeof(struct drbd_state_change));
          for(int _i0 = 0; _i0 < _len_state_change0; _i0++) {
            state_change[_i0].n_connections = ((-2 * (next_i()%2)) + 1) * next_i();
        state_change[_i0].n_devices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state_change__i0__peer_devices0 = 1;
          state_change[_i0].peer_devices = (struct drbd_peer_device_state_change *) malloc(_len_state_change__i0__peer_devices0*sizeof(struct drbd_peer_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices0; _j0++) {
              int _len_state_change__i0__peer_devices_resync_susp_dependency0 = 1;
          state_change[_i0].peer_devices->resync_susp_dependency = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_dependency0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_dependency0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_dependency[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_peer0 = 1;
          state_change[_i0].peer_devices->resync_susp_peer = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_peer0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_user0 = 1;
          state_change[_i0].peer_devices->resync_susp_user = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_user0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_user0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_user[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_repl_state0 = 1;
          state_change[_i0].peer_devices->repl_state = (int *) malloc(_len_state_change__i0__peer_devices_repl_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_repl_state0; _j0++) {
            state_change[_i0].peer_devices->repl_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_disk_state0 = 1;
          state_change[_i0].peer_devices->disk_state = (int *) malloc(_len_state_change__i0__peer_devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_disk_state0; _j0++) {
            state_change[_i0].peer_devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__devices0 = 1;
          state_change[_i0].devices = (struct drbd_device_state_change *) malloc(_len_state_change__i0__devices0*sizeof(struct drbd_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices0; _j0++) {
              int _len_state_change__i0__devices_disk_state0 = 1;
          state_change[_i0].devices->disk_state = (int *) malloc(_len_state_change__i0__devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices_disk_state0; _j0++) {
            state_change[_i0].devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__connections0 = 1;
          state_change[_i0].connections = (struct drbd_connection_state_change *) malloc(_len_state_change__i0__connections0*sizeof(struct drbd_connection_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections0; _j0++) {
              int _len_state_change__i0__connections_cstate0 = 1;
          state_change[_i0].connections->cstate = (int *) malloc(_len_state_change__i0__connections_cstate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_cstate0; _j0++) {
            state_change[_i0].connections->cstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__connections_peer_role0 = 1;
          state_change[_i0].connections->peer_role = (int *) malloc(_len_state_change__i0__connections_peer_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_peer_role0; _j0++) {
            state_change[_i0].connections->peer_role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__resource0 = 1;
          state_change[_i0].resource = (struct drbd_resource_state_change *) malloc(_len_state_change__i0__resource0*sizeof(struct drbd_resource_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource0; _j0++) {
              int _len_state_change__i0__resource_susp_fen0 = 1;
          state_change[_i0].resource->susp_fen = (int *) malloc(_len_state_change__i0__resource_susp_fen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_fen0; _j0++) {
            state_change[_i0].resource->susp_fen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp_nod0 = 1;
          state_change[_i0].resource->susp_nod = (int *) malloc(_len_state_change__i0__resource_susp_nod0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_nod0; _j0++) {
            state_change[_i0].resource->susp_nod[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp0 = 1;
          state_change[_i0].resource->susp = (int *) malloc(_len_state_change__i0__resource_susp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp0; _j0++) {
            state_change[_i0].resource->susp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_role0 = 1;
          state_change[_i0].resource->role = (int *) malloc(_len_state_change__i0__resource_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_role0; _j0++) {
            state_change[_i0].resource->role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          copy_old_to_new_state_change(state_change);
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].peer_devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].connections);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].resource);
          }
          free(state_change);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state_change0 = 100;
          struct drbd_state_change * state_change = (struct drbd_state_change *) malloc(_len_state_change0*sizeof(struct drbd_state_change));
          for(int _i0 = 0; _i0 < _len_state_change0; _i0++) {
            state_change[_i0].n_connections = ((-2 * (next_i()%2)) + 1) * next_i();
        state_change[_i0].n_devices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state_change__i0__peer_devices0 = 1;
          state_change[_i0].peer_devices = (struct drbd_peer_device_state_change *) malloc(_len_state_change__i0__peer_devices0*sizeof(struct drbd_peer_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices0; _j0++) {
              int _len_state_change__i0__peer_devices_resync_susp_dependency0 = 1;
          state_change[_i0].peer_devices->resync_susp_dependency = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_dependency0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_dependency0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_dependency[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_peer0 = 1;
          state_change[_i0].peer_devices->resync_susp_peer = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_peer0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_resync_susp_user0 = 1;
          state_change[_i0].peer_devices->resync_susp_user = (int *) malloc(_len_state_change__i0__peer_devices_resync_susp_user0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_resync_susp_user0; _j0++) {
            state_change[_i0].peer_devices->resync_susp_user[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_repl_state0 = 1;
          state_change[_i0].peer_devices->repl_state = (int *) malloc(_len_state_change__i0__peer_devices_repl_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_repl_state0; _j0++) {
            state_change[_i0].peer_devices->repl_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__peer_devices_disk_state0 = 1;
          state_change[_i0].peer_devices->disk_state = (int *) malloc(_len_state_change__i0__peer_devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__peer_devices_disk_state0; _j0++) {
            state_change[_i0].peer_devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__devices0 = 1;
          state_change[_i0].devices = (struct drbd_device_state_change *) malloc(_len_state_change__i0__devices0*sizeof(struct drbd_device_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices0; _j0++) {
              int _len_state_change__i0__devices_disk_state0 = 1;
          state_change[_i0].devices->disk_state = (int *) malloc(_len_state_change__i0__devices_disk_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__devices_disk_state0; _j0++) {
            state_change[_i0].devices->disk_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__connections0 = 1;
          state_change[_i0].connections = (struct drbd_connection_state_change *) malloc(_len_state_change__i0__connections0*sizeof(struct drbd_connection_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections0; _j0++) {
              int _len_state_change__i0__connections_cstate0 = 1;
          state_change[_i0].connections->cstate = (int *) malloc(_len_state_change__i0__connections_cstate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_cstate0; _j0++) {
            state_change[_i0].connections->cstate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__connections_peer_role0 = 1;
          state_change[_i0].connections->peer_role = (int *) malloc(_len_state_change__i0__connections_peer_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__connections_peer_role0; _j0++) {
            state_change[_i0].connections->peer_role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_change__i0__resource0 = 1;
          state_change[_i0].resource = (struct drbd_resource_state_change *) malloc(_len_state_change__i0__resource0*sizeof(struct drbd_resource_state_change));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource0; _j0++) {
              int _len_state_change__i0__resource_susp_fen0 = 1;
          state_change[_i0].resource->susp_fen = (int *) malloc(_len_state_change__i0__resource_susp_fen0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_fen0; _j0++) {
            state_change[_i0].resource->susp_fen[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp_nod0 = 1;
          state_change[_i0].resource->susp_nod = (int *) malloc(_len_state_change__i0__resource_susp_nod0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp_nod0; _j0++) {
            state_change[_i0].resource->susp_nod[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_susp0 = 1;
          state_change[_i0].resource->susp = (int *) malloc(_len_state_change__i0__resource_susp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_susp0; _j0++) {
            state_change[_i0].resource->susp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state_change__i0__resource_role0 = 1;
          state_change[_i0].resource->role = (int *) malloc(_len_state_change__i0__resource_role0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state_change__i0__resource_role0; _j0++) {
            state_change[_i0].resource->role[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          copy_old_to_new_state_change(state_change);
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].peer_devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].devices);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].connections);
          }
          for(int _aux = 0; _aux < _len_state_change0; _aux++) {
          free(state_change[_aux].resource);
          }
          free(state_change);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

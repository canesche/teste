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
struct devlink_dpipe_match {int /*<<< orphan*/  field_id; int /*<<< orphan*/ * header; int /*<<< orphan*/  type; } ;
struct devlink_dpipe_action {int /*<<< orphan*/  field_id; int /*<<< orphan*/ * header; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEVLINK_DPIPE_ACTION_TYPE_FIELD_MODIFY ; 
 int /*<<< orphan*/  DEVLINK_DPIPE_MATCH_TYPE_FIELD_EXACT ; 
 int /*<<< orphan*/  MLXSW_SP_DPIPE_FIELD_METADATA_ERIF_PORT ; 
 int /*<<< orphan*/  MLXSW_SP_DPIPE_FIELD_METADATA_L3_FORWARD ; 
 int /*<<< orphan*/  mlxsw_sp_dpipe_header_metadata ; 

__attribute__((used)) static void
mlxsw_sp_erif_match_action_prepare(struct devlink_dpipe_match *match,
				   struct devlink_dpipe_action *action)
{
	action->type = DEVLINK_DPIPE_ACTION_TYPE_FIELD_MODIFY;
	action->header = &mlxsw_sp_dpipe_header_metadata;
	action->field_id = MLXSW_SP_DPIPE_FIELD_METADATA_L3_FORWARD;

	match->type = DEVLINK_DPIPE_MATCH_TYPE_FIELD_EXACT;
	match->header = &mlxsw_sp_dpipe_header_metadata;
	match->field_id = MLXSW_SP_DPIPE_FIELD_METADATA_ERIF_PORT;
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
          int _len_match0 = 1;
          struct devlink_dpipe_match * match = (struct devlink_dpipe_match *) malloc(_len_match0*sizeof(struct devlink_dpipe_match));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_match__i0__header0 = 1;
          match[_i0].header = (int *) malloc(_len_match__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_match__i0__header0; _j0++) {
            match[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        match[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 1;
          struct devlink_dpipe_action * action = (struct devlink_dpipe_action *) malloc(_len_action0*sizeof(struct devlink_dpipe_action));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_action__i0__header0 = 1;
          action[_i0].header = (int *) malloc(_len_action__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_action__i0__header0; _j0++) {
            action[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        action[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_erif_match_action_prepare(match,action);
          for(int _aux = 0; _aux < _len_match0; _aux++) {
          free(match[_aux].header);
          }
          free(match);
          for(int _aux = 0; _aux < _len_action0; _aux++) {
          free(action[_aux].header);
          }
          free(action);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_match0 = 65025;
          struct devlink_dpipe_match * match = (struct devlink_dpipe_match *) malloc(_len_match0*sizeof(struct devlink_dpipe_match));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_match__i0__header0 = 1;
          match[_i0].header = (int *) malloc(_len_match__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_match__i0__header0; _j0++) {
            match[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        match[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 65025;
          struct devlink_dpipe_action * action = (struct devlink_dpipe_action *) malloc(_len_action0*sizeof(struct devlink_dpipe_action));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_action__i0__header0 = 1;
          action[_i0].header = (int *) malloc(_len_action__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_action__i0__header0; _j0++) {
            action[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        action[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_erif_match_action_prepare(match,action);
          for(int _aux = 0; _aux < _len_match0; _aux++) {
          free(match[_aux].header);
          }
          free(match);
          for(int _aux = 0; _aux < _len_action0; _aux++) {
          free(action[_aux].header);
          }
          free(action);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_match0 = 100;
          struct devlink_dpipe_match * match = (struct devlink_dpipe_match *) malloc(_len_match0*sizeof(struct devlink_dpipe_match));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_match__i0__header0 = 1;
          match[_i0].header = (int *) malloc(_len_match__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_match__i0__header0; _j0++) {
            match[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        match[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_action0 = 100;
          struct devlink_dpipe_action * action = (struct devlink_dpipe_action *) malloc(_len_action0*sizeof(struct devlink_dpipe_action));
          for(int _i0 = 0; _i0 < _len_action0; _i0++) {
            action[_i0].field_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_action__i0__header0 = 1;
          action[_i0].header = (int *) malloc(_len_action__i0__header0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_action__i0__header0; _j0++) {
            action[_i0].header[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        action[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_erif_match_action_prepare(match,action);
          for(int _aux = 0; _aux < _len_match0; _aux++) {
          free(match[_aux].header);
          }
          free(match);
          for(int _aux = 0; _aux < _len_action0; _aux++) {
          free(action[_aux].header);
          }
          free(action);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

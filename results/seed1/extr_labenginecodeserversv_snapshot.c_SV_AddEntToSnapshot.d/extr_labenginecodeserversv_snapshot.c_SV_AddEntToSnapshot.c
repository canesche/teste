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
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ snapshotCounter; } ;
typedef  TYPE_2__ svEntity_t ;
struct TYPE_11__ {size_t numSnapshotEntities; int /*<<< orphan*/ * snapshotEntities; } ;
typedef  TYPE_3__ snapshotEntityNumbers_t ;
struct TYPE_9__ {int /*<<< orphan*/  number; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
typedef  TYPE_4__ sharedEntity_t ;
struct TYPE_13__ {scalar_t__ snapshotCounter; } ;

/* Variables and functions */
 size_t MAX_SNAPSHOT_ENTITIES ; 
 TYPE_5__ sv ; 

__attribute__((used)) static void SV_AddEntToSnapshot( svEntity_t *svEnt, sharedEntity_t *gEnt, snapshotEntityNumbers_t *eNums ) {
	// if we have already added this entity to this snapshot, don't add again
	if ( svEnt->snapshotCounter == sv.snapshotCounter ) {
		return;
	}
	svEnt->snapshotCounter = sv.snapshotCounter;

	// if we are full, silently discard entities
	if ( eNums->numSnapshotEntities == MAX_SNAPSHOT_ENTITIES ) {
		return;
	}

	eNums->snapshotEntities[ eNums->numSnapshotEntities ] = gEnt->s.number;
	eNums->numSnapshotEntities++;
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
          int _len_svEnt0 = 1;
          struct TYPE_10__ * svEnt = (struct TYPE_10__ *) malloc(_len_svEnt0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_svEnt0; _i0++) {
            svEnt[_i0].snapshotCounter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gEnt0 = 1;
          struct TYPE_12__ * gEnt = (struct TYPE_12__ *) malloc(_len_gEnt0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_gEnt0; _i0++) {
            gEnt[_i0].s.number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eNums0 = 1;
          struct TYPE_11__ * eNums = (struct TYPE_11__ *) malloc(_len_eNums0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_eNums0; _i0++) {
            eNums[_i0].numSnapshotEntities = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eNums__i0__snapshotEntities0 = 1;
          eNums[_i0].snapshotEntities = (int *) malloc(_len_eNums__i0__snapshotEntities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eNums__i0__snapshotEntities0; _j0++) {
            eNums[_i0].snapshotEntities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          SV_AddEntToSnapshot(svEnt,gEnt,eNums);
          free(svEnt);
          free(gEnt);
          for(int _aux = 0; _aux < _len_eNums0; _aux++) {
          free(eNums[_aux].snapshotEntities);
          }
          free(eNums);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_svEnt0 = 65025;
          struct TYPE_10__ * svEnt = (struct TYPE_10__ *) malloc(_len_svEnt0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_svEnt0; _i0++) {
            svEnt[_i0].snapshotCounter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gEnt0 = 65025;
          struct TYPE_12__ * gEnt = (struct TYPE_12__ *) malloc(_len_gEnt0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_gEnt0; _i0++) {
            gEnt[_i0].s.number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eNums0 = 65025;
          struct TYPE_11__ * eNums = (struct TYPE_11__ *) malloc(_len_eNums0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_eNums0; _i0++) {
            eNums[_i0].numSnapshotEntities = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eNums__i0__snapshotEntities0 = 1;
          eNums[_i0].snapshotEntities = (int *) malloc(_len_eNums__i0__snapshotEntities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eNums__i0__snapshotEntities0; _j0++) {
            eNums[_i0].snapshotEntities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          SV_AddEntToSnapshot(svEnt,gEnt,eNums);
          free(svEnt);
          free(gEnt);
          for(int _aux = 0; _aux < _len_eNums0; _aux++) {
          free(eNums[_aux].snapshotEntities);
          }
          free(eNums);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_svEnt0 = 100;
          struct TYPE_10__ * svEnt = (struct TYPE_10__ *) malloc(_len_svEnt0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_svEnt0; _i0++) {
            svEnt[_i0].snapshotCounter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gEnt0 = 100;
          struct TYPE_12__ * gEnt = (struct TYPE_12__ *) malloc(_len_gEnt0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_gEnt0; _i0++) {
            gEnt[_i0].s.number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eNums0 = 100;
          struct TYPE_11__ * eNums = (struct TYPE_11__ *) malloc(_len_eNums0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_eNums0; _i0++) {
            eNums[_i0].numSnapshotEntities = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eNums__i0__snapshotEntities0 = 1;
          eNums[_i0].snapshotEntities = (int *) malloc(_len_eNums__i0__snapshotEntities0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_eNums__i0__snapshotEntities0; _j0++) {
            eNums[_i0].snapshotEntities[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          SV_AddEntToSnapshot(svEnt,gEnt,eNums);
          free(svEnt);
          free(gEnt);
          for(int _aux = 0; _aux < _len_eNums0; _aux++) {
          free(eNums[_aux].snapshotEntities);
          }
          free(eNums);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

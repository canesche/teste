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
struct TYPE_2__ {int /*<<< orphan*/  path; int /*<<< orphan*/  version; int /*<<< orphan*/  type; } ;
struct p9_wstat {int /*<<< orphan*/ * extension; void* n_muid; int /*<<< orphan*/  n_gid; void* n_uid; int /*<<< orphan*/ * muid; int /*<<< orphan*/ * gid; int /*<<< orphan*/ * uid; int /*<<< orphan*/ * name; int /*<<< orphan*/  length; int /*<<< orphan*/  mtime; int /*<<< orphan*/  atime; int /*<<< orphan*/  mode; TYPE_1__ qid; int /*<<< orphan*/  dev; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  INVALID_GID ; 
 void* INVALID_UID ; 

void
v9fs_blank_wstat(struct p9_wstat *wstat)
{
	wstat->type = ~0;
	wstat->dev = ~0;
	wstat->qid.type = ~0;
	wstat->qid.version = ~0;
	*((long long *)&wstat->qid.path) = ~0;
	wstat->mode = ~0;
	wstat->atime = ~0;
	wstat->mtime = ~0;
	wstat->length = ~0;
	wstat->name = NULL;
	wstat->uid = NULL;
	wstat->gid = NULL;
	wstat->muid = NULL;
	wstat->n_uid = INVALID_UID;
	wstat->n_gid = INVALID_GID;
	wstat->n_muid = INVALID_UID;
	wstat->extension = NULL;
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
          int _len_wstat0 = 1;
          struct p9_wstat * wstat = (struct p9_wstat *) malloc(_len_wstat0*sizeof(struct p9_wstat));
          for(int _i0 = 0; _i0 < _len_wstat0; _i0++) {
              int _len_wstat__i0__extension0 = 1;
          wstat[_i0].extension = (int *) malloc(_len_wstat__i0__extension0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__extension0; _j0++) {
            wstat[_i0].extension[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].n_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wstat__i0__muid0 = 1;
          wstat[_i0].muid = (int *) malloc(_len_wstat__i0__muid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__muid0; _j0++) {
            wstat[_i0].muid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__gid0 = 1;
          wstat[_i0].gid = (int *) malloc(_len_wstat__i0__gid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__gid0; _j0++) {
            wstat[_i0].gid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__uid0 = 1;
          wstat[_i0].uid = (int *) malloc(_len_wstat__i0__uid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__uid0; _j0++) {
            wstat[_i0].uid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__name0 = 1;
          wstat[_i0].name = (int *) malloc(_len_wstat__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__name0; _j0++) {
            wstat[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mtime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.path = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.version = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.type = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          v9fs_blank_wstat(wstat);
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].extension);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].muid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].gid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].uid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].name);
          }
          free(wstat);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wstat0 = 65025;
          struct p9_wstat * wstat = (struct p9_wstat *) malloc(_len_wstat0*sizeof(struct p9_wstat));
          for(int _i0 = 0; _i0 < _len_wstat0; _i0++) {
              int _len_wstat__i0__extension0 = 1;
          wstat[_i0].extension = (int *) malloc(_len_wstat__i0__extension0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__extension0; _j0++) {
            wstat[_i0].extension[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].n_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wstat__i0__muid0 = 1;
          wstat[_i0].muid = (int *) malloc(_len_wstat__i0__muid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__muid0; _j0++) {
            wstat[_i0].muid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__gid0 = 1;
          wstat[_i0].gid = (int *) malloc(_len_wstat__i0__gid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__gid0; _j0++) {
            wstat[_i0].gid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__uid0 = 1;
          wstat[_i0].uid = (int *) malloc(_len_wstat__i0__uid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__uid0; _j0++) {
            wstat[_i0].uid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__name0 = 1;
          wstat[_i0].name = (int *) malloc(_len_wstat__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__name0; _j0++) {
            wstat[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mtime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.path = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.version = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.type = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          v9fs_blank_wstat(wstat);
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].extension);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].muid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].gid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].uid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].name);
          }
          free(wstat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wstat0 = 100;
          struct p9_wstat * wstat = (struct p9_wstat *) malloc(_len_wstat0*sizeof(struct p9_wstat));
          for(int _i0 = 0; _i0 < _len_wstat0; _i0++) {
              int _len_wstat__i0__extension0 = 1;
          wstat[_i0].extension = (int *) malloc(_len_wstat__i0__extension0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__extension0; _j0++) {
            wstat[_i0].extension[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].n_gid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wstat__i0__muid0 = 1;
          wstat[_i0].muid = (int *) malloc(_len_wstat__i0__muid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__muid0; _j0++) {
            wstat[_i0].muid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__gid0 = 1;
          wstat[_i0].gid = (int *) malloc(_len_wstat__i0__gid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__gid0; _j0++) {
            wstat[_i0].gid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__uid0 = 1;
          wstat[_i0].uid = (int *) malloc(_len_wstat__i0__uid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__uid0; _j0++) {
            wstat[_i0].uid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wstat__i0__name0 = 1;
          wstat[_i0].name = (int *) malloc(_len_wstat__i0__name0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wstat__i0__name0; _j0++) {
            wstat[_i0].name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wstat[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mtime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.path = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.version = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].qid.type = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
        wstat[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          v9fs_blank_wstat(wstat);
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].extension);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].muid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].gid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].uid);
          }
          for(int _aux = 0; _aux < _len_wstat0; _aux++) {
          free(wstat[_aux].name);
          }
          free(wstat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

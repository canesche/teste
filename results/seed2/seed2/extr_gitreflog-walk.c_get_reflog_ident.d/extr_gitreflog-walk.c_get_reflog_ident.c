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
struct reflog_walk_info {struct commit_reflog* last_commit_reflog; } ;
struct reflog_info {char const* email; } ;
struct commit_reflog {int recno; TYPE_1__* reflogs; } ;
struct TYPE_2__ {struct reflog_info* items; } ;

/* Variables and functions */

const char *get_reflog_ident(struct reflog_walk_info *reflog_info)
{
	struct commit_reflog *commit_reflog = reflog_info->last_commit_reflog;
	struct reflog_info *info;

	if (!commit_reflog)
		return NULL;

	info = &commit_reflog->reflogs->items[commit_reflog->recno+1];
	return info->email;
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
          int _len_reflog_info0 = 1;
          struct reflog_walk_info * reflog_info = (struct reflog_walk_info *) malloc(_len_reflog_info0*sizeof(struct reflog_walk_info));
          for(int _i0 = 0; _i0 < _len_reflog_info0; _i0++) {
              int _len_reflog_info__i0__last_commit_reflog0 = 1;
          reflog_info[_i0].last_commit_reflog = (struct commit_reflog *) malloc(_len_reflog_info__i0__last_commit_reflog0*sizeof(struct commit_reflog));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog0; _j0++) {
            reflog_info[_i0].last_commit_reflog->recno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reflog_info__i0__last_commit_reflog_reflogs0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs = (struct TYPE_2__ *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items = (struct reflog_info *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items0*sizeof(struct reflog_info));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items->email = (const char *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items_email0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0; _j0++) {
            reflog_info[_i0].last_commit_reflog->reflogs->items->email[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          const char * benchRet = get_reflog_ident(reflog_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_reflog_info0; _aux++) {
          free(reflog_info[_aux].last_commit_reflog);
          }
          free(reflog_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_reflog_info0 = 65025;
          struct reflog_walk_info * reflog_info = (struct reflog_walk_info *) malloc(_len_reflog_info0*sizeof(struct reflog_walk_info));
          for(int _i0 = 0; _i0 < _len_reflog_info0; _i0++) {
              int _len_reflog_info__i0__last_commit_reflog0 = 1;
          reflog_info[_i0].last_commit_reflog = (struct commit_reflog *) malloc(_len_reflog_info__i0__last_commit_reflog0*sizeof(struct commit_reflog));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog0; _j0++) {
            reflog_info[_i0].last_commit_reflog->recno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reflog_info__i0__last_commit_reflog_reflogs0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs = (struct TYPE_2__ *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items = (struct reflog_info *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items0*sizeof(struct reflog_info));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items->email = (const char *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items_email0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0; _j0++) {
            reflog_info[_i0].last_commit_reflog->reflogs->items->email[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          const char * benchRet = get_reflog_ident(reflog_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_reflog_info0; _aux++) {
          free(reflog_info[_aux].last_commit_reflog);
          }
          free(reflog_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_reflog_info0 = 100;
          struct reflog_walk_info * reflog_info = (struct reflog_walk_info *) malloc(_len_reflog_info0*sizeof(struct reflog_walk_info));
          for(int _i0 = 0; _i0 < _len_reflog_info0; _i0++) {
              int _len_reflog_info__i0__last_commit_reflog0 = 1;
          reflog_info[_i0].last_commit_reflog = (struct commit_reflog *) malloc(_len_reflog_info__i0__last_commit_reflog0*sizeof(struct commit_reflog));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog0; _j0++) {
            reflog_info[_i0].last_commit_reflog->recno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reflog_info__i0__last_commit_reflog_reflogs0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs = (struct TYPE_2__ *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items = (struct reflog_info *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items0*sizeof(struct reflog_info));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items0; _j0++) {
              int _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0 = 1;
          reflog_info[_i0].last_commit_reflog->reflogs->items->email = (const char *) malloc(_len_reflog_info__i0__last_commit_reflog_reflogs_items_email0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_reflog_info__i0__last_commit_reflog_reflogs_items_email0; _j0++) {
            reflog_info[_i0].last_commit_reflog->reflogs->items->email[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          const char * benchRet = get_reflog_ident(reflog_info);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_reflog_info0; _aux++) {
          free(reflog_info[_aux].last_commit_reflog);
          }
          free(reflog_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

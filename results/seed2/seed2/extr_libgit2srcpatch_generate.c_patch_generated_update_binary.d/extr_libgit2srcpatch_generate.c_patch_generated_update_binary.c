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
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {TYPE_5__* delta; } ;
struct TYPE_12__ {TYPE_3__* file; } ;
struct TYPE_10__ {TYPE_1__* file; } ;
struct TYPE_15__ {TYPE_6__ base; TYPE_4__ nfile; TYPE_2__ ofile; } ;
typedef  TYPE_7__ git_patch_generated ;
struct TYPE_13__ {int flags; } ;
struct TYPE_11__ {int flags; scalar_t__ size; } ;
struct TYPE_9__ {int flags; scalar_t__ size; } ;

/* Variables and functions */
 int DIFF_FLAGS_KNOWN_BINARY ; 
 int DIFF_FLAGS_NOT_BINARY ; 
 int GIT_DIFF_FLAG_BINARY ; 
 int GIT_DIFF_FLAG_NOT_BINARY ; 
 scalar_t__ GIT_XDIFF_MAX_SIZE ; 

__attribute__((used)) static void patch_generated_update_binary(git_patch_generated *patch)
{
	if ((patch->base.delta->flags & DIFF_FLAGS_KNOWN_BINARY) != 0)
		return;

	if ((patch->ofile.file->flags & GIT_DIFF_FLAG_BINARY) != 0 ||
		(patch->nfile.file->flags & GIT_DIFF_FLAG_BINARY) != 0)
		patch->base.delta->flags |= GIT_DIFF_FLAG_BINARY;

	else if (patch->ofile.file->size > GIT_XDIFF_MAX_SIZE ||
		patch->nfile.file->size > GIT_XDIFF_MAX_SIZE)
		patch->base.delta->flags |= GIT_DIFF_FLAG_BINARY;

	else if ((patch->ofile.file->flags & DIFF_FLAGS_NOT_BINARY) != 0 &&
		(patch->nfile.file->flags & DIFF_FLAGS_NOT_BINARY) != 0)
		patch->base.delta->flags |= GIT_DIFF_FLAG_NOT_BINARY;
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
          int _len_patch0 = 1;
          struct TYPE_15__ * patch = (struct TYPE_15__ *) malloc(_len_patch0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__base_delta0 = 1;
          patch[_i0].base.delta = (struct TYPE_13__ *) malloc(_len_patch__i0__base_delta0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_patch__i0__base_delta0; _j0++) {
            patch[_i0].base.delta->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__nfile_file0 = 1;
          patch[_i0].nfile.file = (struct TYPE_11__ *) malloc(_len_patch__i0__nfile_file0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_patch__i0__nfile_file0; _j0++) {
            patch[_i0].nfile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].nfile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__ofile_file0 = 1;
          patch[_i0].ofile.file = (struct TYPE_9__ *) malloc(_len_patch__i0__ofile_file0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_file0; _j0++) {
            patch[_i0].ofile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].ofile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          patch_generated_update_binary(patch);
          free(patch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_patch0 = 65025;
          struct TYPE_15__ * patch = (struct TYPE_15__ *) malloc(_len_patch0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__base_delta0 = 1;
          patch[_i0].base.delta = (struct TYPE_13__ *) malloc(_len_patch__i0__base_delta0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_patch__i0__base_delta0; _j0++) {
            patch[_i0].base.delta->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__nfile_file0 = 1;
          patch[_i0].nfile.file = (struct TYPE_11__ *) malloc(_len_patch__i0__nfile_file0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_patch__i0__nfile_file0; _j0++) {
            patch[_i0].nfile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].nfile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__ofile_file0 = 1;
          patch[_i0].ofile.file = (struct TYPE_9__ *) malloc(_len_patch__i0__ofile_file0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_file0; _j0++) {
            patch[_i0].ofile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].ofile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          patch_generated_update_binary(patch);
          free(patch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_patch0 = 100;
          struct TYPE_15__ * patch = (struct TYPE_15__ *) malloc(_len_patch0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__base_delta0 = 1;
          patch[_i0].base.delta = (struct TYPE_13__ *) malloc(_len_patch__i0__base_delta0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_patch__i0__base_delta0; _j0++) {
            patch[_i0].base.delta->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__nfile_file0 = 1;
          patch[_i0].nfile.file = (struct TYPE_11__ *) malloc(_len_patch__i0__nfile_file0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_patch__i0__nfile_file0; _j0++) {
            patch[_i0].nfile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].nfile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch__i0__ofile_file0 = 1;
          patch[_i0].ofile.file = (struct TYPE_9__ *) malloc(_len_patch__i0__ofile_file0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_file0; _j0++) {
            patch[_i0].ofile.file->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].ofile.file->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          patch_generated_update_binary(patch);
          free(patch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

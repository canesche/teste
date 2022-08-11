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
struct index_state {int dummy; } ;
typedef  int /*<<< orphan*/  gboolean ;
typedef  int /*<<< orphan*/  LockedFileSet ;
typedef  int /*<<< orphan*/  GList ;
typedef  int /*<<< orphan*/  ChangeSet ;

/* Variables and functions */

__attribute__((used)) static void
scan_subtree_for_deletion (const char *repo_id,
                           struct index_state *istate,
                           const char *worktree,
                           const char *path,
                           GList *ignore_list,
                           LockedFileSet *fset,
                           gboolean is_readonly,
                           GList **scanned_dirs,
                           ChangeSet *changeset)
{
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
          int is_readonly = 100;
          int _len_repo_id0 = 1;
          const char * repo_id = (const char *) malloc(_len_repo_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_repo_id0; _i0++) {
            repo_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_istate0 = 1;
          struct index_state * istate = (struct index_state *) malloc(_len_istate0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_istate0; _i0++) {
            istate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_worktree0 = 1;
          const char * worktree = (const char *) malloc(_len_worktree0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_worktree0; _i0++) {
            worktree[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 1;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_list0 = 1;
          int * ignore_list = (int *) malloc(_len_ignore_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_list0; _i0++) {
            ignore_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fset0 = 1;
          int * fset = (int *) malloc(_len_fset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fset0; _i0++) {
            fset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scanned_dirs0 = 1;
          int ** scanned_dirs = (int **) malloc(_len_scanned_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_scanned_dirs0; _i0++) {
            int _len_scanned_dirs1 = 1;
            scanned_dirs[_i0] = (int *) malloc(_len_scanned_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_scanned_dirs1; _i1++) {
              scanned_dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_changeset0 = 1;
          int * changeset = (int *) malloc(_len_changeset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changeset0; _i0++) {
            changeset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_subtree_for_deletion(repo_id,istate,worktree,path,ignore_list,fset,is_readonly,scanned_dirs,changeset);
          free(repo_id);
          free(istate);
          free(worktree);
          free(path);
          free(ignore_list);
          free(fset);
          for(int i1 = 0; i1 < _len_scanned_dirs0; i1++) {
            int _len_scanned_dirs1 = 1;
              free(scanned_dirs[i1]);
          }
          free(scanned_dirs);
          free(changeset);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_readonly = 255;
          int _len_repo_id0 = 65025;
          const char * repo_id = (const char *) malloc(_len_repo_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_repo_id0; _i0++) {
            repo_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_istate0 = 65025;
          struct index_state * istate = (struct index_state *) malloc(_len_istate0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_istate0; _i0++) {
            istate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_worktree0 = 65025;
          const char * worktree = (const char *) malloc(_len_worktree0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_worktree0; _i0++) {
            worktree[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 65025;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_list0 = 65025;
          int * ignore_list = (int *) malloc(_len_ignore_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_list0; _i0++) {
            ignore_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fset0 = 65025;
          int * fset = (int *) malloc(_len_fset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fset0; _i0++) {
            fset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scanned_dirs0 = 65025;
          int ** scanned_dirs = (int **) malloc(_len_scanned_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_scanned_dirs0; _i0++) {
            int _len_scanned_dirs1 = 1;
            scanned_dirs[_i0] = (int *) malloc(_len_scanned_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_scanned_dirs1; _i1++) {
              scanned_dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_changeset0 = 65025;
          int * changeset = (int *) malloc(_len_changeset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changeset0; _i0++) {
            changeset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_subtree_for_deletion(repo_id,istate,worktree,path,ignore_list,fset,is_readonly,scanned_dirs,changeset);
          free(repo_id);
          free(istate);
          free(worktree);
          free(path);
          free(ignore_list);
          free(fset);
          for(int i1 = 0; i1 < _len_scanned_dirs0; i1++) {
            int _len_scanned_dirs1 = 1;
              free(scanned_dirs[i1]);
          }
          free(scanned_dirs);
          free(changeset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_readonly = 10;
          int _len_repo_id0 = 100;
          const char * repo_id = (const char *) malloc(_len_repo_id0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_repo_id0; _i0++) {
            repo_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_istate0 = 100;
          struct index_state * istate = (struct index_state *) malloc(_len_istate0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_istate0; _i0++) {
            istate[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_worktree0 = 100;
          const char * worktree = (const char *) malloc(_len_worktree0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_worktree0; _i0++) {
            worktree[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_path0 = 100;
          const char * path = (const char *) malloc(_len_path0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ignore_list0 = 100;
          int * ignore_list = (int *) malloc(_len_ignore_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ignore_list0; _i0++) {
            ignore_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fset0 = 100;
          int * fset = (int *) malloc(_len_fset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fset0; _i0++) {
            fset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scanned_dirs0 = 100;
          int ** scanned_dirs = (int **) malloc(_len_scanned_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_scanned_dirs0; _i0++) {
            int _len_scanned_dirs1 = 1;
            scanned_dirs[_i0] = (int *) malloc(_len_scanned_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_scanned_dirs1; _i1++) {
              scanned_dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_changeset0 = 100;
          int * changeset = (int *) malloc(_len_changeset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_changeset0; _i0++) {
            changeset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scan_subtree_for_deletion(repo_id,istate,worktree,path,ignore_list,fset,is_readonly,scanned_dirs,changeset);
          free(repo_id);
          free(istate);
          free(worktree);
          free(path);
          free(ignore_list);
          free(fset);
          for(int i1 = 0; i1 < _len_scanned_dirs0; i1++) {
            int _len_scanned_dirs1 = 1;
              free(scanned_dirs[i1]);
          }
          free(scanned_dirs);
          free(changeset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

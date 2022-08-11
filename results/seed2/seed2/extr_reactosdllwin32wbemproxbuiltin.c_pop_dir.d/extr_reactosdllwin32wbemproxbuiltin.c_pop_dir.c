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
struct dirstack {size_t num_dirs; int /*<<< orphan*/ ** dirs; scalar_t__* len_dirs; } ;
typedef  int /*<<< orphan*/  WCHAR ;
typedef  scalar_t__ UINT ;

/* Variables and functions */

__attribute__((used)) static WCHAR *pop_dir( struct dirstack *dirstack, UINT *len )
{
    if (!dirstack->num_dirs)
    {
        *len = 0;
        return NULL;
    }
    dirstack->num_dirs--;
    *len = dirstack->len_dirs[dirstack->num_dirs];
    return dirstack->dirs[dirstack->num_dirs];
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
          int _len_dirstack0 = 1;
          struct dirstack * dirstack = (struct dirstack *) malloc(_len_dirstack0*sizeof(struct dirstack));
          for(int _i0 = 0; _i0 < _len_dirstack0; _i0++) {
            dirstack[_i0].num_dirs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirstack__i0__dirs0 = 1;
          dirstack[_i0].dirs = (int **) malloc(_len_dirstack__i0__dirs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__dirs0; _j0++) {
            int _len_dirstack__i0__dirs1 = 1;
            dirstack[_i0].dirs[_j0] = (int *) malloc(_len_dirstack__i0__dirs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dirstack__i0__dirs1; _j1++) {
              dirstack[_i0].dirs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dirstack__i0__len_dirs0 = 1;
          dirstack[_i0].len_dirs = (long *) malloc(_len_dirstack__i0__len_dirs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__len_dirs0; _j0++) {
            dirstack[_i0].len_dirs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_len0 = 1;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pop_dir(dirstack,len);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(*(dirstack[_aux].dirs));
        free(dirstack[_aux].dirs);
          }
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(dirstack[_aux].len_dirs);
          }
          free(dirstack);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dirstack0 = 65025;
          struct dirstack * dirstack = (struct dirstack *) malloc(_len_dirstack0*sizeof(struct dirstack));
          for(int _i0 = 0; _i0 < _len_dirstack0; _i0++) {
            dirstack[_i0].num_dirs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirstack__i0__dirs0 = 1;
          dirstack[_i0].dirs = (int **) malloc(_len_dirstack__i0__dirs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__dirs0; _j0++) {
            int _len_dirstack__i0__dirs1 = 1;
            dirstack[_i0].dirs[_j0] = (int *) malloc(_len_dirstack__i0__dirs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dirstack__i0__dirs1; _j1++) {
              dirstack[_i0].dirs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dirstack__i0__len_dirs0 = 1;
          dirstack[_i0].len_dirs = (long *) malloc(_len_dirstack__i0__len_dirs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__len_dirs0; _j0++) {
            dirstack[_i0].len_dirs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_len0 = 65025;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pop_dir(dirstack,len);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(*(dirstack[_aux].dirs));
        free(dirstack[_aux].dirs);
          }
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(dirstack[_aux].len_dirs);
          }
          free(dirstack);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dirstack0 = 100;
          struct dirstack * dirstack = (struct dirstack *) malloc(_len_dirstack0*sizeof(struct dirstack));
          for(int _i0 = 0; _i0 < _len_dirstack0; _i0++) {
            dirstack[_i0].num_dirs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirstack__i0__dirs0 = 1;
          dirstack[_i0].dirs = (int **) malloc(_len_dirstack__i0__dirs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__dirs0; _j0++) {
            int _len_dirstack__i0__dirs1 = 1;
            dirstack[_i0].dirs[_j0] = (int *) malloc(_len_dirstack__i0__dirs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dirstack__i0__dirs1; _j1++) {
              dirstack[_i0].dirs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dirstack__i0__len_dirs0 = 1;
          dirstack[_i0].len_dirs = (long *) malloc(_len_dirstack__i0__len_dirs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dirstack__i0__len_dirs0; _j0++) {
            dirstack[_i0].len_dirs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_len0 = 100;
          long * len = (long *) malloc(_len_len0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pop_dir(dirstack,len);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(*(dirstack[_aux].dirs));
        free(dirstack[_aux].dirs);
          }
          for(int _aux = 0; _aux < _len_dirstack0; _aux++) {
          free(dirstack[_aux].len_dirs);
          }
          free(dirstack);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  gboolean ;
typedef  int /*<<< orphan*/  SeafDirent ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static int
threeway_diff_dirs (int n, const char *basedir, SeafDirent *dirs[], void *vdata,
                    gboolean *recurse)
{
    *recurse = TRUE;
    return 0;
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
          int n = 100;
          int _len_basedir0 = 1;
          const char * basedir = (const char *) malloc(_len_basedir0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_basedir0; _i0++) {
            basedir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirs0 = 1;
          int ** dirs = (int **) malloc(_len_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dirs0; _i0++) {
            int _len_dirs1 = 1;
            dirs[_i0] = (int *) malloc(_len_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dirs1; _i1++) {
              dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          void * vdata;
          int _len_recurse0 = 1;
          int * recurse = (int *) malloc(_len_recurse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recurse0; _i0++) {
            recurse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = threeway_diff_dirs(n,basedir,dirs,vdata,recurse);
          printf("%d\n", benchRet); 
          free(basedir);
          for(int i1 = 0; i1 < _len_dirs0; i1++) {
            int _len_dirs1 = 1;
              free(dirs[i1]);
          }
          free(dirs);
          free(recurse);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_basedir0 = 65025;
          const char * basedir = (const char *) malloc(_len_basedir0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_basedir0; _i0++) {
            basedir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirs0 = 65025;
          int ** dirs = (int **) malloc(_len_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dirs0; _i0++) {
            int _len_dirs1 = 1;
            dirs[_i0] = (int *) malloc(_len_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dirs1; _i1++) {
              dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          void * vdata;
          int _len_recurse0 = 65025;
          int * recurse = (int *) malloc(_len_recurse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recurse0; _i0++) {
            recurse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = threeway_diff_dirs(n,basedir,dirs,vdata,recurse);
          printf("%d\n", benchRet); 
          free(basedir);
          for(int i1 = 0; i1 < _len_dirs0; i1++) {
            int _len_dirs1 = 1;
              free(dirs[i1]);
          }
          free(dirs);
          free(recurse);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_basedir0 = 100;
          const char * basedir = (const char *) malloc(_len_basedir0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_basedir0; _i0++) {
            basedir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirs0 = 100;
          int ** dirs = (int **) malloc(_len_dirs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dirs0; _i0++) {
            int _len_dirs1 = 1;
            dirs[_i0] = (int *) malloc(_len_dirs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dirs1; _i1++) {
              dirs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          void * vdata;
          int _len_recurse0 = 100;
          int * recurse = (int *) malloc(_len_recurse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_recurse0; _i0++) {
            recurse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = threeway_diff_dirs(n,basedir,dirs,vdata,recurse);
          printf("%d\n", benchRet); 
          free(basedir);
          for(int i1 = 0; i1 < _len_dirs0; i1++) {
            int _len_dirs1 = 1;
              free(dirs[i1]);
          }
          free(dirs);
          free(recurse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ size; char* ptr; } ;
typedef  TYPE_1__ git_buf ;

/* Variables and functions */

void git_path_squash_slashes(git_buf *path)
{
	char *p, *q;

	if (path->size == 0)
		return;

	for (p = path->ptr, q = path->ptr; *q; p++, q++) {
		*p = *q;

		while (*q == '/' && *(q+1) == '/') {
			path->size--;
			q++;
		}
	}

	*p = '\0';
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
          int _len_path0 = 1;
          struct TYPE_3__ * path = (struct TYPE_3__ *) malloc(_len_path0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__ptr0 = 1;
          path[_i0].ptr = (char *) malloc(_len_path__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_path__i0__ptr0; _j0++) {
            path[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          git_path_squash_slashes(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].ptr);
          }
          free(path);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_path0 = 65025;
          struct TYPE_3__ * path = (struct TYPE_3__ *) malloc(_len_path0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__ptr0 = 1;
          path[_i0].ptr = (char *) malloc(_len_path__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_path__i0__ptr0; _j0++) {
            path[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          git_path_squash_slashes(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].ptr);
          }
          free(path);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_path0 = 100;
          struct TYPE_3__ * path = (struct TYPE_3__ *) malloc(_len_path0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_path__i0__ptr0 = 1;
          path[_i0].ptr = (char *) malloc(_len_path__i0__ptr0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_path__i0__ptr0; _j0++) {
            path[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          git_path_squash_slashes(path);
          for(int _aux = 0; _aux < _len_path0; _aux++) {
          free(path[_aux].ptr);
          }
          free(path);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

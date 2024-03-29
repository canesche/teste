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
struct virtual_item {struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; scalar_t__* entry_sizes; } ;

/* Variables and functions */

__attribute__((used)) static int direntry_part_size(struct virtual_item *vi, int first, int count)
{
	int i, retval;
	int from, to;
	struct direntry_uarea *dir_u = vi->vi_uarea;

	retval = 0;
	if (first == 0)
		from = 0;
	else
		from = dir_u->entry_count - count;
	to = from + count - 1;

	for (i = from; i <= to; i++)
		retval += dir_u->entry_sizes[i];

	return retval;
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
          int first = 100;
          int count = 100;
          int _len_vi0 = 1;
          struct virtual_item * vi = (struct virtual_item *) malloc(_len_vi0*sizeof(struct virtual_item));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__vi_uarea0 = 1;
          vi[_i0].vi_uarea = (struct direntry_uarea *) malloc(_len_vi__i0__vi_uarea0*sizeof(struct direntry_uarea));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea0; _j0++) {
            vi[_i0].vi_uarea->entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vi__i0__vi_uarea_entry_sizes0 = 1;
          vi[_i0].vi_uarea->entry_sizes = (long *) malloc(_len_vi__i0__vi_uarea_entry_sizes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea_entry_sizes0; _j0++) {
            vi[_i0].vi_uarea->entry_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = direntry_part_size(vi,first,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].vi_uarea);
          }
          free(vi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int first = 255;
          int count = 255;
          int _len_vi0 = 65025;
          struct virtual_item * vi = (struct virtual_item *) malloc(_len_vi0*sizeof(struct virtual_item));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__vi_uarea0 = 1;
          vi[_i0].vi_uarea = (struct direntry_uarea *) malloc(_len_vi__i0__vi_uarea0*sizeof(struct direntry_uarea));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea0; _j0++) {
            vi[_i0].vi_uarea->entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vi__i0__vi_uarea_entry_sizes0 = 1;
          vi[_i0].vi_uarea->entry_sizes = (long *) malloc(_len_vi__i0__vi_uarea_entry_sizes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea_entry_sizes0; _j0++) {
            vi[_i0].vi_uarea->entry_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = direntry_part_size(vi,first,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].vi_uarea);
          }
          free(vi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int first = 10;
          int count = 10;
          int _len_vi0 = 100;
          struct virtual_item * vi = (struct virtual_item *) malloc(_len_vi0*sizeof(struct virtual_item));
          for(int _i0 = 0; _i0 < _len_vi0; _i0++) {
              int _len_vi__i0__vi_uarea0 = 1;
          vi[_i0].vi_uarea = (struct direntry_uarea *) malloc(_len_vi__i0__vi_uarea0*sizeof(struct direntry_uarea));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea0; _j0++) {
            vi[_i0].vi_uarea->entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vi__i0__vi_uarea_entry_sizes0 = 1;
          vi[_i0].vi_uarea->entry_sizes = (long *) malloc(_len_vi__i0__vi_uarea_entry_sizes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vi__i0__vi_uarea_entry_sizes0; _j0++) {
            vi[_i0].vi_uarea->entry_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = direntry_part_size(vi,first,count);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vi0; _aux++) {
          free(vi[_aux].vi_uarea);
          }
          free(vi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

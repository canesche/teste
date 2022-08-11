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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {char* data; size_t len; } ;
struct TYPE_6__ {TYPE_1__ map; } ;
struct TYPE_7__ {TYPE_2__ ofile; } ;
typedef  TYPE_3__ git_patch_generated ;

/* Variables and functions */

void git_patch_generated_old_data(
	char **ptr, size_t *len, git_patch_generated *patch)
{
	*ptr = patch->ofile.map.data;
	*len = patch->ofile.map.len;
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
          int _len_ptr0 = 1;
          char ** ptr = (char **) malloc(_len_ptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (char *) malloc(_len_ptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 1;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch0 = 1;
          struct TYPE_7__ * patch = (struct TYPE_7__ *) malloc(_len_patch0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__ofile_map_data0 = 1;
          patch[_i0].ofile.map.data = (char *) malloc(_len_patch__i0__ofile_map_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_map_data0; _j0++) {
            patch[_i0].ofile.map.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        patch[_i0].ofile.map.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_patch_generated_old_data(ptr,len,patch);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              free(ptr[i1]);
          }
          free(ptr);
          free(len);
          free(patch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ptr0 = 65025;
          char ** ptr = (char **) malloc(_len_ptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (char *) malloc(_len_ptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 65025;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch0 = 65025;
          struct TYPE_7__ * patch = (struct TYPE_7__ *) malloc(_len_patch0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__ofile_map_data0 = 1;
          patch[_i0].ofile.map.data = (char *) malloc(_len_patch__i0__ofile_map_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_map_data0; _j0++) {
            patch[_i0].ofile.map.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        patch[_i0].ofile.map.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_patch_generated_old_data(ptr,len,patch);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              free(ptr[i1]);
          }
          free(ptr);
          free(len);
          free(patch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ptr0 = 100;
          char ** ptr = (char **) malloc(_len_ptr0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            int _len_ptr1 = 1;
            ptr[_i0] = (char *) malloc(_len_ptr1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_ptr1; _i1++) {
              ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 100;
          unsigned long * len = (unsigned long *) malloc(_len_len0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_patch0 = 100;
          struct TYPE_7__ * patch = (struct TYPE_7__ *) malloc(_len_patch0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
              int _len_patch__i0__ofile_map_data0 = 1;
          patch[_i0].ofile.map.data = (char *) malloc(_len_patch__i0__ofile_map_data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_patch__i0__ofile_map_data0; _j0++) {
            patch[_i0].ofile.map.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        patch[_i0].ofile.map.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_patch_generated_old_data(ptr,len,patch);
          for(int i1 = 0; i1 < _len_ptr0; i1++) {
            int _len_ptr1 = 1;
              free(ptr[i1]);
          }
          free(ptr);
          free(len);
          free(patch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

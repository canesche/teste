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
struct TYPE_2__ {char* name; } ;
struct dentry {TYPE_1__ d_name; } ;

/* Variables and functions */

__attribute__((used)) static bool ovl_is_temp_index(struct dentry *index)
{
	return index->d_name.name[0] == '#';
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
          int _len_index0 = 1;
          struct dentry * index = (struct dentry *) malloc(_len_index0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              int _len_index__i0__d_name_name0 = 1;
          index[_i0].d_name.name = (char *) malloc(_len_index__i0__d_name_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_index__i0__d_name_name0; _j0++) {
            index[_i0].d_name.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ovl_is_temp_index(index);
          printf("%d\n", benchRet); 
          free(index);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_index0 = 65025;
          struct dentry * index = (struct dentry *) malloc(_len_index0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              int _len_index__i0__d_name_name0 = 1;
          index[_i0].d_name.name = (char *) malloc(_len_index__i0__d_name_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_index__i0__d_name_name0; _j0++) {
            index[_i0].d_name.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ovl_is_temp_index(index);
          printf("%d\n", benchRet); 
          free(index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_index0 = 100;
          struct dentry * index = (struct dentry *) malloc(_len_index0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
              int _len_index__i0__d_name_name0 = 1;
          index[_i0].d_name.name = (char *) malloc(_len_index__i0__d_name_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_index__i0__d_name_name0; _j0++) {
            index[_i0].d_name.name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ovl_is_temp_index(index);
          printf("%d\n", benchRet); 
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

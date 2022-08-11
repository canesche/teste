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
typedef  int /*<<< orphan*/  umode_t ;
typedef  int /*<<< orphan*/  u8 ;
struct dentry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct dentry *
edac_debugfs_create_x8(const char *name, umode_t mode,
		       struct dentry *parent, u8 *value)			{ return NULL; }


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
          int mode = 100;
          int _len_name0 = 1;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = edac_debugfs_create_x8(name,mode,parent,value);
          printf("%d\n", (*benchRet).dummy);
          free(name);
          free(parent);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int _len_name0 = 65025;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 65025;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = edac_debugfs_create_x8(name,mode,parent,value);
          printf("%d\n", (*benchRet).dummy);
          free(name);
          free(parent);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int _len_name0 = 100;
          const char * name = (const char *) malloc(_len_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 100;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = edac_debugfs_create_x8(name,mode,parent,value);
          printf("%d\n", (*benchRet).dummy);
          free(name);
          free(parent);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

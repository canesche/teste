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
struct rchan_buf {int dummy; } ;
struct dentry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct dentry *create_buf_file_default_callback(const char *filename,
						       struct dentry *parent,
						       umode_t mode,
						       struct rchan_buf *buf,
						       int *is_global)
{
	return NULL;
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
          int mode = 100;
          int _len_filename0 = 1;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          struct rchan_buf * buf = (struct rchan_buf *) malloc(_len_buf0*sizeof(struct rchan_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_is_global0 = 1;
          int * is_global = (int *) malloc(_len_is_global0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_is_global0; _i0++) {
            is_global[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = create_buf_file_default_callback(filename,parent,mode,buf,is_global);
          printf("%d\n", (*benchRet).dummy);
          free(filename);
          free(parent);
          free(buf);
          free(is_global);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int _len_filename0 = 65025;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 65025;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          struct rchan_buf * buf = (struct rchan_buf *) malloc(_len_buf0*sizeof(struct rchan_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_is_global0 = 65025;
          int * is_global = (int *) malloc(_len_is_global0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_is_global0; _i0++) {
            is_global[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = create_buf_file_default_callback(filename,parent,mode,buf,is_global);
          printf("%d\n", (*benchRet).dummy);
          free(filename);
          free(parent);
          free(buf);
          free(is_global);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int _len_filename0 = 100;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 100;
          struct dentry * parent = (struct dentry *) malloc(_len_parent0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          struct rchan_buf * buf = (struct rchan_buf *) malloc(_len_buf0*sizeof(struct rchan_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_is_global0 = 100;
          int * is_global = (int *) malloc(_len_is_global0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_is_global0; _i0++) {
            is_global[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dentry * benchRet = create_buf_file_default_callback(filename,parent,mode,buf,is_global);
          printf("%d\n", (*benchRet).dummy);
          free(filename);
          free(parent);
          free(buf);
          free(is_global);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

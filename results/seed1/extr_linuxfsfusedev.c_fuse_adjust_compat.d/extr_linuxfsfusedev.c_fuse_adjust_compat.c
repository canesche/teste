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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct fuse_open_in {int dummy; } ;
struct fuse_conn {int minor; } ;
struct TYPE_8__ {int opcode; } ;
struct TYPE_10__ {TYPE_4__* args; TYPE_3__ h; } ;
struct TYPE_7__ {TYPE_1__* args; } ;
struct fuse_args {TYPE_5__ in; TYPE_2__ out; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_6__ {int /*<<< orphan*/  size; } ;

/* Variables and functions */
 int /*<<< orphan*/  FUSE_COMPAT_ATTR_OUT_SIZE ; 
 int /*<<< orphan*/  FUSE_COMPAT_ENTRY_OUT_SIZE ; 
 int FUSE_COMPAT_MKNOD_IN_SIZE ; 
 int /*<<< orphan*/  FUSE_COMPAT_STATFS_SIZE ; 
#define  FUSE_CREATE 135 
#define  FUSE_GETATTR 134 
#define  FUSE_LINK 133 
#define  FUSE_LOOKUP 132 
#define  FUSE_MKDIR 131 
#define  FUSE_MKNOD 130 
#define  FUSE_SETATTR 129 
 int FUSE_STATFS ; 
#define  FUSE_SYMLINK 128 

__attribute__((used)) static void fuse_adjust_compat(struct fuse_conn *fc, struct fuse_args *args)
{
	if (fc->minor < 4 && args->in.h.opcode == FUSE_STATFS)
		args->out.args[0].size = FUSE_COMPAT_STATFS_SIZE;

	if (fc->minor < 9) {
		switch (args->in.h.opcode) {
		case FUSE_LOOKUP:
		case FUSE_CREATE:
		case FUSE_MKNOD:
		case FUSE_MKDIR:
		case FUSE_SYMLINK:
		case FUSE_LINK:
			args->out.args[0].size = FUSE_COMPAT_ENTRY_OUT_SIZE;
			break;
		case FUSE_GETATTR:
		case FUSE_SETATTR:
			args->out.args[0].size = FUSE_COMPAT_ATTR_OUT_SIZE;
			break;
		}
	}
	if (fc->minor < 12) {
		switch (args->in.h.opcode) {
		case FUSE_CREATE:
			args->in.args[0].size = sizeof(struct fuse_open_in);
			break;
		case FUSE_MKNOD:
			args->in.args[0].size = FUSE_COMPAT_MKNOD_IN_SIZE;
			break;
		}
	}
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
          int _len_fc0 = 1;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
            fc[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 1;
          struct fuse_args * args = (struct fuse_args *) malloc(_len_args0*sizeof(struct fuse_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__in_args0 = 1;
          args[_i0].in.args = (struct TYPE_9__ *) malloc(_len_args__i0__in_args0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_args__i0__in_args0; _j0++) {
            args[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__out_args0 = 1;
          args[_i0].out.args = (struct TYPE_6__ *) malloc(_len_args__i0__out_args0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_args__i0__out_args0; _j0++) {
            args[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_adjust_compat(fc,args);
          free(fc);
          free(args);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fc0 = 65025;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
            fc[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 65025;
          struct fuse_args * args = (struct fuse_args *) malloc(_len_args0*sizeof(struct fuse_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__in_args0 = 1;
          args[_i0].in.args = (struct TYPE_9__ *) malloc(_len_args__i0__in_args0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_args__i0__in_args0; _j0++) {
            args[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__out_args0 = 1;
          args[_i0].out.args = (struct TYPE_6__ *) malloc(_len_args__i0__out_args0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_args__i0__out_args0; _j0++) {
            args[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_adjust_compat(fc,args);
          free(fc);
          free(args);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fc0 = 100;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
            fc[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 100;
          struct fuse_args * args = (struct fuse_args *) malloc(_len_args0*sizeof(struct fuse_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              int _len_args__i0__in_args0 = 1;
          args[_i0].in.args = (struct TYPE_9__ *) malloc(_len_args__i0__in_args0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_args__i0__in_args0; _j0++) {
            args[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        args[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_args__i0__out_args0 = 1;
          args[_i0].out.args = (struct TYPE_6__ *) malloc(_len_args__i0__out_args0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_args__i0__out_args0; _j0++) {
            args[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_adjust_compat(fc,args);
          free(fc);
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

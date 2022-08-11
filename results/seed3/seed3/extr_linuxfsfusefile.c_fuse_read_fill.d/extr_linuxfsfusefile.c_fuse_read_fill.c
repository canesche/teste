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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {int argvar; int numargs; TYPE_6__* args; } ;
struct TYPE_10__ {int opcode; int /*<<< orphan*/  nodeid; } ;
struct TYPE_12__ {int numargs; TYPE_4__* args; TYPE_3__ h; } ;
struct fuse_read_in {size_t size; int /*<<< orphan*/  flags; int /*<<< orphan*/  offset; int /*<<< orphan*/  fh; } ;
struct TYPE_8__ {struct fuse_read_in in; } ;
struct TYPE_9__ {TYPE_1__ read; } ;
struct fuse_req {TYPE_7__ out; TYPE_5__ in; TYPE_2__ misc; } ;
struct fuse_file {int /*<<< orphan*/  nodeid; int /*<<< orphan*/  fh; } ;
struct file {int /*<<< orphan*/  f_flags; struct fuse_file* private_data; } ;
typedef  int /*<<< orphan*/  loff_t ;
struct TYPE_13__ {size_t size; } ;
struct TYPE_11__ {int size; struct fuse_read_in* value; } ;

/* Variables and functions */

void fuse_read_fill(struct fuse_req *req, struct file *file, loff_t pos,
		    size_t count, int opcode)
{
	struct fuse_read_in *inarg = &req->misc.read.in;
	struct fuse_file *ff = file->private_data;

	inarg->fh = ff->fh;
	inarg->offset = pos;
	inarg->size = count;
	inarg->flags = file->f_flags;
	req->in.h.opcode = opcode;
	req->in.h.nodeid = ff->nodeid;
	req->in.numargs = 1;
	req->in.args[0].size = sizeof(struct fuse_read_in);
	req->in.args[0].value = inarg;
	req->out.argvar = 1;
	req->out.numargs = 1;
	req->out.args[0].size = count;
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
          int pos = 100;
          unsigned long count = 100;
          int opcode = 100;
          int _len_req0 = 1;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.argvar = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_13__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_11__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_read_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_read_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct fuse_file *) malloc(_len_file__i0__private_data0*sizeof(struct fuse_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_read_fill(req,file,pos,count,opcode);
          free(req);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pos = 255;
          unsigned long count = 255;
          int opcode = 255;
          int _len_req0 = 65025;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.argvar = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_13__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_11__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_read_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_read_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct fuse_file *) malloc(_len_file__i0__private_data0*sizeof(struct fuse_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_read_fill(req,file,pos,count,opcode);
          free(req);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pos = 10;
          unsigned long count = 10;
          int opcode = 10;
          int _len_req0 = 100;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.argvar = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_13__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_11__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_read_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_read_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.read.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct fuse_file *) malloc(_len_file__i0__private_data0*sizeof(struct fuse_file));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fuse_read_fill(req,file,pos,count,opcode);
          free(req);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

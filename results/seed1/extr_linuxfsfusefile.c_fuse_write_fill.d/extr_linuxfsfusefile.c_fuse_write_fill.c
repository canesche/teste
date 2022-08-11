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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct fuse_write_out {int dummy; } ;
struct fuse_write_in {size_t size; int /*<<< orphan*/  offset; int /*<<< orphan*/  fh; } ;
struct TYPE_16__ {int numargs; TYPE_7__* args; } ;
struct TYPE_11__ {int /*<<< orphan*/  nodeid; int /*<<< orphan*/  opcode; } ;
struct TYPE_14__ {int numargs; TYPE_5__* args; TYPE_3__ h; } ;
struct TYPE_9__ {struct fuse_write_out out; struct fuse_write_in in; } ;
struct TYPE_10__ {TYPE_1__ write; } ;
struct fuse_req {TYPE_8__ out; TYPE_6__ in; TYPE_2__ misc; } ;
struct fuse_file {TYPE_4__* fc; int /*<<< orphan*/  nodeid; int /*<<< orphan*/  fh; } ;
typedef  int /*<<< orphan*/  loff_t ;
struct TYPE_15__ {int size; struct fuse_write_out* value; } ;
struct TYPE_13__ {int size; struct fuse_write_in* value; } ;
struct TYPE_12__ {int minor; } ;

/* Variables and functions */
 int FUSE_COMPAT_WRITE_IN_SIZE ; 
 int /*<<< orphan*/  FUSE_WRITE ; 

__attribute__((used)) static void fuse_write_fill(struct fuse_req *req, struct fuse_file *ff,
			    loff_t pos, size_t count)
{
	struct fuse_write_in *inarg = &req->misc.write.in;
	struct fuse_write_out *outarg = &req->misc.write.out;

	inarg->fh = ff->fh;
	inarg->offset = pos;
	inarg->size = count;
	req->in.h.opcode = FUSE_WRITE;
	req->in.h.nodeid = ff->nodeid;
	req->in.numargs = 2;
	if (ff->fc->minor < 9)
		req->in.args[0].size = FUSE_COMPAT_WRITE_IN_SIZE;
	else
		req->in.args[0].size = sizeof(struct fuse_write_in);
	req->in.args[0].value = inarg;
	req->in.args[1].size = count;
	req->out.numargs = 1;
	req->out.args[0].size = sizeof(struct fuse_write_out);
	req->out.args[0].value = outarg;
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
          int _len_req0 = 1;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_15__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args_value0 = 1;
          req[_i0].out.args->value = (struct fuse_write_out *) malloc(_len_req__i0__out_args_value0*sizeof(struct fuse_write_out));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args_value0; _j0++) {
            req[_i0].out.args->value->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_13__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_write_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_write_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff0 = 1;
          struct fuse_file * ff = (struct fuse_file *) malloc(_len_ff0*sizeof(struct fuse_file));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              int _len_ff__i0__fc0 = 1;
          ff[_i0].fc = (struct TYPE_12__ *) malloc(_len_ff__i0__fc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ff__i0__fc0; _j0++) {
            ff[_i0].fc->minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ff[_i0].nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        ff[_i0].fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_write_fill(req,ff,pos,count);
          free(req);
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(ff[_aux].fc);
          }
          free(ff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pos = 255;
          unsigned long count = 255;
          int _len_req0 = 65025;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_15__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args_value0 = 1;
          req[_i0].out.args->value = (struct fuse_write_out *) malloc(_len_req__i0__out_args_value0*sizeof(struct fuse_write_out));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args_value0; _j0++) {
            req[_i0].out.args->value->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_13__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_write_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_write_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff0 = 65025;
          struct fuse_file * ff = (struct fuse_file *) malloc(_len_ff0*sizeof(struct fuse_file));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              int _len_ff__i0__fc0 = 1;
          ff[_i0].fc = (struct TYPE_12__ *) malloc(_len_ff__i0__fc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ff__i0__fc0; _j0++) {
            ff[_i0].fc->minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ff[_i0].nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        ff[_i0].fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_write_fill(req,ff,pos,count);
          free(req);
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(ff[_aux].fc);
          }
          free(ff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pos = 10;
          unsigned long count = 10;
          int _len_req0 = 100;
          struct fuse_req * req = (struct fuse_req *) malloc(_len_req0*sizeof(struct fuse_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].out.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args0 = 1;
          req[_i0].out.args = (struct TYPE_15__ *) malloc(_len_req__i0__out_args0*sizeof(struct TYPE_15__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args0; _j0++) {
            req[_i0].out.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__out_args_value0 = 1;
          req[_i0].out.args->value = (struct fuse_write_out *) malloc(_len_req__i0__out_args_value0*sizeof(struct fuse_write_out));
          for(int _j0 = 0; _j0 < _len_req__i0__out_args_value0; _j0++) {
            req[_i0].out.args->value->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.numargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args0 = 1;
          req[_i0].in.args = (struct TYPE_13__ *) malloc(_len_req__i0__in_args0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args0; _j0++) {
            req[_i0].in.args->size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__in_args_value0 = 1;
          req[_i0].in.args->value = (struct fuse_write_in *) malloc(_len_req__i0__in_args_value0*sizeof(struct fuse_write_in));
          for(int _j0 = 0; _j0 < _len_req__i0__in_args_value0; _j0++) {
            req[_i0].in.args->value->size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.args->value->fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        req[_i0].in.h.nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].in.h.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.size = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].misc.write.in.fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff0 = 100;
          struct fuse_file * ff = (struct fuse_file *) malloc(_len_ff0*sizeof(struct fuse_file));
          for(int _i0 = 0; _i0 < _len_ff0; _i0++) {
              int _len_ff__i0__fc0 = 1;
          ff[_i0].fc = (struct TYPE_12__ *) malloc(_len_ff__i0__fc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_ff__i0__fc0; _j0++) {
            ff[_i0].fc->minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ff[_i0].nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
        ff[_i0].fh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_write_fill(req,ff,pos,count);
          free(req);
          for(int _aux = 0; _aux < _len_ff0; _aux++) {
          free(ff[_aux].fc);
          }
          free(ff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {int /*<<< orphan*/  fd; int /*<<< orphan*/ * file; } ;
struct ubd {int /*<<< orphan*/  fd; TYPE_1__ cow; } ;
struct request {struct gendisk* rq_disk; } ;
struct io_thread_req {int /*<<< orphan*/  op; int /*<<< orphan*/ * fds; struct request* req; } ;
struct gendisk {struct ubd* private_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  UBD_FLUSH ; 

__attribute__((used)) static void prepare_flush_request(struct request *req,
				  struct io_thread_req *io_req)
{
	struct gendisk *disk = req->rq_disk;
	struct ubd *ubd_dev = disk->private_data;

	io_req->req = req;
	io_req->fds[0] = (ubd_dev->cow.file != NULL) ? ubd_dev->cow.fd :
		ubd_dev->fd;
	io_req->op = UBD_FLUSH;
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
          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__rq_disk0 = 1;
          req[_i0].rq_disk = (struct gendisk *) malloc(_len_req__i0__rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk0; _j0++) {
              int _len_req__i0__rq_disk_private_data0 = 1;
          req[_i0].rq_disk->private_data = (struct ubd *) malloc(_len_req__i0__rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data0; _j0++) {
            req[_i0].rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_disk_private_data_cow_file0 = 1;
          req[_i0].rq_disk->private_data->cow.file = (int *) malloc(_len_req__i0__rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data_cow_file0; _j0++) {
            req[_i0].rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_io_req0 = 1;
          struct io_thread_req * io_req = (struct io_thread_req *) malloc(_len_io_req0*sizeof(struct io_thread_req));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
            io_req[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__fds0 = 1;
          io_req[_i0].fds = (int *) malloc(_len_io_req__i0__fds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__fds0; _j0++) {
            io_req[_i0].fds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io_req__i0__req0 = 1;
          io_req[_i0].req = (struct request *) malloc(_len_io_req__i0__req0*sizeof(struct request));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req0; _j0++) {
              int _len_io_req__i0__req_rq_disk0 = 1;
          io_req[_i0].req->rq_disk = (struct gendisk *) malloc(_len_io_req__i0__req_rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk0; _j0++) {
              int _len_io_req__i0__req_rq_disk_private_data0 = 1;
          io_req[_i0].req->rq_disk->private_data = (struct ubd *) malloc(_len_io_req__i0__req_rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].req->rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__req_rq_disk_private_data_cow_file0 = 1;
          io_req[_i0].req->rq_disk->private_data->cow.file = (int *) malloc(_len_io_req__i0__req_rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data_cow_file0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          prepare_flush_request(req,io_req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_disk);
          }
          free(req);
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].req);
          }
          free(io_req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__rq_disk0 = 1;
          req[_i0].rq_disk = (struct gendisk *) malloc(_len_req__i0__rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk0; _j0++) {
              int _len_req__i0__rq_disk_private_data0 = 1;
          req[_i0].rq_disk->private_data = (struct ubd *) malloc(_len_req__i0__rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data0; _j0++) {
            req[_i0].rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_disk_private_data_cow_file0 = 1;
          req[_i0].rq_disk->private_data->cow.file = (int *) malloc(_len_req__i0__rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data_cow_file0; _j0++) {
            req[_i0].rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_io_req0 = 65025;
          struct io_thread_req * io_req = (struct io_thread_req *) malloc(_len_io_req0*sizeof(struct io_thread_req));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
            io_req[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__fds0 = 1;
          io_req[_i0].fds = (int *) malloc(_len_io_req__i0__fds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__fds0; _j0++) {
            io_req[_i0].fds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io_req__i0__req0 = 1;
          io_req[_i0].req = (struct request *) malloc(_len_io_req__i0__req0*sizeof(struct request));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req0; _j0++) {
              int _len_io_req__i0__req_rq_disk0 = 1;
          io_req[_i0].req->rq_disk = (struct gendisk *) malloc(_len_io_req__i0__req_rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk0; _j0++) {
              int _len_io_req__i0__req_rq_disk_private_data0 = 1;
          io_req[_i0].req->rq_disk->private_data = (struct ubd *) malloc(_len_io_req__i0__req_rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].req->rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__req_rq_disk_private_data_cow_file0 = 1;
          io_req[_i0].req->rq_disk->private_data->cow.file = (int *) malloc(_len_io_req__i0__req_rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data_cow_file0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          prepare_flush_request(req,io_req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_disk);
          }
          free(req);
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].req);
          }
          free(io_req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__rq_disk0 = 1;
          req[_i0].rq_disk = (struct gendisk *) malloc(_len_req__i0__rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk0; _j0++) {
              int _len_req__i0__rq_disk_private_data0 = 1;
          req[_i0].rq_disk->private_data = (struct ubd *) malloc(_len_req__i0__rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data0; _j0++) {
            req[_i0].rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_req__i0__rq_disk_private_data_cow_file0 = 1;
          req[_i0].rq_disk->private_data->cow.file = (int *) malloc(_len_req__i0__rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__rq_disk_private_data_cow_file0; _j0++) {
            req[_i0].rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_io_req0 = 100;
          struct io_thread_req * io_req = (struct io_thread_req *) malloc(_len_io_req0*sizeof(struct io_thread_req));
          for(int _i0 = 0; _i0 < _len_io_req0; _i0++) {
            io_req[_i0].op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__fds0 = 1;
          io_req[_i0].fds = (int *) malloc(_len_io_req__i0__fds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__fds0; _j0++) {
            io_req[_i0].fds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io_req__i0__req0 = 1;
          io_req[_i0].req = (struct request *) malloc(_len_io_req__i0__req0*sizeof(struct request));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req0; _j0++) {
              int _len_io_req__i0__req_rq_disk0 = 1;
          io_req[_i0].req->rq_disk = (struct gendisk *) malloc(_len_io_req__i0__req_rq_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk0; _j0++) {
              int _len_io_req__i0__req_rq_disk_private_data0 = 1;
          io_req[_i0].req->rq_disk->private_data = (struct ubd *) malloc(_len_io_req__i0__req_rq_disk_private_data0*sizeof(struct ubd));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        io_req[_i0].req->rq_disk->private_data->cow.fd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_io_req__i0__req_rq_disk_private_data_cow_file0 = 1;
          io_req[_i0].req->rq_disk->private_data->cow.file = (int *) malloc(_len_io_req__i0__req_rq_disk_private_data_cow_file0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_io_req__i0__req_rq_disk_private_data_cow_file0; _j0++) {
            io_req[_i0].req->rq_disk->private_data->cow.file[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          prepare_flush_request(req,io_req);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].rq_disk);
          }
          free(req);
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_io_req0; _aux++) {
          free(io_req[_aux].req);
          }
          free(io_req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

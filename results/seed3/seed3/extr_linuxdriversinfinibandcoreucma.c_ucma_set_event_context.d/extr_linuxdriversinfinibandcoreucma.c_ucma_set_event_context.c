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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct ucma_multicast {int /*<<< orphan*/  id; int /*<<< orphan*/  uid; } ;
struct TYPE_6__ {int /*<<< orphan*/  id; int /*<<< orphan*/  uid; } ;
struct ucma_event {TYPE_3__ resp; struct ucma_multicast* mc; struct ucma_context* ctx; } ;
struct ucma_context {int /*<<< orphan*/  id; int /*<<< orphan*/  uid; } ;
struct TYPE_4__ {scalar_t__ private_data; } ;
struct TYPE_5__ {TYPE_1__ ud; } ;
struct rdma_cm_event {int event; TYPE_2__ param; } ;

/* Variables and functions */
#define  RDMA_CM_EVENT_MULTICAST_ERROR 129 
#define  RDMA_CM_EVENT_MULTICAST_JOIN 128 

__attribute__((used)) static void ucma_set_event_context(struct ucma_context *ctx,
				   struct rdma_cm_event *event,
				   struct ucma_event *uevent)
{
	uevent->ctx = ctx;
	switch (event->event) {
	case RDMA_CM_EVENT_MULTICAST_JOIN:
	case RDMA_CM_EVENT_MULTICAST_ERROR:
		uevent->mc = (struct ucma_multicast *)
			     event->param.ud.private_data;
		uevent->resp.uid = uevent->mc->uid;
		uevent->resp.id = uevent->mc->id;
		break;
	default:
		uevent->resp.uid = ctx->uid;
		uevent->resp.id = ctx->id;
		break;
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
          int _len_ctx0 = 1;
          struct ucma_context * ctx = (struct ucma_context *) malloc(_len_ctx0*sizeof(struct ucma_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          struct rdma_cm_event * event = (struct rdma_cm_event *) malloc(_len_event0*sizeof(struct rdma_cm_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].param.ud.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent0 = 1;
          struct ucma_event * uevent = (struct ucma_event *) malloc(_len_uevent0*sizeof(struct ucma_event));
          for(int _i0 = 0; _i0 < _len_uevent0; _i0++) {
            uevent[_i0].resp.id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].resp.uid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_uevent__i0__mc0 = 1;
          uevent[_i0].mc = (struct ucma_multicast *) malloc(_len_uevent__i0__mc0*sizeof(struct ucma_multicast));
          for(int _j0 = 0; _j0 < _len_uevent__i0__mc0; _j0++) {
            uevent[_i0].mc->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].mc->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent__i0__ctx0 = 1;
          uevent[_i0].ctx = (struct ucma_context *) malloc(_len_uevent__i0__ctx0*sizeof(struct ucma_context));
          for(int _j0 = 0; _j0 < _len_uevent__i0__ctx0; _j0++) {
            uevent[_i0].ctx->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].ctx->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ucma_set_event_context(ctx,event,uevent);
          free(ctx);
          free(event);
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].mc);
          }
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].ctx);
          }
          free(uevent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct ucma_context * ctx = (struct ucma_context *) malloc(_len_ctx0*sizeof(struct ucma_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 65025;
          struct rdma_cm_event * event = (struct rdma_cm_event *) malloc(_len_event0*sizeof(struct rdma_cm_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].param.ud.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent0 = 65025;
          struct ucma_event * uevent = (struct ucma_event *) malloc(_len_uevent0*sizeof(struct ucma_event));
          for(int _i0 = 0; _i0 < _len_uevent0; _i0++) {
            uevent[_i0].resp.id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].resp.uid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_uevent__i0__mc0 = 1;
          uevent[_i0].mc = (struct ucma_multicast *) malloc(_len_uevent__i0__mc0*sizeof(struct ucma_multicast));
          for(int _j0 = 0; _j0 < _len_uevent__i0__mc0; _j0++) {
            uevent[_i0].mc->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].mc->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent__i0__ctx0 = 1;
          uevent[_i0].ctx = (struct ucma_context *) malloc(_len_uevent__i0__ctx0*sizeof(struct ucma_context));
          for(int _j0 = 0; _j0 < _len_uevent__i0__ctx0; _j0++) {
            uevent[_i0].ctx->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].ctx->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ucma_set_event_context(ctx,event,uevent);
          free(ctx);
          free(event);
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].mc);
          }
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].ctx);
          }
          free(uevent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct ucma_context * ctx = (struct ucma_context *) malloc(_len_ctx0*sizeof(struct ucma_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 100;
          struct rdma_cm_event * event = (struct rdma_cm_event *) malloc(_len_event0*sizeof(struct rdma_cm_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].param.ud.private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent0 = 100;
          struct ucma_event * uevent = (struct ucma_event *) malloc(_len_uevent0*sizeof(struct ucma_event));
          for(int _i0 = 0; _i0 < _len_uevent0; _i0++) {
            uevent[_i0].resp.id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].resp.uid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_uevent__i0__mc0 = 1;
          uevent[_i0].mc = (struct ucma_multicast *) malloc(_len_uevent__i0__mc0*sizeof(struct ucma_multicast));
          for(int _j0 = 0; _j0 < _len_uevent__i0__mc0; _j0++) {
            uevent[_i0].mc->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].mc->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uevent__i0__ctx0 = 1;
          uevent[_i0].ctx = (struct ucma_context *) malloc(_len_uevent__i0__ctx0*sizeof(struct ucma_context));
          for(int _j0 = 0; _j0 < _len_uevent__i0__ctx0; _j0++) {
            uevent[_i0].ctx->id = ((-2 * (next_i()%2)) + 1) * next_i();
        uevent[_i0].ctx->uid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ucma_set_event_context(ctx,event,uevent);
          free(ctx);
          free(event);
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].mc);
          }
          for(int _aux = 0; _aux < _len_uevent0; _aux++) {
          free(uevent[_aux].ctx);
          }
          free(uevent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
typedef  int /*<<< orphan*/  u8 ;
typedef  int u16 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {int /*<<< orphan*/ * req_frames_desc; } ;

/* Variables and functions */

__attribute__((used)) static union MEGASAS_REQUEST_DESCRIPTOR_UNION *
megasas_get_request_descriptor(struct megasas_instance *instance, u16 index)
{
	u8 *p;
	struct fusion_context *fusion;

	fusion = instance->ctrl_context;
	p = fusion->req_frames_desc +
		sizeof(union MEGASAS_REQUEST_DESCRIPTOR_UNION) * index;

	return (union MEGASAS_REQUEST_DESCRIPTOR_UNION *)p;
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
          int index = 100;
          int _len_instance0 = 1;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_req_frames_desc0 = 1;
          instance[_i0].ctrl_context->req_frames_desc = (int *) malloc(_len_instance__i0__ctrl_context_req_frames_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_req_frames_desc0; _j0++) {
            instance[_i0].ctrl_context->req_frames_desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          union MEGASAS_REQUEST_DESCRIPTOR_UNION * benchRet = megasas_get_request_descriptor(instance,index);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_instance0 = 65025;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_req_frames_desc0 = 1;
          instance[_i0].ctrl_context->req_frames_desc = (int *) malloc(_len_instance__i0__ctrl_context_req_frames_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_req_frames_desc0; _j0++) {
            instance[_i0].ctrl_context->req_frames_desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          union MEGASAS_REQUEST_DESCRIPTOR_UNION * benchRet = megasas_get_request_descriptor(instance,index);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_instance0 = 100;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__ctrl_context0 = 1;
          instance[_i0].ctrl_context = (struct fusion_context *) malloc(_len_instance__i0__ctrl_context0*sizeof(struct fusion_context));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context0; _j0++) {
              int _len_instance__i0__ctrl_context_req_frames_desc0 = 1;
          instance[_i0].ctrl_context->req_frames_desc = (int *) malloc(_len_instance__i0__ctrl_context_req_frames_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_instance__i0__ctrl_context_req_frames_desc0; _j0++) {
            instance[_i0].ctrl_context->req_frames_desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          union MEGASAS_REQUEST_DESCRIPTOR_UNION * benchRet = megasas_get_request_descriptor(instance,index);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].ctrl_context);
          }
          free(instance);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

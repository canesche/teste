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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
struct TYPE_4__ {int /*<<< orphan*/  entry_type; } ;
typedef  TYPE_1__ cont_a64_entry_t ;

/* Variables and functions */
 int /*<<< orphan*/  CONTINUE_A64_TYPE_FX00 ; 

__attribute__((used)) static inline cont_a64_entry_t *
qlafx00_prep_cont_type1_iocb(struct req_que *req,
			     cont_a64_entry_t *lcont_pkt)
{
	cont_a64_entry_t *cont_pkt;

	/* Adjust ring index. */
	req->ring_index++;
	if (req->ring_index == req->length) {
		req->ring_index = 0;
		req->ring_ptr = req->ring;
	} else {
		req->ring_ptr++;
	}

	cont_pkt = (cont_a64_entry_t *)req->ring_ptr;

	/* Load packet defaults. */
	lcont_pkt->entry_type = CONTINUE_A64_TYPE_FX00;

	return cont_pkt;
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
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lcont_pkt0 = 1;
          struct TYPE_4__ * lcont_pkt = (struct TYPE_4__ *) malloc(_len_lcont_pkt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lcont_pkt0; _i0++) {
            lcont_pkt[_i0].entry_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = qlafx00_prep_cont_type1_iocb(req,lcont_pkt);
          printf("%d\n", (*benchRet).entry_type);
          free(req);
          free(lcont_pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lcont_pkt0 = 65025;
          struct TYPE_4__ * lcont_pkt = (struct TYPE_4__ *) malloc(_len_lcont_pkt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lcont_pkt0; _i0++) {
            lcont_pkt[_i0].entry_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = qlafx00_prep_cont_type1_iocb(req,lcont_pkt);
          printf("%d\n", (*benchRet).entry_type);
          free(req);
          free(lcont_pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct req_que * req = (struct req_que *) malloc(_len_req0*sizeof(struct req_que));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].ring_index = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lcont_pkt0 = 100;
          struct TYPE_4__ * lcont_pkt = (struct TYPE_4__ *) malloc(_len_lcont_pkt0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lcont_pkt0; _i0++) {
            lcont_pkt[_i0].entry_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = qlafx00_prep_cont_type1_iocb(req,lcont_pkt);
          printf("%d\n", (*benchRet).entry_type);
          free(req);
          free(lcont_pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

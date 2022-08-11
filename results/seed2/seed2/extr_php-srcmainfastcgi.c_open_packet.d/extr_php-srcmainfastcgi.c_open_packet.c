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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  fcgi_request_type ;
struct TYPE_5__ {TYPE_2__* out_hdr; scalar_t__ out_pos; } ;
typedef  TYPE_1__ fcgi_request ;
struct TYPE_6__ {int /*<<< orphan*/  type; } ;
typedef  TYPE_2__ fcgi_header ;

/* Variables and functions */

__attribute__((used)) static inline fcgi_header* open_packet(fcgi_request *req, fcgi_request_type type)
{
	req->out_hdr = (fcgi_header*) req->out_pos;
	req->out_hdr->type = type;
	req->out_pos += sizeof(fcgi_header);
	return req->out_hdr;
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
          int type = 100;
          int _len_req0 = 1;
          struct TYPE_5__ * req = (struct TYPE_5__ *) malloc(_len_req0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__out_hdr0 = 1;
          req[_i0].out_hdr = (struct TYPE_6__ *) malloc(_len_req__i0__out_hdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_hdr0; _j0++) {
            req[_i0].out_hdr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = open_packet(req,type);
          printf("%d\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].out_hdr);
          }
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_req0 = 65025;
          struct TYPE_5__ * req = (struct TYPE_5__ *) malloc(_len_req0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__out_hdr0 = 1;
          req[_i0].out_hdr = (struct TYPE_6__ *) malloc(_len_req__i0__out_hdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_hdr0; _j0++) {
            req[_i0].out_hdr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = open_packet(req,type);
          printf("%d\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].out_hdr);
          }
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_req0 = 100;
          struct TYPE_5__ * req = (struct TYPE_5__ *) malloc(_len_req0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__out_hdr0 = 1;
          req[_i0].out_hdr = (struct TYPE_6__ *) malloc(_len_req__i0__out_hdr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_req__i0__out_hdr0; _j0++) {
            req[_i0].out_hdr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        req[_i0].out_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = open_packet(req,type);
          printf("%d\n", (*benchRet).type);
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].out_hdr);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

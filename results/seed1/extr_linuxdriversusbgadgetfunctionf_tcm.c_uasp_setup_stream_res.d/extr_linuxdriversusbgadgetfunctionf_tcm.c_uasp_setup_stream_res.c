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
struct uas_stream {TYPE_1__* req_status; TYPE_3__* req_out; TYPE_2__* req_in; } ;
struct f_uas {struct uas_stream* stream; } ;
struct TYPE_6__ {int stream_id; } ;
struct TYPE_5__ {int stream_id; } ;
struct TYPE_4__ {int stream_id; } ;

/* Variables and functions */

__attribute__((used)) static void uasp_setup_stream_res(struct f_uas *fu, int max_streams)
{
	int i;

	for (i = 0; i < max_streams; i++) {
		struct uas_stream *s = &fu->stream[i];

		s->req_in->stream_id = i + 1;
		s->req_out->stream_id = i + 1;
		s->req_status->stream_id = i + 1;
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
          int max_streams = 100;
          int _len_fu0 = 1;
          struct f_uas * fu = (struct f_uas *) malloc(_len_fu0*sizeof(struct f_uas));
          for(int _i0 = 0; _i0 < _len_fu0; _i0++) {
              int _len_fu__i0__stream0 = 1;
          fu[_i0].stream = (struct uas_stream *) malloc(_len_fu__i0__stream0*sizeof(struct uas_stream));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream0; _j0++) {
              int _len_fu__i0__stream_req_status0 = 1;
          fu[_i0].stream->req_status = (struct TYPE_4__ *) malloc(_len_fu__i0__stream_req_status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_status0; _j0++) {
            fu[_i0].stream->req_status->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_out0 = 1;
          fu[_i0].stream->req_out = (struct TYPE_6__ *) malloc(_len_fu__i0__stream_req_out0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_out0; _j0++) {
            fu[_i0].stream->req_out->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_in0 = 1;
          fu[_i0].stream->req_in = (struct TYPE_5__ *) malloc(_len_fu__i0__stream_req_in0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_in0; _j0++) {
            fu[_i0].stream->req_in->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          uasp_setup_stream_res(fu,max_streams);
          for(int _aux = 0; _aux < _len_fu0; _aux++) {
          free(fu[_aux].stream);
          }
          free(fu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int max_streams = 255;
          int _len_fu0 = 65025;
          struct f_uas * fu = (struct f_uas *) malloc(_len_fu0*sizeof(struct f_uas));
          for(int _i0 = 0; _i0 < _len_fu0; _i0++) {
              int _len_fu__i0__stream0 = 1;
          fu[_i0].stream = (struct uas_stream *) malloc(_len_fu__i0__stream0*sizeof(struct uas_stream));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream0; _j0++) {
              int _len_fu__i0__stream_req_status0 = 1;
          fu[_i0].stream->req_status = (struct TYPE_4__ *) malloc(_len_fu__i0__stream_req_status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_status0; _j0++) {
            fu[_i0].stream->req_status->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_out0 = 1;
          fu[_i0].stream->req_out = (struct TYPE_6__ *) malloc(_len_fu__i0__stream_req_out0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_out0; _j0++) {
            fu[_i0].stream->req_out->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_in0 = 1;
          fu[_i0].stream->req_in = (struct TYPE_5__ *) malloc(_len_fu__i0__stream_req_in0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_in0; _j0++) {
            fu[_i0].stream->req_in->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          uasp_setup_stream_res(fu,max_streams);
          for(int _aux = 0; _aux < _len_fu0; _aux++) {
          free(fu[_aux].stream);
          }
          free(fu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max_streams = 10;
          int _len_fu0 = 100;
          struct f_uas * fu = (struct f_uas *) malloc(_len_fu0*sizeof(struct f_uas));
          for(int _i0 = 0; _i0 < _len_fu0; _i0++) {
              int _len_fu__i0__stream0 = 1;
          fu[_i0].stream = (struct uas_stream *) malloc(_len_fu__i0__stream0*sizeof(struct uas_stream));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream0; _j0++) {
              int _len_fu__i0__stream_req_status0 = 1;
          fu[_i0].stream->req_status = (struct TYPE_4__ *) malloc(_len_fu__i0__stream_req_status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_status0; _j0++) {
            fu[_i0].stream->req_status->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_out0 = 1;
          fu[_i0].stream->req_out = (struct TYPE_6__ *) malloc(_len_fu__i0__stream_req_out0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_out0; _j0++) {
            fu[_i0].stream->req_out->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fu__i0__stream_req_in0 = 1;
          fu[_i0].stream->req_in = (struct TYPE_5__ *) malloc(_len_fu__i0__stream_req_in0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fu__i0__stream_req_in0; _j0++) {
            fu[_i0].stream->req_in->stream_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          uasp_setup_stream_res(fu,max_streams);
          for(int _aux = 0; _aux < _len_fu0; _aux++) {
          free(fu[_aux].stream);
          }
          free(fu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

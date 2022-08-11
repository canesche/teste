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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct mp_decode {TYPE_1__* stream; } ;
struct TYPE_7__ {struct mp_decode v; scalar_t__ has_video; struct mp_decode a; scalar_t__ has_audio; } ;
typedef  TYPE_2__ mp_media_t ;
struct TYPE_8__ {scalar_t__ stream_index; } ;
struct TYPE_6__ {scalar_t__ index; } ;
typedef  TYPE_3__ AVPacket ;

/* Variables and functions */

__attribute__((used)) static inline struct mp_decode *get_packet_decoder(mp_media_t *media,
		AVPacket *pkt)
{
	if (media->has_audio && pkt->stream_index == media->a.stream->index)
		return &media->a;
	if (media->has_video && pkt->stream_index == media->v.stream->index)
		return &media->v;

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
          int _len_media0 = 1;
          struct TYPE_7__ * media = (struct TYPE_7__ *) malloc(_len_media0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_media0; _i0++) {
              int _len_media__i0__v_stream0 = 1;
          media[_i0].v.stream = (struct TYPE_6__ *) malloc(_len_media__i0__v_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__v_stream0; _j0++) {
            media[_i0].v.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_video = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_media__i0__a_stream0 = 1;
          media[_i0].a.stream = (struct TYPE_6__ *) malloc(_len_media__i0__a_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__a_stream0; _j0++) {
            media[_i0].a.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_audio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct TYPE_8__ * pkt = (struct TYPE_8__ *) malloc(_len_pkt0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_decode * benchRet = get_packet_decoder(media,pkt);
          free(media);
          free(pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_media0 = 65025;
          struct TYPE_7__ * media = (struct TYPE_7__ *) malloc(_len_media0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_media0; _i0++) {
              int _len_media__i0__v_stream0 = 1;
          media[_i0].v.stream = (struct TYPE_6__ *) malloc(_len_media__i0__v_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__v_stream0; _j0++) {
            media[_i0].v.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_video = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_media__i0__a_stream0 = 1;
          media[_i0].a.stream = (struct TYPE_6__ *) malloc(_len_media__i0__a_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__a_stream0; _j0++) {
            media[_i0].a.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_audio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 65025;
          struct TYPE_8__ * pkt = (struct TYPE_8__ *) malloc(_len_pkt0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_decode * benchRet = get_packet_decoder(media,pkt);
          free(media);
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_media0 = 100;
          struct TYPE_7__ * media = (struct TYPE_7__ *) malloc(_len_media0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_media0; _i0++) {
              int _len_media__i0__v_stream0 = 1;
          media[_i0].v.stream = (struct TYPE_6__ *) malloc(_len_media__i0__v_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__v_stream0; _j0++) {
            media[_i0].v.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_video = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_media__i0__a_stream0 = 1;
          media[_i0].a.stream = (struct TYPE_6__ *) malloc(_len_media__i0__a_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_media__i0__a_stream0; _j0++) {
            media[_i0].a.stream->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        media[_i0].has_audio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 100;
          struct TYPE_8__ * pkt = (struct TYPE_8__ *) malloc(_len_pkt0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_decode * benchRet = get_packet_decoder(media,pkt);
          free(media);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

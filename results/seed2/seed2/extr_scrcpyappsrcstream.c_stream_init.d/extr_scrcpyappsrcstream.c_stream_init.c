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
struct stream {struct recorder* recorder; struct decoder* decoder; int /*<<< orphan*/  socket; } ;
struct recorder {int dummy; } ;
struct decoder {int dummy; } ;
typedef  int /*<<< orphan*/  socket_t ;

/* Variables and functions */

void
stream_init(struct stream *stream, socket_t socket,
            struct decoder *decoder, struct recorder *recorder) {
    stream->socket = socket;
    stream->decoder = decoder,
    stream->recorder = recorder;
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
          int socket = 100;
          int _len_stream0 = 1;
          struct stream * stream = (struct stream *) malloc(_len_stream0*sizeof(struct stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__recorder0 = 1;
          stream[_i0].recorder = (struct recorder *) malloc(_len_stream__i0__recorder0*sizeof(struct recorder));
          for(int _j0 = 0; _j0 < _len_stream__i0__recorder0; _j0++) {
            stream[_i0].recorder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream__i0__decoder0 = 1;
          stream[_i0].decoder = (struct decoder *) malloc(_len_stream__i0__decoder0*sizeof(struct decoder));
          for(int _j0 = 0; _j0 < _len_stream__i0__decoder0; _j0++) {
            stream[_i0].decoder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].socket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoder0 = 1;
          struct decoder * decoder = (struct decoder *) malloc(_len_decoder0*sizeof(struct decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recorder0 = 1;
          struct recorder * recorder = (struct recorder *) malloc(_len_recorder0*sizeof(struct recorder));
          for(int _i0 = 0; _i0 < _len_recorder0; _i0++) {
            recorder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_init(stream,socket,decoder,recorder);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].recorder);
          }
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].decoder);
          }
          free(stream);
          free(decoder);
          free(recorder);
        
        break;
    }
    // big-arr
    case 1:
    {
          int socket = 255;
          int _len_stream0 = 65025;
          struct stream * stream = (struct stream *) malloc(_len_stream0*sizeof(struct stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__recorder0 = 1;
          stream[_i0].recorder = (struct recorder *) malloc(_len_stream__i0__recorder0*sizeof(struct recorder));
          for(int _j0 = 0; _j0 < _len_stream__i0__recorder0; _j0++) {
            stream[_i0].recorder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream__i0__decoder0 = 1;
          stream[_i0].decoder = (struct decoder *) malloc(_len_stream__i0__decoder0*sizeof(struct decoder));
          for(int _j0 = 0; _j0 < _len_stream__i0__decoder0; _j0++) {
            stream[_i0].decoder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].socket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoder0 = 65025;
          struct decoder * decoder = (struct decoder *) malloc(_len_decoder0*sizeof(struct decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recorder0 = 65025;
          struct recorder * recorder = (struct recorder *) malloc(_len_recorder0*sizeof(struct recorder));
          for(int _i0 = 0; _i0 < _len_recorder0; _i0++) {
            recorder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_init(stream,socket,decoder,recorder);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].recorder);
          }
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].decoder);
          }
          free(stream);
          free(decoder);
          free(recorder);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int socket = 10;
          int _len_stream0 = 100;
          struct stream * stream = (struct stream *) malloc(_len_stream0*sizeof(struct stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__recorder0 = 1;
          stream[_i0].recorder = (struct recorder *) malloc(_len_stream__i0__recorder0*sizeof(struct recorder));
          for(int _j0 = 0; _j0 < _len_stream__i0__recorder0; _j0++) {
            stream[_i0].recorder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream__i0__decoder0 = 1;
          stream[_i0].decoder = (struct decoder *) malloc(_len_stream__i0__decoder0*sizeof(struct decoder));
          for(int _j0 = 0; _j0 < _len_stream__i0__decoder0; _j0++) {
            stream[_i0].decoder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        stream[_i0].socket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decoder0 = 100;
          struct decoder * decoder = (struct decoder *) malloc(_len_decoder0*sizeof(struct decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_recorder0 = 100;
          struct recorder * recorder = (struct recorder *) malloc(_len_recorder0*sizeof(struct recorder));
          for(int _i0 = 0; _i0 < _len_recorder0; _i0++) {
            recorder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stream_init(stream,socket,decoder,recorder);
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].recorder);
          }
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].decoder);
          }
          free(stream);
          free(decoder);
          free(recorder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

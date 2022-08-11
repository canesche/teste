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
struct snd_usb_substream {int interface; int /*<<< orphan*/ * sync_endpoint; int /*<<< orphan*/ * data_endpoint; int /*<<< orphan*/  num_formats; } ;
struct snd_usb_stream {struct snd_usb_substream* substream; } ;

/* Variables and functions */

__attribute__((used)) static void snd_usb_stream_disconnect(struct snd_usb_stream *as)
{
	int idx;
	struct snd_usb_substream *subs;

	for (idx = 0; idx < 2; idx++) {
		subs = &as->substream[idx];
		if (!subs->num_formats)
			continue;
		subs->interface = -1;
		subs->data_endpoint = NULL;
		subs->sync_endpoint = NULL;
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
          int _len_as0 = 1;
          struct snd_usb_stream * as = (struct snd_usb_stream *) malloc(_len_as0*sizeof(struct snd_usb_stream));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
              int _len_as__i0__substream0 = 1;
          as[_i0].substream = (struct snd_usb_substream *) malloc(_len_as__i0__substream0*sizeof(struct snd_usb_substream));
          for(int _j0 = 0; _j0 < _len_as__i0__substream0; _j0++) {
            as[_i0].substream->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__substream_sync_endpoint0 = 1;
          as[_i0].substream->sync_endpoint = (int *) malloc(_len_as__i0__substream_sync_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_sync_endpoint0; _j0++) {
            as[_i0].substream->sync_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_as__i0__substream_data_endpoint0 = 1;
          as[_i0].substream->data_endpoint = (int *) malloc(_len_as__i0__substream_data_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_data_endpoint0; _j0++) {
            as[_i0].substream->data_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        as[_i0].substream->num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          snd_usb_stream_disconnect(as);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].substream);
          }
          free(as);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_as0 = 65025;
          struct snd_usb_stream * as = (struct snd_usb_stream *) malloc(_len_as0*sizeof(struct snd_usb_stream));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
              int _len_as__i0__substream0 = 1;
          as[_i0].substream = (struct snd_usb_substream *) malloc(_len_as__i0__substream0*sizeof(struct snd_usb_substream));
          for(int _j0 = 0; _j0 < _len_as__i0__substream0; _j0++) {
            as[_i0].substream->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__substream_sync_endpoint0 = 1;
          as[_i0].substream->sync_endpoint = (int *) malloc(_len_as__i0__substream_sync_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_sync_endpoint0; _j0++) {
            as[_i0].substream->sync_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_as__i0__substream_data_endpoint0 = 1;
          as[_i0].substream->data_endpoint = (int *) malloc(_len_as__i0__substream_data_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_data_endpoint0; _j0++) {
            as[_i0].substream->data_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        as[_i0].substream->num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          snd_usb_stream_disconnect(as);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].substream);
          }
          free(as);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_as0 = 100;
          struct snd_usb_stream * as = (struct snd_usb_stream *) malloc(_len_as0*sizeof(struct snd_usb_stream));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
              int _len_as__i0__substream0 = 1;
          as[_i0].substream = (struct snd_usb_substream *) malloc(_len_as__i0__substream0*sizeof(struct snd_usb_substream));
          for(int _j0 = 0; _j0 < _len_as__i0__substream0; _j0++) {
            as[_i0].substream->interface = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__substream_sync_endpoint0 = 1;
          as[_i0].substream->sync_endpoint = (int *) malloc(_len_as__i0__substream_sync_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_sync_endpoint0; _j0++) {
            as[_i0].substream->sync_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_as__i0__substream_data_endpoint0 = 1;
          as[_i0].substream->data_endpoint = (int *) malloc(_len_as__i0__substream_data_endpoint0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_as__i0__substream_data_endpoint0; _j0++) {
            as[_i0].substream->data_endpoint[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        as[_i0].substream->num_formats = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          snd_usb_stream_disconnect(as);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].substream);
          }
          free(as);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

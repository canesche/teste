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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef  TYPE_2__ stream_t ;
struct TYPE_7__ {int nr_of_channels; TYPE_1__* audio_streams; } ;
typedef  TYPE_3__ dvd_priv_t ;
struct TYPE_5__ {int id; int language; } ;

/* Variables and functions */

__attribute__((used)) static int dvd_lang_from_aid(stream_t *stream, int id) {
  dvd_priv_t *d;
  int i;
  if (!stream) return 0;
  d = stream->priv;
  if (!d) return 0;
  for(i=0;i<d->nr_of_channels;i++) {
    if(d->audio_streams[i].id==id)
      return d->audio_streams[i].language;
  }
  return 0;
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
          int id = 100;
          int _len_stream0 = 1;
          struct TYPE_6__ * stream = (struct TYPE_6__ *) malloc(_len_stream0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__priv0 = 1;
          stream[_i0].priv = (struct TYPE_7__ *) malloc(_len_stream__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv0; _j0++) {
            stream[_i0].priv->nr_of_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__priv_audio_streams0 = 1;
          stream[_i0].priv->audio_streams = (struct TYPE_5__ *) malloc(_len_stream__i0__priv_audio_streams0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv_audio_streams0; _j0++) {
            stream[_i0].priv->audio_streams->id = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].priv->audio_streams->language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dvd_lang_from_aid(stream,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].priv);
          }
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_stream0 = 65025;
          struct TYPE_6__ * stream = (struct TYPE_6__ *) malloc(_len_stream0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__priv0 = 1;
          stream[_i0].priv = (struct TYPE_7__ *) malloc(_len_stream__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv0; _j0++) {
            stream[_i0].priv->nr_of_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__priv_audio_streams0 = 1;
          stream[_i0].priv->audio_streams = (struct TYPE_5__ *) malloc(_len_stream__i0__priv_audio_streams0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv_audio_streams0; _j0++) {
            stream[_i0].priv->audio_streams->id = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].priv->audio_streams->language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dvd_lang_from_aid(stream,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].priv);
          }
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_stream0 = 100;
          struct TYPE_6__ * stream = (struct TYPE_6__ *) malloc(_len_stream0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__priv0 = 1;
          stream[_i0].priv = (struct TYPE_7__ *) malloc(_len_stream__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv0; _j0++) {
            stream[_i0].priv->nr_of_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream__i0__priv_audio_streams0 = 1;
          stream[_i0].priv->audio_streams = (struct TYPE_5__ *) malloc(_len_stream__i0__priv_audio_streams0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__priv_audio_streams0; _j0++) {
            stream[_i0].priv->audio_streams->id = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].priv->audio_streams->language = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = dvd_lang_from_aid(stream,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].priv);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

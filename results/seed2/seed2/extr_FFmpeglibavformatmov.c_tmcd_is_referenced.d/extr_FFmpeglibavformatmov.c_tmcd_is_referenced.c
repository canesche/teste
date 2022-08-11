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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int timecode_track; } ;
struct TYPE_6__ {scalar_t__ codec_type; } ;
typedef  TYPE_2__ MOVStreamContext ;
typedef  TYPE_3__ AVStream ;
typedef  TYPE_4__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AVMEDIA_TYPE_VIDEO ; 

__attribute__((used)) static int tmcd_is_referenced(AVFormatContext *s, int tmcd_id)
{
    int i;

    for (i = 0; i < s->nb_streams; i++) {
        AVStream *st = s->streams[i];
        MOVStreamContext *sc = st->priv_data;

        if (st->codecpar->codec_type == AVMEDIA_TYPE_VIDEO &&
            sc->timecode_track == tmcd_id)
            return 1;
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
          int tmcd_id = 100;
          int _len_s0 = 1;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_6__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__streams__j0__priv_data0 = 1;
          s[_i0].streams[_j0]->priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__priv_data0; _j0++) {
            s[_i0].streams[_j0]->priv_data->timecode_track = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = tmcd_is_referenced(s,tmcd_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tmcd_id = 255;
          int _len_s0 = 65025;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_6__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__streams__j0__priv_data0 = 1;
          s[_i0].streams[_j0]->priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__priv_data0; _j0++) {
            s[_i0].streams[_j0]->priv_data->timecode_track = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = tmcd_is_referenced(s,tmcd_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tmcd_id = 10;
          int _len_s0 = 100;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_6__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__streams__j0__priv_data0 = 1;
          s[_i0].streams[_j0]->priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__priv_data0; _j0++) {
            s[_i0].streams[_j0]->priv_data->timecode_track = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = tmcd_is_referenced(s,tmcd_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_7__ {unsigned int id; scalar_t__ nb_stream_indexes; } ;
struct TYPE_6__ {TYPE_1__* stream; } ;
struct TYPE_5__ {int nb_programs; TYPE_3__** programs; } ;
typedef  TYPE_2__ MpegTSContext ;
typedef  TYPE_3__ AVProgram ;

/* Variables and functions */

__attribute__((used)) static void clear_avprogram(MpegTSContext *ts, unsigned int programid)
{
    AVProgram *prg = NULL;
    int i;

    for (i = 0; i < ts->stream->nb_programs; i++)
        if (ts->stream->programs[i]->id == programid) {
            prg = ts->stream->programs[i];
            break;
        }
    if (!prg)
        return;
    prg->nb_stream_indexes = 0;
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
          unsigned int programid = 100;
          int _len_ts0 = 1;
          struct TYPE_6__ * ts = (struct TYPE_6__ *) malloc(_len_ts0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
              int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_5__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_7__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_7__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          clear_avprogram(ts,programid);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          free(ts);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int programid = 255;
          int _len_ts0 = 65025;
          struct TYPE_6__ * ts = (struct TYPE_6__ *) malloc(_len_ts0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
              int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_5__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_7__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_7__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          clear_avprogram(ts,programid);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          free(ts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int programid = 10;
          int _len_ts0 = 100;
          struct TYPE_6__ * ts = (struct TYPE_6__ *) malloc(_len_ts0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
              int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_5__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_7__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_7__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          clear_avprogram(ts,programid);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          free(ts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

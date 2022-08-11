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
struct Program {int nb_pids; unsigned int* pids; scalar_t__ id; } ;
struct TYPE_7__ {int nb_prg; TYPE_2__* stream; struct Program* prg; } ;
struct TYPE_6__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_5__ {scalar_t__ discard; scalar_t__ id; } ;
typedef  TYPE_3__ MpegTSContext ;

/* Variables and functions */
 scalar_t__ AVDISCARD_ALL ; 

__attribute__((used)) static int discard_pid(MpegTSContext *ts, unsigned int pid)
{
    int i, j, k;
    int used = 0, discarded = 0;
    struct Program *p;

    /* If none of the programs have .discard=AVDISCARD_ALL then there's
     * no way we have to discard this packet */
    for (k = 0; k < ts->stream->nb_programs; k++)
        if (ts->stream->programs[k]->discard == AVDISCARD_ALL)
            break;
    if (k == ts->stream->nb_programs)
        return 0;

    for (i = 0; i < ts->nb_prg; i++) {
        p = &ts->prg[i];
        for (j = 0; j < p->nb_pids; j++) {
            if (p->pids[j] != pid)
                continue;
            // is program with id p->id set to be discarded?
            for (k = 0; k < ts->stream->nb_programs; k++) {
                if (ts->stream->programs[k]->id == p->id) {
                    if (ts->stream->programs[k]->discard == AVDISCARD_ALL)
                        discarded++;
                    else
                        used++;
                }
            }
        }
    }

    return !used && discarded;
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
          unsigned int pid = 100;
          int _len_ts0 = 1;
          struct TYPE_7__ * ts = (struct TYPE_7__ *) malloc(_len_ts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_6__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_5__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_5__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->nb_pids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg_pids0 = 1;
          ts[_i0].prg->pids = (unsigned int *) malloc(_len_ts__i0__prg_pids0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg_pids0; _j0++) {
            ts[_i0].prg->pids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = discard_pid(ts,pid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
          }
          free(ts);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pid = 255;
          int _len_ts0 = 65025;
          struct TYPE_7__ * ts = (struct TYPE_7__ *) malloc(_len_ts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_6__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_5__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_5__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->nb_pids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg_pids0 = 1;
          ts[_i0].prg->pids = (unsigned int *) malloc(_len_ts__i0__prg_pids0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg_pids0; _j0++) {
            ts[_i0].prg->pids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = discard_pid(ts,pid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
          }
          free(ts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pid = 10;
          int _len_ts0 = 100;
          struct TYPE_7__ * ts = (struct TYPE_7__ *) malloc(_len_ts0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream0 = 1;
          ts[_i0].stream = (struct TYPE_6__ *) malloc(_len_ts__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream0; _j0++) {
            ts[_i0].stream->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stream_programs0 = 1;
          ts[_i0].stream->programs = (struct TYPE_5__ **) malloc(_len_ts__i0__stream_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_ts__i0__stream_programs0; _j0++) {
            int _len_ts__i0__stream_programs1 = 1;
            ts[_i0].stream->programs[_j0] = (struct TYPE_5__ *) malloc(_len_ts__i0__stream_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_ts__i0__stream_programs1; _j1++) {
              ts[_i0].stream->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        ts[_i0].stream->programs[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->nb_pids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg_pids0 = 1;
          ts[_i0].prg->pids = (unsigned int *) malloc(_len_ts__i0__prg_pids0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg_pids0; _j0++) {
            ts[_i0].prg->pids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = discard_pid(ts,pid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
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

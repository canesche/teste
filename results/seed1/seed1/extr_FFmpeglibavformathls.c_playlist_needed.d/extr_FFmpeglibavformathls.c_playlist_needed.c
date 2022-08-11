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
struct playlist {int n_main_streams; TYPE_1__** main_streams; int /*<<< orphan*/  ctx; TYPE_3__* parent; } ;
struct TYPE_6__ {int nb_programs; TYPE_2__** programs; } ;
struct TYPE_5__ {scalar_t__ discard; int nb_stream_indexes; int* stream_index; } ;
struct TYPE_4__ {scalar_t__ discard; int index; } ;
typedef  TYPE_2__ AVProgram ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AVDISCARD_ALL ; 

__attribute__((used)) static int playlist_needed(struct playlist *pls)
{
    AVFormatContext *s = pls->parent;
    int i, j;
    int stream_needed = 0;
    int first_st;

    /* If there is no context or streams yet, the playlist is needed */
    if (!pls->ctx || !pls->n_main_streams)
        return 1;

    /* check if any of the streams in the playlist are needed */
    for (i = 0; i < pls->n_main_streams; i++) {
        if (pls->main_streams[i]->discard < AVDISCARD_ALL) {
            stream_needed = 1;
            break;
        }
    }

    /* If all streams in the playlist were discarded, the playlist is not
     * needed (regardless of whether whole programs are discarded or not). */
    if (!stream_needed)
        return 0;

    /* Otherwise, check if all the programs (variants) this playlist is in are
     * discarded. Since all streams in the playlist are part of the same programs
     * we can just check the programs of the first stream. */

    first_st = pls->main_streams[0]->index;

    for (i = 0; i < s->nb_programs; i++) {
        AVProgram *program = s->programs[i];
        if (program->discard < AVDISCARD_ALL) {
            for (j = 0; j < program->nb_stream_indexes; j++) {
                if (program->stream_index[j] == first_st) {
                    /* playlist is in an undiscarded program */
                    return 1;
                }
            }
        }
    }

    /* some streams were not discarded but all the programs were */
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
          int _len_pls0 = 1;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].n_main_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__main_streams0 = 1;
          pls[_i0].main_streams = (struct TYPE_4__ **) malloc(_len_pls__i0__main_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__main_streams0; _j0++) {
            int _len_pls__i0__main_streams1 = 1;
            pls[_i0].main_streams[_j0] = (struct TYPE_4__ *) malloc(_len_pls__i0__main_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pls__i0__main_streams1; _j1++) {
              pls[_i0].main_streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].main_streams[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pls[_i0].ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent0 = 1;
          pls[_i0].parent = (struct TYPE_6__ *) malloc(_len_pls__i0__parent0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent0; _j0++) {
            pls[_i0].parent->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs0 = 1;
          pls[_i0].parent->programs = (struct TYPE_5__ **) malloc(_len_pls__i0__parent_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs0; _j0++) {
            int _len_pls__i0__parent_programs1 = 1;
            pls[_i0].parent->programs[_j0] = (struct TYPE_5__ *) malloc(_len_pls__i0__parent_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_pls__i0__parent_programs1; _j1++) {
              pls[_i0].parent->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].parent->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs__j0__stream_index0 = 1;
          pls[_i0].parent->programs[_j0]->stream_index = (int *) malloc(_len_pls__i0__parent_programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs__j0__stream_index0; _j0++) {
            pls[_i0].parent->programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int benchRet = playlist_needed(pls);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].main_streams));
        free(pls[_aux].main_streams);
          }
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(pls[_aux].parent);
          }
          free(pls);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pls0 = 65025;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].n_main_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__main_streams0 = 1;
          pls[_i0].main_streams = (struct TYPE_4__ **) malloc(_len_pls__i0__main_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__main_streams0; _j0++) {
            int _len_pls__i0__main_streams1 = 1;
            pls[_i0].main_streams[_j0] = (struct TYPE_4__ *) malloc(_len_pls__i0__main_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pls__i0__main_streams1; _j1++) {
              pls[_i0].main_streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].main_streams[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pls[_i0].ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent0 = 1;
          pls[_i0].parent = (struct TYPE_6__ *) malloc(_len_pls__i0__parent0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent0; _j0++) {
            pls[_i0].parent->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs0 = 1;
          pls[_i0].parent->programs = (struct TYPE_5__ **) malloc(_len_pls__i0__parent_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs0; _j0++) {
            int _len_pls__i0__parent_programs1 = 1;
            pls[_i0].parent->programs[_j0] = (struct TYPE_5__ *) malloc(_len_pls__i0__parent_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_pls__i0__parent_programs1; _j1++) {
              pls[_i0].parent->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].parent->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs__j0__stream_index0 = 1;
          pls[_i0].parent->programs[_j0]->stream_index = (int *) malloc(_len_pls__i0__parent_programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs__j0__stream_index0; _j0++) {
            pls[_i0].parent->programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int benchRet = playlist_needed(pls);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].main_streams));
        free(pls[_aux].main_streams);
          }
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(pls[_aux].parent);
          }
          free(pls);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pls0 = 100;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].n_main_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__main_streams0 = 1;
          pls[_i0].main_streams = (struct TYPE_4__ **) malloc(_len_pls__i0__main_streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__main_streams0; _j0++) {
            int _len_pls__i0__main_streams1 = 1;
            pls[_i0].main_streams[_j0] = (struct TYPE_4__ *) malloc(_len_pls__i0__main_streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pls__i0__main_streams1; _j1++) {
              pls[_i0].main_streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].main_streams[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        pls[_i0].ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent0 = 1;
          pls[_i0].parent = (struct TYPE_6__ *) malloc(_len_pls__i0__parent0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent0; _j0++) {
            pls[_i0].parent->nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs0 = 1;
          pls[_i0].parent->programs = (struct TYPE_5__ **) malloc(_len_pls__i0__parent_programs0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs0; _j0++) {
            int _len_pls__i0__parent_programs1 = 1;
            pls[_i0].parent->programs[_j0] = (struct TYPE_5__ *) malloc(_len_pls__i0__parent_programs1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_pls__i0__parent_programs1; _j1++) {
              pls[_i0].parent->programs[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].parent->programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__parent_programs__j0__stream_index0 = 1;
          pls[_i0].parent->programs[_j0]->stream_index = (int *) malloc(_len_pls__i0__parent_programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pls__i0__parent_programs__j0__stream_index0; _j0++) {
            pls[_i0].parent->programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          int benchRet = playlist_needed(pls);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].main_streams));
        free(pls[_aux].main_streams);
          }
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(pls[_aux].parent);
          }
          free(pls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

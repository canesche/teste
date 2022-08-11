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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int max_index_size; TYPE_1__** streams; } ;
struct TYPE_4__ {int nb_index_entries; int /*<<< orphan*/ * index_entries; } ;
typedef  TYPE_1__ AVStream ;
typedef  int /*<<< orphan*/  AVIndexEntry ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */

void ff_reduce_index(AVFormatContext *s, int stream_index)
{
    AVStream *st             = s->streams[stream_index];
    unsigned int max_entries = s->max_index_size / sizeof(AVIndexEntry);

    if ((unsigned) st->nb_index_entries >= max_entries) {
        int i;
        for (i = 0; 2 * i < st->nb_index_entries; i++)
            st->index_entries[i] = st->index_entries[2 * i];
        st->nb_index_entries = i;
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
          int stream_index = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].max_index_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_4__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->nb_index_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams__j0__index_entries0 = 1;
          s[_i0].streams[_j0]->index_entries = (int *) malloc(_len_s__i0__streams__j0__index_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__index_entries0; _j0++) {
            s[_i0].streams[_j0]->index_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          ff_reduce_index(s,stream_index);
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
          int stream_index = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].max_index_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_4__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->nb_index_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams__j0__index_entries0 = 1;
          s[_i0].streams[_j0]->index_entries = (int *) malloc(_len_s__i0__streams__j0__index_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__index_entries0; _j0++) {
            s[_i0].streams[_j0]->index_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          ff_reduce_index(s,stream_index);
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
          int stream_index = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].max_index_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_4__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_4__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->nb_index_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams__j0__index_entries0 = 1;
          s[_i0].streams[_j0]->index_entries = (int *) malloc(_len_s__i0__streams__j0__index_entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__index_entries0; _j0++) {
            s[_i0].streams[_j0]->index_entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          ff_reduce_index(s,stream_index);
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

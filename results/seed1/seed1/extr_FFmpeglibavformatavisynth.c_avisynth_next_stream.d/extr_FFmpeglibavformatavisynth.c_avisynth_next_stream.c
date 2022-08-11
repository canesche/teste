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
struct TYPE_8__ {size_t nb_streams; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ discard; } ;
struct TYPE_6__ {size_t curr_stream; } ;
typedef  TYPE_1__ AviSynthContext ;
typedef  TYPE_2__ AVStream ;
typedef  int /*<<< orphan*/  AVPacket ;
typedef  TYPE_3__ AVFormatContext ;

/* Variables and functions */
 scalar_t__ AVDISCARD_ALL ; 

__attribute__((used)) static void avisynth_next_stream(AVFormatContext *s, AVStream **st,
                                 AVPacket *pkt, int *discard)
{
    AviSynthContext *avs = s->priv_data;

    avs->curr_stream++;
    avs->curr_stream %= s->nb_streams;

    *st = s->streams[avs->curr_stream];
    if ((*st)->discard == AVDISCARD_ALL)
        *discard = 1;
    else
        *discard = 0;

    return;
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
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_7__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->curr_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_st0 = 1;
          struct TYPE_7__ ** st = (struct TYPE_7__ **) malloc(_len_st0*sizeof(struct TYPE_7__ *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (struct TYPE_7__ *) malloc(_len_st1*sizeof(struct TYPE_7__));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1].discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pkt0 = 1;
          int * pkt = (int *) malloc(_len_pkt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_discard0 = 1;
          int * discard = (int *) malloc(_len_discard0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_discard0; _i0++) {
            discard[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          avisynth_next_stream(s,st,pkt,discard);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(pkt);
          free(discard);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_7__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->curr_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_st0 = 65025;
          struct TYPE_7__ ** st = (struct TYPE_7__ **) malloc(_len_st0*sizeof(struct TYPE_7__ *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (struct TYPE_7__ *) malloc(_len_st1*sizeof(struct TYPE_7__));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1].discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pkt0 = 65025;
          int * pkt = (int *) malloc(_len_pkt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_discard0 = 65025;
          int * discard = (int *) malloc(_len_discard0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_discard0; _i0++) {
            discard[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          avisynth_next_stream(s,st,pkt,discard);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(pkt);
          free(discard);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_7__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_7__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0]->discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->curr_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_st0 = 100;
          struct TYPE_7__ ** st = (struct TYPE_7__ **) malloc(_len_st0*sizeof(struct TYPE_7__ *));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            int _len_st1 = 1;
            st[_i0] = (struct TYPE_7__ *) malloc(_len_st1*sizeof(struct TYPE_7__));
            for(int _i1 = 0; _i1 < _len_st1; _i1++) {
              st[_i0][_i1].discard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pkt0 = 100;
          int * pkt = (int *) malloc(_len_pkt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_discard0 = 100;
          int * discard = (int *) malloc(_len_discard0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_discard0; _i0++) {
            discard[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          avisynth_next_stream(s,st,pkt,discard);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          for(int i1 = 0; i1 < _len_st0; i1++) {
            int _len_st1 = 1;
              free(st[i1]);
          }
          free(st);
          free(pkt);
          free(discard);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

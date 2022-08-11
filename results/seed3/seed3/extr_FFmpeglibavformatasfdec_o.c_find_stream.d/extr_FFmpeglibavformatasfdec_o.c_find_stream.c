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
typedef  scalar_t__ uint16_t ;
struct TYPE_7__ {int nb_streams; TYPE_1__** asf_st; } ;
struct TYPE_6__ {int /*<<< orphan*/ ** streams; TYPE_3__* priv_data; } ;
struct TYPE_5__ {scalar_t__ stream_index; size_t index; } ;
typedef  int /*<<< orphan*/  AVStream ;
typedef  TYPE_2__ AVFormatContext ;
typedef  TYPE_3__ ASFContext ;

/* Variables and functions */

__attribute__((used)) static AVStream *find_stream(AVFormatContext *s, uint16_t st_num)
{
    AVStream *st = NULL;
    ASFContext *asf = s->priv_data;
    int i;

    for (i = 0; i < asf->nb_streams; i++) {
        if (asf->asf_st[i]->stream_index == st_num) {
            st = s->streams[asf->asf_st[i]->index];
            break;
        }
    }

    return st;
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
          long st_num = 100;
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (int **) malloc(_len_s__i0__streams0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (int *) malloc(_len_s__i0__streams1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__priv_data_asf_st0 = 1;
          s[_i0].priv_data->asf_st = (struct TYPE_5__ **) malloc(_len_s__i0__priv_data_asf_st0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_asf_st0; _j0++) {
            int _len_s__i0__priv_data_asf_st1 = 1;
            s[_i0].priv_data->asf_st[_j0] = (struct TYPE_5__ *) malloc(_len_s__i0__priv_data_asf_st1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_s__i0__priv_data_asf_st1; _j1++) {
              s[_i0].priv_data->asf_st[_j0]->stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->asf_st[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int * benchRet = find_stream(s,st_num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          long st_num = 255;
          int _len_s0 = 65025;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (int **) malloc(_len_s__i0__streams0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (int *) malloc(_len_s__i0__streams1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__priv_data_asf_st0 = 1;
          s[_i0].priv_data->asf_st = (struct TYPE_5__ **) malloc(_len_s__i0__priv_data_asf_st0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_asf_st0; _j0++) {
            int _len_s__i0__priv_data_asf_st1 = 1;
            s[_i0].priv_data->asf_st[_j0] = (struct TYPE_5__ *) malloc(_len_s__i0__priv_data_asf_st1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_s__i0__priv_data_asf_st1; _j1++) {
              s[_i0].priv_data->asf_st[_j0]->stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->asf_st[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int * benchRet = find_stream(s,st_num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long st_num = 10;
          int _len_s0 = 100;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (int **) malloc(_len_s__i0__streams0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (int *) malloc(_len_s__i0__streams1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
              s[_i0].streams[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_s__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
            s[_i0].priv_data->nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__priv_data_asf_st0 = 1;
          s[_i0].priv_data->asf_st = (struct TYPE_5__ **) malloc(_len_s__i0__priv_data_asf_st0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_asf_st0; _j0++) {
            int _len_s__i0__priv_data_asf_st1 = 1;
            s[_i0].priv_data->asf_st[_j0] = (struct TYPE_5__ *) malloc(_len_s__i0__priv_data_asf_st1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_s__i0__priv_data_asf_st1; _j1++) {
              s[_i0].priv_data->asf_st[_j0]->stream_index = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].priv_data->asf_st[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int * benchRet = find_stream(s,st_num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
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

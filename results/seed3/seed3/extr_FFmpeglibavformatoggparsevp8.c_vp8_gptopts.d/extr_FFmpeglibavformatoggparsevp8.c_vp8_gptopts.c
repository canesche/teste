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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
typedef  int uint32_t ;
struct ogg_stream {int /*<<< orphan*/  pflags; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef  int int64_t ;
struct TYPE_3__ {struct ogg* priv_data; } ;
typedef  TYPE_1__ AVFormatContext ;

/* Variables and functions */
 int /*<<< orphan*/  AV_PKT_FLAG_KEY ; 

__attribute__((used)) static uint64_t vp8_gptopts(AVFormatContext *s, int idx,
                            uint64_t granule, int64_t *dts)
{
    struct ogg *ogg = s->priv_data;
    struct ogg_stream *os = ogg->streams + idx;

    int invcnt    = !((granule >> 30) & 3);
    // If page granule is that of an invisible vp8 frame, its pts will be
    // that of the end of the next visible frame. We subtract 1 for those
    // to prevent messing up pts calculations.
    uint64_t pts  = (granule >> 32) - invcnt;
    uint32_t dist = (granule >>  3) & 0x07ffffff;

    if (!dist)
        os->pflags |= AV_PKT_FLAG_KEY;

    if (dts)
        *dts = pts;

    return pts;
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
          int idx = 100;
          int granule = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct ogg *) malloc(_len_s__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
              int _len_s__i0__priv_data_streams0 = 1;
          s[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_s__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_streams0; _j0++) {
            s[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dts0 = 1;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp8_gptopts(s,idx,granule,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(dts);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int granule = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct ogg *) malloc(_len_s__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
              int _len_s__i0__priv_data_streams0 = 1;
          s[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_s__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_streams0; _j0++) {
            s[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dts0 = 65025;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp8_gptopts(s,idx,granule,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(dts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int granule = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__priv_data0 = 1;
          s[_i0].priv_data = (struct ogg *) malloc(_len_s__i0__priv_data0*sizeof(struct ogg));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data0; _j0++) {
              int _len_s__i0__priv_data_streams0 = 1;
          s[_i0].priv_data->streams = (struct ogg_stream *) malloc(_len_s__i0__priv_data_streams0*sizeof(struct ogg_stream));
          for(int _j0 = 0; _j0 < _len_s__i0__priv_data_streams0; _j0++) {
            s[_i0].priv_data->streams->pflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dts0 = 100;
          int * dts = (int *) malloc(_len_dts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dts0; _i0++) {
            dts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp8_gptopts(s,idx,granule,dts);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].priv_data);
          }
          free(s);
          free(dts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

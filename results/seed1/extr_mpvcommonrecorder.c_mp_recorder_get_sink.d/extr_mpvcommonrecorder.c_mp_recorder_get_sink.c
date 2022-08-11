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
struct mp_recorder_sink {int dummy; } ;
struct mp_recorder {int num_streams; struct mp_recorder_sink** streams; } ;

/* Variables and functions */

struct mp_recorder_sink *mp_recorder_get_sink(struct mp_recorder *r, int stream)
{
    return stream >= 0 && stream < r->num_streams ? r->streams[stream] : NULL;
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
          int stream = 100;
          int _len_r0 = 1;
          struct mp_recorder * r = (struct mp_recorder *) malloc(_len_r0*sizeof(struct mp_recorder));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__streams0 = 1;
          r[_i0].streams = (struct mp_recorder_sink **) malloc(_len_r__i0__streams0*sizeof(struct mp_recorder_sink *));
          for(int _j0 = 0; _j0 < _len_r__i0__streams0; _j0++) {
            int _len_r__i0__streams1 = 1;
            r[_i0].streams[_j0] = (struct mp_recorder_sink *) malloc(_len_r__i0__streams1*sizeof(struct mp_recorder_sink));
            for(int _j1 = 0; _j1 < _len_r__i0__streams1; _j1++) {
              r[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mp_recorder_sink * benchRet = mp_recorder_get_sink(r,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(*(r[_aux].streams));
        free(r[_aux].streams);
          }
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stream = 255;
          int _len_r0 = 65025;
          struct mp_recorder * r = (struct mp_recorder *) malloc(_len_r0*sizeof(struct mp_recorder));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__streams0 = 1;
          r[_i0].streams = (struct mp_recorder_sink **) malloc(_len_r__i0__streams0*sizeof(struct mp_recorder_sink *));
          for(int _j0 = 0; _j0 < _len_r__i0__streams0; _j0++) {
            int _len_r__i0__streams1 = 1;
            r[_i0].streams[_j0] = (struct mp_recorder_sink *) malloc(_len_r__i0__streams1*sizeof(struct mp_recorder_sink));
            for(int _j1 = 0; _j1 < _len_r__i0__streams1; _j1++) {
              r[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mp_recorder_sink * benchRet = mp_recorder_get_sink(r,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(*(r[_aux].streams));
        free(r[_aux].streams);
          }
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stream = 10;
          int _len_r0 = 100;
          struct mp_recorder * r = (struct mp_recorder *) malloc(_len_r0*sizeof(struct mp_recorder));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].num_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__streams0 = 1;
          r[_i0].streams = (struct mp_recorder_sink **) malloc(_len_r__i0__streams0*sizeof(struct mp_recorder_sink *));
          for(int _j0 = 0; _j0 < _len_r__i0__streams0; _j0++) {
            int _len_r__i0__streams1 = 1;
            r[_i0].streams[_j0] = (struct mp_recorder_sink *) malloc(_len_r__i0__streams1*sizeof(struct mp_recorder_sink));
            for(int _j1 = 0; _j1 < _len_r__i0__streams1; _j1++) {
              r[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mp_recorder_sink * benchRet = mp_recorder_get_sink(r,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(*(r[_aux].streams));
        free(r[_aux].streams);
          }
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

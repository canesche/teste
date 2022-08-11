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
       3            linked\n\
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
struct ivtv_stream {int dummy; } ;
struct ivtv {int output_mode; struct ivtv_stream* streams; } ;

/* Variables and functions */
 size_t IVTV_DEC_STREAM_TYPE_MPG ; 
 size_t IVTV_DEC_STREAM_TYPE_YUV ; 
#define  OUT_MPG 129 
#define  OUT_YUV 128 

struct ivtv_stream *ivtv_get_output_stream(struct ivtv *itv)
{
	switch (itv->output_mode) {
	case OUT_MPG:
		return &itv->streams[IVTV_DEC_STREAM_TYPE_MPG];
	case OUT_YUV:
		return &itv->streams[IVTV_DEC_STREAM_TYPE_YUV];
	default:
		return NULL;
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
          int _len_itv0 = 1;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__streams0 = 1;
          itv[_i0].streams = (struct ivtv_stream *) malloc(_len_itv__i0__streams0*sizeof(struct ivtv_stream));
          for(int _j0 = 0; _j0 < _len_itv__i0__streams0; _j0++) {
            itv[_i0].streams->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ivtv_stream * benchRet = ivtv_get_output_stream(itv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].streams);
          }
          free(itv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_itv0 = 65025;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__streams0 = 1;
          itv[_i0].streams = (struct ivtv_stream *) malloc(_len_itv__i0__streams0*sizeof(struct ivtv_stream));
          for(int _j0 = 0; _j0 < _len_itv__i0__streams0; _j0++) {
            itv[_i0].streams->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ivtv_stream * benchRet = ivtv_get_output_stream(itv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].streams);
          }
          free(itv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_itv0 = 100;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__streams0 = 1;
          itv[_i0].streams = (struct ivtv_stream *) malloc(_len_itv__i0__streams0*sizeof(struct ivtv_stream));
          for(int _j0 = 0; _j0 < _len_itv__i0__streams0; _j0++) {
            itv[_i0].streams->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ivtv_stream * benchRet = ivtv_get_output_stream(itv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].streams);
          }
          free(itv);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_itv0 = 1;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].output_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__streams0 = 1;
          itv[_i0].streams = (struct ivtv_stream *) malloc(_len_itv__i0__streams0*sizeof(struct ivtv_stream));
          for(int _j0 = 0; _j0 < _len_itv__i0__streams0; _j0++) {
            itv[_i0].streams->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ivtv_stream * benchRet = ivtv_get_output_stream(itv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].streams);
          }
          free(itv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

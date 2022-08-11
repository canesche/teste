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
struct mp_log {int dummy; } ;
struct TYPE_3__ {int type; int channels; int samplerate; int blocksize; int bytes_per_sample; int samplesize; struct mp_log* log; scalar_t__ setup; } ;
typedef  TYPE_1__ audio_in_t ;

/* Variables and functions */

int audio_in_init(audio_in_t *ai, struct mp_log *log, int type)
{
    ai->type = type;
    ai->setup = 0;
    ai->log = log;

    ai->channels = -1;
    ai->samplerate = -1;
    ai->blocksize = -1;
    ai->bytes_per_sample = -1;
    ai->samplesize = -1;

    switch (ai->type) {
#if HAVE_ALSA
    case AUDIO_IN_ALSA:
        ai->alsa.handle = NULL;
        ai->alsa.log = NULL;
        ai->alsa.device = NULL;
        return 0;
#endif
#if HAVE_OSS_AUDIO
    case AUDIO_IN_OSS:
        ai->oss.audio_fd = -1;
        ai->oss.device = NULL;
        return 0;
#endif
#if HAVE_SNDIO
    case AUDIO_IN_SNDIO:
        ai->sndio.hdl = NULL;
        ai->sndio.device = NULL;
        return 0;
#endif
    default:
        return -1;
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
          int type = 100;
          int _len_ai0 = 1;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplerate = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].bytes_per_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__log0 = 1;
          ai[_i0].log = (struct mp_log *) malloc(_len_ai__i0__log0*sizeof(struct mp_log));
          for(int _j0 = 0; _j0 < _len_ai__i0__log0; _j0++) {
            ai[_i0].log->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].setup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 1;
          struct mp_log * log = (struct mp_log *) malloc(_len_log0*sizeof(struct mp_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audio_in_init(ai,log,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].log);
          }
          free(ai);
          free(log);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_ai0 = 65025;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplerate = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].bytes_per_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__log0 = 1;
          ai[_i0].log = (struct mp_log *) malloc(_len_ai__i0__log0*sizeof(struct mp_log));
          for(int _j0 = 0; _j0 < _len_ai__i0__log0; _j0++) {
            ai[_i0].log->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].setup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 65025;
          struct mp_log * log = (struct mp_log *) malloc(_len_log0*sizeof(struct mp_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audio_in_init(ai,log,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].log);
          }
          free(ai);
          free(log);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_ai0 = 100;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplerate = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].bytes_per_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].samplesize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ai__i0__log0 = 1;
          ai[_i0].log = (struct mp_log *) malloc(_len_ai__i0__log0*sizeof(struct mp_log));
          for(int _j0 = 0; _j0 < _len_ai__i0__log0; _j0++) {
            ai[_i0].log->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ai[_i0].setup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_log0 = 100;
          struct mp_log * log = (struct mp_log *) malloc(_len_log0*sizeof(struct mp_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audio_in_init(ai,log,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ai0; _aux++) {
          free(ai[_aux].log);
          }
          free(ai);
          free(log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

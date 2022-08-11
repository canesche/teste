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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_2__** streams; } ;
struct TYPE_9__ {int nb_streams; size_t* streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int sample_rate; } ;
typedef  TYPE_3__ AdaptationSet ;
typedef  TYPE_4__ AVFormatContext ;

/* Variables and functions */

__attribute__((used)) static int check_matching_sample_rate(AVFormatContext *s, AdaptationSet *as) {
    int first_sample_rate, i;
    if (as->nb_streams < 2) return 1;
    first_sample_rate = s->streams[as->streams[0]]->codecpar->sample_rate;
    for (i = 1; i < as->nb_streams; i++)
        if (first_sample_rate != s->streams[as->streams[i]]->codecpar->sample_rate)
          return 0;
    return 1;
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
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_as0 = 1;
          struct TYPE_9__ * as = (struct TYPE_9__ *) malloc(_len_as0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__streams0 = 1;
          as[_i0].streams = (unsigned long *) malloc(_len_as__i0__streams0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_as__i0__streams0; _j0++) {
            as[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_matching_sample_rate(s,as);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].streams);
          }
          free(as);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_as0 = 65025;
          struct TYPE_9__ * as = (struct TYPE_9__ *) malloc(_len_as0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__streams0 = 1;
          as[_i0].streams = (unsigned long *) malloc(_len_as__i0__streams0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_as__i0__streams0; _j0++) {
            as[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_matching_sample_rate(s,as);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].streams);
          }
          free(as);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__streams0 = 1;
          s[_i0].streams = (struct TYPE_8__ **) malloc(_len_s__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__streams0; _j0++) {
            int _len_s__i0__streams1 = 1;
            s[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_s__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_s__i0__streams1; _j1++) {
                int _len_s__i0__streams__j0__codecpar0 = 1;
          s[_i0].streams[_j0]->codecpar = (struct TYPE_7__ *) malloc(_len_s__i0__streams__j0__codecpar0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__streams__j0__codecpar0; _j0++) {
            s[_i0].streams[_j0]->codecpar->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_as0 = 100;
          struct TYPE_9__ * as = (struct TYPE_9__ *) malloc(_len_as0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_as__i0__streams0 = 1;
          as[_i0].streams = (unsigned long *) malloc(_len_as__i0__streams0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_as__i0__streams0; _j0++) {
            as[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_matching_sample_rate(s,as);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].streams));
        free(s[_aux].streams);
          }
          free(s);
          for(int _aux = 0; _aux < _len_as0; _aux++) {
          free(as[_aux].streams);
          }
          free(as);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

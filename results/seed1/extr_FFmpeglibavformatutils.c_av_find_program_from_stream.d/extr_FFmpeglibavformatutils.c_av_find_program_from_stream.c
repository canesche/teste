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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_6__ {int nb_stream_indexes; int* stream_index; } ;
typedef  TYPE_1__ AVProgram ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */

AVProgram *av_find_program_from_stream(AVFormatContext *ic, AVProgram *last, int s)
{
    int i, j;

    for (i = 0; i < ic->nb_programs; i++) {
        if (ic->programs[i] == last) {
            last = NULL;
        } else {
            if (!last)
                for (j = 0; j < ic->programs[i]->nb_stream_indexes; j++)
                    if (ic->programs[i]->stream_index[j] == s)
                        return ic->programs[i];
        }
    }
    return NULL;
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
          int s = 100;
          int _len_ic0 = 1;
          struct TYPE_7__ * ic = (struct TYPE_7__ *) malloc(_len_ic0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs0 = 1;
          ic[_i0].programs = (struct TYPE_6__ **) malloc(_len_ic__i0__programs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs0; _j0++) {
            int _len_ic__i0__programs1 = 1;
            ic[_i0].programs[_j0] = (struct TYPE_6__ *) malloc(_len_ic__i0__programs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ic__i0__programs1; _j1++) {
              ic[_i0].programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs__j0__stream_index0 = 1;
          ic[_i0].programs[_j0]->stream_index = (int *) malloc(_len_ic__i0__programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs__j0__stream_index0; _j0++) {
            ic[_i0].programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_last0 = 1;
          struct TYPE_6__ * last = (struct TYPE_6__ *) malloc(_len_last0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0].nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_last__i0__stream_index0 = 1;
          last[_i0].stream_index = (int *) malloc(_len_last__i0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_last__i0__stream_index0; _j0++) {
            last[_i0].stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = av_find_program_from_stream(ic,last,s);
          printf("%d\n", (*benchRet).nb_stream_indexes);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(*(ic[_aux].programs));
        free(ic[_aux].programs);
          }
          free(ic);
          for(int _aux = 0; _aux < _len_last0; _aux++) {
          free(last[_aux].stream_index);
          }
          free(last);
        
        break;
    }
    // big-arr
    case 1:
    {
          int s = 255;
          int _len_ic0 = 65025;
          struct TYPE_7__ * ic = (struct TYPE_7__ *) malloc(_len_ic0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs0 = 1;
          ic[_i0].programs = (struct TYPE_6__ **) malloc(_len_ic__i0__programs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs0; _j0++) {
            int _len_ic__i0__programs1 = 1;
            ic[_i0].programs[_j0] = (struct TYPE_6__ *) malloc(_len_ic__i0__programs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ic__i0__programs1; _j1++) {
              ic[_i0].programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs__j0__stream_index0 = 1;
          ic[_i0].programs[_j0]->stream_index = (int *) malloc(_len_ic__i0__programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs__j0__stream_index0; _j0++) {
            ic[_i0].programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_last0 = 65025;
          struct TYPE_6__ * last = (struct TYPE_6__ *) malloc(_len_last0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0].nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_last__i0__stream_index0 = 1;
          last[_i0].stream_index = (int *) malloc(_len_last__i0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_last__i0__stream_index0; _j0++) {
            last[_i0].stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = av_find_program_from_stream(ic,last,s);
          printf("%d\n", (*benchRet).nb_stream_indexes);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(*(ic[_aux].programs));
        free(ic[_aux].programs);
          }
          free(ic);
          for(int _aux = 0; _aux < _len_last0; _aux++) {
          free(last[_aux].stream_index);
          }
          free(last);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int s = 10;
          int _len_ic0 = 100;
          struct TYPE_7__ * ic = (struct TYPE_7__ *) malloc(_len_ic0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].nb_programs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs0 = 1;
          ic[_i0].programs = (struct TYPE_6__ **) malloc(_len_ic__i0__programs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs0; _j0++) {
            int _len_ic__i0__programs1 = 1;
            ic[_i0].programs[_j0] = (struct TYPE_6__ *) malloc(_len_ic__i0__programs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ic__i0__programs1; _j1++) {
              ic[_i0].programs[_j0]->nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__programs__j0__stream_index0 = 1;
          ic[_i0].programs[_j0]->stream_index = (int *) malloc(_len_ic__i0__programs__j0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__programs__j0__stream_index0; _j0++) {
            ic[_i0].programs[_j0]->stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_last0 = 100;
          struct TYPE_6__ * last = (struct TYPE_6__ *) malloc(_len_last0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_last0; _i0++) {
            last[_i0].nb_stream_indexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_last__i0__stream_index0 = 1;
          last[_i0].stream_index = (int *) malloc(_len_last__i0__stream_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_last__i0__stream_index0; _j0++) {
            last[_i0].stream_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = av_find_program_from_stream(ic,last,s);
          printf("%d\n", (*benchRet).nb_stream_indexes);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(*(ic[_aux].programs));
        free(ic[_aux].programs);
          }
          free(ic);
          for(int _aux = 0; _aux < _len_last0; _aux++) {
          free(last[_aux].stream_index);
          }
          free(last);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

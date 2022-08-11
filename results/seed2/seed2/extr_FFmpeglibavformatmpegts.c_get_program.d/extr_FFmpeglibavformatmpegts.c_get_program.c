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
struct Program {unsigned int id; } ;
struct TYPE_3__ {int nb_prg; struct Program* prg; } ;
typedef  TYPE_1__ MpegTSContext ;

/* Variables and functions */

__attribute__((used)) static struct Program * get_program(MpegTSContext *ts, unsigned int programid)
{
    int i;
    for (i = 0; i < ts->nb_prg; i++) {
        if (ts->prg[i].id == programid) {
            return &ts->prg[i];
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
          unsigned int programid = 100;
          int _len_ts0 = 1;
          struct TYPE_3__ * ts = (struct TYPE_3__ *) malloc(_len_ts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct Program * benchRet = get_program(ts,programid);
          printf("%u\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
          }
          free(ts);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int programid = 255;
          int _len_ts0 = 65025;
          struct TYPE_3__ * ts = (struct TYPE_3__ *) malloc(_len_ts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct Program * benchRet = get_program(ts,programid);
          printf("%u\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
          }
          free(ts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int programid = 10;
          int _len_ts0 = 100;
          struct TYPE_3__ * ts = (struct TYPE_3__ *) malloc(_len_ts0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].nb_prg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__prg0 = 1;
          ts[_i0].prg = (struct Program *) malloc(_len_ts__i0__prg0*sizeof(struct Program));
          for(int _j0 = 0; _j0 < _len_ts__i0__prg0; _j0++) {
            ts[_i0].prg->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct Program * benchRet = get_program(ts,programid);
          printf("%u\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].prg);
          }
          free(ts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

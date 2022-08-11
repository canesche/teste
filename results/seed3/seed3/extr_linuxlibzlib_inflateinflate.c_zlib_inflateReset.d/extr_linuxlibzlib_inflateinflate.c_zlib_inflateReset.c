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
typedef  TYPE_1__* z_streamp ;
struct inflate_state {unsigned int dmax; unsigned int wsize; unsigned int wbits; scalar_t__ whave; scalar_t__ write; int /*<<< orphan*/  codes; int /*<<< orphan*/  next; int /*<<< orphan*/  distcode; int /*<<< orphan*/  lencode; scalar_t__ bits; scalar_t__ hold; scalar_t__ havedict; scalar_t__ last; int /*<<< orphan*/  mode; scalar_t__ total; } ;
struct TYPE_3__ {int adler; int /*<<< orphan*/ * msg; scalar_t__ total_out; scalar_t__ total_in; int /*<<< orphan*/ * state; } ;

/* Variables and functions */
 int /*<<< orphan*/  HEAD ; 
 int Z_OK ; 
 int Z_STREAM_ERROR ; 

int zlib_inflateReset(z_streamp strm)
{
    struct inflate_state *state;

    if (strm == NULL || strm->state == NULL) return Z_STREAM_ERROR;
    state = (struct inflate_state *)strm->state;
    strm->total_in = strm->total_out = state->total = 0;
    strm->msg = NULL;
    strm->adler = 1;        /* to support ill-conceived Java test suite */
    state->mode = HEAD;
    state->last = 0;
    state->havedict = 0;
    state->dmax = 32768U;
    state->hold = 0;
    state->bits = 0;
    state->lencode = state->distcode = state->next = state->codes;

    /* Initialise Window */
    state->wsize = 1U << state->wbits;
    state->write = 0;
    state->whave = 0;

    return Z_OK;
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
          int _len_strm0 = 1;
          struct TYPE_3__ * strm = (struct TYPE_3__ *) malloc(_len_strm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].adler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__msg0 = 1;
          strm[_i0].msg = (int *) malloc(_len_strm__i0__msg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__msg0; _j0++) {
            strm[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        strm[_i0].total_out = ((-2 * (next_i()%2)) + 1) * next_i();
        strm[_i0].total_in = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = zlib_inflateReset(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_strm0 = 65025;
          struct TYPE_3__ * strm = (struct TYPE_3__ *) malloc(_len_strm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].adler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__msg0 = 1;
          strm[_i0].msg = (int *) malloc(_len_strm__i0__msg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__msg0; _j0++) {
            strm[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        strm[_i0].total_out = ((-2 * (next_i()%2)) + 1) * next_i();
        strm[_i0].total_in = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = zlib_inflateReset(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_strm0 = 100;
          struct TYPE_3__ * strm = (struct TYPE_3__ *) malloc(_len_strm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].adler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__msg0 = 1;
          strm[_i0].msg = (int *) malloc(_len_strm__i0__msg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__msg0; _j0++) {
            strm[_i0].msg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        strm[_i0].total_out = ((-2 * (next_i()%2)) + 1) * next_i();
        strm[_i0].total_in = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_strm__i0__state0 = 1;
          strm[_i0].state = (int *) malloc(_len_strm__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_strm__i0__state0; _j0++) {
            strm[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = zlib_inflateReset(strm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].msg);
          }
          for(int _aux = 0; _aux < _len_strm0; _aux++) {
          free(strm[_aux].state);
          }
          free(strm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

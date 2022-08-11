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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct priv {double start_pts; } ;
struct mp_decoder_wrapper {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;

/* Variables and functions */

void mp_decoder_wrapper_set_start_pts(struct mp_decoder_wrapper *d, double pts)
{
    struct priv *p = d->f->priv;
    p->start_pts = pts;
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
          double pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_d0 = 1;
          struct mp_decoder_wrapper * d = (struct mp_decoder_wrapper *) malloc(_len_d0*sizeof(struct mp_decoder_wrapper));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__f0 = 1;
          d[_i0].f = (struct TYPE_2__ *) malloc(_len_d__i0__f0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__f0; _j0++) {
              int _len_d__i0__f_priv0 = 1;
          d[_i0].f->priv = (struct priv *) malloc(_len_d__i0__f_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_d__i0__f_priv0; _j0++) {
            d[_i0].f->priv->start_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          mp_decoder_wrapper_set_start_pts(d,pts);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].f);
          }
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          double pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_d0 = 65025;
          struct mp_decoder_wrapper * d = (struct mp_decoder_wrapper *) malloc(_len_d0*sizeof(struct mp_decoder_wrapper));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__f0 = 1;
          d[_i0].f = (struct TYPE_2__ *) malloc(_len_d__i0__f0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__f0; _j0++) {
              int _len_d__i0__f_priv0 = 1;
          d[_i0].f->priv = (struct priv *) malloc(_len_d__i0__f_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_d__i0__f_priv0; _j0++) {
            d[_i0].f->priv->start_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          mp_decoder_wrapper_set_start_pts(d,pts);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].f);
          }
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_d0 = 100;
          struct mp_decoder_wrapper * d = (struct mp_decoder_wrapper *) malloc(_len_d0*sizeof(struct mp_decoder_wrapper));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__f0 = 1;
          d[_i0].f = (struct TYPE_2__ *) malloc(_len_d__i0__f0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__f0; _j0++) {
              int _len_d__i0__f_priv0 = 1;
          d[_i0].f->priv = (struct priv *) malloc(_len_d__i0__f_priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_d__i0__f_priv0; _j0++) {
            d[_i0].f->priv->start_pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          mp_decoder_wrapper_set_start_pts(d,pts);
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].f);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

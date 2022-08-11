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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ct_timer_instance {scalar_t__ need_update; scalar_t__ running; TYPE_2__* substream; int /*<<< orphan*/  frag_count; } ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {int /*<<< orphan*/  period_size; } ;

/* Variables and functions */

__attribute__((used)) static void ct_xfitimer_prepare(struct ct_timer_instance *ti)
{
	ti->frag_count = ti->substream->runtime->period_size;
	ti->running = 0;
	ti->need_update = 0;
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
          int _len_ti0 = 1;
          struct ct_timer_instance * ti = (struct ct_timer_instance *) malloc(_len_ti0*sizeof(struct ct_timer_instance));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].need_update = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ti__i0__substream0 = 1;
          ti[_i0].substream = (struct TYPE_4__ *) malloc(_len_ti__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream0; _j0++) {
              int _len_ti__i0__substream_runtime0 = 1;
          ti[_i0].substream->runtime = (struct TYPE_3__ *) malloc(_len_ti__i0__substream_runtime0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream_runtime0; _j0++) {
            ti[_i0].substream->runtime->period_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ti[_i0].frag_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ct_xfitimer_prepare(ti);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].substream);
          }
          free(ti);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ti0 = 65025;
          struct ct_timer_instance * ti = (struct ct_timer_instance *) malloc(_len_ti0*sizeof(struct ct_timer_instance));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].need_update = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ti__i0__substream0 = 1;
          ti[_i0].substream = (struct TYPE_4__ *) malloc(_len_ti__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream0; _j0++) {
              int _len_ti__i0__substream_runtime0 = 1;
          ti[_i0].substream->runtime = (struct TYPE_3__ *) malloc(_len_ti__i0__substream_runtime0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream_runtime0; _j0++) {
            ti[_i0].substream->runtime->period_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ti[_i0].frag_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ct_xfitimer_prepare(ti);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].substream);
          }
          free(ti);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ti0 = 100;
          struct ct_timer_instance * ti = (struct ct_timer_instance *) malloc(_len_ti0*sizeof(struct ct_timer_instance));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
            ti[_i0].need_update = ((-2 * (next_i()%2)) + 1) * next_i();
        ti[_i0].running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ti__i0__substream0 = 1;
          ti[_i0].substream = (struct TYPE_4__ *) malloc(_len_ti__i0__substream0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream0; _j0++) {
              int _len_ti__i0__substream_runtime0 = 1;
          ti[_i0].substream->runtime = (struct TYPE_3__ *) malloc(_len_ti__i0__substream_runtime0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ti__i0__substream_runtime0; _j0++) {
            ti[_i0].substream->runtime->period_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        ti[_i0].frag_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ct_xfitimer_prepare(ti);
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].substream);
          }
          free(ti);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

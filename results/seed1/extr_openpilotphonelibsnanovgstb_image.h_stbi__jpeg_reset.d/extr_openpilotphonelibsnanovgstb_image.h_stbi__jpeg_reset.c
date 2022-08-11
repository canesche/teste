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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int todo; int restart_interval; scalar_t__ eob_run; int /*<<< orphan*/  marker; TYPE_1__* img_comp; scalar_t__ nomore; scalar_t__ code_buffer; scalar_t__ code_bits; } ;
typedef  TYPE_2__ stbi__jpeg ;
struct TYPE_4__ {scalar_t__ dc_pred; } ;

/* Variables and functions */
 int /*<<< orphan*/  STBI__MARKER_none ; 

__attribute__((used)) static void stbi__jpeg_reset(stbi__jpeg *j)
{
   j->code_bits = 0;
   j->code_buffer = 0;
   j->nomore = 0;
   j->img_comp[0].dc_pred = j->img_comp[1].dc_pred = j->img_comp[2].dc_pred = 0;
   j->marker = STBI__MARKER_none;
   j->todo = j->restart_interval ? j->restart_interval : 0x7fffffff;
   j->eob_run = 0;
   // no more than 1<<31 MCUs if no restart_interal? that's plenty safe,
   // since we don't even allow 1<<30 pixels
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
          int _len_j0 = 1;
          struct TYPE_5__ * j = (struct TYPE_5__ *) malloc(_len_j0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_j0; _i0++) {
            j[_i0].todo = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].eob_run = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_j__i0__img_comp0 = 1;
          j[_i0].img_comp = (struct TYPE_4__ *) malloc(_len_j__i0__img_comp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_j__i0__img_comp0; _j0++) {
            j[_i0].img_comp->dc_pred = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        j[_i0].nomore = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__jpeg_reset(j);
          for(int _aux = 0; _aux < _len_j0; _aux++) {
          free(j[_aux].img_comp);
          }
          free(j);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_j0 = 65025;
          struct TYPE_5__ * j = (struct TYPE_5__ *) malloc(_len_j0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_j0; _i0++) {
            j[_i0].todo = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].eob_run = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_j__i0__img_comp0 = 1;
          j[_i0].img_comp = (struct TYPE_4__ *) malloc(_len_j__i0__img_comp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_j__i0__img_comp0; _j0++) {
            j[_i0].img_comp->dc_pred = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        j[_i0].nomore = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__jpeg_reset(j);
          for(int _aux = 0; _aux < _len_j0; _aux++) {
          free(j[_aux].img_comp);
          }
          free(j);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_j0 = 100;
          struct TYPE_5__ * j = (struct TYPE_5__ *) malloc(_len_j0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_j0; _i0++) {
            j[_i0].todo = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].eob_run = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].marker = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_j__i0__img_comp0 = 1;
          j[_i0].img_comp = (struct TYPE_4__ *) malloc(_len_j__i0__img_comp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_j__i0__img_comp0; _j0++) {
            j[_i0].img_comp->dc_pred = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        j[_i0].nomore = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        j[_i0].code_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stbi__jpeg_reset(j);
          for(int _aux = 0; _aux < _len_j0; _aux++) {
          free(j[_aux].img_comp);
          }
          free(j);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

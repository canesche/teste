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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int metric_length; } ;
struct TYPE_5__ {int flags; scalar_t__ buffer; int* diffs; int /*<<< orphan*/  breaks; struct TYPE_5__* next; } ;
typedef  TYPE_1__ PullupField ;
typedef  TYPE_2__ PullupContext ;

/* Variables and functions */
 int /*<<< orphan*/  BREAK_LEFT ; 
 int /*<<< orphan*/  BREAK_RIGHT ; 
 int F_HAVE_BREAKS ; 

__attribute__((used)) static void compute_breaks(PullupContext *s, PullupField *f0)
{
    PullupField *f1 = f0->next;
    PullupField *f2 = f1->next;
    PullupField *f3 = f2->next;
    int i, l, max_l = 0, max_r = 0;

    if (f0->flags & F_HAVE_BREAKS)
        return;

    f0->flags |= F_HAVE_BREAKS;

    /* Special case when fields are 100% identical */
    if (f0->buffer == f2->buffer && f1->buffer != f3->buffer) {
        f2->breaks |= BREAK_RIGHT;
        return;
    }

    if (f0->buffer != f2->buffer && f1->buffer == f3->buffer) {
        f1->breaks |= BREAK_LEFT;
        return;
    }

    for (i = 0; i < s->metric_length; i++) {
        l = f2->diffs[i] - f3->diffs[i];

        if ( l > max_l)
            max_l =  l;
        if (-l > max_r)
            max_r = -l;
    }

    /* Don't get tripped up when differences are mostly quant error */
    if (max_l + max_r < 128)
        return;
    if (max_l > 4 * max_r)
        f1->breaks |= BREAK_LEFT;
    if (max_r > 4 * max_l)
        f2->breaks |= BREAK_RIGHT;
}


// ------------------------------------------------------------------------- //

struct TYPE_5__ *_allocate_f0(int length, struct TYPE_5__ *aux_f0[]) {
  struct TYPE_5__ *walker = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));

  aux_f0[0] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buffer = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_diffs0 = 1;
  walker->diffs = (int *) malloc(_len_walker_diffs0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_diffs0; _i0++) {
    walker->diffs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->breaks = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->next = NULL;

  struct TYPE_5__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_5__ *)malloc(sizeof(struct TYPE_5__));
    walker = walker->next;
    aux_f0[i] = walker;
walker->flags = ((-2 * (next_i()%2)) + 1) * next_i();
walker->buffer = ((-2 * (next_i()%2)) + 1) * next_i();
  int _len_walker_diffs0 = 1;
  walker->diffs = (int *) malloc(_len_walker_diffs0*sizeof(int));
  for(int _i0 = 0; _i0 < _len_walker_diffs0; _i0++) {
    walker->diffs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
  }
walker->breaks = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->next = NULL;
  }

  return head;
}

void _delete_f0(struct TYPE_5__ *aux_f0[], int aux_f0_size) {
  for(int i = 0; i < aux_f0_size; i++) 
    if(aux_f0[i])
      free(aux_f0[i]);
}

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
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].metric_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * aux_f0[1];
          struct TYPE_5__ * f0 = _allocate_f0(1, aux_f0);
          compute_breaks(s,f0);
          free(s);
          _delete_f0(aux_f0, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].metric_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ * aux_f0[10000];
          struct TYPE_5__ * f0 = _allocate_f0(10000, aux_f0);
          compute_breaks(s,f0);
          free(s);
          _delete_f0(aux_f0, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

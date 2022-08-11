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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct cbq_sched_data {scalar_t__ toplevel; } ;
struct cbq_class {scalar_t__ level; scalar_t__ undertime; struct cbq_class* borrow; TYPE_2__* q; } ;
struct TYPE_3__ {int qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;

/* Variables and functions */
 scalar_t__ PSCHED_PASTPERFECT ; 

__attribute__((used)) static inline void
cbq_update_toplevel(struct cbq_sched_data *q, struct cbq_class *cl,
		    struct cbq_class *borrowed)
{
	if (cl && q->toplevel >= borrowed->level) {
		if (cl->q->q.qlen > 1) {
			do {
				if (borrowed->undertime == PSCHED_PASTPERFECT) {
					q->toplevel = borrowed->level;
					return;
				}
			} while ((borrowed = borrowed->borrow) != NULL);
		}
#if 0
	/* It is not necessary now. Uncommenting it
	   will save CPU cycles, but decrease fairness.
	 */
		q->toplevel = TC_CBQ_MAXLEVEL;
#endif
	}
}


// ------------------------------------------------------------------------- //

struct cbq_class *_allocate_cl(int length, struct cbq_class *aux_cl[]) {
  struct cbq_class *walker = (struct cbq_class *)malloc(sizeof(struct cbq_class));

  aux_cl[0] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->undertime = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->borrow = NULL;
  int _len_walker_q0 = 1;
  walker->q = (struct TYPE_4__ *) malloc(_len_walker_q0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_q0; _i0++) {
    walker->q.q.qlen = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct cbq_class *head = walker;
  for(int i = 1; i < length; i++) {
    walker->borrow = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->borrow;
    aux_cl[i] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->undertime = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->borrow = NULL;
  int _len_walker_q0 = 1;
  walker->q = (struct TYPE_4__ *) malloc(_len_walker_q0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_q0; _i0++) {
    walker->q.q.qlen = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_cl(struct cbq_class *aux_cl[], int aux_cl_size) {
  for(int i = 0; i < aux_cl_size; i++) 
    if(aux_cl[i])
      free(aux_cl[i]);
}

struct cbq_class *_allocate_borrowed(int length, struct cbq_class *aux_borrowed[]) {
  struct cbq_class *walker = (struct cbq_class *)malloc(sizeof(struct cbq_class));

  aux_borrowed[0] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->undertime = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->borrow = NULL;
  int _len_walker_q0 = 1;
  walker->q = (struct TYPE_4__ *) malloc(_len_walker_q0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_q0; _i0++) {
    walker->q.q.qlen = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct cbq_class *head = walker;
  for(int i = 1; i < length; i++) {
    walker->borrow = (struct cbq_class *)malloc(sizeof(struct cbq_class));
    walker = walker->borrow;
    aux_borrowed[i] = walker;
walker->level = ((-2 * (next_i()%2)) + 1) * next_i();
walker->undertime = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->borrow = NULL;
  int _len_walker_q0 = 1;
  walker->q = (struct TYPE_4__ *) malloc(_len_walker_q0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_q0; _i0++) {
    walker->q.q.qlen = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_borrowed(struct cbq_class *aux_borrowed[], int aux_borrowed_size) {
  for(int i = 0; i < aux_borrowed_size; i++) 
    if(aux_borrowed[i])
      free(aux_borrowed[i]);
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
          int _len_q0 = 1;
          struct cbq_sched_data * q = (struct cbq_sched_data *) malloc(_len_q0*sizeof(struct cbq_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].toplevel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct cbq_class * aux_cl[1];
          struct cbq_class * cl = _allocate_cl(1, aux_cl);
          struct cbq_class * aux_borrowed[1];
          struct cbq_class * borrowed = _allocate_borrowed(1, aux_borrowed);
          cbq_update_toplevel(q,cl,borrowed);
          free(q);
          _delete_cl(aux_cl, 1);
          _delete_borrowed(aux_borrowed, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_q0 = 1;
          struct cbq_sched_data * q = (struct cbq_sched_data *) malloc(_len_q0*sizeof(struct cbq_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].toplevel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct cbq_class * aux_cl[10000];
          struct cbq_class * cl = _allocate_cl(10000, aux_cl);
          struct cbq_class * aux_borrowed[10000];
          struct cbq_class * borrowed = _allocate_borrowed(10000, aux_borrowed);
          cbq_update_toplevel(q,cl,borrowed);
          free(q);
          _delete_cl(aux_cl, 10000);
          _delete_borrowed(aux_borrowed, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

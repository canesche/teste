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
struct sched_dl_entity {int /*<<< orphan*/  rb_node; } ;
struct task_struct {struct sched_dl_entity dl; } ;
struct TYPE_2__ {int /*<<< orphan*/ * rb_leftmost; } ;
struct dl_rq {TYPE_1__ root; } ;

/* Variables and functions */

__attribute__((used)) static inline int is_leftmost(struct task_struct *p, struct dl_rq *dl_rq)
{
	struct sched_dl_entity *dl_se = &p->dl;

	return dl_rq->root.rb_leftmost == &dl_se->rb_node;
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
          int _len_p0 = 1;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dl.rb_node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dl_rq0 = 1;
          struct dl_rq * dl_rq = (struct dl_rq *) malloc(_len_dl_rq0*sizeof(struct dl_rq));
          for(int _i0 = 0; _i0 < _len_dl_rq0; _i0++) {
              int _len_dl_rq__i0__root_rb_leftmost0 = 1;
          dl_rq[_i0].root.rb_leftmost = (int *) malloc(_len_dl_rq__i0__root_rb_leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dl_rq__i0__root_rb_leftmost0; _j0++) {
            dl_rq[_i0].root.rb_leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_leftmost(p,dl_rq);
          printf("%d\n", benchRet); 
          free(p);
          free(dl_rq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dl.rb_node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dl_rq0 = 65025;
          struct dl_rq * dl_rq = (struct dl_rq *) malloc(_len_dl_rq0*sizeof(struct dl_rq));
          for(int _i0 = 0; _i0 < _len_dl_rq0; _i0++) {
              int _len_dl_rq__i0__root_rb_leftmost0 = 1;
          dl_rq[_i0].root.rb_leftmost = (int *) malloc(_len_dl_rq__i0__root_rb_leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dl_rq__i0__root_rb_leftmost0; _j0++) {
            dl_rq[_i0].root.rb_leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_leftmost(p,dl_rq);
          printf("%d\n", benchRet); 
          free(p);
          free(dl_rq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dl.rb_node = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dl_rq0 = 100;
          struct dl_rq * dl_rq = (struct dl_rq *) malloc(_len_dl_rq0*sizeof(struct dl_rq));
          for(int _i0 = 0; _i0 < _len_dl_rq0; _i0++) {
              int _len_dl_rq__i0__root_rb_leftmost0 = 1;
          dl_rq[_i0].root.rb_leftmost = (int *) malloc(_len_dl_rq__i0__root_rb_leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dl_rq__i0__root_rb_leftmost0; _j0++) {
            dl_rq[_i0].root.rb_leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_leftmost(p,dl_rq);
          printf("%d\n", benchRet); 
          free(p);
          free(dl_rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

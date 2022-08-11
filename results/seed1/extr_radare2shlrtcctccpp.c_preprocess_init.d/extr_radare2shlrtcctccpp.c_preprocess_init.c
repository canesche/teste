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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  ifdef_stack_ptr; } ;
struct TYPE_4__ {scalar_t__* pack_stack; scalar_t__* pack_stack_ptr; int /*<<< orphan*/  ifdef_stack_ptr; int /*<<< orphan*/  ifdef_stack; int /*<<< orphan*/  include_stack; int /*<<< orphan*/  include_stack_ptr; } ;
typedef  TYPE_1__ TCCState ;

/* Variables and functions */
 TYPE_3__* file ; 
 scalar_t__ vstack ; 
 scalar_t__ vtop ; 

void preprocess_init(TCCState *s1)
{
	s1->include_stack_ptr = s1->include_stack;
	/* XXX: move that before to avoid having to initialize
	   file->ifdef_stack_ptr ? */
	s1->ifdef_stack_ptr = s1->ifdef_stack;
	file->ifdef_stack_ptr = s1->ifdef_stack_ptr;

	vtop = vstack - 1;
	s1->pack_stack[0] = 0;
	s1->pack_stack_ptr = s1->pack_stack;
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
          int _len_s10 = 1;
          struct TYPE_4__ * s1 = (struct TYPE_4__ *) malloc(_len_s10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__pack_stack0 = 1;
          s1[_i0].pack_stack = (long *) malloc(_len_s1__i0__pack_stack0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack0; _j0++) {
            s1[_i0].pack_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s1__i0__pack_stack_ptr0 = 1;
          s1[_i0].pack_stack_ptr = (long *) malloc(_len_s1__i0__pack_stack_ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack_ptr0; _j0++) {
            s1[_i0].pack_stack_ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s1[_i0].ifdef_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].ifdef_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          preprocess_init(s1);
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack);
          }
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack_ptr);
          }
          free(s1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s10 = 65025;
          struct TYPE_4__ * s1 = (struct TYPE_4__ *) malloc(_len_s10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__pack_stack0 = 1;
          s1[_i0].pack_stack = (long *) malloc(_len_s1__i0__pack_stack0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack0; _j0++) {
            s1[_i0].pack_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s1__i0__pack_stack_ptr0 = 1;
          s1[_i0].pack_stack_ptr = (long *) malloc(_len_s1__i0__pack_stack_ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack_ptr0; _j0++) {
            s1[_i0].pack_stack_ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s1[_i0].ifdef_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].ifdef_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          preprocess_init(s1);
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack);
          }
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack_ptr);
          }
          free(s1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s10 = 100;
          struct TYPE_4__ * s1 = (struct TYPE_4__ *) malloc(_len_s10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
              int _len_s1__i0__pack_stack0 = 1;
          s1[_i0].pack_stack = (long *) malloc(_len_s1__i0__pack_stack0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack0; _j0++) {
            s1[_i0].pack_stack[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s1__i0__pack_stack_ptr0 = 1;
          s1[_i0].pack_stack_ptr = (long *) malloc(_len_s1__i0__pack_stack_ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s1__i0__pack_stack_ptr0; _j0++) {
            s1[_i0].pack_stack_ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s1[_i0].ifdef_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].ifdef_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].include_stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          preprocess_init(s1);
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack);
          }
          for(int _aux = 0; _aux < _len_s10; _aux++) {
          free(s1[_aux].pack_stack_ptr);
          }
          free(s1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

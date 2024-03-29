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
struct TYPE_3__ {scalar_t__ use_cq; } ;
struct TYPE_4__ {TYPE_1__ out; } ;
struct qdio_q {TYPE_2__ u; int /*<<< orphan*/  is_input_q; } ;

/* Variables and functions */

__attribute__((used)) static inline int contains_aobs(struct qdio_q *q)
{
	return !q->is_input_q && q->u.out.use_cq;
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
          int _len_q0 = 1;
          struct qdio_q * q = (struct qdio_q *) malloc(_len_q0*sizeof(struct qdio_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].u.out.use_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].is_input_q = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = contains_aobs(q);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct qdio_q * q = (struct qdio_q *) malloc(_len_q0*sizeof(struct qdio_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].u.out.use_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].is_input_q = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = contains_aobs(q);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct qdio_q * q = (struct qdio_q *) malloc(_len_q0*sizeof(struct qdio_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].u.out.use_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].is_input_q = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = contains_aobs(q);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

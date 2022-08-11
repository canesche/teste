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
struct TYPE_3__ {int* invoke_used; } ;
struct TYPE_4__ {TYPE_1__ ni1; } ;
struct PStack {TYPE_2__ prot; } ;

/* Variables and functions */

__attribute__((used)) static void free_invoke_id(struct PStack *p, unsigned char id)
{

	if (!id) return; /* 0 = invalid value */

	p->prot.ni1.invoke_used[id >> 3] &= ~(1 << (id & 7));
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
          unsigned char id = 100;
          int _len_p0 = 1;
          struct PStack * p = (struct PStack *) malloc(_len_p0*sizeof(struct PStack));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__prot_ni1_invoke_used0 = 1;
          p[_i0].prot.ni1.invoke_used = (int *) malloc(_len_p__i0__prot_ni1_invoke_used0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__prot_ni1_invoke_used0; _j0++) {
            p[_i0].prot.ni1.invoke_used[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          free_invoke_id(p,id);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char id = 255;
          int _len_p0 = 65025;
          struct PStack * p = (struct PStack *) malloc(_len_p0*sizeof(struct PStack));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__prot_ni1_invoke_used0 = 1;
          p[_i0].prot.ni1.invoke_used = (int *) malloc(_len_p__i0__prot_ni1_invoke_used0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__prot_ni1_invoke_used0; _j0++) {
            p[_i0].prot.ni1.invoke_used[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          free_invoke_id(p,id);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char id = 10;
          int _len_p0 = 100;
          struct PStack * p = (struct PStack *) malloc(_len_p0*sizeof(struct PStack));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__prot_ni1_invoke_used0 = 1;
          p[_i0].prot.ni1.invoke_used = (int *) malloc(_len_p__i0__prot_ni1_invoke_used0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__prot_ni1_invoke_used0; _j0++) {
            p[_i0].prot.ni1.invoke_used[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          free_invoke_id(p,id);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

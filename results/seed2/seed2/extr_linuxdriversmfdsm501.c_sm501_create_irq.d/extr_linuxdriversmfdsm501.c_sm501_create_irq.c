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

/* Type definitions */
struct sm501_devdata {int /*<<< orphan*/  irq; } ;
struct resource {int /*<<< orphan*/  end; int /*<<< orphan*/  start; int /*<<< orphan*/ * parent; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  IORESOURCE_IRQ ; 

__attribute__((used)) static void sm501_create_irq(struct sm501_devdata *sm,
			     struct resource *res)
{
	res->flags = IORESOURCE_IRQ;
	res->parent = NULL;
	res->start = res->end = sm->irq;
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
          int _len_sm0 = 1;
          struct sm501_devdata * sm = (struct sm501_devdata *) malloc(_len_sm0*sizeof(struct sm501_devdata));
          for(int _i0 = 0; _i0 < _len_sm0; _i0++) {
            sm[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__parent0 = 1;
          res[_i0].parent = (int *) malloc(_len_res__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__parent0; _j0++) {
            res[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sm501_create_irq(sm,res);
          free(sm);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].parent);
          }
          free(res);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sm0 = 65025;
          struct sm501_devdata * sm = (struct sm501_devdata *) malloc(_len_sm0*sizeof(struct sm501_devdata));
          for(int _i0 = 0; _i0 < _len_sm0; _i0++) {
            sm[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 65025;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__parent0 = 1;
          res[_i0].parent = (int *) malloc(_len_res__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__parent0; _j0++) {
            res[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sm501_create_irq(sm,res);
          free(sm);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].parent);
          }
          free(res);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sm0 = 100;
          struct sm501_devdata * sm = (struct sm501_devdata *) malloc(_len_sm0*sizeof(struct sm501_devdata));
          for(int _i0 = 0; _i0 < _len_sm0; _i0++) {
            sm[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 100;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
        res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res__i0__parent0 = 1;
          res[_i0].parent = (int *) malloc(_len_res__i0__parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__parent0; _j0++) {
            res[_i0].parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        res[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sm501_create_irq(sm,res);
          free(sm);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].parent);
          }
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

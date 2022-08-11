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
struct sway_transaction_instruction {scalar_t__ node; } ;
struct sway_transaction {TYPE_1__* instructions; } ;
struct TYPE_2__ {scalar_t__ length; struct sway_transaction_instruction** items; } ;

/* Variables and functions */

__attribute__((used)) static bool transaction_same_nodes(struct sway_transaction *a,
		struct sway_transaction *b) {
	if (a->instructions->length != b->instructions->length) {
		return false;
	}
	for (int i = 0; i < a->instructions->length; ++i) {
		struct sway_transaction_instruction *a_inst = a->instructions->items[i];
		struct sway_transaction_instruction *b_inst = b->instructions->items[i];
		if (a_inst->node != b_inst->node) {
			return false;
		}
	}
	return true;
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
          int _len_a0 = 1;
          struct sway_transaction * a = (struct sway_transaction *) malloc(_len_a0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__instructions0 = 1;
          a[_i0].instructions = (struct TYPE_2__ *) malloc(_len_a__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions0; _j0++) {
            a[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__instructions_items0 = 1;
          a[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_a__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions_items0; _j0++) {
            int _len_a__i0__instructions_items1 = 1;
            a[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_a__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_a__i0__instructions_items1; _j1++) {
              a[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_b0 = 1;
          struct sway_transaction * b = (struct sway_transaction *) malloc(_len_b0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__instructions0 = 1;
          b[_i0].instructions = (struct TYPE_2__ *) malloc(_len_b__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions0; _j0++) {
            b[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__instructions_items0 = 1;
          b[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_b__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions_items0; _j0++) {
            int _len_b__i0__instructions_items1 = 1;
            b[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_b__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_b__i0__instructions_items1; _j1++) {
              b[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = transaction_same_nodes(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].instructions);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].instructions);
          }
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct sway_transaction * a = (struct sway_transaction *) malloc(_len_a0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__instructions0 = 1;
          a[_i0].instructions = (struct TYPE_2__ *) malloc(_len_a__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions0; _j0++) {
            a[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__instructions_items0 = 1;
          a[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_a__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions_items0; _j0++) {
            int _len_a__i0__instructions_items1 = 1;
            a[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_a__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_a__i0__instructions_items1; _j1++) {
              a[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_b0 = 65025;
          struct sway_transaction * b = (struct sway_transaction *) malloc(_len_b0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__instructions0 = 1;
          b[_i0].instructions = (struct TYPE_2__ *) malloc(_len_b__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions0; _j0++) {
            b[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__instructions_items0 = 1;
          b[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_b__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions_items0; _j0++) {
            int _len_b__i0__instructions_items1 = 1;
            b[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_b__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_b__i0__instructions_items1; _j1++) {
              b[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = transaction_same_nodes(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].instructions);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].instructions);
          }
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct sway_transaction * a = (struct sway_transaction *) malloc(_len_a0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__instructions0 = 1;
          a[_i0].instructions = (struct TYPE_2__ *) malloc(_len_a__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions0; _j0++) {
            a[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__instructions_items0 = 1;
          a[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_a__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_a__i0__instructions_items0; _j0++) {
            int _len_a__i0__instructions_items1 = 1;
            a[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_a__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_a__i0__instructions_items1; _j1++) {
              a[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_b0 = 100;
          struct sway_transaction * b = (struct sway_transaction *) malloc(_len_b0*sizeof(struct sway_transaction));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__instructions0 = 1;
          b[_i0].instructions = (struct TYPE_2__ *) malloc(_len_b__i0__instructions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions0; _j0++) {
            b[_i0].instructions->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__instructions_items0 = 1;
          b[_i0].instructions->items = (struct sway_transaction_instruction **) malloc(_len_b__i0__instructions_items0*sizeof(struct sway_transaction_instruction *));
          for(int _j0 = 0; _j0 < _len_b__i0__instructions_items0; _j0++) {
            int _len_b__i0__instructions_items1 = 1;
            b[_i0].instructions->items[_j0] = (struct sway_transaction_instruction *) malloc(_len_b__i0__instructions_items1*sizeof(struct sway_transaction_instruction));
            for(int _j1 = 0; _j1 < _len_b__i0__instructions_items1; _j1++) {
              b[_i0].instructions->items[_j0]->node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = transaction_same_nodes(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].instructions);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].instructions);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

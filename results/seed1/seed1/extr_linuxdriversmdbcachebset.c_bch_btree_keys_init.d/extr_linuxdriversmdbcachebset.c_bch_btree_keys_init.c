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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct btree_keys_ops {int dummy; } ;
struct btree_keys {int* expensive_debug_checks; TYPE_1__* set; scalar_t__ last_set_unwritten; scalar_t__ nsets; struct btree_keys_ops const* ops; } ;
struct TYPE_2__ {int /*<<< orphan*/ * data; scalar_t__ size; } ;

/* Variables and functions */
 unsigned int MAX_BSETS ; 

void bch_btree_keys_init(struct btree_keys *b, const struct btree_keys_ops *ops,
			 bool *expensive_debug_checks)
{
	unsigned int i;

	b->ops = ops;
	b->expensive_debug_checks = expensive_debug_checks;
	b->nsets = 0;
	b->last_set_unwritten = 0;

	/* XXX: shouldn't be needed */
	for (i = 0; i < MAX_BSETS; i++)
		b->set[i].size = 0;
	/*
	 * Second loop starts at 1 because b->keys[0]->data is the memory we
	 * allocated
	 */
	for (i = 1; i < MAX_BSETS; i++)
		b->set[i].data = NULL;
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
          int _len_b0 = 1;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__expensive_debug_checks0 = 1;
          b[_i0].expensive_debug_checks = (int *) malloc(_len_b__i0__expensive_debug_checks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__expensive_debug_checks0; _j0++) {
            b[_i0].expensive_debug_checks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (int *) malloc(_len_b__i0__set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
            b[_i0].set->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].set->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ops0 = 1;
          b[_i0].ops = (const struct btree_keys_ops *) malloc(_len_b__i0__ops0*sizeof(const struct btree_keys_ops));
          for(int _j0 = 0; _j0 < _len_b__i0__ops0; _j0++) {
              }
          }
          int _len_ops0 = 1;
          const struct btree_keys_ops * ops = (const struct btree_keys_ops *) malloc(_len_ops0*sizeof(const struct btree_keys_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
              }
          int _len_expensive_debug_checks0 = 1;
          int * expensive_debug_checks = (int *) malloc(_len_expensive_debug_checks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_expensive_debug_checks0; _i0++) {
            expensive_debug_checks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bch_btree_keys_init(b,ops,expensive_debug_checks);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].expensive_debug_checks);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ops);
          }
          free(b);
          free(ops);
          free(expensive_debug_checks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__expensive_debug_checks0 = 1;
          b[_i0].expensive_debug_checks = (int *) malloc(_len_b__i0__expensive_debug_checks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__expensive_debug_checks0; _j0++) {
            b[_i0].expensive_debug_checks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (int *) malloc(_len_b__i0__set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
            b[_i0].set->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].set->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ops0 = 1;
          b[_i0].ops = (const struct btree_keys_ops *) malloc(_len_b__i0__ops0*sizeof(const struct btree_keys_ops));
          for(int _j0 = 0; _j0 < _len_b__i0__ops0; _j0++) {
              }
          }
          int _len_ops0 = 65025;
          const struct btree_keys_ops * ops = (const struct btree_keys_ops *) malloc(_len_ops0*sizeof(const struct btree_keys_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
              }
          int _len_expensive_debug_checks0 = 65025;
          int * expensive_debug_checks = (int *) malloc(_len_expensive_debug_checks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_expensive_debug_checks0; _i0++) {
            expensive_debug_checks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bch_btree_keys_init(b,ops,expensive_debug_checks);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].expensive_debug_checks);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ops);
          }
          free(b);
          free(ops);
          free(expensive_debug_checks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__expensive_debug_checks0 = 1;
          b[_i0].expensive_debug_checks = (int *) malloc(_len_b__i0__expensive_debug_checks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__expensive_debug_checks0; _j0++) {
            b[_i0].expensive_debug_checks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (int *) malloc(_len_b__i0__set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
            b[_i0].set->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].set->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ops0 = 1;
          b[_i0].ops = (const struct btree_keys_ops *) malloc(_len_b__i0__ops0*sizeof(const struct btree_keys_ops));
          for(int _j0 = 0; _j0 < _len_b__i0__ops0; _j0++) {
              }
          }
          int _len_ops0 = 100;
          const struct btree_keys_ops * ops = (const struct btree_keys_ops *) malloc(_len_ops0*sizeof(const struct btree_keys_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
              }
          int _len_expensive_debug_checks0 = 100;
          int * expensive_debug_checks = (int *) malloc(_len_expensive_debug_checks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_expensive_debug_checks0; _i0++) {
            expensive_debug_checks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bch_btree_keys_init(b,ops,expensive_debug_checks);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].expensive_debug_checks);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ops);
          }
          free(b);
          free(ops);
          free(expensive_debug_checks);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_b0 = 1;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__expensive_debug_checks0 = 1;
          b[_i0].expensive_debug_checks = (int *) malloc(_len_b__i0__expensive_debug_checks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__expensive_debug_checks0; _j0++) {
            b[_i0].expensive_debug_checks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_2__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (int *) malloc(_len_b__i0__set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
            b[_i0].set->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].set->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__ops0 = 1;
          b[_i0].ops = (const struct btree_keys_ops *) malloc(_len_b__i0__ops0*sizeof(const struct btree_keys_ops));
          for(int _j0 = 0; _j0 < _len_b__i0__ops0; _j0++) {
              }
          }
          int _len_ops0 = 1;
          const struct btree_keys_ops * ops = (const struct btree_keys_ops *) malloc(_len_ops0*sizeof(const struct btree_keys_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
              }
          int _len_expensive_debug_checks0 = 1;
          int * expensive_debug_checks = (int *) malloc(_len_expensive_debug_checks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_expensive_debug_checks0; _i0++) {
            expensive_debug_checks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bch_btree_keys_init(b,ops,expensive_debug_checks);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].expensive_debug_checks);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].ops);
          }
          free(b);
          free(ops);
          free(expensive_debug_checks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

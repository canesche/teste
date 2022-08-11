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
struct btree_keys {size_t nsets; TYPE_2__* set; int /*<<< orphan*/  last_set_unwritten; } ;
struct bkey {int dummy; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {struct bkey* start; } ;

/* Variables and functions */

__attribute__((used)) static inline bool bkey_written(struct btree_keys *b, struct bkey *k)
{
	return !b->last_set_unwritten || k < b->set[b->nsets].data->start;
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
            b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_4__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (struct TYPE_3__ *) malloc(_len_b__i0__set_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
              int _len_b__i0__set_data_start0 = 1;
          b[_i0].set->data->start = (struct bkey *) malloc(_len_b__i0__set_data_start0*sizeof(struct bkey));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data_start0; _j0++) {
            b[_i0].set->data->start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 1;
          struct bkey * k = (struct bkey *) malloc(_len_k0*sizeof(struct bkey));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bkey_written(b,k);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(k);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_4__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (struct TYPE_3__ *) malloc(_len_b__i0__set_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
              int _len_b__i0__set_data_start0 = 1;
          b[_i0].set->data->start = (struct bkey *) malloc(_len_b__i0__set_data_start0*sizeof(struct bkey));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data_start0; _j0++) {
            b[_i0].set->data->start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 65025;
          struct bkey * k = (struct bkey *) malloc(_len_k0*sizeof(struct bkey));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bkey_written(b,k);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(k);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct btree_keys * b = (struct btree_keys *) malloc(_len_b0*sizeof(struct btree_keys));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].nsets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__set0 = 1;
          b[_i0].set = (struct TYPE_4__ *) malloc(_len_b__i0__set0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_b__i0__set0; _j0++) {
              int _len_b__i0__set_data0 = 1;
          b[_i0].set->data = (struct TYPE_3__ *) malloc(_len_b__i0__set_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data0; _j0++) {
              int _len_b__i0__set_data_start0 = 1;
          b[_i0].set->data->start = (struct bkey *) malloc(_len_b__i0__set_data_start0*sizeof(struct bkey));
          for(int _j0 = 0; _j0 < _len_b__i0__set_data_start0; _j0++) {
            b[_i0].set->data->start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        b[_i0].last_set_unwritten = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 100;
          struct bkey * k = (struct bkey *) malloc(_len_k0*sizeof(struct bkey));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bkey_written(b,k);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].set);
          }
          free(b);
          free(k);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

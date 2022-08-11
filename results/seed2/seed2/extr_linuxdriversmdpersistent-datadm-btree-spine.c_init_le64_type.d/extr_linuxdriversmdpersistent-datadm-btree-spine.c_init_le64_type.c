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
struct dm_transaction_manager {int dummy; } ;
struct dm_btree_value_type {int size; int /*<<< orphan*/  equal; int /*<<< orphan*/  dec; int /*<<< orphan*/  inc; struct dm_transaction_manager* context; } ;
typedef  int /*<<< orphan*/  __le64 ;

/* Variables and functions */
 int /*<<< orphan*/  le64_dec ; 
 int /*<<< orphan*/  le64_equal ; 
 int /*<<< orphan*/  le64_inc ; 

void init_le64_type(struct dm_transaction_manager *tm,
		    struct dm_btree_value_type *vt)
{
	vt->context = tm;
	vt->size = sizeof(__le64);
	vt->inc = le64_inc;
	vt->dec = le64_dec;
	vt->equal = le64_equal;
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
          int _len_tm0 = 1;
          struct dm_transaction_manager * tm = (struct dm_transaction_manager *) malloc(_len_tm0*sizeof(struct dm_transaction_manager));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vt0 = 1;
          struct dm_btree_value_type * vt = (struct dm_btree_value_type *) malloc(_len_vt0*sizeof(struct dm_btree_value_type));
          for(int _i0 = 0; _i0 < _len_vt0; _i0++) {
            vt[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].equal = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].dec = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vt__i0__context0 = 1;
          vt[_i0].context = (struct dm_transaction_manager *) malloc(_len_vt__i0__context0*sizeof(struct dm_transaction_manager));
          for(int _j0 = 0; _j0 < _len_vt__i0__context0; _j0++) {
            vt[_i0].context->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_le64_type(tm,vt);
          free(tm);
          for(int _aux = 0; _aux < _len_vt0; _aux++) {
          free(vt[_aux].context);
          }
          free(vt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tm0 = 65025;
          struct dm_transaction_manager * tm = (struct dm_transaction_manager *) malloc(_len_tm0*sizeof(struct dm_transaction_manager));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vt0 = 65025;
          struct dm_btree_value_type * vt = (struct dm_btree_value_type *) malloc(_len_vt0*sizeof(struct dm_btree_value_type));
          for(int _i0 = 0; _i0 < _len_vt0; _i0++) {
            vt[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].equal = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].dec = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vt__i0__context0 = 1;
          vt[_i0].context = (struct dm_transaction_manager *) malloc(_len_vt__i0__context0*sizeof(struct dm_transaction_manager));
          for(int _j0 = 0; _j0 < _len_vt__i0__context0; _j0++) {
            vt[_i0].context->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_le64_type(tm,vt);
          free(tm);
          for(int _aux = 0; _aux < _len_vt0; _aux++) {
          free(vt[_aux].context);
          }
          free(vt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tm0 = 100;
          struct dm_transaction_manager * tm = (struct dm_transaction_manager *) malloc(_len_tm0*sizeof(struct dm_transaction_manager));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vt0 = 100;
          struct dm_btree_value_type * vt = (struct dm_btree_value_type *) malloc(_len_vt0*sizeof(struct dm_btree_value_type));
          for(int _i0 = 0; _i0 < _len_vt0; _i0++) {
            vt[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].equal = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].dec = ((-2 * (next_i()%2)) + 1) * next_i();
        vt[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vt__i0__context0 = 1;
          vt[_i0].context = (struct dm_transaction_manager *) malloc(_len_vt__i0__context0*sizeof(struct dm_transaction_manager));
          for(int _j0 = 0; _j0 < _len_vt__i0__context0; _j0++) {
            vt[_i0].context->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_le64_type(tm,vt);
          free(tm);
          for(int _aux = 0; _aux < _len_vt0; _aux++) {
          free(vt[_aux].context);
          }
          free(vt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

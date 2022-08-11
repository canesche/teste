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
struct pool {int dummy; } ;
struct hash_table {unsigned int num_buckets; int /*<<< orphan*/ * buckets; struct pool* pool; scalar_t__ num_elts; } ;

/* Variables and functions */

void hash_table_init(struct pool* pool, struct hash_table* ht, unsigned num_buckets)
{
    ht->num_elts = 0;
    ht->num_buckets = num_buckets;
    ht->pool = pool;
    ht->buckets = NULL;
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
          unsigned int num_buckets = 100;
          int _len_pool0 = 1;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht0 = 1;
          struct hash_table * ht = (struct hash_table *) malloc(_len_ht0*sizeof(struct hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].num_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht__i0__pool0 = 1;
          ht[_i0].pool = (struct pool *) malloc(_len_ht__i0__pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ht__i0__pool0; _j0++) {
            ht[_i0].pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ht[_i0].num_elts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hash_table_init(pool,ht,num_buckets);
          free(pool);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].pool);
          }
          free(ht);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int num_buckets = 255;
          int _len_pool0 = 65025;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht0 = 65025;
          struct hash_table * ht = (struct hash_table *) malloc(_len_ht0*sizeof(struct hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].num_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht__i0__pool0 = 1;
          ht[_i0].pool = (struct pool *) malloc(_len_ht__i0__pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ht__i0__pool0; _j0++) {
            ht[_i0].pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ht[_i0].num_elts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hash_table_init(pool,ht,num_buckets);
          free(pool);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].pool);
          }
          free(ht);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int num_buckets = 10;
          int _len_pool0 = 100;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht0 = 100;
          struct hash_table * ht = (struct hash_table *) malloc(_len_ht0*sizeof(struct hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].num_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ht__i0__pool0 = 1;
          ht[_i0].pool = (struct pool *) malloc(_len_ht__i0__pool0*sizeof(struct pool));
          for(int _j0 = 0; _j0 < _len_ht__i0__pool0; _j0++) {
            ht[_i0].pool->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ht[_i0].num_elts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hash_table_init(pool,ht,num_buckets);
          free(pool);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].pool);
          }
          free(ht);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

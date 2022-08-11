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
struct crush_work_bucket {int dummy; } ;
struct crush_work {int dummy; } ;
struct crush_map {int working_size; int max_buckets; TYPE_1__** buckets; } ;
typedef  int /*<<< orphan*/  __u32 ;
typedef  size_t __s32 ;
struct TYPE_2__ {int alg; int size; } ;

/* Variables and functions */

__attribute__((used)) static void crush_finalize(struct crush_map *c)
{
	__s32 b;

	/* Space for the array of pointers to per-bucket workspace */
	c->working_size = sizeof(struct crush_work) +
	    c->max_buckets * sizeof(struct crush_work_bucket *);

	for (b = 0; b < c->max_buckets; b++) {
		if (!c->buckets[b])
			continue;

		switch (c->buckets[b]->alg) {
		default:
			/*
			 * The base case, permutation variables and
			 * the pointer to the permutation array.
			 */
			c->working_size += sizeof(struct crush_work_bucket);
			break;
		}
		/* Every bucket has a permutation array. */
		c->working_size += c->buckets[b]->size * sizeof(__u32);
	}
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
          int _len_c0 = 1;
          struct crush_map * c = (struct crush_map *) malloc(_len_c0*sizeof(struct crush_map));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].working_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].max_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__buckets0 = 1;
          c[_i0].buckets = (struct TYPE_2__ **) malloc(_len_c__i0__buckets0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_c__i0__buckets0; _j0++) {
            int _len_c__i0__buckets1 = 1;
            c[_i0].buckets[_j0] = (struct TYPE_2__ *) malloc(_len_c__i0__buckets1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_c__i0__buckets1; _j1++) {
              c[_i0].buckets[_j0]->alg = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].buckets[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          crush_finalize(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].buckets));
        free(c[_aux].buckets);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct crush_map * c = (struct crush_map *) malloc(_len_c0*sizeof(struct crush_map));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].working_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].max_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__buckets0 = 1;
          c[_i0].buckets = (struct TYPE_2__ **) malloc(_len_c__i0__buckets0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_c__i0__buckets0; _j0++) {
            int _len_c__i0__buckets1 = 1;
            c[_i0].buckets[_j0] = (struct TYPE_2__ *) malloc(_len_c__i0__buckets1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_c__i0__buckets1; _j1++) {
              c[_i0].buckets[_j0]->alg = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].buckets[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          crush_finalize(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].buckets));
        free(c[_aux].buckets);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct crush_map * c = (struct crush_map *) malloc(_len_c0*sizeof(struct crush_map));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].working_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].max_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__buckets0 = 1;
          c[_i0].buckets = (struct TYPE_2__ **) malloc(_len_c__i0__buckets0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_c__i0__buckets0; _j0++) {
            int _len_c__i0__buckets1 = 1;
            c[_i0].buckets[_j0] = (struct TYPE_2__ *) malloc(_len_c__i0__buckets1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_c__i0__buckets1; _j1++) {
              c[_i0].buckets[_j0]->alg = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].buckets[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          crush_finalize(c);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].buckets));
        free(c[_aux].buckets);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

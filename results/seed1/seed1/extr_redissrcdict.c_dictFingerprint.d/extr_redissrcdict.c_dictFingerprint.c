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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* ht; } ;
typedef  TYPE_2__ dict ;
struct TYPE_4__ {long long size; long long used; scalar_t__ table; } ;

/* Variables and functions */

long long dictFingerprint(dict *d) {
    long long integers[6], hash = 0;
    int j;

    integers[0] = (long) d->ht[0].table;
    integers[1] = d->ht[0].size;
    integers[2] = d->ht[0].used;
    integers[3] = (long) d->ht[1].table;
    integers[4] = d->ht[1].size;
    integers[5] = d->ht[1].used;

    /* We hash N integers by summing every successive integer with the integer
     * hashing of the previous sum. Basically:
     *
     * Result = hash(hash(hash(int1)+int2)+int3) ...
     *
     * This way the same set of integers in a different order will (likely) hash
     * to a different number. */
    for (j = 0; j < 6; j++) {
        hash += integers[j];
        /* For the hashing step we use Tomas Wang's 64 bit integer hash. */
        hash = (~hash) + (hash << 21); // hash = (hash << 21) - hash - 1;
        hash = hash ^ (hash >> 24);
        hash = (hash + (hash << 3)) + (hash << 8); // hash * 265
        hash = hash ^ (hash >> 14);
        hash = (hash + (hash << 2)) + (hash << 4); // hash * 21
        hash = hash ^ (hash >> 28);
        hash = hash + (hash << 31);
    }
    return hash;
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
          int _len_d0 = 1;
          struct TYPE_5__ * d = (struct TYPE_5__ *) malloc(_len_d0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__ht0 = 1;
          d[_i0].ht = (struct TYPE_4__ *) malloc(_len_d__i0__ht0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_d__i0__ht0; _j0++) {
            d[_i0].ht->size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->used = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = dictFingerprint(d);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].ht);
          }
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_d0 = 65025;
          struct TYPE_5__ * d = (struct TYPE_5__ *) malloc(_len_d0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__ht0 = 1;
          d[_i0].ht = (struct TYPE_4__ *) malloc(_len_d__i0__ht0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_d__i0__ht0; _j0++) {
            d[_i0].ht->size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->used = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = dictFingerprint(d);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].ht);
          }
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_d0 = 100;
          struct TYPE_5__ * d = (struct TYPE_5__ *) malloc(_len_d0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__ht0 = 1;
          d[_i0].ht = (struct TYPE_4__ *) malloc(_len_d__i0__ht0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_d__i0__ht0; _j0++) {
            d[_i0].ht->size = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->used = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].ht->table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long long benchRet = dictFingerprint(d);
          printf("%lld\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].ht);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

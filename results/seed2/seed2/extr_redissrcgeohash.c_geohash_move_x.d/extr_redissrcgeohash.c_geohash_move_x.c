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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
typedef  scalar_t__ int8_t ;
struct TYPE_3__ {int bits; int step; } ;
typedef  TYPE_1__ GeoHashBits ;

/* Variables and functions */

__attribute__((used)) static void geohash_move_x(GeoHashBits *hash, int8_t d) {
    if (d == 0)
        return;

    uint64_t x = hash->bits & 0xaaaaaaaaaaaaaaaaULL;
    uint64_t y = hash->bits & 0x5555555555555555ULL;

    uint64_t zz = 0x5555555555555555ULL >> (64 - hash->step * 2);

    if (d > 0) {
        x = x + (zz + 1);
    } else {
        x = x | zz;
        x = x - (zz + 1);
    }

    x &= (0xaaaaaaaaaaaaaaaaULL >> (64 - hash->step * 2));
    hash->bits = (x | y);
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
          long d = 100;
          int _len_hash0 = 1;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        hash[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          geohash_move_x(hash,d);
          free(hash);
        
        break;
    }
    // big-arr
    case 1:
    {
          long d = 255;
          int _len_hash0 = 65025;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        hash[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          geohash_move_x(hash,d);
          free(hash);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long d = 10;
          int _len_hash0 = 100;
          struct TYPE_3__ * hash = (struct TYPE_3__ *) malloc(_len_hash0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hash0; _i0++) {
            hash[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
        hash[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          geohash_move_x(hash,d);
          free(hash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int stb_uint ;
struct TYPE_3__ {unsigned int multiplicand; unsigned int* table; int b_mask; int table_mask; int* large_bmap; int* small_bmap; } ;
typedef  TYPE_1__ stb_perfect ;

/* Variables and functions */

int stb_perfect_hash(stb_perfect *p, unsigned int x)
{
   stb_uint m = x * p->multiplicand;
   stb_uint y = x >> 16;
   stb_uint bv = (m >> 24) + y;
   stb_uint av = (m + y) >> 12;
   if (p->table == NULL) return -1;  // uninitialized table fails
   bv &= p->b_mask;
   av &= p->table_mask;
   if (p->large_bmap)
      av ^= p->large_bmap[bv];
   else
      av ^= p->small_bmap[bv];
   return p->table[av] == x ? av : -1;
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
          unsigned int x = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].multiplicand = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__table0 = 1;
          p[_i0].table = (unsigned int *) malloc(_len_p__i0__table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_p__i0__table0; _j0++) {
            p[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].b_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].table_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__large_bmap0 = 1;
          p[_i0].large_bmap = (int *) malloc(_len_p__i0__large_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__large_bmap0; _j0++) {
            p[_i0].large_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__small_bmap0 = 1;
          p[_i0].small_bmap = (int *) malloc(_len_p__i0__small_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__small_bmap0; _j0++) {
            p[_i0].small_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stb_perfect_hash(p,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].table);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].large_bmap);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].small_bmap);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int x = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].multiplicand = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__table0 = 1;
          p[_i0].table = (unsigned int *) malloc(_len_p__i0__table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_p__i0__table0; _j0++) {
            p[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].b_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].table_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__large_bmap0 = 1;
          p[_i0].large_bmap = (int *) malloc(_len_p__i0__large_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__large_bmap0; _j0++) {
            p[_i0].large_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__small_bmap0 = 1;
          p[_i0].small_bmap = (int *) malloc(_len_p__i0__small_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__small_bmap0; _j0++) {
            p[_i0].small_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stb_perfect_hash(p,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].table);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].large_bmap);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].small_bmap);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int x = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].multiplicand = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__table0 = 1;
          p[_i0].table = (unsigned int *) malloc(_len_p__i0__table0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_p__i0__table0; _j0++) {
            p[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].b_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].table_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__large_bmap0 = 1;
          p[_i0].large_bmap = (int *) malloc(_len_p__i0__large_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__large_bmap0; _j0++) {
            p[_i0].large_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__small_bmap0 = 1;
          p[_i0].small_bmap = (int *) malloc(_len_p__i0__small_bmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__small_bmap0; _j0++) {
            p[_i0].small_bmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stb_perfect_hash(p,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].table);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].large_bmap);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].small_bmap);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

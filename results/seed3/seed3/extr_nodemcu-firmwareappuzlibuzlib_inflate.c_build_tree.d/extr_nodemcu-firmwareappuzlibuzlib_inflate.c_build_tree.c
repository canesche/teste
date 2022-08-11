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
typedef  int ushort ;
typedef  int uint ;
typedef  size_t uchar ;
struct TYPE_3__ {int* table; int* trans; } ;
typedef  TYPE_1__ UZLIB_TREE ;

/* Variables and functions */

__attribute__((used)) static void build_tree (UZLIB_TREE *t, const uchar *lengths, uint num) {
  ushort offs[16];
  uint i, sum;

  /* clear code length count table */
  for (i = 0; i < 16; ++i)
    t->table[i] = 0;

  /* scan symbol lengths, and sum code length counts */
  for (i = 0; i < num; ++i)
    t->table[lengths[i]]++;
  t->table[0] = 0;

  /* compute offset table for distribution sort */
  for (sum = 0, i = 0; i < 16; ++i) {
    offs[i] = sum;
    sum += t->table[i];
  }

  /* create code->symbol translation table (symbols sorted by code) */
  for (i = 0; i < num; ++i) {
    if (lengths[i])
      t->trans[offs[lengths[i]]++] = i;
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
          int num = 100;
          int _len_t0 = 1;
          struct TYPE_3__ * t = (struct TYPE_3__ *) malloc(_len_t0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__table0 = 1;
          t[_i0].table = (int *) malloc(_len_t__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__table0; _j0++) {
            t[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__trans0 = 1;
          t[_i0].trans = (int *) malloc(_len_t__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__trans0; _j0++) {
            t[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lengths0 = 1;
          const unsigned long * lengths = (const unsigned long *) malloc(_len_lengths0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lengths0; _i0++) {
            lengths[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          build_tree(t,lengths,num);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].table);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].trans);
          }
          free(t);
          free(lengths);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num = 255;
          int _len_t0 = 65025;
          struct TYPE_3__ * t = (struct TYPE_3__ *) malloc(_len_t0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__table0 = 1;
          t[_i0].table = (int *) malloc(_len_t__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__table0; _j0++) {
            t[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__trans0 = 1;
          t[_i0].trans = (int *) malloc(_len_t__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__trans0; _j0++) {
            t[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lengths0 = 65025;
          const unsigned long * lengths = (const unsigned long *) malloc(_len_lengths0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lengths0; _i0++) {
            lengths[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          build_tree(t,lengths,num);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].table);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].trans);
          }
          free(t);
          free(lengths);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num = 10;
          int _len_t0 = 100;
          struct TYPE_3__ * t = (struct TYPE_3__ *) malloc(_len_t0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__table0 = 1;
          t[_i0].table = (int *) malloc(_len_t__i0__table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__table0; _j0++) {
            t[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__trans0 = 1;
          t[_i0].trans = (int *) malloc(_len_t__i0__trans0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__trans0; _j0++) {
            t[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lengths0 = 100;
          const unsigned long * lengths = (const unsigned long *) malloc(_len_lengths0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lengths0; _i0++) {
            lengths[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          build_tree(t,lengths,num);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].table);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].trans);
          }
          free(t);
          free(lengths);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

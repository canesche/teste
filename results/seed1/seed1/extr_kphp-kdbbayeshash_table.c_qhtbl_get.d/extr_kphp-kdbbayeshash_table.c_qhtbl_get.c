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
struct TYPE_5__ {scalar_t__ size; unsigned int n; TYPE_1__* e; } ;
typedef  TYPE_2__ qhash_table ;
typedef  int /*<<< orphan*/  pair ;
typedef  scalar_t__ ll ;
struct TYPE_4__ {scalar_t__ h; int /*<<< orphan*/  val; } ;

/* Variables and functions */

inline pair *qhtbl_get (qhash_table *ht, ll h) {
  if (ht->size == 0) {
    return NULL;
  }
  int i = (unsigned int)h % ht->n;

  while (ht->e[i].h != h && ht->e[i].h) {
    if (++i == ht->n) {
      i = 0;
    }
  }

  return ht->e[i].h ? &ht->e[i].val : NULL;
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
          long h = 100;
          int _len_ht0 = 1;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__e0 = 1;
          ht[_i0].e = (struct TYPE_4__ *) malloc(_len_ht__i0__e0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ht__i0__e0; _j0++) {
            ht[_i0].e->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].e->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qhtbl_get(ht,h);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].e);
          }
          free(ht);
        
        break;
    }
    // big-arr
    case 1:
    {
          long h = 255;
          int _len_ht0 = 65025;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__e0 = 1;
          ht[_i0].e = (struct TYPE_4__ *) malloc(_len_ht__i0__e0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ht__i0__e0; _j0++) {
            ht[_i0].e->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].e->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qhtbl_get(ht,h);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].e);
          }
          free(ht);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long h = 10;
          int _len_ht0 = 100;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ht__i0__e0 = 1;
          ht[_i0].e = (struct TYPE_4__ *) malloc(_len_ht__i0__e0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ht__i0__e0; _j0++) {
            ht[_i0].e->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ht[_i0].e->val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = qhtbl_get(ht,h);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].e);
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

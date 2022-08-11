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
struct TYPE_4__ {int elem_size; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef  int /*<<< orphan*/  SdbKv ;
typedef  TYPE_2__ HtPP ;

/* Variables and functions */

__attribute__((used)) static inline SdbKv *next_kv(HtPP *ht, SdbKv *kv) {
	return (SdbKv *)((char *)kv + ht->opt.elem_size);
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
          int _len_ht0 = 1;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].opt.elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kv0 = 1;
          int * kv = (int *) malloc(_len_kv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = next_kv(ht,kv);
          printf("%d\n", (*benchRet)); 
          free(ht);
          free(kv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ht0 = 65025;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].opt.elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kv0 = 65025;
          int * kv = (int *) malloc(_len_kv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = next_kv(ht,kv);
          printf("%d\n", (*benchRet)); 
          free(ht);
          free(kv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ht0 = 100;
          struct TYPE_5__ * ht = (struct TYPE_5__ *) malloc(_len_ht0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0].opt.elem_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_kv0 = 100;
          int * kv = (int *) malloc(_len_kv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = next_kv(ht,kv);
          printf("%d\n", (*benchRet)); 
          free(ht);
          free(kv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

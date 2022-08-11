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
struct dstr {scalar_t__ capacity; scalar_t__ len; int /*<<< orphan*/ * array; } ;

/* Variables and functions */

__attribute__((used)) static inline void dstr_init(struct dstr *dst)
{
	dst->array    = NULL;
	dst->len      = 0;
	dst->capacity = 0;
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
          int _len_dst0 = 1;
          struct dstr * dst = (struct dstr *) malloc(_len_dst0*sizeof(struct dstr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].capacity = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__array0 = 1;
          dst[_i0].array = (int *) malloc(_len_dst__i0__array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__array0; _j0++) {
            dst[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dstr_init(dst);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].array);
          }
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          struct dstr * dst = (struct dstr *) malloc(_len_dst0*sizeof(struct dstr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].capacity = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__array0 = 1;
          dst[_i0].array = (int *) malloc(_len_dst__i0__array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__array0; _j0++) {
            dst[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dstr_init(dst);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].array);
          }
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          struct dstr * dst = (struct dstr *) malloc(_len_dst0*sizeof(struct dstr));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].capacity = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__array0 = 1;
          dst[_i0].array = (int *) malloc(_len_dst__i0__array0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__array0; _j0++) {
            dst[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dstr_init(dst);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].array);
          }
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

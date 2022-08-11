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
typedef  scalar_t__ uint64_t ;
typedef  int /*<<< orphan*/  ASN1_VALUE ;
typedef  int /*<<< orphan*/  ASN1_ITEM ;

/* Variables and functions */

__attribute__((used)) static void uint64_clear(ASN1_VALUE **pval, const ASN1_ITEM *it)
{
    **(uint64_t **)pval = 0;
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
          int _len_pval0 = 1;
          int ** pval = (int **) malloc(_len_pval0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            int _len_pval1 = 1;
            pval[_i0] = (int *) malloc(_len_pval1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pval1; _i1++) {
              pval[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_it0 = 1;
          const int * it = (const int *) malloc(_len_it0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
            it[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uint64_clear(pval,it);
          for(int i1 = 0; i1 < _len_pval0; i1++) {
            int _len_pval1 = 1;
              free(pval[i1]);
          }
          free(pval);
          free(it);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pval0 = 65025;
          int ** pval = (int **) malloc(_len_pval0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            int _len_pval1 = 1;
            pval[_i0] = (int *) malloc(_len_pval1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pval1; _i1++) {
              pval[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_it0 = 65025;
          const int * it = (const int *) malloc(_len_it0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
            it[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uint64_clear(pval,it);
          for(int i1 = 0; i1 < _len_pval0; i1++) {
            int _len_pval1 = 1;
              free(pval[i1]);
          }
          free(pval);
          free(it);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pval0 = 100;
          int ** pval = (int **) malloc(_len_pval0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pval0; _i0++) {
            int _len_pval1 = 1;
            pval[_i0] = (int *) malloc(_len_pval1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pval1; _i1++) {
              pval[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_it0 = 100;
          const int * it = (const int *) malloc(_len_it0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
            it[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uint64_clear(pval,it);
          for(int i1 = 0; i1 < _len_pval0; i1++) {
            int _len_pval1 = 1;
              free(pval[i1]);
          }
          free(pval);
          free(it);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

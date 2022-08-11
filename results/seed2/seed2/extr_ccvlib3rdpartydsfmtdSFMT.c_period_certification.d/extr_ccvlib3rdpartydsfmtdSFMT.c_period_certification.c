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
typedef  int uint64_t ;
struct TYPE_5__ {TYPE_1__* status; } ;
typedef  TYPE_2__ dsfmt_t ;
struct TYPE_4__ {int* u; } ;

/* Variables and functions */
 int DSFMT_FIX1 ; 
 int DSFMT_FIX2 ; 
 size_t DSFMT_N ; 
 int DSFMT_PCV1 ; 
 int DSFMT_PCV2 ; 

__attribute__((used)) static void period_certification(dsfmt_t *dsfmt) {
    uint64_t pcv[2] = {DSFMT_PCV1, DSFMT_PCV2};
    uint64_t tmp[2];
    uint64_t inner;
    int i;
#if (DSFMT_PCV2 & 1) != 1
    int j;
    uint64_t work;
#endif

    tmp[0] = (dsfmt->status[DSFMT_N].u[0] ^ DSFMT_FIX1);
    tmp[1] = (dsfmt->status[DSFMT_N].u[1] ^ DSFMT_FIX2);

    inner = tmp[0] & pcv[0];
    inner ^= tmp[1] & pcv[1];
    for (i = 32; i > 0; i >>= 1) {
        inner ^= inner >> i;
    }
    inner &= 1;
    /* check OK */
    if (inner == 1) {
	return;
    }
    /* check NG, and modification */
#if (DSFMT_PCV2 & 1) == 1
    dsfmt->status[DSFMT_N].u[1] ^= 1;
#else
    for (i = 1; i >= 0; i--) {
	work = 1;
	for (j = 0; j < 64; j++) {
	    if ((work & pcv[i]) != 0) {
		dsfmt->status[DSFMT_N].u[i] ^= work;
		return;
	    }
	    work = work << 1;
	}
    }
#endif
    return;
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
          int _len_dsfmt0 = 1;
          struct TYPE_5__ * dsfmt = (struct TYPE_5__ *) malloc(_len_dsfmt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dsfmt0; _i0++) {
              int _len_dsfmt__i0__status0 = 1;
          dsfmt[_i0].status = (struct TYPE_4__ *) malloc(_len_dsfmt__i0__status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status0; _j0++) {
              int _len_dsfmt__i0__status_u0 = 1;
          dsfmt[_i0].status->u = (int *) malloc(_len_dsfmt__i0__status_u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status_u0; _j0++) {
            dsfmt[_i0].status->u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          period_certification(dsfmt);
          for(int _aux = 0; _aux < _len_dsfmt0; _aux++) {
          free(dsfmt[_aux].status);
          }
          free(dsfmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dsfmt0 = 65025;
          struct TYPE_5__ * dsfmt = (struct TYPE_5__ *) malloc(_len_dsfmt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dsfmt0; _i0++) {
              int _len_dsfmt__i0__status0 = 1;
          dsfmt[_i0].status = (struct TYPE_4__ *) malloc(_len_dsfmt__i0__status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status0; _j0++) {
              int _len_dsfmt__i0__status_u0 = 1;
          dsfmt[_i0].status->u = (int *) malloc(_len_dsfmt__i0__status_u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status_u0; _j0++) {
            dsfmt[_i0].status->u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          period_certification(dsfmt);
          for(int _aux = 0; _aux < _len_dsfmt0; _aux++) {
          free(dsfmt[_aux].status);
          }
          free(dsfmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dsfmt0 = 100;
          struct TYPE_5__ * dsfmt = (struct TYPE_5__ *) malloc(_len_dsfmt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dsfmt0; _i0++) {
              int _len_dsfmt__i0__status0 = 1;
          dsfmt[_i0].status = (struct TYPE_4__ *) malloc(_len_dsfmt__i0__status0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status0; _j0++) {
              int _len_dsfmt__i0__status_u0 = 1;
          dsfmt[_i0].status->u = (int *) malloc(_len_dsfmt__i0__status_u0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dsfmt__i0__status_u0; _j0++) {
            dsfmt[_i0].status->u[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          period_certification(dsfmt);
          for(int _aux = 0; _aux < _len_dsfmt0; _aux++) {
          free(dsfmt[_aux].status);
          }
          free(dsfmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

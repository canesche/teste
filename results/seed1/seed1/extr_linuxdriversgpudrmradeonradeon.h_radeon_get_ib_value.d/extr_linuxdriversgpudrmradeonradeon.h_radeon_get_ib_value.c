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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int /*<<< orphan*/ * ptr; } ;
struct radeon_cs_parser {TYPE_1__ ib; struct radeon_cs_chunk* chunk_ib; } ;
struct radeon_cs_chunk {int /*<<< orphan*/ * kdata; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 radeon_get_ib_value(struct radeon_cs_parser *p, int idx)
{
	struct radeon_cs_chunk *ibc = p->chunk_ib;

	if (ibc->kdata)
		return ibc->kdata[idx];
	return p->ib.ptr[idx];
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
          int idx = 100;
          int _len_p0 = 1;
          struct radeon_cs_parser * p = (struct radeon_cs_parser *) malloc(_len_p0*sizeof(struct radeon_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__ib_ptr0 = 1;
          p[_i0].ib.ptr = (int *) malloc(_len_p__i0__ib_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ib_ptr0; _j0++) {
            p[_i0].ib.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__chunk_ib0 = 1;
          p[_i0].chunk_ib = (struct radeon_cs_chunk *) malloc(_len_p__i0__chunk_ib0*sizeof(struct radeon_cs_chunk));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib0; _j0++) {
              int _len_p__i0__chunk_ib_kdata0 = 1;
          p[_i0].chunk_ib->kdata = (int *) malloc(_len_p__i0__chunk_ib_kdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib_kdata0; _j0++) {
            p[_i0].chunk_ib->kdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = radeon_get_ib_value(p,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].chunk_ib);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_p0 = 65025;
          struct radeon_cs_parser * p = (struct radeon_cs_parser *) malloc(_len_p0*sizeof(struct radeon_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__ib_ptr0 = 1;
          p[_i0].ib.ptr = (int *) malloc(_len_p__i0__ib_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ib_ptr0; _j0++) {
            p[_i0].ib.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__chunk_ib0 = 1;
          p[_i0].chunk_ib = (struct radeon_cs_chunk *) malloc(_len_p__i0__chunk_ib0*sizeof(struct radeon_cs_chunk));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib0; _j0++) {
              int _len_p__i0__chunk_ib_kdata0 = 1;
          p[_i0].chunk_ib->kdata = (int *) malloc(_len_p__i0__chunk_ib_kdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib_kdata0; _j0++) {
            p[_i0].chunk_ib->kdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = radeon_get_ib_value(p,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].chunk_ib);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_p0 = 100;
          struct radeon_cs_parser * p = (struct radeon_cs_parser *) malloc(_len_p0*sizeof(struct radeon_cs_parser));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__ib_ptr0 = 1;
          p[_i0].ib.ptr = (int *) malloc(_len_p__i0__ib_ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__ib_ptr0; _j0++) {
            p[_i0].ib.ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__chunk_ib0 = 1;
          p[_i0].chunk_ib = (struct radeon_cs_chunk *) malloc(_len_p__i0__chunk_ib0*sizeof(struct radeon_cs_chunk));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib0; _j0++) {
              int _len_p__i0__chunk_ib_kdata0 = 1;
          p[_i0].chunk_ib->kdata = (int *) malloc(_len_p__i0__chunk_ib_kdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__chunk_ib_kdata0; _j0++) {
            p[_i0].chunk_ib->kdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = radeon_get_ib_value(p,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].chunk_ib);
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

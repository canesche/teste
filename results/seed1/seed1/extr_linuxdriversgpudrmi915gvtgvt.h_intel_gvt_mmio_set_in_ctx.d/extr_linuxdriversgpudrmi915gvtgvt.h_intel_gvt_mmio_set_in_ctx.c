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
struct TYPE_2__ {int /*<<< orphan*/ * mmio_attribute; } ;
struct intel_gvt {TYPE_1__ mmio; } ;

/* Variables and functions */
 int /*<<< orphan*/  F_IN_CTX ; 

__attribute__((used)) static inline void intel_gvt_mmio_set_in_ctx(
			struct intel_gvt *gvt, unsigned int offset)
{
	gvt->mmio.mmio_attribute[offset >> 2] |= F_IN_CTX;
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
          unsigned int offset = 100;
          int _len_gvt0 = 1;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__mmio_mmio_attribute0 = 1;
          gvt[_i0].mmio.mmio_attribute = (int *) malloc(_len_gvt__i0__mmio_mmio_attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gvt__i0__mmio_mmio_attribute0; _j0++) {
            gvt[_i0].mmio.mmio_attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_gvt_mmio_set_in_ctx(gvt,offset);
          free(gvt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int offset = 255;
          int _len_gvt0 = 65025;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__mmio_mmio_attribute0 = 1;
          gvt[_i0].mmio.mmio_attribute = (int *) malloc(_len_gvt__i0__mmio_mmio_attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gvt__i0__mmio_mmio_attribute0; _j0++) {
            gvt[_i0].mmio.mmio_attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_gvt_mmio_set_in_ctx(gvt,offset);
          free(gvt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int offset = 10;
          int _len_gvt0 = 100;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__mmio_mmio_attribute0 = 1;
          gvt[_i0].mmio.mmio_attribute = (int *) malloc(_len_gvt__i0__mmio_mmio_attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gvt__i0__mmio_mmio_attribute0; _j0++) {
            gvt[_i0].mmio.mmio_attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          intel_gvt_mmio_set_in_ctx(gvt,offset);
          free(gvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

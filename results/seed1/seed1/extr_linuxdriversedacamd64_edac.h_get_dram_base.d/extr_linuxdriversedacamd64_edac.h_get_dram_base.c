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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
typedef  int u64 ;
struct amd64_pvt {TYPE_2__* ranges; } ;
struct TYPE_6__ {int x86; } ;
struct TYPE_4__ {scalar_t__ hi; scalar_t__ lo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;

/* Variables and functions */
 TYPE_3__ boot_cpu_data ; 

__attribute__((used)) static inline u64 get_dram_base(struct amd64_pvt *pvt, u8 i)
{
	u64 addr = ((u64)pvt->ranges[i].base.lo & 0xffff0000) << 8;

	if (boot_cpu_data.x86 == 0xf)
		return addr;

	return (((u64)pvt->ranges[i].base.hi & 0x000000ff) << 40) | addr;
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
          unsigned long i = 100;
          int _len_pvt0 = 1;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              int _len_pvt__i0__ranges0 = 1;
          pvt[_i0].ranges = (struct TYPE_5__ *) malloc(_len_pvt__i0__ranges0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__ranges0; _j0++) {
            pvt[_i0].ranges->base.hi = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ranges->base.lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_dram_base(pvt,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].ranges);
          }
          free(pvt);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long i = 255;
          int _len_pvt0 = 65025;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              int _len_pvt__i0__ranges0 = 1;
          pvt[_i0].ranges = (struct TYPE_5__ *) malloc(_len_pvt__i0__ranges0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__ranges0; _j0++) {
            pvt[_i0].ranges->base.hi = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ranges->base.lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_dram_base(pvt,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].ranges);
          }
          free(pvt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long i = 10;
          int _len_pvt0 = 100;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              int _len_pvt__i0__ranges0 = 1;
          pvt[_i0].ranges = (struct TYPE_5__ *) malloc(_len_pvt__i0__ranges0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__ranges0; _j0++) {
            pvt[_i0].ranges->base.hi = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].ranges->base.lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_dram_base(pvt,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].ranges);
          }
          free(pvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

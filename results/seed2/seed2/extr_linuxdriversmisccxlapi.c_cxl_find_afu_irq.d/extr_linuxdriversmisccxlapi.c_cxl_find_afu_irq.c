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
struct TYPE_2__ {int* range; scalar_t__* offset; } ;
struct cxl_context {TYPE_1__ irqs; } ;
typedef  scalar_t__ irq_hw_number_t ;
typedef  int __u16 ;

/* Variables and functions */
 int CXL_IRQ_RANGES ; 

__attribute__((used)) static irq_hw_number_t cxl_find_afu_irq(struct cxl_context *ctx, int num)
{
	__u16 range;
	int r;

	for (r = 0; r < CXL_IRQ_RANGES; r++) {
		range = ctx->irqs.range[r];
		if (num < range) {
			return ctx->irqs.offset[r] + num;
		}
		num -= range;
	}
	return 0;
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
          int _len_ctx0 = 1;
          struct cxl_context * ctx = (struct cxl_context *) malloc(_len_ctx0*sizeof(struct cxl_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__irqs_range0 = 1;
          ctx[_i0].irqs.range = (int *) malloc(_len_ctx__i0__irqs_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_range0; _j0++) {
            ctx[_i0].irqs.range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__irqs_offset0 = 1;
          ctx[_i0].irqs.offset = (long *) malloc(_len_ctx__i0__irqs_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_offset0; _j0++) {
            ctx[_i0].irqs.offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = cxl_find_afu_irq(ctx,num);
          printf("%ld\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num = 255;
          int _len_ctx0 = 65025;
          struct cxl_context * ctx = (struct cxl_context *) malloc(_len_ctx0*sizeof(struct cxl_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__irqs_range0 = 1;
          ctx[_i0].irqs.range = (int *) malloc(_len_ctx__i0__irqs_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_range0; _j0++) {
            ctx[_i0].irqs.range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__irqs_offset0 = 1;
          ctx[_i0].irqs.offset = (long *) malloc(_len_ctx__i0__irqs_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_offset0; _j0++) {
            ctx[_i0].irqs.offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = cxl_find_afu_irq(ctx,num);
          printf("%ld\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num = 10;
          int _len_ctx0 = 100;
          struct cxl_context * ctx = (struct cxl_context *) malloc(_len_ctx0*sizeof(struct cxl_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__irqs_range0 = 1;
          ctx[_i0].irqs.range = (int *) malloc(_len_ctx__i0__irqs_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_range0; _j0++) {
            ctx[_i0].irqs.range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__irqs_offset0 = 1;
          ctx[_i0].irqs.offset = (long *) malloc(_len_ctx__i0__irqs_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__irqs_offset0; _j0++) {
            ctx[_i0].irqs.offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = cxl_find_afu_irq(ctx,num);
          printf("%ld\n", benchRet); 
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

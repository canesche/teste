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
typedef  scalar_t__ u64 ;
typedef  scalar_t__ u32 ;
struct esas2r_sg_context {int cur_offset; scalar_t__ adapter; } ;
struct TYPE_2__ {scalar_t__ orig_len; scalar_t__ phys; } ;
struct esas2r_adapter {int save_offset; TYPE_1__ firmware; } ;

/* Variables and functions */

__attribute__((used)) static u32 get_physaddr_fm_api(struct esas2r_sg_context *sgc, u64 *addr)
{
	struct esas2r_adapter *a = (struct esas2r_adapter *)sgc->adapter;
	int offset = sgc->cur_offset - a->save_offset;

	(*addr) = a->firmware.phys + offset;
	return a->firmware.orig_len - offset;
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
          int _len_sgc0 = 1;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
            sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        sgc[_i0].adapter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 1;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_physaddr_fm_api(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sgc0 = 65025;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
            sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        sgc[_i0].adapter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 65025;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_physaddr_fm_api(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sgc0 = 100;
          struct esas2r_sg_context * sgc = (struct esas2r_sg_context *) malloc(_len_sgc0*sizeof(struct esas2r_sg_context));
          for(int _i0 = 0; _i0 < _len_sgc0; _i0++) {
            sgc[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        sgc[_i0].adapter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr0 = 100;
          long * addr = (long *) malloc(_len_addr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_physaddr_fm_api(sgc,addr);
          printf("%ld\n", benchRet); 
          free(sgc);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

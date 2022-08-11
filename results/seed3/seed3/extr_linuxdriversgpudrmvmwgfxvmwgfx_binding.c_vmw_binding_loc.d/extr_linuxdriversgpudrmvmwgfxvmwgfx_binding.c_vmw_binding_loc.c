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
typedef  int /*<<< orphan*/  u8 ;
typedef  size_t u32 ;
struct vmw_ctx_binding_state {int dummy; } ;
struct vmw_ctx_bindinfo {int dummy; } ;
struct vmw_binding_info {size_t* offsets; size_t size; } ;
typedef  enum vmw_ctx_binding_type { ____Placeholder_vmw_ctx_binding_type } vmw_ctx_binding_type ;

/* Variables and functions */
 struct vmw_binding_info* vmw_binding_infos ; 

__attribute__((used)) static struct vmw_ctx_bindinfo *
vmw_binding_loc(struct vmw_ctx_binding_state *cbs,
		enum vmw_ctx_binding_type bt, u32 shader_slot, u32 slot)
{
	const struct vmw_binding_info *b = &vmw_binding_infos[bt];
	size_t offset = b->offsets[shader_slot] + b->size*slot;

	return (struct vmw_ctx_bindinfo *)((u8 *) cbs + offset);
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
          enum vmw_ctx_binding_type bt = 0;
          unsigned long shader_slot = 100;
          unsigned long slot = 100;
          int _len_cbs0 = 1;
          struct vmw_ctx_binding_state * cbs = (struct vmw_ctx_binding_state *) malloc(_len_cbs0*sizeof(struct vmw_ctx_binding_state));
          for(int _i0 = 0; _i0 < _len_cbs0; _i0++) {
            cbs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vmw_ctx_bindinfo * benchRet = vmw_binding_loc(cbs,bt,shader_slot,slot);
          printf("%d\n", (*benchRet).dummy);
          free(cbs);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum vmw_ctx_binding_type bt = 0;
          unsigned long shader_slot = 255;
          unsigned long slot = 255;
          int _len_cbs0 = 65025;
          struct vmw_ctx_binding_state * cbs = (struct vmw_ctx_binding_state *) malloc(_len_cbs0*sizeof(struct vmw_ctx_binding_state));
          for(int _i0 = 0; _i0 < _len_cbs0; _i0++) {
            cbs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vmw_ctx_bindinfo * benchRet = vmw_binding_loc(cbs,bt,shader_slot,slot);
          printf("%d\n", (*benchRet).dummy);
          free(cbs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum vmw_ctx_binding_type bt = 0;
          unsigned long shader_slot = 10;
          unsigned long slot = 10;
          int _len_cbs0 = 100;
          struct vmw_ctx_binding_state * cbs = (struct vmw_ctx_binding_state *) malloc(_len_cbs0*sizeof(struct vmw_ctx_binding_state));
          for(int _i0 = 0; _i0 < _len_cbs0; _i0++) {
            cbs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vmw_ctx_bindinfo * benchRet = vmw_binding_loc(cbs,bt,shader_slot,slot);
          printf("%d\n", (*benchRet).dummy);
          free(cbs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

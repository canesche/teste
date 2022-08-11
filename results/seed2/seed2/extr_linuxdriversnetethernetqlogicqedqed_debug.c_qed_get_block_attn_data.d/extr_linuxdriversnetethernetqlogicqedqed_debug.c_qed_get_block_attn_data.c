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
struct dbg_attn_block_type_data {int dummy; } ;
struct dbg_attn_block {struct dbg_attn_block_type_data const* per_type_data; } ;
typedef  enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
typedef  enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_2__ {scalar_t__ ptr; } ;

/* Variables and functions */
 size_t BIN_BUF_DBG_ATTN_BLOCKS ; 
 TYPE_1__* s_dbg_arrays ; 

__attribute__((used)) static const struct dbg_attn_block_type_data *
qed_get_block_attn_data(enum block_id block_id, enum dbg_attn_type attn_type)
{
	const struct dbg_attn_block *base_attn_block_arr =
		(const struct dbg_attn_block *)
		s_dbg_arrays[BIN_BUF_DBG_ATTN_BLOCKS].ptr;

	return &base_attn_block_arr[block_id].per_type_data[attn_type];
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
          enum block_id block_id = 0;
          enum dbg_attn_type attn_type = 0;
          const struct dbg_attn_block_type_data * benchRet = qed_get_block_attn_data(block_id,attn_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t uint32_t ;
struct rdr_tbl_ent {int dummy; } ;

/* Variables and functions */
 scalar_t__ ONYX_INTF ; 
 scalar_t__ perf_processor_interface ; 
 struct rdr_tbl_ent const* perf_rdr_tbl_U ; 
 struct rdr_tbl_ent const* perf_rdr_tbl_W ; 

__attribute__((used)) static const struct rdr_tbl_ent * perf_rdr_get_entry(uint32_t rdr_num)
{
	if (perf_processor_interface == ONYX_INTF) {
		return &perf_rdr_tbl_U[rdr_num];
	} else {
		return &perf_rdr_tbl_W[rdr_num];
	}
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
          unsigned long rdr_num = 100;
          const struct rdr_tbl_ent * benchRet = perf_rdr_get_entry(rdr_num);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rdr_num = 255;
          const struct rdr_tbl_ent * benchRet = perf_rdr_get_entry(rdr_num);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rdr_num = 10;
          const struct rdr_tbl_ent * benchRet = perf_rdr_get_entry(rdr_num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

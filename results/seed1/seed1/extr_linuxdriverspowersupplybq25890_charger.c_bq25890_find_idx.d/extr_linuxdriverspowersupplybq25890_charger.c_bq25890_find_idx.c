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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
typedef  size_t u32 ;
struct bq25890_range {int max; int min; int step; } ;
typedef  enum bq25890_table_ids { ____Placeholder_bq25890_table_ids } bq25890_table_ids ;
struct TYPE_3__ {size_t* tbl; size_t size; } ;
struct TYPE_4__ {struct bq25890_range rt; TYPE_1__ lt; } ;

/* Variables and functions */
 int TBL_TREG ; 
 TYPE_2__* bq25890_tables ; 

__attribute__((used)) static u8 bq25890_find_idx(u32 value, enum bq25890_table_ids id)
{
	u8 idx;

	if (id >= TBL_TREG) {
		const u32 *tbl = bq25890_tables[id].lt.tbl;
		u32 tbl_size = bq25890_tables[id].lt.size;

		for (idx = 1; idx < tbl_size && tbl[idx] <= value; idx++)
			;
	} else {
		const struct bq25890_range *rtbl = &bq25890_tables[id].rt;
		u8 rtbl_size;

		rtbl_size = (rtbl->max - rtbl->min) / rtbl->step + 1;

		for (idx = 1;
		     idx < rtbl_size && (idx * rtbl->step + rtbl->min <= value);
		     idx++)
			;
	}

	return idx - 1;
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
          unsigned long value = 100;
          enum bq25890_table_ids id = 0;
          unsigned long benchRet = bq25890_find_idx(value,id);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long value = 255;
          enum bq25890_table_ids id = 0;
          unsigned long benchRet = bq25890_find_idx(value,id);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long value = 10;
          enum bq25890_table_ids id = 0;
          unsigned long benchRet = bq25890_find_idx(value,id);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

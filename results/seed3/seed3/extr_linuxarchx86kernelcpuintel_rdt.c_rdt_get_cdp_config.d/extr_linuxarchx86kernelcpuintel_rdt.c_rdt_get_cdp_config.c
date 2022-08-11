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
struct TYPE_2__ {int cbm_len; int /*<<< orphan*/  shareable_bits; } ;
struct rdt_resource {int num_closid; int data_width; int alloc_capable; int alloc_enabled; TYPE_1__ cache; int /*<<< orphan*/  default_ctrl; } ;

/* Variables and functions */
 struct rdt_resource* rdt_resources_all ; 

__attribute__((used)) static void rdt_get_cdp_config(int level, int type)
{
	struct rdt_resource *r_l = &rdt_resources_all[level];
	struct rdt_resource *r = &rdt_resources_all[type];

	r->num_closid = r_l->num_closid / 2;
	r->cache.cbm_len = r_l->cache.cbm_len;
	r->default_ctrl = r_l->default_ctrl;
	r->cache.shareable_bits = r_l->cache.shareable_bits;
	r->data_width = (r->cache.cbm_len + 3) / 4;
	r->alloc_capable = true;
	/*
	 * By default, CDP is disabled. CDP can be enabled by mount parameter
	 * "cdp" during resctrl file system mount time.
	 */
	r->alloc_enabled = false;
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
          int level = 100;
          int type = 100;
          rdt_get_cdp_config(level,type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int level = 255;
          int type = 255;
          rdt_get_cdp_config(level,type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int level = 10;
          int type = 10;
          rdt_get_cdp_config(level,type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

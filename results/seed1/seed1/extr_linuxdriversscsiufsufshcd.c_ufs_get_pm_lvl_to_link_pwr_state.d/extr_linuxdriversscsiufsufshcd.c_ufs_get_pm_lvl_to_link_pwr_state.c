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
typedef  enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;
typedef  enum ufs_pm_level { ____Placeholder_ufs_pm_level } ufs_pm_level ;
struct TYPE_2__ {int link_state; } ;

/* Variables and functions */
 TYPE_1__* ufs_pm_lvl_states ; 

__attribute__((used)) static inline enum uic_link_state
ufs_get_pm_lvl_to_link_pwr_state(enum ufs_pm_level lvl)
{
	return ufs_pm_lvl_states[lvl].link_state;
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
          enum ufs_pm_level lvl = 0;
          enum uic_link_state benchRet = ufs_get_pm_lvl_to_link_pwr_state(lvl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

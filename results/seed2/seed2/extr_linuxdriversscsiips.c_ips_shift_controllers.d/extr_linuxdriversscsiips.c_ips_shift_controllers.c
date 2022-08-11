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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int host_num; } ;
typedef  TYPE_1__ ips_ha_t ;

/* Variables and functions */
 TYPE_1__** ips_ha ; 
 struct Scsi_Host** ips_sh ; 

__attribute__((used)) static void
ips_shift_controllers(int lowindex, int highindex)
{
	ips_ha_t *ha_sav = ips_ha[highindex];
	struct Scsi_Host *sh_sav = ips_sh[highindex];
	int i;

	for (i = highindex; i > lowindex; i--) {
		ips_ha[i] = ips_ha[i - 1];
		ips_sh[i] = ips_sh[i - 1];
		ips_ha[i]->host_num = i;
	}
	ha_sav->host_num = lowindex;
	ips_ha[lowindex] = ha_sav;
	ips_sh[lowindex] = sh_sav;
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
          int lowindex = 100;
          int highindex = 100;
          ips_shift_controllers(lowindex,highindex);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lowindex = 255;
          int highindex = 255;
          ips_shift_controllers(lowindex,highindex);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lowindex = 10;
          int highindex = 10;
          ips_shift_controllers(lowindex,highindex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

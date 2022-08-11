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
struct TYPE_2__ {int stat; int ssr; int isr; int ph; } ;

/* Variables and functions */
 int PH_SIZE ; 
 TYPE_1__* ph_list ; 
 size_t ph_ptr ; 

__attribute__((used)) static void add_debug_list(int stat, int ssr, int isr, int ph)
{
	ph_list[ph_ptr].stat = stat;
	ph_list[ph_ptr].ssr = ssr;
	ph_list[ph_ptr].isr = isr;
	ph_list[ph_ptr].ph = ph;

	ph_ptr = (ph_ptr + 1) & (PH_SIZE-1);
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
          int stat = 100;
          int ssr = 100;
          int isr = 100;
          int ph = 100;
          add_debug_list(stat,ssr,isr,ph);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stat = 255;
          int ssr = 255;
          int isr = 255;
          int ph = 255;
          add_debug_list(stat,ssr,isr,ph);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stat = 10;
          int ssr = 10;
          int isr = 10;
          int ph = 10;
          add_debug_list(stat,ssr,isr,ph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

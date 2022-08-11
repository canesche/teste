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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int id; } ;
typedef  TYPE_1__ opj_dec_mstabent_t ;

/* Variables and functions */
 TYPE_1__* j2k_dec_mstab ; 

__attribute__((used)) static opj_dec_mstabent_t *j2k_dec_mstab_lookup(int id) {
	opj_dec_mstabent_t *e;
	for (e = j2k_dec_mstab; e->id != 0; e++) {
		if (e->id == id) {
			break;
		}
	}
	return e;
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
          int id = 100;
          struct TYPE_4__ * benchRet = j2k_dec_mstab_lookup(id);
          printf("%d\n", (*benchRet).id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          struct TYPE_4__ * benchRet = j2k_dec_mstab_lookup(id);
          printf("%d\n", (*benchRet).id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          struct TYPE_4__ * benchRet = j2k_dec_mstab_lookup(id);
          printf("%d\n", (*benchRet).id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

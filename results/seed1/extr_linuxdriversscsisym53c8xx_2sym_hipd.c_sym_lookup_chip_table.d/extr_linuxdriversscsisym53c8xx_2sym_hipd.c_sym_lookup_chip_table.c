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
typedef  scalar_t__ u_short ;
typedef  scalar_t__ u_char ;
struct sym_chip {scalar_t__ device_id; scalar_t__ revision_id; } ;

/* Variables and functions */
 struct sym_chip* sym_dev_table ; 
 int sym_num_devs ; 

struct sym_chip *
sym_lookup_chip_table (u_short device_id, u_char revision)
{
	struct	sym_chip *chip;
	int	i;

	for (i = 0; i < sym_num_devs; i++) {
		chip = &sym_dev_table[i];
		if (device_id != chip->device_id)
			continue;
		if (revision > chip->revision_id)
			continue;
		return chip;
	}

	return NULL;
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
          long device_id = 100;
          long revision = 100;
          struct sym_chip * benchRet = sym_lookup_chip_table(device_id,revision);
          printf("%ld\n", (*benchRet).device_id);
          printf("%ld\n", (*benchRet).revision_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          long device_id = 255;
          long revision = 255;
          struct sym_chip * benchRet = sym_lookup_chip_table(device_id,revision);
          printf("%ld\n", (*benchRet).device_id);
          printf("%ld\n", (*benchRet).revision_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long device_id = 10;
          long revision = 10;
          struct sym_chip * benchRet = sym_lookup_chip_table(device_id,revision);
          printf("%ld\n", (*benchRet).device_id);
          printf("%ld\n", (*benchRet).revision_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

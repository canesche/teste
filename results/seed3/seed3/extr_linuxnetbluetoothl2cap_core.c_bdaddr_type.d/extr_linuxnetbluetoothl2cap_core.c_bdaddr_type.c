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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ ADDR_LE_DEV_PUBLIC ; 
 scalar_t__ BDADDR_BREDR ; 
 scalar_t__ BDADDR_LE_PUBLIC ; 
 scalar_t__ BDADDR_LE_RANDOM ; 
 scalar_t__ LE_LINK ; 

__attribute__((used)) static inline u8 bdaddr_type(u8 link_type, u8 bdaddr_type)
{
	if (link_type == LE_LINK) {
		if (bdaddr_type == ADDR_LE_DEV_PUBLIC)
			return BDADDR_LE_PUBLIC;
		else
			return BDADDR_LE_RANDOM;
	}

	return BDADDR_BREDR;
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
          long link_type = 100;
          long bdaddr_type = 100;
          long benchRet = bdaddr_type(link_type,bdaddr_type);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long link_type = 255;
          long bdaddr_type = 255;
          long benchRet = bdaddr_type(link_type,bdaddr_type);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long link_type = 10;
          long bdaddr_type = 10;
          long benchRet = bdaddr_type(link_type,bdaddr_type);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

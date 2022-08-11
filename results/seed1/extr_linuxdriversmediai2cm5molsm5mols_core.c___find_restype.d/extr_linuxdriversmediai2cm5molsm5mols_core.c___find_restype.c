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
typedef  scalar_t__ u32 ;
typedef  enum m5mols_restype { ____Placeholder_m5mols_restype } m5mols_restype ;
struct TYPE_2__ {scalar_t__ code; } ;

/* Variables and functions */
 int M5MOLS_RESTYPE_MONITOR ; 
 scalar_t__ SIZE_DEFAULT_FFMT ; 
 TYPE_1__* m5mols_default_ffmt ; 

__attribute__((used)) static enum m5mols_restype __find_restype(u32 code)
{
	enum m5mols_restype type = M5MOLS_RESTYPE_MONITOR;

	do {
		if (code == m5mols_default_ffmt[type].code)
			return type;
	} while (type++ != SIZE_DEFAULT_FFMT);

	return 0;
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
          long code = 100;
          enum m5mols_restype benchRet = __find_restype(code);
        
        break;
    }
    // big-arr
    case 1:
    {
          long code = 255;
          enum m5mols_restype benchRet = __find_restype(code);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long code = 10;
          enum m5mols_restype benchRet = __find_restype(code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  u32 ;
typedef  scalar_t__ u16 ;
typedef  scalar_t__ __u16 ;
struct TYPE_2__ {scalar_t__ const idVendor; scalar_t__ idProduct; int /*<<< orphan*/  quirks; } ;

/* Variables and functions */
 scalar_t__ HID_ANY_ID ; 
 TYPE_1__* i2c_hid_quirks ; 

__attribute__((used)) static u32 i2c_hid_lookup_quirk(const u16 idVendor, const u16 idProduct)
{
	u32 quirks = 0;
	int n;

	for (n = 0; i2c_hid_quirks[n].idVendor; n++)
		if (i2c_hid_quirks[n].idVendor == idVendor &&
		    (i2c_hid_quirks[n].idProduct == (__u16)HID_ANY_ID ||
		     i2c_hid_quirks[n].idProduct == idProduct))
			quirks = i2c_hid_quirks[n].quirks;

	return quirks;
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
          const long idVendor = 100;
          const long idProduct = 100;
          int benchRet = i2c_hid_lookup_quirk(idVendor,idProduct);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const long idVendor = 255;
          const long idProduct = 255;
          int benchRet = i2c_hid_lookup_quirk(idVendor,idProduct);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long idVendor = 10;
          const long idProduct = 10;
          int benchRet = i2c_hid_lookup_quirk(idVendor,idProduct);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

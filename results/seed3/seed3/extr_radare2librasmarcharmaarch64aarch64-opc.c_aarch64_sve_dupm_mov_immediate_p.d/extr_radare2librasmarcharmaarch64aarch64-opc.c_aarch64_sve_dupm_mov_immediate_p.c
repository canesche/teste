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
typedef  scalar_t__ uint8_t ;
typedef  int uint64_t ;
typedef  scalar_t__ uint32_t ;
typedef  scalar_t__ uint16_t ;
typedef  int int64_t ;
typedef  int int32_t ;
typedef  int int16_t ;
typedef  int bfd_boolean ;

/* Variables and functions */
 int FALSE ; 

bfd_boolean
aarch64_sve_dupm_mov_immediate_p (uint64_t uvalue, int esize)
{
  int64_t svalue = uvalue;
  uint64_t upper = (uint64_t) -1 << (esize * 4) << (esize * 4);

  if ((uvalue & ~upper) != uvalue && (uvalue | upper) != uvalue)
    return FALSE;
  if (esize <= 4 || (uint32_t) uvalue == (uint32_t) (uvalue >> 32))
    {
      svalue = (int32_t) uvalue;
      if (esize <= 2 || (uint16_t) uvalue == (uint16_t) (uvalue >> 16))
	{
	  svalue = (int16_t) uvalue;
	  if (esize == 1 || (uint8_t) uvalue == (uint8_t) (uvalue >> 8))
	    return FALSE;
	}
    }
  if ((svalue & 0xff) == 0)
    svalue /= 256;
  return svalue < -128 || svalue >= 128;
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
          int uvalue = 100;
          int esize = 100;
          int benchRet = aarch64_sve_dupm_mov_immediate_p(uvalue,esize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int uvalue = 255;
          int esize = 255;
          int benchRet = aarch64_sve_dupm_mov_immediate_p(uvalue,esize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int uvalue = 10;
          int esize = 10;
          int benchRet = aarch64_sve_dupm_mov_immediate_p(uvalue,esize);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

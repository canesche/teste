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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  scalar_t__ UINT8 ;
typedef  int UINT32 ;

/* Variables and functions */

UINT8
AcpiTbChecksum (
    UINT8                   *Buffer,
    UINT32                  Length)
{
    UINT8                   Sum = 0;
    UINT8                   *End = Buffer + Length;


    while (Buffer < End)
    {
        Sum = (UINT8) (Sum + *(Buffer++));
    }

    return (Sum);
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int Length = 255;
          int _len_Buffer0 = 65025;
          long * Buffer = (long *) malloc(_len_Buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = AcpiTbChecksum(Buffer,Length);
          printf("%ld\n", benchRet); 
          free(Buffer);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int Length = 10;
          int _len_Buffer0 = 100;
          long * Buffer = (long *) malloc(_len_Buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_Buffer0; _i0++) {
            Buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = AcpiTbChecksum(Buffer,Length);
          printf("%ld\n", benchRet); 
          free(Buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

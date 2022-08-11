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
typedef  int ACPI_SIZE ;

/* Variables and functions */

void *
memmove (
    void                    *Dest,
    const void              *Src,
    ACPI_SIZE               Count)
{
    char                    *New = (char *) Dest;
    char                    *Old = (char *) Src;


    if (Old > New)
    {
        /* Copy from the beginning */

        while (Count)
        {
            *New = *Old;
            New++;
            Old++;
            Count--;
        }
    }
    else if (Old < New)
    {
        /* Copy from the end */

        New = New + Count - 1;
        Old = Old + Count - 1;
        while (Count)
        {
            *New = *Old;
            New--;
            Old--;
            Count--;
        }
    }

    return (Dest);
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
          int Count = 100;
          void * Dest;
          int _len_Src0 = 1;
          const void * Src = (const void *) malloc(_len_Src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_Src0; _i0++) {
            Src[_i0] = 0;
          }
          void * benchRet = memmove(Dest,Src,Count);
          free(Src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int Count = 255;
          void * Dest;
          int _len_Src0 = 65025;
          const void * Src = (const void *) malloc(_len_Src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_Src0; _i0++) {
            Src[_i0] = 0;
          }
          void * benchRet = memmove(Dest,Src,Count);
          free(Src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Count = 10;
          void * Dest;
          int _len_Src0 = 100;
          const void * Src = (const void *) malloc(_len_Src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_Src0; _i0++) {
            Src[_i0] = 0;
          }
          void * benchRet = memmove(Dest,Src,Count);
          free(Src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ ACPI_SIZE ;

/* Variables and functions */

char *
strncat (
    char                    *DstString,
    const char              *SrcString,
    ACPI_SIZE               Count)
{
    char                    *String;


    if (Count)
    {
        /* Find end of the destination string */

        for (String = DstString; *String++; )
        { ; }

        /* Concatenate the string */

        for (--String; (*String++ = *SrcString++) && --Count; )
        { ; }

        /* Null terminate if necessary */

        if (!Count)
        {
            *String = 0;
        }
    }

    return (DstString);
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
          long Count = 100;
          int _len_DstString0 = 1;
          char * DstString = (char *) malloc(_len_DstString0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_DstString0; _i0++) {
            DstString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SrcString0 = 1;
          const char * SrcString = (const char *) malloc(_len_SrcString0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_SrcString0; _i0++) {
            SrcString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strncat(DstString,SrcString,Count);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(DstString);
          free(SrcString);
        
        break;
    }
    // big-arr
    case 1:
    {
          long Count = 255;
          int _len_DstString0 = 65025;
          char * DstString = (char *) malloc(_len_DstString0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_DstString0; _i0++) {
            DstString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SrcString0 = 65025;
          const char * SrcString = (const char *) malloc(_len_SrcString0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_SrcString0; _i0++) {
            SrcString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strncat(DstString,SrcString,Count);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(DstString);
          free(SrcString);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long Count = 10;
          int _len_DstString0 = 100;
          char * DstString = (char *) malloc(_len_DstString0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_DstString0; _i0++) {
            DstString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SrcString0 = 100;
          const char * SrcString = (const char *) malloc(_len_SrcString0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_SrcString0; _i0++) {
            SrcString[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = strncat(DstString,SrcString,Count);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(DstString);
          free(SrcString);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ e_magic; scalar_t__ e_lfanew; } ;
struct TYPE_4__ {scalar_t__ Signature; } ;
typedef  TYPE_1__* PIMAGE_NT_HEADERS ;
typedef  TYPE_2__* PIMAGE_DOS_HEADER ;
typedef  scalar_t__ PCHAR ;

/* Variables and functions */
 scalar_t__ IMAGE_DOS_SIGNATURE ; 
 scalar_t__ IMAGE_NT_SIGNATURE ; 

PIMAGE_NT_HEADERS __RtlImageNtHeader(void *data)
{
    PIMAGE_DOS_HEADER DosHeader = (PIMAGE_DOS_HEADER)data;
    PIMAGE_NT_HEADERS NtHeaders;
    PCHAR NtHeaderPtr;
    if (DosHeader->e_magic != IMAGE_DOS_SIGNATURE)
        return NULL;
    NtHeaderPtr = ((PCHAR)data) + DosHeader->e_lfanew;
    NtHeaders = (PIMAGE_NT_HEADERS)NtHeaderPtr;
    if (NtHeaders->Signature != IMAGE_NT_SIGNATURE)
        return NULL;
    return NtHeaders;
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
          void * data;
          struct TYPE_4__ * benchRet = __RtlImageNtHeader(data);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * data;
          struct TYPE_4__ * benchRet = __RtlImageNtHeader(data);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * data;
          struct TYPE_4__ * benchRet = __RtlImageNtHeader(data);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

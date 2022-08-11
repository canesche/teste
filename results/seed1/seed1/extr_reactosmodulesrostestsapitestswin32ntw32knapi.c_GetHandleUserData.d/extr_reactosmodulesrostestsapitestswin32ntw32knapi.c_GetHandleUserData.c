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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t USHORT ;
typedef  int ULONG_PTR ;
struct TYPE_3__ {int /*<<< orphan*/ * UserData; scalar_t__ FullUnique; int /*<<< orphan*/ * KernelData; } ;
typedef  int /*<<< orphan*/ * PVOID ;
typedef  TYPE_1__* PGDI_TABLE_ENTRY ;
typedef  scalar_t__ HGDIOBJ ;

/* Variables and functions */
 TYPE_1__* GdiHandleTable ; 

PVOID
GetHandleUserData(HGDIOBJ hobj)
{
    USHORT Index = (ULONG_PTR)hobj;
    PGDI_TABLE_ENTRY pentry = &GdiHandleTable[Index];

    if (pentry->KernelData == NULL ||
        pentry->KernelData < (PVOID)0x80000000 ||
        (USHORT)pentry->FullUnique != (USHORT)((ULONG_PTR)hobj >> 16))
    {
        return NULL;
    }

    return pentry->UserData;
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
          long hobj = 100;
          int * benchRet = GetHandleUserData(hobj);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long hobj = 255;
          int * benchRet = GetHandleUserData(hobj);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long hobj = 10;
          int * benchRet = GetHandleUserData(hobj);
          printf("%d\n", (*benchRet)); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

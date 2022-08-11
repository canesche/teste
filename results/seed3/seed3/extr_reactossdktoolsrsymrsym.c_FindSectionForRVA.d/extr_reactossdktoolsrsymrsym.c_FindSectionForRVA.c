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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ VirtualSize; } ;
struct TYPE_6__ {scalar_t__ VirtualAddress; TYPE_1__ Misc; } ;
typedef  TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef  scalar_t__ DWORD ;

/* Variables and functions */

__attribute__((used)) static PIMAGE_SECTION_HEADER
FindSectionForRVA(DWORD RVA, unsigned NumberOfSections, PIMAGE_SECTION_HEADER SectionHeaders)
{
    unsigned Section;

    for (Section = 0; Section < NumberOfSections; Section++)
    {
        if (SectionHeaders[Section].VirtualAddress <= RVA &&
            RVA < SectionHeaders[Section].VirtualAddress + SectionHeaders[Section].Misc.VirtualSize)
        {
            return SectionHeaders + Section;
        }
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
          long RVA = 100;
          unsigned int NumberOfSections = 100;
          int _len_SectionHeaders0 = 1;
          struct TYPE_6__ * SectionHeaders = (struct TYPE_6__ *) malloc(_len_SectionHeaders0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_SectionHeaders0; _i0++) {
            SectionHeaders[_i0].VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        SectionHeaders[_i0].Misc.VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = FindSectionForRVA(RVA,NumberOfSections,SectionHeaders);
          printf("%ld\n", (*benchRet).VirtualAddress);
          free(SectionHeaders);
        
        break;
    }
    // big-arr
    case 1:
    {
          long RVA = 255;
          unsigned int NumberOfSections = 255;
          int _len_SectionHeaders0 = 65025;
          struct TYPE_6__ * SectionHeaders = (struct TYPE_6__ *) malloc(_len_SectionHeaders0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_SectionHeaders0; _i0++) {
            SectionHeaders[_i0].VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        SectionHeaders[_i0].Misc.VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = FindSectionForRVA(RVA,NumberOfSections,SectionHeaders);
          printf("%ld\n", (*benchRet).VirtualAddress);
          free(SectionHeaders);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long RVA = 10;
          unsigned int NumberOfSections = 10;
          int _len_SectionHeaders0 = 100;
          struct TYPE_6__ * SectionHeaders = (struct TYPE_6__ *) malloc(_len_SectionHeaders0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_SectionHeaders0; _i0++) {
            SectionHeaders[_i0].VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        SectionHeaders[_i0].Misc.VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = FindSectionForRVA(RVA,NumberOfSections,SectionHeaders);
          printf("%ld\n", (*benchRet).VirtualAddress);
          free(SectionHeaders);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  VOID ;
typedef  int /*<<< orphan*/  ULONG ;
struct TYPE_3__ {scalar_t__ Reserved; scalar_t__ CodePage; int /*<<< orphan*/  Size; scalar_t__ OffsetToData; } ;
typedef  scalar_t__ PVOID ;
typedef  scalar_t__ PUCHAR ;
typedef  TYPE_1__* PIMAGE_RESOURCE_DATA_ENTRY ;

/* Variables and functions */

__attribute__((used)) static
VOID
InitializeDataEntry(
    PVOID ImageBase,
    PIMAGE_RESOURCE_DATA_ENTRY DataEntry,
    PVOID Data,
    ULONG Size)
{

    DataEntry->OffsetToData = (PUCHAR)Data - (PUCHAR)ImageBase;
    DataEntry->Size = Size;
    DataEntry->CodePage = 0;
    DataEntry->Reserved = 0;
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
          long ImageBase = 100;
          long Data = 100;
          int Size = 100;
          int _len_DataEntry0 = 1;
          struct TYPE_3__ * DataEntry = (struct TYPE_3__ *) malloc(_len_DataEntry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DataEntry0; _i0++) {
            DataEntry[_i0].Reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].CodePage = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeDataEntry(ImageBase,DataEntry,Data,Size);
          printf("%d\n", benchRet); 
          free(DataEntry);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ImageBase = 255;
          long Data = 255;
          int Size = 255;
          int _len_DataEntry0 = 65025;
          struct TYPE_3__ * DataEntry = (struct TYPE_3__ *) malloc(_len_DataEntry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DataEntry0; _i0++) {
            DataEntry[_i0].Reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].CodePage = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeDataEntry(ImageBase,DataEntry,Data,Size);
          printf("%d\n", benchRet); 
          free(DataEntry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ImageBase = 10;
          long Data = 10;
          int Size = 10;
          int _len_DataEntry0 = 100;
          struct TYPE_3__ * DataEntry = (struct TYPE_3__ *) malloc(_len_DataEntry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DataEntry0; _i0++) {
            DataEntry[_i0].Reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].CodePage = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].Size = ((-2 * (next_i()%2)) + 1) * next_i();
        DataEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeDataEntry(ImageBase,DataEntry,Data,Size);
          printf("%d\n", benchRet); 
          free(DataEntry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

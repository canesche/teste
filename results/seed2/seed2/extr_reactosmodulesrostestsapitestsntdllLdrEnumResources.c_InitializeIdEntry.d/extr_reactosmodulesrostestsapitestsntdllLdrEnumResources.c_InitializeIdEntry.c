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
typedef  int /*<<< orphan*/  VOID ;
typedef  int /*<<< orphan*/  USHORT ;
struct TYPE_6__ {int DataIsDirectory; scalar_t__ OffsetToData; scalar_t__ NameIsString; int /*<<< orphan*/  Name; } ;
struct TYPE_5__ {TYPE_2__* Lang1Entries; } ;
typedef  scalar_t__ PVOID ;
typedef  scalar_t__ PUCHAR ;
typedef  TYPE_1__* PTEST_RESOURCES ;
typedef  TYPE_2__* PIMAGE_RESOURCE_DIRECTORY_ENTRY ;

/* Variables and functions */

__attribute__((used)) static
VOID
InitializeIdEntry(
    PTEST_RESOURCES Resource,
    PIMAGE_RESOURCE_DIRECTORY_ENTRY DirEntry,
    USHORT Id,
    PVOID Data)
{
    DirEntry->Name = Id;
    DirEntry->NameIsString = 0;
    DirEntry->OffsetToData = (PUCHAR)Data - (PUCHAR)Resource;
    if (DirEntry < Resource->Lang1Entries)
        DirEntry->DataIsDirectory = 1;
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
          int Id = 100;
          long Data = 100;
          int _len_Resource0 = 1;
          struct TYPE_5__ * Resource = (struct TYPE_5__ *) malloc(_len_Resource0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Resource0; _i0++) {
              int _len_Resource__i0__Lang1Entries0 = 1;
          Resource[_i0].Lang1Entries = (struct TYPE_6__ *) malloc(_len_Resource__i0__Lang1Entries0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_Resource__i0__Lang1Entries0; _j0++) {
            Resource[_i0].Lang1Entries->DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_DirEntry0 = 1;
          struct TYPE_6__ * DirEntry = (struct TYPE_6__ *) malloc(_len_DirEntry0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_DirEntry0; _i0++) {
            DirEntry[_i0].DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeIdEntry(Resource,DirEntry,Id,Data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Resource0; _aux++) {
          free(Resource[_aux].Lang1Entries);
          }
          free(Resource);
          free(DirEntry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int Id = 255;
          long Data = 255;
          int _len_Resource0 = 65025;
          struct TYPE_5__ * Resource = (struct TYPE_5__ *) malloc(_len_Resource0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Resource0; _i0++) {
              int _len_Resource__i0__Lang1Entries0 = 1;
          Resource[_i0].Lang1Entries = (struct TYPE_6__ *) malloc(_len_Resource__i0__Lang1Entries0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_Resource__i0__Lang1Entries0; _j0++) {
            Resource[_i0].Lang1Entries->DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_DirEntry0 = 65025;
          struct TYPE_6__ * DirEntry = (struct TYPE_6__ *) malloc(_len_DirEntry0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_DirEntry0; _i0++) {
            DirEntry[_i0].DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeIdEntry(Resource,DirEntry,Id,Data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Resource0; _aux++) {
          free(Resource[_aux].Lang1Entries);
          }
          free(Resource);
          free(DirEntry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Id = 10;
          long Data = 10;
          int _len_Resource0 = 100;
          struct TYPE_5__ * Resource = (struct TYPE_5__ *) malloc(_len_Resource0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_Resource0; _i0++) {
              int _len_Resource__i0__Lang1Entries0 = 1;
          Resource[_i0].Lang1Entries = (struct TYPE_6__ *) malloc(_len_Resource__i0__Lang1Entries0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_Resource__i0__Lang1Entries0; _j0++) {
            Resource[_i0].Lang1Entries->DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        Resource[_i0].Lang1Entries->Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_DirEntry0 = 100;
          struct TYPE_6__ * DirEntry = (struct TYPE_6__ *) malloc(_len_DirEntry0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_DirEntry0; _i0++) {
            DirEntry[_i0].DataIsDirectory = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].OffsetToData = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].NameIsString = ((-2 * (next_i()%2)) + 1) * next_i();
        DirEntry[_i0].Name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = InitializeIdEntry(Resource,DirEntry,Id,Data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_Resource0; _aux++) {
          free(Resource[_aux].Lang1Entries);
          }
          free(Resource);
          free(DirEntry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

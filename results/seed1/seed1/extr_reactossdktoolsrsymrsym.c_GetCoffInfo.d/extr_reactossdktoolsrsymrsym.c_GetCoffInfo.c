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
typedef  int ULONG ;
struct TYPE_3__ {scalar_t__ PointerToSymbolTable; int NumberOfSymbols; } ;
typedef  int /*<<< orphan*/  PIMAGE_SECTION_HEADER ;
typedef  TYPE_1__* PIMAGE_FILE_HEADER ;
typedef  int /*<<< orphan*/  COFF_SYMENT ;

/* Variables and functions */

__attribute__((used)) static int
GetCoffInfo(void *FileData, PIMAGE_FILE_HEADER PEFileHeader,
            PIMAGE_SECTION_HEADER PESectionHeaders,
            ULONG *CoffSymbolsLength, void **CoffSymbolsBase,
            ULONG *CoffStringsLength, void **CoffStringsBase)
{

    if (PEFileHeader->PointerToSymbolTable == 0 || PEFileHeader->NumberOfSymbols == 0)
    {
        /* No COFF symbol table */
        *CoffSymbolsLength = 0;
        *CoffStringsLength = 0;
    }
    else
    {
        *CoffSymbolsLength = PEFileHeader->NumberOfSymbols * sizeof(COFF_SYMENT);
        *CoffSymbolsBase = (void *)((char *) FileData + PEFileHeader->PointerToSymbolTable);
        *CoffStringsLength = *((ULONG *) ((char *) *CoffSymbolsBase + *CoffSymbolsLength));
        *CoffStringsBase = (void *)((char *) *CoffSymbolsBase + *CoffSymbolsLength);
    }

    return 0;
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
          int PESectionHeaders = 100;
          void * FileData;
          int _len_PEFileHeader0 = 1;
          struct TYPE_3__ * PEFileHeader = (struct TYPE_3__ *) malloc(_len_PEFileHeader0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_PEFileHeader0; _i0++) {
            PEFileHeader[_i0].PointerToSymbolTable = ((-2 * (next_i()%2)) + 1) * next_i();
        PEFileHeader[_i0].NumberOfSymbols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsLength0 = 1;
          int * CoffSymbolsLength = (int *) malloc(_len_CoffSymbolsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsLength0; _i0++) {
            CoffSymbolsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsBase0 = 1;
          void ** CoffSymbolsBase = (void **) malloc(_len_CoffSymbolsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsBase0; _i0++) {
          }
          int _len_CoffStringsLength0 = 1;
          int * CoffStringsLength = (int *) malloc(_len_CoffStringsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffStringsLength0; _i0++) {
            CoffStringsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffStringsBase0 = 1;
          void ** CoffStringsBase = (void **) malloc(_len_CoffStringsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffStringsBase0; _i0++) {
          }
          int benchRet = GetCoffInfo(FileData,PEFileHeader,PESectionHeaders,CoffSymbolsLength,CoffSymbolsBase,CoffStringsLength,CoffStringsBase);
          printf("%d\n", benchRet); 
          free(PEFileHeader);
          free(CoffSymbolsLength);
          for(int i1 = 0; i1 < _len_CoffSymbolsBase0; i1++) {
            int _len_CoffSymbolsBase1 = 1;
              }
          free(CoffSymbolsBase);
          free(CoffStringsLength);
          for(int i1 = 0; i1 < _len_CoffStringsBase0; i1++) {
            int _len_CoffStringsBase1 = 1;
              }
          free(CoffStringsBase);
        
        break;
    }
    // big-arr
    case 1:
    {
          int PESectionHeaders = 255;
          void * FileData;
          int _len_PEFileHeader0 = 65025;
          struct TYPE_3__ * PEFileHeader = (struct TYPE_3__ *) malloc(_len_PEFileHeader0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_PEFileHeader0; _i0++) {
            PEFileHeader[_i0].PointerToSymbolTable = ((-2 * (next_i()%2)) + 1) * next_i();
        PEFileHeader[_i0].NumberOfSymbols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsLength0 = 65025;
          int * CoffSymbolsLength = (int *) malloc(_len_CoffSymbolsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsLength0; _i0++) {
            CoffSymbolsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsBase0 = 65025;
          void ** CoffSymbolsBase = (void **) malloc(_len_CoffSymbolsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsBase0; _i0++) {
          }
          int _len_CoffStringsLength0 = 65025;
          int * CoffStringsLength = (int *) malloc(_len_CoffStringsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffStringsLength0; _i0++) {
            CoffStringsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffStringsBase0 = 65025;
          void ** CoffStringsBase = (void **) malloc(_len_CoffStringsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffStringsBase0; _i0++) {
          }
          int benchRet = GetCoffInfo(FileData,PEFileHeader,PESectionHeaders,CoffSymbolsLength,CoffSymbolsBase,CoffStringsLength,CoffStringsBase);
          printf("%d\n", benchRet); 
          free(PEFileHeader);
          free(CoffSymbolsLength);
          for(int i1 = 0; i1 < _len_CoffSymbolsBase0; i1++) {
            int _len_CoffSymbolsBase1 = 1;
              }
          free(CoffSymbolsBase);
          free(CoffStringsLength);
          for(int i1 = 0; i1 < _len_CoffStringsBase0; i1++) {
            int _len_CoffStringsBase1 = 1;
              }
          free(CoffStringsBase);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int PESectionHeaders = 10;
          void * FileData;
          int _len_PEFileHeader0 = 100;
          struct TYPE_3__ * PEFileHeader = (struct TYPE_3__ *) malloc(_len_PEFileHeader0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_PEFileHeader0; _i0++) {
            PEFileHeader[_i0].PointerToSymbolTable = ((-2 * (next_i()%2)) + 1) * next_i();
        PEFileHeader[_i0].NumberOfSymbols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsLength0 = 100;
          int * CoffSymbolsLength = (int *) malloc(_len_CoffSymbolsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsLength0; _i0++) {
            CoffSymbolsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffSymbolsBase0 = 100;
          void ** CoffSymbolsBase = (void **) malloc(_len_CoffSymbolsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffSymbolsBase0; _i0++) {
          }
          int _len_CoffStringsLength0 = 100;
          int * CoffStringsLength = (int *) malloc(_len_CoffStringsLength0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CoffStringsLength0; _i0++) {
            CoffStringsLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_CoffStringsBase0 = 100;
          void ** CoffStringsBase = (void **) malloc(_len_CoffStringsBase0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_CoffStringsBase0; _i0++) {
          }
          int benchRet = GetCoffInfo(FileData,PEFileHeader,PESectionHeaders,CoffSymbolsLength,CoffSymbolsBase,CoffStringsLength,CoffStringsBase);
          printf("%d\n", benchRet); 
          free(PEFileHeader);
          free(CoffSymbolsLength);
          for(int i1 = 0; i1 < _len_CoffSymbolsBase0; i1++) {
            int _len_CoffSymbolsBase1 = 1;
              }
          free(CoffSymbolsBase);
          free(CoffStringsLength);
          for(int i1 = 0; i1 < _len_CoffStringsBase0; i1++) {
            int _len_CoffStringsBase1 = 1;
              }
          free(CoffStringsBase);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ USHORT ;
struct TYPE_8__ {scalar_t__ USACount; scalar_t__ USAOffset; } ;
struct TYPE_6__ {scalar_t__ BytesPerSector; } ;
struct TYPE_7__ {TYPE_1__ BootSector; } ;
typedef  TYPE_2__* PNTFS_VOLUME_INFO ;
typedef  TYPE_3__* PNTFS_RECORD ;
typedef  scalar_t__ PCHAR ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOLEAN NtfsFixupRecord(PNTFS_VOLUME_INFO Volume, PNTFS_RECORD Record)
{
    USHORT *USA;
    USHORT USANumber;
    USHORT USACount;
    USHORT *Block;

    USA = (USHORT*)((PCHAR)Record + Record->USAOffset);
    USANumber = *(USA++);
    USACount = Record->USACount - 1; /* Exclude the USA Number. */
    Block = (USHORT*)((PCHAR)Record + Volume->BootSector.BytesPerSector - 2);

    while (USACount)
    {
        if (*Block != USANumber)
            return FALSE;
        *Block = *(USA++);
        Block = (USHORT*)((PCHAR)Block + Volume->BootSector.BytesPerSector);
        USACount--;
    }

    return TRUE;
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
          int _len_Volume0 = 1;
          struct TYPE_7__ * Volume = (struct TYPE_7__ *) malloc(_len_Volume0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_Volume0; _i0++) {
            Volume[_i0].BootSector.BytesPerSector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Record0 = 1;
          struct TYPE_8__ * Record = (struct TYPE_8__ *) malloc(_len_Record0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_Record0; _i0++) {
            Record[_i0].USACount = ((-2 * (next_i()%2)) + 1) * next_i();
        Record[_i0].USAOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFixupRecord(Volume,Record);
          printf("%d\n", benchRet); 
          free(Volume);
          free(Record);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_Volume0 = 65025;
          struct TYPE_7__ * Volume = (struct TYPE_7__ *) malloc(_len_Volume0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_Volume0; _i0++) {
            Volume[_i0].BootSector.BytesPerSector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Record0 = 65025;
          struct TYPE_8__ * Record = (struct TYPE_8__ *) malloc(_len_Record0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_Record0; _i0++) {
            Record[_i0].USACount = ((-2 * (next_i()%2)) + 1) * next_i();
        Record[_i0].USAOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFixupRecord(Volume,Record);
          printf("%d\n", benchRet); 
          free(Volume);
          free(Record);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_Volume0 = 100;
          struct TYPE_7__ * Volume = (struct TYPE_7__ *) malloc(_len_Volume0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_Volume0; _i0++) {
            Volume[_i0].BootSector.BytesPerSector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Record0 = 100;
          struct TYPE_8__ * Record = (struct TYPE_8__ *) malloc(_len_Record0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_Record0; _i0++) {
            Record[_i0].USACount = ((-2 * (next_i()%2)) + 1) * next_i();
        Record[_i0].USAOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFixupRecord(Volume,Record);
          printf("%d\n", benchRet); 
          free(Volume);
          free(Record);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ ULONGLONG ;
typedef  int ULONG64 ;
typedef  int UCHAR ;
typedef  int* PUCHAR ;
typedef  int LONGLONG ;
typedef  int LONG64 ;
typedef  int CHAR ;

/* Variables and functions */

PUCHAR DecodeRun(PUCHAR DataRun, LONGLONG *DataRunOffset, ULONGLONG *DataRunLength)
{
    UCHAR DataRunOffsetSize;
    UCHAR DataRunLengthSize;
    CHAR i;

    /* Get the offset size (in bytes) of the run */
    DataRunOffsetSize = (*DataRun >> 4) & 0xF;
    /* Get the length size (in bytes) of the run */
    DataRunLengthSize = *DataRun & 0xF;

    /* Initialize values */
    *DataRunOffset = 0;
    *DataRunLength = 0;

    /* Move to next byte */
    DataRun++;

    /* First, extract (byte after byte) run length with the size extracted from header */
    for (i = 0; i < DataRunLengthSize; i++)
    {
        *DataRunLength += ((ULONG64)*DataRun) << (i * 8);
        /* Next byte */
        DataRun++;
    }

    /* If offset size is 0, return -1 to show that's sparse run */
    if (DataRunOffsetSize == 0)
    {
        *DataRunOffset = -1;
    }
    /* Otherwise, extract offset */
    else
    {
        /* Extract (byte after byte) run offset with the size extracted from header */
        for (i = 0; i < DataRunOffsetSize - 1; i++)
        {
            *DataRunOffset += ((ULONG64)*DataRun) << (i * 8);
            /* Next byte */
            DataRun++;
        }
        /* The last byte contains sign so we must process it different way. */
        *DataRunOffset = ((LONG64)(CHAR)(*(DataRun++)) << (i * 8)) + *DataRunOffset;
    }

    /* Return next run */
    return DataRun;
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
          int _len_DataRun0 = 1;
          int * DataRun = (int *) malloc(_len_DataRun0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRun0; _i0++) {
            DataRun[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunOffset0 = 1;
          int * DataRunOffset = (int *) malloc(_len_DataRunOffset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRunOffset0; _i0++) {
            DataRunOffset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunLength0 = 1;
          long * DataRunLength = (long *) malloc(_len_DataRunLength0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_DataRunLength0; _i0++) {
            DataRunLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = DecodeRun(DataRun,DataRunOffset,DataRunLength);
          printf("%d\n", (*benchRet)); 
          free(DataRun);
          free(DataRunOffset);
          free(DataRunLength);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_DataRun0 = 65025;
          int * DataRun = (int *) malloc(_len_DataRun0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRun0; _i0++) {
            DataRun[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunOffset0 = 65025;
          int * DataRunOffset = (int *) malloc(_len_DataRunOffset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRunOffset0; _i0++) {
            DataRunOffset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunLength0 = 65025;
          long * DataRunLength = (long *) malloc(_len_DataRunLength0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_DataRunLength0; _i0++) {
            DataRunLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = DecodeRun(DataRun,DataRunOffset,DataRunLength);
          printf("%d\n", (*benchRet)); 
          free(DataRun);
          free(DataRunOffset);
          free(DataRunLength);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_DataRun0 = 100;
          int * DataRun = (int *) malloc(_len_DataRun0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRun0; _i0++) {
            DataRun[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunOffset0 = 100;
          int * DataRunOffset = (int *) malloc(_len_DataRunOffset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DataRunOffset0; _i0++) {
            DataRunOffset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DataRunLength0 = 100;
          long * DataRunLength = (long *) malloc(_len_DataRunLength0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_DataRunLength0; _i0++) {
            DataRunLength[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = DecodeRun(DataRun,DataRunOffset,DataRunLength);
          printf("%d\n", (*benchRet)); 
          free(DataRun);
          free(DataRunOffset);
          free(DataRunLength);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

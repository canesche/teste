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
typedef  int /*<<< orphan*/  VOID ;
typedef  int ULONG ;
typedef  int* PULONG ;

/* Variables and functions */
 int FILE_ATTRIBUTE_DIRECTORY ; 
 int FILE_ATTRIBUTE_NORMAL ; 
 int NTFS_FILE_TYPE_DIRECTORY ; 

VOID
NtfsFileFlagsToAttributes(ULONG NtfsAttributes,
                          PULONG FileAttributes)
{
    *FileAttributes = NtfsAttributes;
    if ((NtfsAttributes & NTFS_FILE_TYPE_DIRECTORY) == NTFS_FILE_TYPE_DIRECTORY)
    {
        *FileAttributes = NtfsAttributes & ~NTFS_FILE_TYPE_DIRECTORY;
        *FileAttributes |= FILE_ATTRIBUTE_DIRECTORY;
    }

    if (NtfsAttributes == 0)
        *FileAttributes = FILE_ATTRIBUTE_NORMAL;
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
          int NtfsAttributes = 100;
          int _len_FileAttributes0 = 1;
          int * FileAttributes = (int *) malloc(_len_FileAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FileAttributes0; _i0++) {
            FileAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFileFlagsToAttributes(NtfsAttributes,FileAttributes);
          printf("%d\n", benchRet); 
          free(FileAttributes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int NtfsAttributes = 255;
          int _len_FileAttributes0 = 65025;
          int * FileAttributes = (int *) malloc(_len_FileAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FileAttributes0; _i0++) {
            FileAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFileFlagsToAttributes(NtfsAttributes,FileAttributes);
          printf("%d\n", benchRet); 
          free(FileAttributes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int NtfsAttributes = 10;
          int _len_FileAttributes0 = 100;
          int * FileAttributes = (int *) malloc(_len_FileAttributes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_FileAttributes0; _i0++) {
            FileAttributes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = NtfsFileFlagsToAttributes(NtfsAttributes,FileAttributes);
          printf("%d\n", benchRet); 
          free(FileAttributes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

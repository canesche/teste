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
struct TYPE_5__ {size_t Address; } ;
struct TYPE_4__ {int SymbolsOffset; int SymbolsLength; } ;
typedef  int /*<<< orphan*/  ROSSYM_ENTRY ;
typedef  TYPE_1__* PSYMBOLFILE_HEADER ;
typedef  TYPE_2__* PROSSYM_ENTRY ;

/* Variables and functions */

PROSSYM_ENTRY
find_offset(void *data, size_t offset)
{
    PSYMBOLFILE_HEADER RosSymHeader = (PSYMBOLFILE_HEADER)data;
    PROSSYM_ENTRY Entries = (PROSSYM_ENTRY)((char *)data + RosSymHeader->SymbolsOffset);
    size_t symbols = RosSymHeader->SymbolsLength / sizeof(ROSSYM_ENTRY);
    size_t i;

    for (i = 0; i < symbols; i++)
    {
        if (Entries[i].Address > offset)
        {
            if (!i--)
                return NULL;
            else
                return &Entries[i];
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
          unsigned long offset = 100;
          void * data;
          struct TYPE_5__ * benchRet = find_offset(data,offset);
          printf("%lu\n", (*benchRet).Address);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          void * data;
          struct TYPE_5__ * benchRet = find_offset(data,offset);
          printf("%lu\n", (*benchRet).Address);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          void * data;
          struct TYPE_5__ * benchRet = find_offset(data,offset);
          printf("%lu\n", (*benchRet).Address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

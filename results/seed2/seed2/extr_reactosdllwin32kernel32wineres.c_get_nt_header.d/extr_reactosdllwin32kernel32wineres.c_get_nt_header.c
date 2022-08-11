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
struct TYPE_5__ {scalar_t__ e_magic; int e_lfanew; } ;
struct TYPE_4__ {scalar_t__ Signature; } ;
typedef  TYPE_1__ IMAGE_NT_HEADERS ;
typedef  TYPE_2__ IMAGE_DOS_HEADER ;
typedef  int DWORD ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 scalar_t__ IMAGE_DOS_SIGNATURE ; 
 scalar_t__ IMAGE_NT_SIGNATURE ; 

__attribute__((used)) static IMAGE_NT_HEADERS *get_nt_header( void *base, DWORD mapping_size )
{
    IMAGE_NT_HEADERS *nt;
    IMAGE_DOS_HEADER *dos;

    if (mapping_size<sizeof (*dos))
        return NULL;

    dos = base;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE)
        return NULL;

    if ((dos->e_lfanew + sizeof (*nt)) > mapping_size)
        return NULL;

    nt = (void*) ((BYTE*)base + dos->e_lfanew);

    if (nt->Signature != IMAGE_NT_SIGNATURE)
        return NULL;

    return nt;
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
          int mapping_size = 100;
          void * base;
          struct TYPE_4__ * benchRet = get_nt_header(base,mapping_size);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mapping_size = 255;
          void * base;
          struct TYPE_4__ * benchRet = get_nt_header(base,mapping_size);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mapping_size = 10;
          void * base;
          struct TYPE_4__ * benchRet = get_nt_header(base,mapping_size);
          printf("%ld\n", (*benchRet).Signature);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

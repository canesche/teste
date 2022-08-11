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
struct TYPE_6__ {int NumberOfNamedEntries; int NumberOfIdEntries; } ;
struct TYPE_5__ {int OffsetToDirectory; int /*<<< orphan*/  DataIsDirectory; } ;
typedef  TYPE_1__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef  TYPE_2__ IMAGE_RESOURCE_DIRECTORY ;

/* Variables and functions */

__attribute__((used)) static IMAGE_RESOURCE_DIRECTORY *find_first_id_entry( IMAGE_RESOURCE_DIRECTORY *dir,
                                           void *root, int want_dir )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *entry = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(dir + 1);
    int pos;

    for (pos = dir->NumberOfNamedEntries; pos < dir->NumberOfNamedEntries + dir->NumberOfIdEntries; pos++)
    {
        if (!entry[pos].DataIsDirectory == !want_dir)
            return (IMAGE_RESOURCE_DIRECTORY *)((char *)root + entry[pos].OffsetToDirectory);
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
          int want_dir = 100;
          int _len_dir0 = 1;
          struct TYPE_6__ * dir = (struct TYPE_6__ *) malloc(_len_dir0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].NumberOfNamedEntries = ((-2 * (next_i()%2)) + 1) * next_i();
        dir[_i0].NumberOfIdEntries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * root;
          struct TYPE_6__ * benchRet = find_first_id_entry(dir,root,want_dir);
          printf("%d\n", (*benchRet).NumberOfNamedEntries);
          printf("%d\n", (*benchRet).NumberOfIdEntries);
          free(dir);
        
        break;
    }
    // big-arr
    case 1:
    {
          int want_dir = 255;
          int _len_dir0 = 65025;
          struct TYPE_6__ * dir = (struct TYPE_6__ *) malloc(_len_dir0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].NumberOfNamedEntries = ((-2 * (next_i()%2)) + 1) * next_i();
        dir[_i0].NumberOfIdEntries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * root;
          struct TYPE_6__ * benchRet = find_first_id_entry(dir,root,want_dir);
          printf("%d\n", (*benchRet).NumberOfNamedEntries);
          printf("%d\n", (*benchRet).NumberOfIdEntries);
          free(dir);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int want_dir = 10;
          int _len_dir0 = 100;
          struct TYPE_6__ * dir = (struct TYPE_6__ *) malloc(_len_dir0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].NumberOfNamedEntries = ((-2 * (next_i()%2)) + 1) * next_i();
        dir[_i0].NumberOfIdEntries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * root;
          struct TYPE_6__ * benchRet = find_first_id_entry(dir,root,want_dir);
          printf("%d\n", (*benchRet).NumberOfNamedEntries);
          printf("%d\n", (*benchRet).NumberOfIdEntries);
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

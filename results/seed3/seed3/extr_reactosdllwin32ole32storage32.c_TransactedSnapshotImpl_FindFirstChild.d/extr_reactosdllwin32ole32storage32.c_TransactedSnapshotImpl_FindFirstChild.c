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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_3__* entries; } ;
typedef  TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_5__ {size_t leftChild; size_t rightChild; size_t dirRootEntry; } ;
struct TYPE_7__ {size_t parent; TYPE_1__ data; scalar_t__ read; } ;
typedef  TYPE_3__ TransactedDirEntry ;
typedef  size_t DirRef ;

/* Variables and functions */
 size_t DIRENTRY_NULL ; 

__attribute__((used)) static DirRef TransactedSnapshotImpl_FindFirstChild(
  TransactedSnapshotImpl* This, DirRef parent)
{
  DirRef cursor, prev;
  TransactedDirEntry *entry;

  cursor = parent;
  entry = &This->entries[cursor];
  while (entry->read)
  {
    if (entry->data.leftChild != DIRENTRY_NULL)
    {
      prev = cursor;
      cursor = entry->data.leftChild;
      entry = &This->entries[cursor];
      entry->parent = prev;
    }
    else if (entry->data.rightChild != DIRENTRY_NULL)
    {
      prev = cursor;
      cursor = entry->data.rightChild;
      entry = &This->entries[cursor];
      entry->parent = prev;
    }
    else if (entry->data.dirRootEntry != DIRENTRY_NULL)
    {
      prev = cursor;
      cursor = entry->data.dirRootEntry;
      entry = &This->entries[cursor];
      entry->parent = prev;
    }
    else
      break;
  }

  return cursor;
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
          unsigned long parent = 100;
          int _len_This0 = 1;
          struct TYPE_6__ * This = (struct TYPE_6__ *) malloc(_len_This0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__entries0 = 1;
          This[_i0].entries = (struct TYPE_7__ *) malloc(_len_This__i0__entries0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_This__i0__entries0; _j0++) {
            This[_i0].entries->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.leftChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.rightChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.dirRootEntry = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = TransactedSnapshotImpl_FindFirstChild(This,parent);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].entries);
          }
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long parent = 255;
          int _len_This0 = 65025;
          struct TYPE_6__ * This = (struct TYPE_6__ *) malloc(_len_This0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__entries0 = 1;
          This[_i0].entries = (struct TYPE_7__ *) malloc(_len_This__i0__entries0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_This__i0__entries0; _j0++) {
            This[_i0].entries->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.leftChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.rightChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.dirRootEntry = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = TransactedSnapshotImpl_FindFirstChild(This,parent);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].entries);
          }
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long parent = 10;
          int _len_This0 = 100;
          struct TYPE_6__ * This = (struct TYPE_6__ *) malloc(_len_This0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__entries0 = 1;
          This[_i0].entries = (struct TYPE_7__ *) malloc(_len_This__i0__entries0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_This__i0__entries0; _j0++) {
            This[_i0].entries->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.leftChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.rightChild = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->data.dirRootEntry = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = TransactedSnapshotImpl_FindFirstChild(This,parent);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].entries);
          }
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

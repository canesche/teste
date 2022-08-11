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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t _u8 ;
struct TYPE_4__ {TYPE_1__* ObjPool; } ;
struct TYPE_3__ {size_t NextIndex; } ;

/* Variables and functions */
 size_t MAX_CONCURRENT_ACTIONS ; 
 TYPE_2__* g_pCB ; 

void _SlRemoveFromList(_u8 *ListIndex, _u8 ItemIndex)
{
#ifndef SL_TINY_EXT  
	_u8 Idx;
#endif        
        
    if (MAX_CONCURRENT_ACTIONS == g_pCB->ObjPool[*ListIndex].NextIndex)
    {
        *ListIndex = MAX_CONCURRENT_ACTIONS;
    }
    /* As MAX_CONCURRENT_ACTIONS is equal to 1 in Tiny mode */
#ifndef SL_TINY_EXT
	/* need to remove the first item in the list and therefore update the global which holds this index */
	else if (*ListIndex == ItemIndex)
	{
		*ListIndex = g_pCB->ObjPool[ItemIndex].NextIndex;
	}
	else
	{
              Idx = *ListIndex;
      
              while(MAX_CONCURRENT_ACTIONS > Idx)
              {
                  /* remove from list */
                  if (g_pCB->ObjPool[Idx].NextIndex == ItemIndex)
                  {
                          g_pCB->ObjPool[Idx].NextIndex = g_pCB->ObjPool[ItemIndex].NextIndex;
                          break;
                  }

                  Idx = g_pCB->ObjPool[Idx].NextIndex;
              }
	}
#endif    
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
          unsigned long ItemIndex = 100;
          int _len_ListIndex0 = 1;
          unsigned long * ListIndex = (unsigned long *) malloc(_len_ListIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ListIndex0; _i0++) {
            ListIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _SlRemoveFromList(ListIndex,ItemIndex);
          free(ListIndex);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ItemIndex = 255;
          int _len_ListIndex0 = 65025;
          unsigned long * ListIndex = (unsigned long *) malloc(_len_ListIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ListIndex0; _i0++) {
            ListIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _SlRemoveFromList(ListIndex,ItemIndex);
          free(ListIndex);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ItemIndex = 10;
          int _len_ListIndex0 = 100;
          unsigned long * ListIndex = (unsigned long *) malloc(_len_ListIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ListIndex0; _i0++) {
            ListIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _SlRemoveFromList(ListIndex,ItemIndex);
          free(ListIndex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

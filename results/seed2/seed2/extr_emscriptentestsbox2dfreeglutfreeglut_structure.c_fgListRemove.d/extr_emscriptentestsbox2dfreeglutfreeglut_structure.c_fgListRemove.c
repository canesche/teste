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
struct TYPE_6__ {scalar_t__ Last; scalar_t__ First; } ;
struct TYPE_5__ {scalar_t__ Prev; scalar_t__ Next; } ;
typedef  TYPE_1__ SFG_Node ;
typedef  TYPE_2__ SFG_List ;

/* Variables and functions */

void fgListRemove(SFG_List *list, SFG_Node *node)
{
    if( node->Next )
        ( ( SFG_Node * )node->Next )->Prev = node->Prev;
    if( node->Prev )
        ( ( SFG_Node * )node->Prev )->Next = node->Next;
    if( ( ( SFG_Node * )list->First ) == node )
        list->First = node->Next;
    if( ( ( SFG_Node * )list->Last ) == node )
        list->Last = node->Prev;
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
          int _len_list0 = 1;
          struct TYPE_6__ * list = (struct TYPE_6__ *) malloc(_len_list0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].Last = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct TYPE_5__ * node = (struct TYPE_5__ *) malloc(_len_node0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].Prev = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].Next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fgListRemove(list,node);
          free(list);
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_list0 = 65025;
          struct TYPE_6__ * list = (struct TYPE_6__ *) malloc(_len_list0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].Last = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 65025;
          struct TYPE_5__ * node = (struct TYPE_5__ *) malloc(_len_node0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].Prev = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].Next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fgListRemove(list,node);
          free(list);
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_list0 = 100;
          struct TYPE_6__ * list = (struct TYPE_6__ *) malloc(_len_list0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].Last = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].First = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 100;
          struct TYPE_5__ * node = (struct TYPE_5__ *) malloc(_len_node0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].Prev = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].Next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fgListRemove(list,node);
          free(list);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

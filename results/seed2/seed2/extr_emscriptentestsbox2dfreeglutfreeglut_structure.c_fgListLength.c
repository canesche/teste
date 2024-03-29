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
struct TYPE_5__ {scalar_t__ First; } ;
struct TYPE_4__ {scalar_t__ Next; } ;
typedef  TYPE_1__ SFG_Node ;
typedef  TYPE_2__ SFG_List ;

/* Variables and functions */

int fgListLength(SFG_List *list)
{
    SFG_Node *node;
    int length = 0;

    for( node =( SFG_Node * )list->First;
         node;
         node = ( SFG_Node * )node->Next )
        ++length;

    return length;
}
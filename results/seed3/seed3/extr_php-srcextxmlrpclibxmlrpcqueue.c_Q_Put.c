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
struct TYPE_5__ {TYPE_1__* cursor; } ;
typedef  TYPE_2__ queue ;
struct TYPE_4__ {void* data; } ;

/* Variables and functions */
 int False_ ; 
 int True_ ; 

int Q_Put(queue *q, void *data)
{
   if(q && data) {
      if(q->cursor == NULL)
         return False_;

      q->cursor->data = data;
      return True_;
   }
   return False_;
}
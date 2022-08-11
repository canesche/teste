#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef  TYPE_1__ msg_queue_t ;

/* Variables and functions */

msg_queue_t * msg_dequeue(msg_queue_t **head){
  if(!head || !*head){
    return NULL;
  }
  msg_queue_t *node = *head;  // fetch head.
  *head = node->next; // update head.
  node->next = NULL;
  return node;
}
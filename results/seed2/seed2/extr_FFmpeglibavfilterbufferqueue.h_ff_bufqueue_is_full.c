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
struct FFBufQueue {scalar_t__ available; } ;

/* Variables and functions */
 scalar_t__ FF_BUFQUEUE_SIZE ; 

__attribute__((used)) static inline int ff_bufqueue_is_full(struct FFBufQueue *queue)
{
    return queue->available == FF_BUFQUEUE_SIZE;
}
#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int pollfd; scalar_t__ state; } ;
typedef  TYPE_1__ zbar_event_t ;

/* Variables and functions */

int _zbar_event_init (zbar_event_t *event)
{
    event->state = 0;
    event->pollfd = -1;
#ifdef HAVE_LIBPTHREAD
    pthread_cond_init(&event->cond, NULL);
#endif
    return(0);
}
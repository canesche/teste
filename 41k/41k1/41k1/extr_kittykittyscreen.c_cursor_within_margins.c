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
struct TYPE_5__ {scalar_t__ margin_top; scalar_t__ margin_bottom; TYPE_1__* cursor; } ;
struct TYPE_4__ {scalar_t__ y; } ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

__attribute__((used)) static inline bool
cursor_within_margins(Screen *self) {
    return self->margin_top <= self->cursor->y && self->cursor->y <= self->margin_bottom;
}
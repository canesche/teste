#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  filter; } ;
struct rotate_priv {TYPE_1__ sub; } ;
struct mp_filter_command {scalar_t__ type; int is_active; } ;
struct mp_filter {struct rotate_priv* priv; } ;

/* Variables and functions */
 scalar_t__ MP_FILTER_COMMAND_IS_ACTIVE ; 

__attribute__((used)) static bool rotate_command(struct mp_filter *f, struct mp_filter_command *cmd)
{
    struct rotate_priv *p = f->priv;

    if (cmd->type == MP_FILTER_COMMAND_IS_ACTIVE) {
        cmd->is_active = !!p->sub.filter;
        return true;
    }
    return false;
}
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
struct TYPE_3__ {int /*<<< orphan*/ * prompt_str; int /*<<< orphan*/ * prompt; int /*<<< orphan*/ * pager; } ;
typedef  TYPE_1__ zend_cli_readline_globals ;

/* Variables and functions */

__attribute__((used)) static void cli_readline_init_globals(zend_cli_readline_globals *rg)
{
	rg->pager = NULL;
	rg->prompt = NULL;
	rg->prompt_str = NULL;
}
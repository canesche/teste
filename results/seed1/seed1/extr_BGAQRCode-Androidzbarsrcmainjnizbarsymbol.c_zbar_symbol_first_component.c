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
struct TYPE_6__ {TYPE_1__* syms; } ;
typedef  TYPE_2__ zbar_symbol_t ;
struct TYPE_5__ {TYPE_2__ const* head; } ;

/* Variables and functions */

const zbar_symbol_t *zbar_symbol_first_component (const zbar_symbol_t *sym)
{
    return((sym && sym->syms) ? sym->syms->head : NULL);
}
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
typedef  int /*<<< orphan*/  SYS_STATUS ;
typedef  int /*<<< orphan*/  SYS_MODULE_OBJ ;

/* Variables and functions */
 int /*<<< orphan*/  SYS_STATUS_READY ; 

SYS_STATUS SYS_CONSOLE_Status ( SYS_MODULE_OBJ object )
{
    return SYS_STATUS_READY;
}
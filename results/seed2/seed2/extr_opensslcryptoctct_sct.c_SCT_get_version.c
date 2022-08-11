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
typedef  int /*<<< orphan*/  sct_version_t ;
struct TYPE_3__ {int /*<<< orphan*/  version; } ;
typedef  TYPE_1__ SCT ;

/* Variables and functions */

sct_version_t SCT_get_version(const SCT *sct)
{
    return sct->version;
}
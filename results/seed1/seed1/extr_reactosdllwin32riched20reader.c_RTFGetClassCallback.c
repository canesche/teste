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
struct TYPE_3__ {int /*<<< orphan*/ ** ccb; } ;
typedef  TYPE_1__ RTF_Info ;
typedef  int /*<<< orphan*/ * RTFFuncPtr ;

/* Variables and functions */
 int rtfMaxClass ; 

__attribute__((used)) static RTFFuncPtr RTFGetClassCallback(const RTF_Info *info, int class)
{
	if (class >= 0 && class < rtfMaxClass)
		return info->ccb[class];
	return NULL;
}
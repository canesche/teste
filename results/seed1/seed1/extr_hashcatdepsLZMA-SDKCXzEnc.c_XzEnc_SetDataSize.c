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
typedef  int /*<<< orphan*/  UInt64 ;
struct TYPE_2__ {int /*<<< orphan*/  expectedDataSize; } ;
typedef  scalar_t__ CXzEncHandle ;
typedef  TYPE_1__ CXzEnc ;

/* Variables and functions */

void XzEnc_SetDataSize(CXzEncHandle pp, UInt64 expectedDataSiize)
{
  CXzEnc *p = (CXzEnc *)pp;
  p->expectedDataSize = expectedDataSiize;
}
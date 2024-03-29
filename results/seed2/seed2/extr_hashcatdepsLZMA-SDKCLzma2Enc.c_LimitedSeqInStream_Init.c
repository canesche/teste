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
typedef  scalar_t__ UInt64 ;
struct TYPE_3__ {scalar_t__ finished; scalar_t__ processed; scalar_t__ limit; } ;
typedef  scalar_t__ Int64 ;
typedef  TYPE_1__ CLimitedSeqInStream ;

/* Variables and functions */

__attribute__((used)) static void LimitedSeqInStream_Init(CLimitedSeqInStream *p)
{
  p->limit = (UInt64)(Int64)-1;
  p->processed = 0;
  p->finished = 0;
}
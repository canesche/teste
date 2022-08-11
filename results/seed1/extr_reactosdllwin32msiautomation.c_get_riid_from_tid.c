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
typedef  size_t tid_t ;
struct TYPE_2__ {int /*<<< orphan*/  const* riid; } ;
typedef  int /*<<< orphan*/  IID ;

/* Variables and functions */
 TYPE_1__* tid_ids ; 

__attribute__((used)) static const IID *get_riid_from_tid(tid_t tid)
{
    return tid_ids[tid].riid;
}
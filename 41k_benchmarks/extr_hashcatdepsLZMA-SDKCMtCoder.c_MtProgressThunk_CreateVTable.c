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
struct TYPE_4__ {int /*<<< orphan*/  Progress; } ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef  TYPE_2__ CMtProgressThunk ;

/* Variables and functions */
 int /*<<< orphan*/  MtProgressThunk_Progress ; 

void MtProgressThunk_CreateVTable(CMtProgressThunk *p)
{
  p->vt.Progress = MtProgressThunk_Progress;
}
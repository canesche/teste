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
struct TYPE_4__ {int /*<<< orphan*/  Seek; int /*<<< orphan*/  Read; int /*<<< orphan*/  Skip; int /*<<< orphan*/  Look; } ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef  TYPE_2__ CLookToRead2 ;

/* Variables and functions */
 int /*<<< orphan*/  LookToRead2_Look_Exact ; 
 int /*<<< orphan*/  LookToRead2_Look_Lookahead ; 
 int /*<<< orphan*/  LookToRead2_Read ; 
 int /*<<< orphan*/  LookToRead2_Seek ; 
 int /*<<< orphan*/  LookToRead2_Skip ; 

void LookToRead2_CreateVTable(CLookToRead2 *p, int lookahead)
{
  p->vt.Look = lookahead ?
      LookToRead2_Look_Lookahead :
      LookToRead2_Look_Exact;
  p->vt.Skip = LookToRead2_Skip;
  p->vt.Read = LookToRead2_Read;
  p->vt.Seek = LookToRead2_Seek;
}
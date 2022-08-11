#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_1__* metrics; } ;
struct TYPE_3__ {int visitors; } ;
typedef  TYPE_2__ GHolderItem ;

/* Variables and functions */

__attribute__((used)) static int
cmp_vis_asc (const void *a, const void *b)
{
  const GHolderItem *ia = a;
  const GHolderItem *ib = b;

  int va = ia->metrics->visitors;
  int vb = ib->metrics->visitors;

  return (va > vb) - (va < vb);
}
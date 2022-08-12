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
struct TYPE_3__ {int range; int cacheSize; int /*<<< orphan*/  res; scalar_t__ processed; int /*<<< orphan*/  bufBase; int /*<<< orphan*/  buf; scalar_t__ cache; scalar_t__ low; } ;
typedef  TYPE_1__ CRangeEnc ;

/* Variables and functions */
 int /*<<< orphan*/  SZ_OK ; 

__attribute__((used)) static void RangeEnc_Init(CRangeEnc *p)
{
  /* Stream.Init(); */
  p->low = 0;
  p->range = 0xFFFFFFFF;
  p->cacheSize = 1;
  p->cache = 0;

  p->buf = p->bufBase;

  p->processed = 0;
  p->res = SZ_OK;
}
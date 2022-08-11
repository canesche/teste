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
typedef  int /*<<< orphan*/  ut32 ;
struct TYPE_4__ {int /*<<< orphan*/  value_len; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef  TYPE_2__ SdbKv ;

/* Variables and functions */

__attribute__((used)) static inline ut32 sdbkv_value_len(const SdbKv *kv) {
	return kv->base.value_len;
}
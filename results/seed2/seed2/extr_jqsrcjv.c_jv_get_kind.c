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
typedef  int jv_kind ;
struct TYPE_3__ {int kind_flags; } ;
typedef  TYPE_1__ jv ;

/* Variables and functions */
 int KIND_MASK ; 

jv_kind jv_get_kind(jv x) {
  return x.kind_flags & KIND_MASK;
}
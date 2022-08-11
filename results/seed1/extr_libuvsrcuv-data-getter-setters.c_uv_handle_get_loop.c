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
typedef  int /*<<< orphan*/  uv_loop_t ;
struct TYPE_3__ {int /*<<< orphan*/ * loop; } ;
typedef  TYPE_1__ uv_handle_t ;

/* Variables and functions */

uv_loop_t* uv_handle_get_loop(const uv_handle_t* handle) {
  return handle->loop;
}
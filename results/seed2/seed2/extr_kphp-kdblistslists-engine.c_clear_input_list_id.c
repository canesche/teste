#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  scalar_t__ input_list_id_t ;

/* Variables and functions */

__attribute__((used)) static inline void clear_input_list_id (input_list_id_t *p) {
#ifdef LISTS_Z
  (*p)[0] = -1;
  (*p)[1] = -1;
#else
  *p = 0;
#endif
}
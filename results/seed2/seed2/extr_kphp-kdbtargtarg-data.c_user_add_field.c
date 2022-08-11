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

/* Variables and functions */
 int /*<<< orphan*/  add_user_word (int,int /*<<< orphan*/ ) ; 
 int /*<<< orphan*/  field_value_hash (int,int) ; 

inline void user_add_field (int uid, int field_id, int new_value) {
  if (new_value != 0) {
    add_user_word (uid, field_value_hash (field_id, new_value));
  }
}
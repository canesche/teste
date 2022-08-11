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
typedef  int /*<<< orphan*/  grub_off_t ;
typedef  TYPE_1__* grub_file_t ;
struct TYPE_3__ {int /*<<< orphan*/  size; } ;

/* Variables and functions */

__attribute__((used)) static inline grub_off_t
grub_file_size (const grub_file_t file)
{
  return file->size;
}
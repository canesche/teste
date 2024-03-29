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
struct btrfs_fs_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int btrfs_is_testing(struct btrfs_fs_info *fs_info)
{
#ifdef CONFIG_BTRFS_FS_RUN_SANITY_TESTS
	if (unlikely(test_bit(BTRFS_FS_STATE_DUMMY_FS_INFO,
			      &fs_info->fs_state)))
		return 1;
#endif
	return 0;
}
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
 long long idx_metafile_pos ; 
 long long idx_rptr ; 
 long long idx_wptr ; 

__attribute__((used)) static inline long long idx_cur_metafile_pos (void) {
  return idx_metafile_pos - (idx_wptr - idx_rptr);
}
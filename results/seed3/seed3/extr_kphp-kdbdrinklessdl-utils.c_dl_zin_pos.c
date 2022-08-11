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
typedef  scalar_t__ off_t ;
struct TYPE_3__ {size_t id; scalar_t__ left; } ;
typedef  TYPE_1__ dl_zin ;

/* Variables and functions */
 scalar_t__* fpos ; 

off_t dl_zin_pos (dl_zin *f) {
  return fpos[f->id] - f->left;
}
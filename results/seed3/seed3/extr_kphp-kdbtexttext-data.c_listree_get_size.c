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
struct TYPE_5__ {int N; TYPE_1__* root; } ;
typedef  TYPE_2__ listree_t ;
struct TYPE_4__ {int delta; } ;

/* Variables and functions */

inline int listree_get_size (listree_t *U) {
  return U->N + U->root->delta;
}
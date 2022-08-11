#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef  TYPE_1__ privacy_t ;
typedef  scalar_t__ privacy_key_t ;

/* Variables and functions */

__attribute__((used)) static privacy_t *privacy_lookup (privacy_t *T, privacy_key_t x) {
  while (T && x != T->x) {
    T = (x < T->x) ? T->left : T->right;
  }
  return T;
}
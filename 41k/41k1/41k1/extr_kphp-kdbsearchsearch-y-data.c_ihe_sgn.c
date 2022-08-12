#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ word; } ;
typedef  TYPE_1__ tree_t ;
struct TYPE_6__ {scalar_t__ word; } ;
typedef  TYPE_2__ iheap_en_t ;

/* Variables and functions */

__attribute__((used)) static inline int ihe_sgn (tree_t *T, iheap_en_t *A) {
  return T->word < A->word ? -1 : (T->word > A->word ? 1 : 0);
}
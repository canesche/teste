#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int /*<<< orphan*/  length; } ;
struct rpcrdma_regbuf {TYPE_1__ rg_iov; } ;

/* Variables and functions */

__attribute__((used)) static inline u32
rdmab_length(struct rpcrdma_regbuf *rb)
{
	return rb->rg_iov.length;
}
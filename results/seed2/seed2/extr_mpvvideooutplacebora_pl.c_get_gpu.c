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
struct ra_pl {struct pl_gpu const* gpu; } ;
struct ra {struct ra_pl* priv; } ;
struct pl_gpu {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline const struct pl_gpu *get_gpu(const struct ra *ra)
{
    struct ra_pl *p = ra->priv;
    return p->gpu;
}
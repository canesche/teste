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
struct dma_buf {int dummy; } ;

/* Variables and functions */

void drm_gem_dmabuf_kunmap(struct dma_buf *dma_buf, unsigned long page_num,
			   void *addr)
{

}
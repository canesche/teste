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
struct device {int dummy; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 scalar_t__ DIRECT_MAPPING_ERROR ; 

int dma_direct_mapping_error(struct device *dev, dma_addr_t dma_addr)
{
	return dma_addr == DIRECT_MAPPING_ERROR;
}
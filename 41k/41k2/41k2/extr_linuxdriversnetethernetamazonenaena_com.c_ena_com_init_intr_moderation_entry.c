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
struct ena_intr_moder_entry {int intr_moder_interval; scalar_t__ bytes_per_interval; int /*<<< orphan*/  pkts_per_interval; } ;
struct ena_com_dev {int intr_delay_resolution; struct ena_intr_moder_entry* intr_moder_tbl; } ;
typedef  enum ena_intr_moder_level { ____Placeholder_ena_intr_moder_level } ena_intr_moder_level ;

/* Variables and functions */
 scalar_t__ ENA_INTR_BYTE_COUNT_NOT_SUPPORTED ; 
 int ENA_INTR_MAX_NUM_OF_LEVELS ; 

void ena_com_init_intr_moderation_entry(struct ena_com_dev *ena_dev,
					enum ena_intr_moder_level level,
					struct ena_intr_moder_entry *entry)
{
	struct ena_intr_moder_entry *intr_moder_tbl = ena_dev->intr_moder_tbl;

	if (level >= ENA_INTR_MAX_NUM_OF_LEVELS)
		return;

	intr_moder_tbl[level].intr_moder_interval = entry->intr_moder_interval;
	if (ena_dev->intr_delay_resolution)
		intr_moder_tbl[level].intr_moder_interval /=
			ena_dev->intr_delay_resolution;
	intr_moder_tbl[level].pkts_per_interval = entry->pkts_per_interval;

	/* use hardcoded value until ethtool supports bytecount parameter */
	if (entry->bytes_per_interval != ENA_INTR_BYTE_COUNT_NOT_SUPPORTED)
		intr_moder_tbl[level].bytes_per_interval = entry->bytes_per_interval;
}
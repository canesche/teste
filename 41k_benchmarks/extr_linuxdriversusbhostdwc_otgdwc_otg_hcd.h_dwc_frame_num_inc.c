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
typedef  int uint16_t ;

/* Variables and functions */
 int DWC_HFNUM_MAX_FRNUM ; 

__attribute__((used)) static inline uint16_t dwc_frame_num_inc(uint16_t frame, uint16_t inc)
{
	return (frame + inc) & DWC_HFNUM_MAX_FRNUM;
}
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
typedef  void* UINT8 ;
typedef  int UINT16 ;

/* Variables and functions */

UINT8* UINT16_TO_STREAM_f (UINT8 *p, UINT16 u16)
{
	*(p)++ = (UINT8)(u16);
	*(p)++ = (UINT8)((u16) >> 8);
	return p;
}
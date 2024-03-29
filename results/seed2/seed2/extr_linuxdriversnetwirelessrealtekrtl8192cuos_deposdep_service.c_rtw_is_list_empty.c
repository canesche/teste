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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  _list ;

/* Variables and functions */

u32	rtw_is_list_empty(_list *phead)
{

#ifdef PLATFORM_LINUX

	if (list_empty(phead))
		return _TRUE;
	else
		return _FALSE;

#endif
#ifdef PLATFORM_FREEBSD

	if (phead->next == phead)
		return _TRUE;
	else
		return _FALSE;

#endif


#ifdef PLATFORM_WINDOWS

	if (IsListEmpty(phead))
		return _TRUE;
	else
		return _FALSE;

#endif

	
}
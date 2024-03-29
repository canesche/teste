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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

inline u8* _rtw_vmalloc(u32 sz)
{
	u8 	*pbuf;
#ifdef PLATFORM_LINUX	
	pbuf = vmalloc(sz);
#endif	
#ifdef PLATFORM_FREEBSD
	pbuf = malloc(sz,M_DEVBUF,M_NOWAIT);	
#endif	
	
#ifdef PLATFORM_WINDOWS
	NdisAllocateMemoryWithTag(&pbuf,sz, RT_TAG);	
#endif

#ifdef DBG_MEMORY_LEAK
#ifdef PLATFORM_LINUX
	if ( pbuf != NULL) {
		atomic_inc(&_malloc_cnt);
		atomic_add(sz, &_malloc_size);
	}
#endif
#endif /* DBG_MEMORY_LEAK */

	return pbuf;	
}
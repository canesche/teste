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
typedef  int /*<<< orphan*/  JAVA_OBJECT ;
typedef  int JAVA_INT ;

/* Variables and functions */

JAVA_INT org_apache_harmony_luni_platform_OSMemory_getPointerSizeImpl__()
{
    //XMLVM_BEGIN_NATIVE[org_apache_harmony_luni_platform_OSMemory_getPointerSizeImpl__]
    return sizeof(JAVA_OBJECT);
    //XMLVM_END_NATIVE
}
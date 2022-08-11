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
typedef  int DWORD ;
typedef  int BYTE ;
typedef  int BOOL ;

/* Variables and functions */

__attribute__((used)) static BOOL application_java_filter(const BYTE *b, DWORD size)
{
    return size > 4 && b[0] == 0xca && b[1] == 0xfe && b[2] == 0xba && b[3] == 0xbe;
}
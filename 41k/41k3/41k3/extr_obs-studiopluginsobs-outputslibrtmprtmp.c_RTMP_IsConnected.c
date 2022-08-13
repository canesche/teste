#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ sb_socket; } ;
struct TYPE_5__ {TYPE_1__ m_sb; } ;
typedef  TYPE_2__ RTMP ;

/* Variables and functions */
 scalar_t__ INVALID_SOCKET ; 

int
RTMP_IsConnected(RTMP *r)
{
    return r->m_sb.sb_socket != INVALID_SOCKET;
}
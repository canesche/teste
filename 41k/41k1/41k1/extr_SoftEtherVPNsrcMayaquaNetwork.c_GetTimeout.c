#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  UINT ;
struct TYPE_3__ {scalar_t__ Type; int /*<<< orphan*/  TimeOut; } ;
typedef  TYPE_1__ SOCK ;

/* Variables and functions */
 int /*<<< orphan*/  INFINITE ; 
 scalar_t__ SOCK_INPROC ; 
 scalar_t__ SOCK_TCP ; 

UINT GetTimeout(SOCK *sock)
{
	// Validate arguments
	if (sock == NULL)
	{
		return INFINITE;
	}
	if (sock->Type != SOCK_TCP && sock->Type != SOCK_INPROC)
	{
		return INFINITE;
	}

	return sock->TimeOut;
}
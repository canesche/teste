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
typedef  scalar_t__ u_int ;

/* Variables and functions */
 char const** status_prompt_hlist ; 
 scalar_t__ status_prompt_hsize ; 

__attribute__((used)) static const char *
status_prompt_down_history(u_int *idx)
{
	if (status_prompt_hsize == 0 || *idx == 0)
		return ("");
	(*idx)--;
	if (*idx == 0)
		return ("");
	return (status_prompt_hlist[status_prompt_hsize - *idx]);
}
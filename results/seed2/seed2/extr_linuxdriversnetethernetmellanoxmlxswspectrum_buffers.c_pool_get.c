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
typedef  int u8 ;
typedef  int u16 ;

/* Variables and functions */
 int MLXSW_SP_SB_POOL_COUNT ; 

__attribute__((used)) static u8 pool_get(u16 pool_index)
{
	return pool_index % MLXSW_SP_SB_POOL_COUNT;
}
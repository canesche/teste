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
typedef  int /*<<< orphan*/  SYS_MODULE_INDEX ;
typedef  int /*<<< orphan*/  DRV_IO_INTENT ;
typedef  int /*<<< orphan*/  DRV_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  DRV_SPI_INDEX_0 ; 

DRV_HANDLE DRV_SPI0_Open ( const SYS_MODULE_INDEX index, const DRV_IO_INTENT intent )
{
    return (DRV_HANDLE)DRV_SPI_INDEX_0;
}